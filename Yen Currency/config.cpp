//        ALL CREDIT TO ORIGINAL MOD CREATOR DESIGNFUL. THIS IS JUST A RETEX      ////////////////////////////////////////////////////////////////////////////////////  
//                ____ ____ ____ ____ ___ ____ ___     ___  _   _                 //  
//                |    |__/ |___ |__|  |  |___ |  \    |__]  \_/                  //
//                |___ |  \ |___ |  |  |  |___ |__/    |__]   |                   //
//                                                                                //
//                                                                                //
//     ██▓███    ██████ ▓██   ██▓ ▒█████   ██▓███    ▄████  ██▓ ██▀███   ██▓      //
//   ▓██░  ██▒▒██    ▒  ▒██  ██▒▒██▒  ██▒▓██░  ██▒ ██▒ ▀█▒▓██▒▓██ ▒ ██▒▓██▒       //
//   ▓██░ ██▓▒░ ▓██▄     ▒██ ██░▒██░  ██▒▓██░ ██▓▒▒██░▄▄▄░▒██▒▓██ ░▄█ ▒▒██░       //
//   ▒██▄█▓▒ ▒  ▒   ██▒  ░ ▐██▓░▒██   ██░▒██▄█▓▒ ▒░▓█  ██▓░██░▒██▀▀█▄  ▒██░       //
//   ▒██▒ ░  ░▒██████▒▒  ░ ██▒▓░░ ████▓▒░▒██▒ ░  ░░▒▓███▀▒░██░░██▓ ▒██▒░██████▒   //
//   ▒▓▒░ ░  ░▒ ▒▓▒ ▒ ░   ██▒▒▒ ░ ▒░▒░▒░ ▒▓▒░ ░  ░ ░▒   ▒ ░▓  ░ ▒▓ ░▒▓░░ ▒░▓  ░   //
//   ░▒ ░     ░ ░▒  ░ ░ ▓██ ░▒░   ░ ▒ ▒░ ░▒ ░       ░   ░  ▒ ░  ░▒ ░ ▒░░ ░ ▒  ░   //
//   ░░       ░  ░  ░   ▒ ▒ ░░  ░ ░ ░ ▒  ░░       ░ ░   ░  ▒ ░  ░░   ░   ░ ░      //
//                  ░   ░ ░         ░ ░                 ░  ░     ░         ░  ░   //
//                      ░ ░                                                       //
//                                                                                //
//                                 ____ ____ ____                                 //
//                                 |___ |  | |__/                                 //
//                                 |    |__| |  \                                 //
//                                                                                //           //                                                                                //
//    ██▓███    ██████ ▓██   ██▓ ▒█████   ██▓███    ██████        ▄████   ▄████   //
//   ▓██░  ██▒▒██    ▒  ▒██  ██▒▒██▒  ██▒▓██░  ██▒▒██    ▒       ██▒ ▀█▒ ██▒ ▀█▒  //
//   ▓██░ ██▓▒░ ▓██▄     ▒██ ██░▒██░  ██▒▓██░ ██▓▒░ ▓██▄        ▒██░▄▄▄░▒██░▄▄▄░  //
//   ▒██▄█▓▒ ▒  ▒   ██▒  ░ ▐██▓░▒██   ██░▒██▄█▓▒ ▒  ▒   ██▒     ░▓█  ██▓░▓█  ██▓  //
//   ▒██▒ ░  ░▒██████▒▒  ░ ██▒▓░░ ████▓▒░▒██▒ ░  ░▒██████▒▒ ██▓ ░▒▓███▀▒░▒▓███▀▒  //
//   ▒▓▒░ ░  ░▒ ▒▓▒ ▒ ░   ██▒▒▒ ░ ▒░▒░▒░ ▒▓▒░ ░  ░▒ ▒▓▒ ▒ ░ ▒▓▒  ░▒   ▒  ░▒   ▒   //
//   ░▒ ░     ░ ░▒  ░ ░ ▓██ ░▒░   ░ ▒ ▒░ ░▒ ░     ░ ░▒  ░ ░ ░▒    ░   ░   ░   ░   //
//   ░░       ░  ░  ░   ▒ ▒ ░░  ░ ░ ░ ▒  ░░       ░  ░  ░   ░   ░ ░   ░ ░ ░   ░   //
//                  ░   ░ ░         ░ ░                 ░    ░        ░       ░   //
//                      ░ ░                                  ░                    //
//                                                                                //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////
//        ALL CREDIT TO ORIGINAL MOD CREATOR DESIGNFUL. THIS IS JUST A RETEX      //

#define _ARMA_

