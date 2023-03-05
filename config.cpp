class CfgPatches
{
	class armband_stuecki
	{
		units[] =
		{
			"Armband_AT"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Characters",
			"DZ_Data",
			"DZ_Weapons_Melee",
			"DZ_Gear_Medical"
		};
	};
};
class CfgMods
{
	class ARMBAND_STUECKI
	{
		dir = "";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "stuecki";
		credits = "";
		author = "Stuecki";
		authorID = "Stuecki";
		version = "1.0";
		extra = 0;
		type = "mod";
	};
};
class CfgVehicles
{
	class Armband_ColorBase;
	class Armband_AT : Armband_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.94999999;
		color = "AT";
		itemSize[] = { 1,1 };
		itemsCargoSize[] = { 10,100 };
		quickBarBonus = 1;
		varWetMax = 1;
		heatIsolation = 0.60000002;
		attachments[] =
		{
			"MeleeSlot",
			"ScrewdriverSlot",
			"HatchetSlot",
			"PetrolLighterSlot",
			"CompassSlot",
			"CanOpenerSlot"
		};
		hiddenSelections[] =
		{
			"camoGround",
			"camoFemale_big_a",
			"camoFemale_big_b",
			"camoFemale_small_a",
			"camoFemale_small_b",
			"camoMale_big_a",
			"camoMale_big_b",
			"camoMale_small_a",
			"camoMale_small_b"
		};
		hiddenSelectionsTextures[] =
		{
			"\stuecki_armbands\data\AT_co.paa",
			"\stuecki_armbands\data\AT_co.paa",
			"\stuecki_armbands\data\AT_co.paa",
			"\stuecki_armbands\data\AT_co.paa",
			"\stuecki_armbands\data\AT_co.paa",
			"\stuecki_armbands\data\AT_co.paa",
			"\stuecki_armbands\data\AT_co.paa",
			"\stuecki_armbands\data\AT_co.paa",
			"\stuecki_armbands\data\AT_co.paa"
		};

	}
};
class CfgMagazines
{
	class Inventory_Base;
	class CanOpener : Inventory_Base
	{
		inventorySlot[] +=
		{
			"CanOpenerSlot"
		};
	};
	class Screwdriver : Inventory_Base
	{
		inventorySlot[] +=
		{
			"ScrewdriverSlot"
		};
	};
	class PetrolLighter : Inventory_Base
	{
		inventorySlot[] +=
		{
			"PetrolLighterSlot"
		};
	};
	class Matchbox : Inventory_Base
	{
		inventorySlot[] +=
		{
			"PetrolLighterSlot"
		};
	};
	class ItemCompass;
	class Compass : ItemCompass
	{
		inventorySlot[] +=
		{
			"CompassSlot"
		};
	};
	class Hatchet : Inventory_Base
	{
		inventorySlot[] +=
		{
			"HatchetSlot"
		};
	};
};
class CfgSlots
{
	class CanOpener_Slot
	{
		name = "CanOpener";
		displayName = "CanOpener";
		ghostIcon = "missing";
	};
	class Screwdriver_Slot
	{
		name = "Screwdriver";
		displayName = "Screwdriver";
		ghostIcon = "missing";
	};
	class PetrolLighter_Slot
	{
		name = "PetrolLighter";
		displayName = "PetrolLighter";
		ghostIcon = "missing";
	};
	class Compass_Slot
	{
		name = "Compass";
		displayName = "Compass";
		ghostIcon = "missing";
	};
	class Hatchet_Slot
	{
		name = "Hatchet";
		displayName = "Hatchet";
		ghostIcon = "missing";
	};
}
