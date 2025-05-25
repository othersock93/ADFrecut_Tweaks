///WEAPONS FOR TAG UDPATE
///To be packed & released on only on dev branch prior to the release of TAG update. 
class CfgPatches
{
	class ADF_Weapons3
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ADF_Core","ADF_Weapons","ADF_Weapons2"};
		fileName = "ADF_Weapons3.pbo";
	};
};


class ItemCore;
class InventoryItem_Base_F;
class InventoryOpticsItem_Base_F;
class asdg_SlotInfo;
class asdg_OpticRail;
class compatibleItems;

class asdg_OpticRail1913: asdg_OpticRail {
class compatibleItems {

};
};

class asdg_OpticRail1913_long: asdg_OpticRail {
class compatibleItems: compatibleItems {

};
};

class asdg_OpticRail1913_short: asdg_OpticRail1913 {
class compatibleItems: compatibleItems {

};
};

class CfgWeapons
{
#include "GBRS\GBRS.hpp"
};