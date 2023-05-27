/* ADF */
class adfu_air_apache: Heli_Attack_03_base_F
{
    author = "ADF Re-Cut";
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Attack_03_F.jpg";
	displayName = "AH64-E Apache Guardian";
	editorSubcategory = "EdSubcat_Helicopters";
	scope = 2;
	scopeCurator = 2;
	side = WEST;
	faction = ADFU;
	crew = B_Helipilot_F;
	typicalCargo[] = {B_Helipilot_F};
    textureList[] = {BAF,1};
	hiddenSelectionsTextures[] =
    {
        "\adfu_air_apache\Data\Heli_Attack_03_body_CO.paa",
        "\adfu_air_apache\Data\Heli_Attack_03_details_CO.paa",
        "\adfu_air_apache\Data\Heli_Attack_03_adds_CO.paa"
    };

    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            /* Weapons & Ammunition */
            magazines[] =
            {
                250Rnd_30mm_HE_shells,
                Laserbatteries
            };
        };
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
	};
};
