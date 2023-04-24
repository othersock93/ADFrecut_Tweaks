class CfgPatches
{
	class ADFU_weapon_mag58
	{
		units[]={};
		weapons[]=
		{
			"ADFU_mag58",
			"ADFU_mag58_elcan",
			"ADFU_mag58_ta648",
			"ADFU_mag58_mrco",
			"ADFU_mag58_hamr",
			"ADFU_mag58_deployed",
			"ADFU_mag58_vehicle"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"ADFU_magazines",
			"ADFU_weapon_optics"
		};
		magazines[]=
		{
			"ADFU_vehicle_200rnd_762x51_Tracer"
		};
	};
};
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;
class CowsSlot_ADFU_MG;
class CfgWeapons
{
	class SlotInfo;
	class ItemCore;
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class ADFU_mag58: Rifle_Long_Base_F
	{
		scope=2;
		displayName="FN MAG-58";
		author="$STR_ADFU_AUTHOR";
		model="\ADFU_weapon_mag58\ADFU_MAG58.p3d";
		dexterity=1.45;
		picture="\ADFU_weapon_mag58\UI\gear_ADFU_mag58_x_ca.paa";
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		magazines[]=
		{
			"ADFU_50Rnd_762_Belt",
			"ADFU_50Rnd_762_Belt_TR",
			"ADFU_50Rnd_762_Belt_TR5",
			"ADFU_100Rnd_762_Belt",
			"ADFU_100Rnd_762_Belt_TR",
			"ADFU_100_Rnd_762_Belt_TR5",
			"ADFU_150Rnd_762_Belt",
			"ADFU_150Rnd_762_Belt_TR",
			"ADFU_150Rnd_762_Belt_TR5"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADFU_weapon_mag58\anim\mag58_1.rtm"
		};
		reloadAction="GestureReloadM200";
		soundBipodDeploy[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
			0.70794576,
			1,
			20
		};
		soundBipodFold[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
			0.70794576,
			1,
			20
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		class WeaponSlotsInfo
		{
			mass=60;
			allowedSlots[]={901};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot_ADFU_MG
			{
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\sfx7",
					0.15000001,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\sfx8",
					0.15000001,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				begin1[]=
				{
					"\ADFU_weapon_mag58\sound\mag-58.ogg",
					1.3,
					1,
					1400
				};
				begin2[]=
				{
					"\ADFU_weapon_mag58\sound\mag-58.ogg",
					1.3,
					1,
					1400
				};
				begin3[]=
				{
					"\ADFU_weapon_mag58\sound\mag-58.ogg",
					1.3,
					1,
					1400
				};
				begin4[]=
				{
					"\ADFU_weapon_mag58\sound\mag-58.ogg",
					1.3,
					1,
					1400
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			reloadTime=0.1;
			dispersion=0.00101;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			weaponSoundEffect="DefaultRifle";
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			showToPlayer=1;
		};
		class close: FullAuto
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far_optic1: close
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=9;
			aiRateOfFireDistance=900;
			minRange=350;
			minRangeProbab=0.039999999;
			midRange=550;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType=2;
			autoFire=0;
			burst=1;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=800;
			midRangeProbab=0.5;
			maxRange=1000;
			maxRangeProbab=0.0099999998;
		};
		reloadMagazineSound[]=
		{
			"\ADFU_weapon_mag58\sound\reload",
			0.056234099,
			1,
			10
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionname="Konec hlavne";
				positionname="Usti hlavne";
				effectname="MachineGunCloud";
			};
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class ThirdEffect
			{
				positionName="link_eject_start";
				directionName="link_eject_end";
				effectName="ADFU_mag58_linkseject";
			};
			class FifthEffect
			{
				positionName="link_eject_start";
				directionName="link_eject_end";
				effectName="CaselessAmmoCloud";
			};
		};
	};
	class ADFU_mag58_elcan: ADFU_mag58
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_elcan_c79";
			};
		};
	};
	class ADFU_mag58_ta648: ADFU_mag58
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ADFU_acog_ta648";
			};
		};
	};
	class ADFU_mag58_mrco: ADFU_mag58
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class ADFU_mag58_hamr: ADFU_mag58
	{
		scope=2;
		author="$STR_ADFU_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_HAMR";
			};
		};
	};
	class ADFU_mag58_deployed: ADFU_mag58
	{
		scope=1;
		model="\ADFU_weapon_mag58\ADFU_MAG58_DEPLOYED.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\ADFU_weapon_mag58\anim\mag58_prone.rtm"
		};
	};
	class ADFU_mag58_vehicle: ADFU_mag58
	{
		scope=1;
		displayName="7.62MM FN MAG-58";
		magazines[]=
		{
			"ADFU_vehicle_200Rnd_762x51_Tracer"
		};
		ballisticsComputer=0;
		class GunParticles
		{
			class effect1
			{
				positionName="gun_muzzle";
				directionName="gun_chamber";
				effectName="MachineGunCloud";
			};
		};
	};
};
class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class ADFU_vehicle_200rnd_762x51_Tracer: 150Rnd_762x51_Box
	{
		scope=1;
		displayName="200 Round 7.62mm Tracer";
		displayNameShort="Tracer";
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count=200;
		type="2*  256";
		tracersEvery=3;
	};
};
class cfgCloudlets
{
	class MachineGunEject;
	class MachineGunCartridge;
	class ADFU_Mag58_Eject: MachineGunEject
	{
		lifeTime=20;
		size[]={0.94999999};
		bounceOnSurface=0.25;
	};
	class ADFU_Mag58_Cartridge: MachineGunCartridge
	{
		lifeTime=20;
		size[]={0.94999999};
		bounceOnSurface=0.25;
	};
	class ADFU_mag58_vehicle_cartridge: MachineGunCartridge
	{
		lifeTime=10;
		size[]={0.85000002};
		bounceOnSurface=0.25;
	};
};
class ADFU_mag58_vehicle_casingeject
{
	class MachineGunEject
	{
		simulation="particles";
		type="ADFU_mag58_vehicle_cartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class ADFU_mag58_linkseject
{
	class MachineGunEject
	{
		simulation="particles";
		type="ADFU_Mag58_Eject";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class ADFU_mag58_MachineGunCartridge
{
	class MachineGunCartridge
	{
		simulation="particles";
		type="ADFU_Mag58_Cartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=2;
	};
	class MachineGunCartridgeMed
	{
		simulation="particles";
		type="ADFU_Mag58_Cartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
		qualityLevel=1;
	};
};
