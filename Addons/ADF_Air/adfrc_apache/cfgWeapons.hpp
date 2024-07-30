class CfgWeapons
{
    class gatling_30mm_base;
    class Mode_FullAuto;

    class ADFRC_gatling_30mm_base: gatling_30mm_base
    {
        displayName = "Chain Gun M230 30mm";
        magazines[] = {"ADFRC_1200Rnd_Chaingun_30mm"};
        modes[] = {"FullAuto"};
        cursorAim = "EmptyCursor";
        canLock = 2; // Enable locking
        ballisticsComputer = "16";
        FCSMaxLeadSpeed = 27.778;
        FCSZeroingDelay = 1;
        reloadMagazineSound[] = {"",1,1};

        class GunParticles
        {
            class EffectSmokeLeft
            {
                effectName = "MachineGun2";
                positionName = "usti hlavne";
                directionName = "gun_smoke_left";
            };
            class EffectSmokeRight
            {
                effectName = "MachineGun2";
                positionName = "usti hlavne";
                directionName = "gun_smoke_right";
            };
            class EffectCartridge
            {
                positionName = "gun_eject";
                directionName = "gun_eject_dir";
                effectName = "MachineGunCartridge1";
            };
        };

        class FullAuto: Mode_FullAuto
        {
            displayName = "Full Auto";
            textureType = "fullAuto";
            reloadTime = 0.096;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] =
                {
                    "Autocannon30mmTurret_Shot_SoundSet",
                    "Autocannon30mmTurret_Tail_SoundSet"
                };
            };
            autoFire = 1;
            burst = 1;
            minRange = 100;
            minRangeProbab = 0.4;
            midRange = 2000;
            midRangeProbab = 0.3;
            maxRange = 3000;
            maxRangeProbab = 0.2;
            showToPlayer = 1;

            // Distance lock logic
            class TargetAcquisition
            {
                enabled = 1; // Enable target acquisition
                maxLockDistance = 3000; // Max distance for target lock
                lockOnTarget[] = {"Target_Distance"}; // Distance for locking
                lockTime = 3; // Time to acquire lock
                lockAngle = 5; // Maximum angle for lock
                trackTarget = 1; // Track target once locked
            };
        };

        class close: FullAuto
        {
            displayName = "Close";
        };
    };

    class ADFRC_Chaingun_30mm: ADFRC_gatling_30mm_base
    {
        author = "ADF Re-Cut";
        scope = 2;
        displayName = "Chain Gun M230 30mm";
        muzzles[] = {"HEDP"};

        class HEDP: ADFRC_gatling_30mm_base
        {
            magazines[] = {"ADFRC_1200Rnd_Chaingun_30mm"};
        };
    };
};

class CfgAmmo
{
    class B_30mm_HE_Tracer_Red;

    class ADFRC_30mm_HEDP_T: B_30mm_HE_Tracer_Red
    {
        hit = 105;
        indirectHit = 10;
        indirectHitRange = 2;
        explosive = 0.3;
        airFriction = -0.00078;
        tracerScale = 2;
        caliber = 4.2;
        tracerEndTime = 30;
        timeToLive = 30;
        typicalSpeed = 805;
        laserlock = 0;
        airlock = 0;
        irlock = 0;
        muzzleEffect = "";

        class CamShakeExplode
        {
            power = "(25*0.2)";
            duration = "((round (25^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((2 + 25^0.5)*8)";
        };

        class CamShakeHit
        {
            power = 50;
            duration = "((round (50^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
};

class CfgMagazines
{
    class VehicleMagazine;

    class ADFRC_1200Rnd_Chaingun_30mm: VehicleMagazine
    {
        author = "ADF Re-Cut";
        scope = 2;
        displayName = "30mm 1200Rnd M789 HEDP-T";
        displayNameShort = "HEDP Tracer";
        ammo = "ADFRC_30mm_HEDP_T";
        count = 1200;
        initSpeed = 805;
        maxLeadSpeed = 500;
        tracersEvery = 1;
        nameSound = "cannon";
    };

    class ADFRC_1200Rnd_Chaingun_30mm_Tracer: ADFRC_1200Rnd_Chaingun_30mm
    {
        author = "ADF Re-Cut";
        scope = 2;
        displayName = "DEPRECATED";
        ammo = "Gatling_30mm_HE_Plane_CAS_01_Yellow_F";
    };
};
