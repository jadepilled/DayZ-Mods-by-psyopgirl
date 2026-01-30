class MoneyYen : Inventory_Base
{
	override string GetQuantityText()
	{
		return GetQuantity().ToString(); // Display current quantity only, ignoring max
	}
};
