class CfgPatches
{
	class adfu_tbas
	{
		name="ADF Re-Cut TBAS";
		author="Exer & Bones";
		requiredAddons[]=
        	{
			"A3_Characters_F_BLUFOR",
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_characters_f_exp"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class Man;
	class ContainerSupply;
	class B_Soldier_F;
	class B_diver_F;
	class ADFU_Hydration1_Tan_1_Backpanel: ReammoBox
	{
		scope = 2;
		author="Exer";
		class TransportMagazines{};
		class TransportWeapons{};
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = "Backpacks";
		allowedSlots[] = {901};
		model = "adfu_tbas\Hydpack1.p3d";
		displayName = "ADF TBAS Hydration Pack V1 (Tan)";
		icon = "iconBackpack";
		hiddenSelections[]={"acc1","acc2"};
		hiddenSelectionsTextures[]={""};
		maximumLoad = 120;
	};
	class ADFU_AssaultPack_Tan_1_Backpanel: ReammoBox
	{
		scope = 2;
		author="Exer";
		class TransportMagazines{};
		class TransportWeapons{};
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = "Backpacks";
		allowedSlots[] = {901};
		model = "adfu_tbas\Hydpack2.p3d";
		displayName = "ADF TBAS Modular Assault Pack (Tan)";
		icon = "iconBackpack";
		hiddenSelections[]={"acc1","acc2"};
		hiddenSelectionsTextures[]={""};
		maximumLoad = 120;
	};
};
class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class Vest_Camo_Base;
	class VestItem;
	class HeadgearItem;
	class ADFU_PC_Tan_1: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 1 (Tan)";
		picture = "";
		model="adfu_tbas\PC_1.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="adfu_tbas\PC_1.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=260;
					passThrough=0.1;
				};
			};
		};
	};
	/*class ADFU_PC_MC_1: Vest_Camo_Base
	{
		scope= 2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 1 (Multicam)";
		picture = "";
		model="adfu_tbas\PC_1.p3d";
		hiddenSelections[]={"camo1","camo2","camo4","camo6","camo8","camo9","camo10"};
		hiddenSelectionsTextures[]={"adfu_tbas\data\ps\cryetop_mc_co.paa","adfu_tbas\data\ps\arpouch1_mc_co.paa","adfu_tbas\data\ps\pouch2_mc_co.paa","adfu_tbas\data\ps\ifak1_mc_co.paa","adfu_tbas\data\ps\smoke1_mc_co.paa","adfu_tbas\data\ps\flare1_mc_co.paa","adfu_tbas\data\ps\belt_mc_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="adfu_tbas\PC_1.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={"camo1","camo2","camo4","camo6","camo8","camo9","camo10"};
			hiddenSelectionsTextures[]={"adfu_tbas\data\ps\cryetop_mc_co.paa","adfu_tbas\data\ps\arpouch1_mc_co.paa","adfu_tbas\data\ps\pouch2_mc_co.paa","adfu_tbas\data\ps\ifak1_mc_co.paa","adfu_tbas\data\ps\smoke1_mc_co.paa","adfu_tbas\data\ps\flare1_mc_co.paa","adfu_tbas\data\ps\belt_mc_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=260;
					passThrough=0.1;
				};
			};
		};
	}; 
	class ADFU_PC_MCB_1: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 1 (Multicam Black)";
		picture = "";
		model="adfu_tbas\PC_1.p3d";
		hiddenSelections[]={"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","camo14"};
		hiddenSelectionsTextures[]={"adfu_tbas\data\ps\cryetop_mcb_co.paa","adfu_tbas\data\ps\arpouch1_mcb_co.paa","adfu_tbas\data\ps\pouch1_mcb_co.paa","adfu_tbas\data\ps\pouch2_mcb_co.paa","adfu_tbas\data\ps\pistolmag1_mcb_co.paa","adfu_tbas\data\ps\ifak1_mcb_co.paa","adfu_tbas\data\ps\acc1_mcb_co.paa","adfu_tbas\data\ps\smoke1_mcb_co.paa","adfu_tbas\data\ps\flare1_mcb_co.paa","adfu_tbas\data\ps\belt_mcb_co.paa","adfu_tbas\data\ps\admin1_mcb_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel="adfu_tbas\PC_1.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","camo14"};
			hiddenSelectionsTextures[]={"adfu_tbas\data\ps\cryetop_mcb_co.paa","adfu_tbas\data\ps\arpouch1_mcb_co.paa","adfu_tbas\data\ps\pouch1_mcb_co.paa","adfu_tbas\data\ps\pouch2_mcb_co.paa","adfu_tbas\data\ps\pistolmag1_mcb_co.paa","adfu_tbas\data\ps\ifak1_mcb_co.paa","adfu_tbas\data\ps\acc1_mcb_co.paa","adfu_tbas\data\ps\smoke1_mcb_co.paa","adfu_tbas\data\ps\flare1_mcb_co.paa","adfu_tbas\data\ps\belt_mcb_co.paa","adfu_tbas\data\ps\admin1_mcb_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=260;
					passThrough=0.1;
				};
			};
		};
	}; */
	class ADFU_PC_Tan_2: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 2 (Tan)";
		picture = "";
		model="adfu_tbas\PC_2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="adfu_tbas\PC_2.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFU_PC_Tan_3: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 3 (Tan)";
		picture = "";
		model="adfu_tbas\PC_3.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="adfu_tbas\PC_3.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFU_PC_Tan_4: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 4 (Tan)";
		picture = "";
		model="adfu_tbas\PC_4.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="adfu_tbas\PC_4.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFU_PC_Tan_5: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 5 (Tan)";
		picture = "";
		model="adfu_tbas\PC_5.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="adfu_tbas\PC_5.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFU_PC_Tan_6: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 6 (Tan)";
		picture = "";
		model="adfu_tbas\PC_6.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="adfu_tbas\PC_6.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFU_PC_Tan_7: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF TBAS Vest 7 (Tan)";
		picture = "";
		model="adfu_tbas\PC_7.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="adfu_tbas\PC_7.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFU_LPC_Tan_1: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF LPC 1 (Tan)";
		picture = "";
		model="adfu_tbas\LPC_1.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="adfu_tbas\LPC_1.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class ADFU_LPC_Tan_2: Vest_Camo_Base
	{
		scope=2;
		author="Exer";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayName = "ADF LPC 2 (Tan)";
		picture = "";
		model="adfu_tbas\LPC_2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="adfu_tbas\LPC_2.p3d";
			containerClass="Supply180";
			mass=60;
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=60;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=60;
					PassThrough=0.1;
				};
				class Abdomen
				{
					HitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
};