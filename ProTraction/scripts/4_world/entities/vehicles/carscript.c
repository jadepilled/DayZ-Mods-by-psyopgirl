modded class CarScript
{
	// Based on Scripts/4_world/entities/vehicles/carscript.c : EOnPostSimulate()
	protected const float PROTRACTION_EXTRA_GRAVITY_MULTIPLIER = 0.3;
	protected const float PROTRACTION_LATERAL_DAMPING = 0.18;
	protected const float PROTRACTION_YAW_DAMPING = 0.12;
	protected const float PROTRACTION_SPEED_FOR_FULL_DAMPING = 12.0;

	override void EOnPostSimulate(IEntity other, float timeSlice)
	{
		super.EOnPostSimulate(other, timeSlice);

		if (!IsServerOrOwner())
		{
			return;
		}

		if (!dBodyIsDynamic(this))
		{
			return;
		}

		bool hasContact = false;
		int wheelCount = WheelCount();
		for (int wheelIdx = 0; wheelIdx < wheelCount; wheelIdx++)
		{
			if (WheelHasContact(wheelIdx))
			{
				hasContact = true;
				break;
			}
		}

		if (!hasContact)
		{
			return;
		}

		float mass = dBodyGetMass(this);
		if (mass <= 0)
		{
			return;
		}

		GenericWorldEntity worldEntity = GetGame().GetWorldEntity();
		if (!worldEntity)
		{
			return;
		}

		vector gravity = dGetGravity(worldEntity);
		if (gravity == "0 0 0")
		{
			return;
		}

		dBodyApplyForce(this, gravity * mass * PROTRACTION_EXTRA_GRAVITY_MULTIPLIER);

		vector transform[3];
		transform[2] = GetDirection();
		transform[1] = GetDirectionUp();
		transform[0] = transform[2] * transform[1];

		vector velocity = GetVelocity(this);
		vector localVelocity = velocity.InvMultiply3(transform);
		float forwardSpeed = Math.AbsFloat(localVelocity[2]);
		float lateralScale = Math.Clamp(forwardSpeed / PROTRACTION_SPEED_FOR_FULL_DAMPING, 0, 1);
		float lateralForce = -localVelocity[0] * mass * PROTRACTION_LATERAL_DAMPING * lateralScale;

		if (Math.AbsFloat(lateralForce) > 0)
		{
			vector correctionWorld = Vector(lateralForce, 0, 0).Multiply3(transform);
			dBodyApplyForce(this, correctionWorld);
		}

		vector angularVelocity = dBodyGetAngularVelocity(this);
		float yaw = angularVelocity[1];
		if (Math.AbsFloat(yaw) > 0)
		{
			vector yawTorque = transform[1] * (-yaw * mass * PROTRACTION_YAW_DAMPING);
			dBodyApplyTorque(this, yawTorque);
		}
	}
}
