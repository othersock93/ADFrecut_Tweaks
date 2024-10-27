class CfgMovesBasic
{
	class Default;
	class DefaultDie;

 	class ManActions
 	{
		ADFRC_GestureRechamberM2010		= "ADFRC_GestureReloadM2010";
 	};

	class Actions
	{
		class NoActions : ManActions
		{
			ADFRC_GestureRechamberM2010[]			= { "ADFRC_GestureRechamberM2010", "Gesture" };
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			ADFRC_GestureRechamberM2010[]			= { "ADFRC_GestureRechamberM2010_Prone", "Gesture" };
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			ADFRC_GestureRechamberM2010[]			= { "ADFRC_GestureRechamberM2010_Context", "Gesture" };
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			ADFRC_GestureRechamberM2010[]			= { "ADFRC_GestureRechamberM2010_Context", "Gesture" };
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			ADFRC_GestureRechamberM2010[]			= { "ADFRC_GestureRechamberM2010", "Gesture" };
		};
	};
};
#define ANIMATION_DURATION_S(duration)  __EVAL(1/duration)

class CfgGesturesMale
{
	class Default;
	class States
	{
		class GestureReloadBase;
		class ADFRC_GestureRechamberM2010_Prone : Default
		{
			file = "\ADF_Weapons\core\Anims\Gestures\rechamber_m2010_prone.rtm";
			looped = 0;
			speed = 0.6;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.01666667, 0, 0.7912, 0, 0.953, 1 };
			rightHandIKEnd = true;
			enableOptics = 1;
		};

		class ADFRC_GestureRechamberM2010 : Default
		{
			enableOptics = 1;
			file = "\ADF_Weapons\core\Anims\Gestures\rechamber_m2010_standing.rtm";
			looped = 0;
			speed = 0.6;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			disableWeapons = 0;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.01666667, 0, 0.7912, 0, 0.953, 1 };
			rightHandIKEnd = true;
		};

		class ADFRC_GestureRechamberM2010_Context : ADFRC_GestureRechamberM2010
		{
			mask = "handsWeapon_context";
		};

	};
};