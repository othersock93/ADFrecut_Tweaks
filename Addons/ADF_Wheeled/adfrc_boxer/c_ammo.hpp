class cfgCloudlets 
{
	class MachineGunCartridge;
	class ADFRC_boxer_cartridge: MachineGunCartridge 
	{
		moveVelocity[] = { "-directionX * 1", "- directionY * 1", "- directionZ * 1" };
		lifeTime = 20;
		size[] = {4.2};
		bounceOnSurface = 0.3;
	};
};
class ADFRC_mk30_casingeject {
	class MachineGunEject {
		simulation = "particles";
		type = "ADFRC_boxer_cartridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class cfgAmmo
{
	class B_30mm_MP_Tracer_Red;
	class ADFRC_boxer_30mm_HE: B_30mm_MP_Tracer_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 32;
		indirectHit = 13;
		indirectHitRange = 5;
		explosive = 0.8;
		caliber = 1.5;
		tracerScale = 2.25;
		airLock = 1;
	};
	class B_30mm_APFSDS;
	class ADFRC_boxer_30mm_AP: B_30mm_APFSDS
	{
		hit = 110;
		indirectHit = 1;
		indirectHitRange = 1;
		caliber = 6;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 3;
		cost = 50;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		airLock = 1;
	};
	class B_762x54_Tracer_Green;
	class ADFRC_boxer_762x51_Tracer: B_762x54_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerColor[] = {0.7,0.7,0.5,0.04};
		tracerColorR[] = {0.7,0.7,0.5,0.04};
	};
};
class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class ADFRC_boxer_1000Rnd_762x51_Tracer: 150Rnd_762x51_Box {
		scope = 1;
		ammo = "ADFRC_boxer_762x51_Tracer";
		displayName = "1000 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 1000;
		type = "2*		256";
		tracersEvery = 4;
	};
	class ADFRC_boxer_200rnd_762x51_Tracer: 150Rnd_762x51_Box{
		scope = 1;
		ammo = "ADFRC_boxer_762x51_Tracer";
		displayName = "200 Round 7.62mm Tracer";
		displayNameShort = "Tracer";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		count = 200;
		type = "2*		256";
		tracersEvery = 4;
	};
	class 250Rnd_30mm_HE_shells_Tracer_Red;
	class ADFRC_boxer_360RND_30mm_HE: 250Rnd_30mm_HE_shells_Tracer_Red
	{
		scope = 2;
		displayName = "30mm HE";
		displaynameshort = "MK266 HEI-T";
		ammo = "ADFRC_boxer_30mm_HE";
		tracersEvery = 1;
		count = 125;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Red;
	class ADFRC_boxer_360RND_30mm_AP: 250Rnd_30mm_APDS_shells_Tracer_Red
	{
		scope = 2;
		displayName = "30mm AP";
		displayNameShort = "PMC287 APFSDS";
		ammo = "ADFRC_boxer_30mm_AP";
		tracersEvery = 1;
		count = 125;
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
	class LMG_coax_ext;
	class ADFRC_boxer_coax: LMG_coax_ext 
	{
		displayName = "MG 7.62mm Mag 58 Coax";
		scope = 1;
		magazines[]=
		{
			"ADFRC_boxer_1000Rnd_762x51_Tracer",
			"ADFRC_boxer_1000Rnd_762x51_Tracer"
		};
		class GunParticles {

			class effect1 {
				effectName = "MachineGunCloud";
				positionName = "Usti hlavne3";
				directionName = "Konec hlavne3";
			};
		};
	};
	class autocannon_Base_F;
	class player;
	class ADFRC_boxer_mk30: autocannon_Base_F
	{
		aiDispersioncoefX = 4;
		aiDispersioncoefY = 6;
		airateoffire = 2;
		airateoffiredistance = 1000;
		canlock = 2;
		FCSMaxLeadSpeed = 55.5556;
		weaponLockSystem = 12;
		class GunParticles
		{
			class Effect1
			{
				effectName = "AutoCannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class Effect2 
			{
					effectName = "ADFRC_mk30_casingeject";
					positionName = "nabojnicestart";
					directionName = "nabojniceend";
			};
		};
		displayName = "MK 30-2/ABM 30mm Autocannon";
		muzzles[] = {"AP","HE"};
		class HE: autocannon_Base_F 
		{
			displayName = "MK 30-2/ABM 30mm Autocannon";
			magazines[] = {"ADFRC_boxer_360RND_30mm_HE","ADFRC_boxer_360RND_30mm_AP"};
			magazineWell[] = {};
			canlock = 2;
			ballisticsComputer = 1+2+16;
			FCSMaxLeadSpeed = 55.5556;
			magazineReloadTime = 0.3;
			sounds[] = {"StandardSound"};
			modes[] = {"player","close","short","medium","far"};
			class player: player
			{
				reloadTime=__EVAL(60/200);
				textureType = "fullAuto";
			};
			minZeroing = 0;
		};
		class AP: autocannon_Base_F {
			displayName = "PMC287 APFSDS";
			magazines[] = {"ADFRC_boxer_360RND_30mm_AP"};
			magazineWell[] = {};
			canlock = 2;
			FCSMaxLeadSpeed = 55.5556;
			showToPlayer=0;
			class player: player
			{
				showToPlayer = 0;
				reloadTime=__EVAL(60/200);
			};
			class close: player
			{
				showToPlayer=0;
				reloadTime=__EVAL(60/200);
				aiBurstTerminable=1;
				burst=8;
				burstRangeMax=6;
				aiRateOfFire = 0.35;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				showToPlayer = 0;
				reloadTime=__EVAL(60/200);
			};
			class medium: short
			{
				showToPlayer=0;
				reloadTime=__EVAL(60/200);
			};
			class far: medium
			{
				showToPlayer=0;
				reloadTime=__EVAL(60/100);
			};
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class SomeRadarSensorComponent
					{
						componentType = "ActiveRadarSensorComponent";
						class AirTarget		// ranges for targets with sky background
						{
							minRange	= 3000;	// minimum possible range in meters
							maxRange	= 3000;	// maximum possible range in meters
							objectDistanceLimitCoef	= -1; // range not limited by obj. view distance
							viewDistanceLimitCoef	= -1; // range not limited by view distance
						};
						class GroundTarget	// ranges for targets with ground background
						{
							minRange = 3000;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef 	= -1;
						};
						typeRecognitionDistance = 1000; // distance how far the target type gets recognized
						angleRangeHorizontal 	= 180;	// sensor azimuth coverage in degrees
						angleRangeVertical 		= 180;	// sensor elevation coverage in degrees
					};
				};
			};
		};
	};
	class HMG_M2_Mounted;
	class ADFRC_boxer_M2HBQCB_RWS: HMG_M2_Mounted 
	{
		displayName="Kongsberg RWS - M2HB QCB";
		ballisticsComputer = "2 + 16";
		class GunParticles 
		{
			class effect1
			{
				positionName = "m2_muzzle_end";
				directionName = "m2_muzzle";
				effectName = "MachineGunCloud";
			};
			class effect2 
			{
				directionName = "nabojniceend";
				effectName = "MachineGunEject";
				positionName = "nabojnicestart";
			};
			class effect3 
			{
				directionName = "case_eject_dir";
				effectName = "MachineGunCartridge2";
				positionName = "case_eject_pos";
			};
		};
	};
	class TruckHorn3;
	class adfrc_boxerhorn: TruckHorn3 
	{
		drySound[]= {"adf_wheeled\adfrc_boxer\sound\boxer-horn.ogg",1,1,350};
		soundcontinuous = 1;
	};
};