class CfgPatches
{
	class ADFU_weapon_accessories
	{
		units[]={};
		weapons[]=
		{
			"ADFU_f88_muzzle_snds",
			"ADFU_f88_muzzle_snds_tan",
			"ADFU_m4a5_muzzle_snds",
			"ADFU_m4a5_muzzle_snds_tan",
			"ADFU_m4a5_muzzle_snds_wdl",
			"ADFU_F88SA1_laser",
			"ADFU_F88SA1_light",
			"ADFU_f88sa2_light",
			"ADFU_f88sa2_light_tan",
			"ADFU_f88sa2_laser",
			"ADFU_f88sa2_laser_tan"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc"
		};
	};
};
class ItemInfo;
class SlotInfo;
class PointerSlot;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class ItemInfo;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_M;
	class ADFU_f88_muzzle_snds: muzzle_snds_M
	{
		scope=2;
		displayName="ASE Utra Suppressor (Black)";
		picture="\ADFU_weapon_accessories\F88_SILENCER\UI\silencer_ca.paa";
		model="\ADFU_weapon_accessories\F88_SILENCER\F88_SILENCER_M";
		descriptionShort="145mm ASE CQBS-BL";
		author="$STR_ADFU_AUTHOR";
		class ItemInfo: ItemInfo
		{
			mass=5;
			class MagazineCoef
			{
				initSpeed=1.1;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				visibleFire=0.25;
				audibleFire=0.2;
				visibleFireTime=0.44999999;
				audibleFireTime=0.44999999;
				cost=1;
				typicalSpeed=1.1;
				airFriction=1;
			};
			muzzleEnd="zaslehPoint";
			class MuzzleCoef
			{
				dispersionCoef="1.0f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="0.9f";
				recoilProneCoef="0.9f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionname="zaslehDir";
				effectname="CaselessAmmoCloud";
				positionname="zaslehPoint";
			};
		};
	};
	class ADFU_f88_muzzle_snds_tan: ADFU_f88_muzzle_snds
	{
		scope=2;
		displayName="ASE Utra Suppressor (Sand)";
		model="\ADFU_weapon_accessories\F88_SILENCER\F88_SILENCER_M_AMP";
		author="$STR_ADFU_AUTHOR";
	};
	class ADFU_m4a5_muzzle_snds: ADFU_f88_muzzle_snds
	{
		scope=2;
		displayName="KAC NT4 Suppressor (Black)";
		model="\ADFU_weapon_accessories\M4_SILENCER\M4_Silencer";
		author="$STR_ADFU_AUTHOR";
	};
	class ADFU_m4a5_muzzle_snds_tan: ADFU_m4a5_muzzle_snds
	{
		scope=2;
		displayName="KAC NT4 Suppressor (Sand)";
		model="\ADFU_weapon_accessories\M4_SILENCER\M4_Silencer_T";
		author="$STR_ADFU_AUTHOR";
	};
	class ADFU_m4a5_muzzle_snds_wdl: ADFU_m4a5_muzzle_snds
	{
		scope=2;
		displayName="KAC NT4 Suppressor (Woodland)";
		model="\ADFU_weapon_accessories\M4_SILENCER\M4_Silencer_W";
		author="$STR_ADFU_AUTHOR";
	};
	class ADFU_F88SA1_laser: ItemCore
	{
		scope=2;
		displayName="Laser Pointer (f88sa1)";
		picture="\ADFU_weapon_accessories\LASER_F88SA2\ui\laser_ca.paa";
		model="\ADFU_weapon_accessories\LASER_f88sa1\LASER_f88sa1";
		descriptionShort="Ring Mounted accessories";
		author="$STR_ADFU_AUTHOR";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class Pointer
			{
				RMBhint="Laser Pointer";
				irLaserPos="laser_dir";
				irLaserEnd="laser";
				irdistance=750;
			};
			class FlashLight
			{
			};
		};
	};
	class ADFU_F88SA1_light: ItemCore
	{
		scope=2;
		displayName="Flash-Light (f88sa1)";
		picture="\ADFU_weapon_accessories\LIGHT_F88SA2\ui\light_ca.paa";
		model="\ADFU_weapon_accessories\LIGHT_f88sa1\LIGHT_f88sa1";
		descriptionShort="Ring Mounted accessories";
		author="$STR_ADFU_AUTHOR";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			RMBhint="Ring Mount Flash-light";
			mass=4;
			class FlashLight
			{
				color[]={0.75,0.89999998,0.89999998,0.89999998};
				ambient[]={0.1,0.1,0.1,1};
				position="flash_dir";
				direction="flash";
				innerAngle=50;
				outerAngle=80;
				scale[]={0};
				brightness=0.44999999;
				size=1;
				coneFadeCoef=7;
				intensity=115;
				useFlare=1;
				dayLight=1;
				FlareSize=0.64999998;
				class Attenuation
				{
					start=0;
					constant=2;
					linear=1;
					quadratic=75;
				};
			};
		};
	};
	class ADFU_f88sa2_light: ADFU_F88SA1_light
	{
		scope=2;
		displayName="Flash-Light (F88SA2)";
		picture="\ADFU_weapon_accessories\LIGHT_F88SA2\ui\light_ca.paa";
		model="\ADFU_weapon_accessories\LIGHT_F88SA2\LIGHT_F88SA2";
		author="$STR_ADFU_AUTHOR";
	};
	class ADFU_f88sa2_light_tan: ADFU_f88sa2_light
	{
		scope=2;
		displayName="Flash-light Tan (F88SA2)";
		picture="\ADFU_weapon_accessories\LIGHT_F88SA2\ui\light_ca.paa";
		model="\ADFU_weapon_accessories\LIGHT_F88SA2\LIGHT_TAN_F88SA2";
		author="$STR_ADFU_AUTHOR";
	};
	class ADFU_f88sa2_laser: ItemCore
	{
		scope=2;
		displayName="Laser Pointer (F88SA2)";
		picture="\ADFU_weapon_accessories\LASER_F88SA2\ui\laser_ca.paa";
		model="\ADFU_weapon_accessories\LASER_F88SA2\LASER_F88SA2";
		author="$STR_ADFU_AUTHOR";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class Pointer
			{
				RMBhint="Laser Pointer";
				irLaserPos="laser_dir";
				irLaserEnd="laser";
				irdistance=750;
			};
			class FlashLight
			{
			};
		};
	};
	class ADFU_f88sa2_laser_tan: ADFU_f88sa2_laser
	{
		scope=2;
		displayName="ADF Laser Pointer (Tan)";
		picture="\ADFU_weapon_accessories\LASER_F88SA2\ui\laser_ca.paa";
		model="\ADFU_weapon_accessories\LASER_F88SA2\LASER_TAN_F88SA2";
		author="$STR_ADFU_AUTHOR";
	};
};
