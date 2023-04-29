class CfgPatches
{
	class ADFU_weapon_usp
	{
		units[]={};
		weapons[]=
		{
			"ADFU_weapon_usp",
			"ADFU_weapon_usp_silencer",
			"ADFU_weapon_usp_snds"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc"
		};
		author[]=
		{
			"ADF Re-Cut | ADF: Uncut"
		};
	};
};
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class muzzle_snds_L;
class ItemInfo;
class CfgWeapons
{
	class ADFU_weapon_usp_silencer: muzzle_snds_L
	{
		scope=2;
		displayName="USP Silencer (Black)";
		author="$STR_ADFU_AUTHOR";
		picture="\ADFU_weapon_usp\ui\gear_ADFU_usp_snd_ca.paa";
		model="\ADFU_weapon_usp\ADFU_USP_SILENCER";
		descriptionShort="H&K USP Tactical Silencer";

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
				typicalSpeed=0.89999998;
				airFriction=1;
			};
			muzzleEnd="zaslehPoint";
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
	class Pistol_Base_F;
	class ADFU_pistol_base: Pistol_Base_F
	{
		class Single;
	};
	class ADFU_weapon_usp: ADFU_pistol_base
	{
		scope=2;
		baseWeapon="ADFU_USP";
		displayName="USP Tactical 9mm";
		author="$STR_ADFU_AUTHOR";
		class Library
		{
			libTextDesc="9mm USP Tactical";
		};
		model="\ADFU_weapon_usp\ADFU_USP_TACTICAL.p3d";
		cursor="";
		magazines[]=
		{
			"16Rnd_9x21_Mag"
		};
		reloadAction="GestureReloadPistol";
		picture="\ADFU_weapon_usp\UI\gear_ADFU_usp_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class WeaponSlotsInfo
		{
			mass=5;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"ADFU_weapon_usp_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]={};
			};
		};
		modes[]=
		{
			"Single"
		};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"P07_Shot_SoundSet",
					"P07_Tail_SoundSet",
					"P07_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"P07_silencerShot_SoundSet",
					"P07_silencerTail_SoundSet",
					"P07_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=4.9999999e-005;
		};
	};
	class ADFU_weapon_usp_snds: ADFU_weapon_usp
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ADFU_weapon_usp_silencer";
			};
		};
	};
};