////////////////////////////////////////////////////////////////////
//DeRap: yuke_usaf_utility_submod\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Wed May 28 20:30:27 2025 : 'file' last modified on Mon May 19 17:37:47 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ls_acf_yuke_usaf_utility_submod
	{
		name = "ACF | Yuktobania | USAF Utility Submod";
		author = "(S)Zumek";
		units[] = {"ls_acf_yuke_o_usaf_c17","ls_acf_yuke_o_usaf_kc135"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","usaf_main","usaf_utility_core","usaf_c17","usaf_kc135"};
		skipWhenMissingDependencies = 1;
	};
};
class cfgVehicles
{
	class usaf_c17;
	class usaf_kc135;
	class ls_acf_yuke_o_usaf_c17: usaf_c17
	{
		author = "(S)Zumek";
		displayName = "C-17 Globemaster III";
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "ls_acf_o_yuktobania";
		crew = "ls_acf_o_yuke_soldier_jet_pilot";
		editorSubcategory = "EdSubcat_Planes";
		editorPreview = "\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_o_usaf_c17.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_C17_1_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_C17_2_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_C17_3_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_C17_5_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_C17_6_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_C17_7_co.paa","\USAF_C17\data\texture\C17-8_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_C17_eng_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_C17_wng_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_C17_wng_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_C17_tail_co.paa"};
	};
	class ls_acf_yuke_o_usaf_kc135: usaf_kc135
	{
		author = "(S)Zumek";
		displayName = "KC-135 Stratotanker";
		side = 0;
		scope = 2;
		scopeCurator = 2;
		faction = "ls_acf_o_yuktobania";
		crew = "ls_acf_o_yuke_soldier_jet_pilot";
		editorSubcategory = "EdSubcat_Planes";
		editorPreview = "\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_o_usaf_kc135.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_1_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_2_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_3_Lwing_bottom_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_4_Lwing_top_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_5_Rwing_bottom_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_6_Rwing_top_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_7_Belly_Panels_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_8-9_cfm_#1engine_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_8-9_cfm_#1engine_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_10-11_cfm_#3-4engine_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_10-11_cfm_#3-4engine_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_12_h_stab_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_13_inbd_pylons_co.paa","USAF_KC135\txt\inlet.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_15_outbd_pylons_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_16_tail_left_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_17_tail_right_co.paa","\ls_acf_yuktobania_submods\yuke_usaf_utility_submod\data\ls_acf_yuke_USAF_KC135_18_w_frame_co.paa"};
	};
};
class cfgMods
{
	author = "(S) Zumek";
	timepacked = "1747697866";
};
