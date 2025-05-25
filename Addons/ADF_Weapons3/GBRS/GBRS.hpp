class MCC_GBRS_M5_FDE : ItemCore
	{
		displayName="GBRS Hydra CompM5 (FDE)";
		author=Brucey;
		model = "MCC\MCC_Optics\GBRS\MCC_Hydra_M5_FDE.p3d";
		scope =2;
		descriptionShort = "Aimpoint CompM5";
		zeroingSound = ["A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_plastic",0.316228,1,5];
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 1;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Aco
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					discreteDistance[] = {25,50,100,200,300,400};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
			class Pointer
			{
				irLaserPos = "laserpos";
				irLaserEnd = "laserdir";
			};
		};
		
		inertia = 0.1;
	};
	
class MCC_GBRS_M5_BLK : MCC_GBRS_M5_FDE
	{
		displayName="GBRS Hydra CompM5 (BLK)";
		model = "MCC\MCC_Optics\GBRS\MCC_Hydra_M5_BLK.p3d";
	};
	
	
	
////// Magnified 
///DOWN
class MCC_GBRS_M5_Mag_Down_FDE : MCC_GBRS_M5_FDE
	{
		displayName="GBRS Hydra CompM5 Magnifier (FDE) Down";
		author=Brucey;
		model = "MCC\MCC_Optics\GBRS\MCC_Hydra_M5_FDE_Mag_Down.p3d";
		scope =2;
		descriptionShort = "Aimpoint CompM5 3x";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 1;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Aco
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					discreteDistance[] = {25,50,100,200,300,400};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"Default"};
				};
			};
			class Pointer
			{
				irLaserPos = "laserpos";
				irLaserEnd = "laserdir";
			};
		};
		
        MRT_SwitchItemNextClass = "MCC_GBRS_M5_Mag_Up_FDE";
        MRT_switchItemHintText = "1x";
		
		inertia = 0.25;
	};
	
	class MCC_GBRS_M5_Mag_Down_BLK : MCC_GBRS_M5_Mag_Down_FDE
	{
		displayName="GBRS Hydra CompM5 Magnifier (BLK) Down";
		model = "MCC\MCC_Optics\GBRS\MCC_Hydra_M5_BLK_Mag_Down.p3d";
        MRT_SwitchItemNextClass = "MCC_GBRS_M5_Mag_Up_BLK";
        MRT_switchItemHintText = "1x";
	};
	
class MCC_GBRS_M5_Mag_Up_FDE : MCC_GBRS_M5_FDE
	{
		displayName="GBRS Hydra CompM5 Magnifier (FDE) Up";
		author=Brucey;
		model = "MCC\MCC_Optics\GBRS\MCC_Hydra_M5_FDE_Mag_Up.p3d";
		scope =2;
		descriptionShort = "Aimpoint CompM5 3x";
		
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 1;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Magnified
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = "0.25/3";
					opticsZoomMax = "0.25/3";
					opticsZoomInit = "0.25/3";
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 1;
					discreteDistance[] = {25,50,100,200,300,400};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 50;
					distanceZoomMax = 50;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
				};
			};
			class Pointer
			{
				irLaserPos = "laserpos";
				irLaserEnd = "laserdir";
			};
		};
		
		
		
        MRT_SwitchItemNextClass = "MCC_GBRS_M5_Mag_Down_FDE";
        MRT_switchItemHintText = "3x";
		
		inertia = 0.2;
	};
	
class MCC_GBRS_M5_Mag_Up_BLK : MCC_GBRS_M5_Mag_Up_FDE
	{
		displayName="GBRS Hydra CompM5 Magnifier (BLK) Up";
		author=Brucey;
		model = "MCC\MCC_Optics\GBRS\MCC_Hydra_M5_BLK_Mag_Up.p3d";
        MRT_SwitchItemNextClass = "MCC_GBRS_M5_Mag_Down_BLK";
        MRT_switchItemHintText = "3x";
	};