class CfgPatches
{
	class PsyOpsMoney
	{
		units[] = {"MoneyYen"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class MoneyYen: Inventory_Base
	{
		scope = 2;
		displayName = "Yen";
		descriptionShort = "Standard international currency of Japan since 1871.";
		model = "\Money\money.p3d";
		debug_ItemCategory=7;
		itemSize[] = {1,2};
		rotationFlags = 17;
		weight = 0;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 999999;
		destroyOnEmpty = 1;
		absorbency = 1;
		hiddenSelections[]=
		{
		"Bundle",
		"Rubber",
		"camo"
		};
		hiddenSelectionsTextures[]=
		{
		"\Money\data\MoneyYen10000_co.paa",
		"\Money\data\MoneyYen10000_co.paa",
		"\Money\data\MoneyYen10000_co.paa"
		};
		canBeSplit=1;
		stackedUnit="pills";
		quantityBar=0;
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
		};
	};
	class MoneyYen1: MoneyYen
	{
		scope = 2;
		displayName = "1 Yen";
		descriptionShort = "Standard international currency of Japan since 1871.";
		hiddenSelectionsTextures[]=
		{
		"\Money\data\MoneyYen1_co.paa", "\Money\data\MoneyYen1_co.paa", "\Money\data\MoneyYen1_co.paa"
		};
		varQuantityMax = 999;
	};
		class MoneyYen5: MoneyYen
	{
		scope = 2;
		displayName = "5 Yen";
		descriptionShort = "Standard international currency of Japan since 1871.";
		hiddenSelections[]=
		{
		"Bundle",
		"Rubber",
		"camo"
		};
		hiddenSelectionsTextures[]=
		{
		"\Money\data\MoneyYen5_co.paa", "\Money\data\MoneyYen5_co.paa", "\Money\data\MoneyYen5_co.paa"
		};
		varQuantityMax = 999;
	};
		class MoneyYen10: MoneyYen
	{
		scope = 2;
		displayName = "10 Yen";
		descriptionShort = "Standard international currency of Japan since 1871.";
		hiddenSelections[]=
		{
		"Bundle",
		"Rubber",
		"camo"
		};
		hiddenSelectionsTextures[]=
		{
		"\Money\data\MoneyYen10_co.paa", "\Money\data\MoneyYen10_co.paa", "\Money\data\MoneyYen10_co.paa"
		};
		varQuantityMax = 999;
	};
		class MoneyYen50: MoneyYen
	{
		scope = 2;
		displayName = "50 Yen";
		descriptionShort = "Standard international currency of Japan since 1871.";
		hiddenSelections[]=
		{
		"Bundle",
		"Rubber",
		"camo"
		};
		hiddenSelectionsTextures[]=
		{
		"\Money\data\MoneyYen50_co.paa", "\Money\data\MoneyYen50_co.paa", "\Money\data\MoneyYen50_co.paa"
		};
		varQuantityMax = 999;
	};
		class MoneyYen100: MoneyYen
	{
		scope = 2;
		displayName = "100 Yen";
		descriptionShort = "Standard international currency of Japan since 1871.";
		hiddenSelections[]=
		{
		"Bundle",
		"Rubber",
		"camo"
		};
		hiddenSelectionsTextures[]=
		{
		"\Money\data\MoneyYen100_co.paa", "\Money\data\MoneyYen100_co.paa", "\Money\data\MoneyYen100_co.paa"
		};
		varQuantityMax = 999;
	};
		class MoneyYen500: MoneyYen
	{
		scope = 2;
		displayName = "500 Yen";
		descriptionShort = "Standard international currency of Japan since 1871.";
		hiddenSelections[]=
		{
		"Bundle",
		"Rubber",
		"camo"
		};
		hiddenSelectionsTextures[]=
		{
		"\Money\data\MoneyYen500_co.paa", "\Money\data\MoneyYen500_co.paa", "\Money\data\MoneyYen500_co.paa"
		};
		varQuantityMax = 999;
	};
		class MoneyYen1000: MoneyYen
	{
		scope = 2;
		displayName = "1,000 Yen";
		descriptionShort = "Standard international currency of Japan since 1871.";
		hiddenSelections[]=
		{
		"Bundle",
		"Rubber",
		"camo"
		};
		hiddenSelectionsTextures[]=
		{
		"\Money\data\MoneyYen1000_co.paa", "\Money\data\MoneyYen1000_co.paa", "\Money\data\MoneyYen1000_co.paa"
		};
		varQuantityMax = 999;
	};
		class MoneyYen2000: MoneyYen
	{
		scope = 2;
		displayName = "2,000 Yen";
		descriptionShort = "Standard international currency of Japan since 1871.";
		hiddenSelections[]=
		{
		"Bundle",
		"Rubber",
		"camo"
		};
		hiddenSelectionsTextures[]=
		{
		"\Money\data\MoneyYen2000_co.paa", "\Money\data\MoneyYen2000_co.paa", "\Money\data\MoneyYen2000_co.paa"
		};
		varQuantityMax = 999;
	};
		class MoneyYen5000: MoneyYen
	{
		scope = 2;
		displayName = "5,000 Yen";
		descriptionShort = "Standard international currency of Japan since 1871.";
		hiddenSelections[]=
		{
		"Bundle",
		"Rubber",
		"camo"
		};
		hiddenSelectionsTextures[]=
		{
		"\Money\data\MoneyYen5000_co.paa", "\Money\data\MoneyYen5000_co.paa", "\Money\data\MoneyYen5000_co.paa"
		};
		varQuantityMax = 999;
	};
			class MoneyYen10000: MoneyYen
	{
		scope = 2;
		displayName = "10,000 Yen";
		descriptionShort = "Standard international currency of Japan since 1871.";
		hiddenSelections[]=
		{
		"Bundle",
		"Rubber",
		"camo"
		};
		hiddenSelectionsTextures[]=
		{
		"\Money\data\MoneyYen10000_co.paa",
		"\Money\data\MoneyYen10000_co.paa",
		"\Money\data\MoneyYen10000_co.paa"
		};
		varQuantityMax = 999;
	};
};
