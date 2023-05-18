/*
- Needs new hand animations
- Needs a GL Holo - not sure where to mount it
- 9 mm SMG variant maybe?
- Needs UI icons
*/

#include "basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "ASDG.hpp"
#include "cfgMagazines.hpp"
class CfgRecoils
{
	class recoil_default;
	// EF88 5.56 mm
	class recoil_aug: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.8,
			0.3,
			0.2
		};
		kickBack[] =
		{
			0.02,
			0.04
		};
		temporary = 0.01;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_556;
class CowsSlot_Rail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class arifle_AUG_base_F: Rifle_Base_F
	{
		model = "\adfu_weapon_ef88\AUG_F.p3d";
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\adfu_weapon_ef88\Data\AUG_CO.paa"};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_AUG_base_F_Library0;
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"
		};
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_AUG_base_F1;
		reloadAction = GestureReloadAUG;
		magazines[] =
		{
			30Rnd_556x45_AUG_Mag_F,
			30Rnd_556x45_AUG_Mag_Tracer_F
		};
		magazineReloadSwitchPhase = 0.48;
		htMin = 9;
		htMax = 870;
		inertia = 0.4;
		aimTransitionSpeed = 1.1;
		dexterity = 1.6;
		initSpeed = 970;
		recoil = recoil_aug;
		maxZeroing = 1000;
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] =
				{
					0,      // X
					0.38    // Y
				};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.479,  // X
					0.194   // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.285,  // X
					0.344   // Y
				};
				iconScale = 0.2;
			};
			mass = 80;
		};
		modes[] =
		{
			FullAuto,
			Single,
			single_medium_optics1,
			single_medium_optics2,
			fullauto_medium
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.088;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.088;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = false;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = false;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
	  	};
	};
	class arifle_AUG_GL_base_F: arifle_AUG_base_F
	{
		model = "\adfu_weapon_ef88\AUG_GL_F.p3d";
		hiddenSelections[] =
		{
			Camo1,
			Camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\adfu_weapon_ef88\Data\AUG_CO.paa",
			"\adfu_weapon_ef88\Data\GL40_CO.paa"
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"
		};
		inertia = 0.5;
		dexterity = 1.6;
		aimTransitionSpeed = 0.9;
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
	    	mass = 100;
	  	};
		class EGLM: UGL_F
		{
			displayName = $STR_A3_A_CfgWeapons_arifle_AUG_GL_base_F_EGLM0;
			useModelOptics = false;
			useExternalOptic = false;
			cameraDir = OP_look;
			discreteDistance[] =
			{
				50,
				75,
				100,
				150,
				200,
				250,
				300,
				350,
				400
			};
			discreteDistanceCameraPoint[] =
			{
				OP_eye_50,
				OP_eye_75,
				OP_eye_100,
				OP_eye_150,
				OP_eye_200,
				OP_eye_250,
				OP_eye_300,
				OP_eye_350,
				OP_eye_400
			};
			discreteDistanceInitIndex = 1;
			reloadAction = GestureReloadKatibaUGL;
		};
		muzzles[] =
		{
			this,
			EGLM
		};
	};
	class arifle_AUG_C_base_F: arifle_AUG_base_F
	{
		model = "\adfu_weapon_ef88\AUG_C_F.p3d";
		inertia = 0.3;
		dexterity = 1.6;
		aimTransitionSpeed = 1.2;
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
	    	mass = 65;
	  	};
	};
	class arifle_AUG_black_base_F: arifle_AUG_base_F
	{
		hiddenSelectionsTextures[] = {"\adfu_weapon_ef88\Data\AUG_black_CO.paa"};
	};
	class arifle_AUG_GL_black_base_F: arifle_AUG_GL_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\adfu_weapon_ef88\Data\AUG_black_CO.paa",
			"\adfu_weapon_ef88\Data\GL40_black_CO.paa"
		};
	};
	class arifle_AUG_C_black_base_F: arifle_AUG_C_base_F
	{
		hiddenSelectionsTextures[] = {"\adfu_weapon_ef88\Data\AUG_black_CO.paa"};
	};
	class arifle_AUG_F: arifle_AUG_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = EF88;
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_F_X_CA.paa";
		baseWeapon = arifle_AUG_F;
	};
	class arifle_AUG_GL_F: arifle_AUG_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = EF88-GL;
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_GL_F_X_CA.paa";
		baseWeapon = arifle_AUG_GL_F;
	};
	class arifle_AUG_C_F: arifle_AUG_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AUG_C_F0;
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_C_F_X_CA.paa";
		baseWeapon = arifle_AUG_C_F;
	};
	class arifle_AUG_black_F: arifle_AUG_black_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = EF88 (Black);
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_black_F_X_CA.paa";
		baseWeapon = arifle_AUG_black_F;
	};
	class arifle_AUG_GL_black_F: arifle_AUG_GL_black_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = EF88-GL (Black);
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_GL_black_F_X_CA.paa";
		baseWeapon = arifle_AUG_GL_black_F;
	};
	class arifle_AUG_C_black_F: arifle_AUG_C_black_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AUG_C_black_F0;
		picture = "\adfu_weapon_ef88\Data\UI\icon_arifle_AUG_C_black_F_X_CA.paa";
		baseWeapon = arifle_AUG_C_black_F;
	};
	#include "presets.hpp"
};