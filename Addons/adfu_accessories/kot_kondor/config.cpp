////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.36
//https://mikero.bytex.digital/Downloads
//'now' is Sat May 20 15:53:13 2023 : 'file' last modified on Sat May 20 15:53:13 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class kot_kondor
	{
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 2.0;
		units[] = {};
		weapons[] = {};
	};
};
class CfgGlasses
{
	class None;
	class kot_kondor_blk_clr: None
	{
		scope = 1;
		displayName = "$STR_kot_kondor_blk_clr";
		model = "\kot_kondor\npp_kondor";
		picture = "\kot_kondor\logo_small_co.paa";
		hiddenSelections[] = {"kondor"};
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_clr_CA.paa"};
		author = "IT_Kotyara & Numbers Of Tarkov";
		scopeCurator = 2;
		mass = 1;
	};
	class kot_kondor_blk_blk: kot_kondor_blk_clr
	{
		displayName = "$STR_kot_kondor_blk_blk";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_blk_CA.paa"};
	};
	class kot_kondor_blk_ylw: kot_kondor_blk_clr
	{
		displayName = "$STR_kot_kondor_blk_ylw";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_ylw_CA.paa"};
	};
	class kot_kondor_blk_blu: kot_kondor_blk_clr
	{
		displayName = "$STR_kot_kondor_blk_blu";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_blu_CA.paa"};
	};
	class kot_kondor_grn_blk: kot_kondor_blk_clr
	{
		displayName = "$STR_kot_kondor_grn_blk";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_grn_blk_CA.paa"};
	};
	class kot_kondor_grn_clr: kot_kondor_blk_clr
	{
		displayName = "$STR_kot_kondor_grn_clr";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_grn_clr_CA.paa"};
	};
	class kot_kondor_tan_blk: kot_kondor_blk_clr
	{
		displayName = "$STR_kot_kondor_tan_blk";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_tan_blk_CA.paa"};
	};
	class kot_kondor_tan_clr: kot_kondor_blk_clr
	{
		displayName = "$STR_kot_kondor_tan_clr";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_tan_clr_CA.paa"};
	};
	////////////////////////////
	//////ADF VERSIONS/////////
	///////////////////////////
	class adfu_condor_blk_clear: kot_kondor_blk_clr
	{
		scope = 2;
		displayName = "Condor Ballistic Glasses (Clear)";
		hiddenSelections[] = {"kondor"};
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_clr_CA.paa"};
		author = "ADF Re-Cut";
	};
	class adfu_condor_blk_blk: adfu_condor_blk_clear
	{
		displayName = "Condor Ballistic Glasses (Black)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_blk_CA.paa"};
	};
	class adfu_condor_blk_ylw: adfu_condor_blk_clear
	{
		displayName = "Condor Ballistic Glasses (Yellow)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_ylw_CA.paa"};
	};
	class adfu_condor_blk_blu: adfu_condor_blk_clear
	{
		displayName = "Condor Ballistic Glasses (Blue)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_blk_blu_CA.paa"};
	};
	class adfu_condor_grn_blk: adfu_condor_blk_clear
	{
		displayName = "Condor Ballistic Glasses (Black, Green Frame)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_grn_blk_CA.paa"};
	};
	class adfu_condor_grn_clr: adfu_condor_blk_clear
	{
		displayName = "Condor Ballistic Glasses (Clear, Green Frame)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_grn_clr_CA.paa"};
	};
	class adfu_condor_tan_blk: adfu_condor_blk_clear
	{
		displayName = "Condor Ballistic Glasses (Black, Tan Frame)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_tan_blk_CA.paa"};
	};
	class adfu_condor_tan_clr: adfu_condor_blk_clear
	{
		displayName = "Condor Ballistic Glasses (Clear, Tan Frame)";
		hiddenSelectionsTextures[] = {"\kot_kondor\data\kondor_tan_clr_CA.paa"};
	};
};
