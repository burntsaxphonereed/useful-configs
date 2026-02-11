////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Tue Feb 10 21:45:17 2026 : 'file' last modified on Thu Jan 15 16:14:28 2026
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ls_acf_sth_sotoa_units
	{
		name = "ACF | South Sotoa | Units";
		units[] = {"ls_acf_sth_sotoa_i_sssf_rifleman","ls_acf_sth_sotoa_i_sssf_rifleman_at","ls_acf_sth_sotoa_i_sssf_unarmed","ls_acf_sth_sotoa_i_sssf_survivor","ls_acf_sth_sotoa_i_sssf_aa_specialist","ls_acf_sth_sotoa_i_sssf_asst_aa_specialist","ls_acf_sth_sotoa_i_sssf_at_specialist","ls_acf_sth_sotoa_i_sssf_asst_at_specialist","ls_acf_sth_sotoa_i_sssf_ammobearer","ls_acf_sth_sotoa_i_sssf_machinegunner","ls_acf_sth_sotoa_i_sssf_asst_machinegunner","ls_acf_sth_sotoa_i_sssf_grenadier","ls_acf_sth_sotoa_i_sssf_marksman","ls_acf_sth_sotoa_i_sssf_sniper","ls_acf_sth_sotoa_i_sssf_gunner_tow","ls_acf_sth_sotoa_i_sssf_asst_gunner_tow","ls_acf_sth_sotoa_i_sssf_gunner_m252","ls_acf_sth_sotoa_i_sssf_asst_gunner_m252","ls_acf_sth_sotoa_i_sssf_medic","ls_acf_sth_sotoa_i_sssf_explosive_specialist","ls_acf_sth_sotoa_i_sssf_engineer","ls_acf_sth_sotoa_i_sssf_mine_specialist","ls_acf_sth_sotoa_i_sssf_radio_operator","ls_acf_sth_sotoa_i_sssf_teamleader","ls_acf_sth_sotoa_i_sssf_squadleader","ls_acf_sth_sotoa_i_sssf_officer","ls_acf_sth_sotoa_i_sssf_helicopter_pilot","ls_acf_sth_sotoa_i_sssf_pilot","ls_acf_sth_sotoa_i_sssf_crewman","ls_acf_sth_sotoa_i_sssf_tankman","ls_acf_sth_sotoa_i_sssf_internals_rifleman","ls_acf_sth_sotoa_i_sssf_internals_scout","ls_acf_sth_sotoa_i_sssf_internals_patrolman","ls_acf_sth_sotoa_i_sssf_internals_tracker","ls_acf_sth_sotoa_i_sssf_internals_medic","ls_acf_sth_sotoa_i_sssf_internals_engineer","ls_acf_sth_sotoa_i_sssf_internals_machinegunner","ls_acf_sth_sotoa_i_sssf_internals_asst_machinegunner","ls_acf_sth_sotoa_i_sssf_internals_grenadier","ls_acf_sth_sotoa_i_sssf_internals_sharpshooter","ls_acf_sth_sotoa_i_sssf_internals_radioman","ls_acf_sth_sotoa_i_sssf_internals_leader"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","CUP_Creatures_People_Core"};
		author = "(S)Zumek";
	};
};
class CfgFactionClasses
{
	access = 1;
	class ls_acf_i_sth_sotoa_security_forces
	{
		displayName = "[ACF] South Sotoan Security Forces";
		priority = 0;
		side = 2;
		icon = "\ls_acf_sth_sotoa_core\misc\data\ls_acf_sth_sotoa_flag_co.paa";
		flag = "\ls_acf_sth_sotoa_core\misc\data\ls_acf_sth_sotoa_flag_co.paa";
	};
};
class CfgEditorSubcategories
{
	class ls_acf_i_sth_sssf_internals
	{
		displayName = "Men (Internals)";
	};
	class ls_acf_i_sth_sssf_planes_aces
	{
		displayName = "Planes (ACES)";
	};
};
class CfgVehicles
{
	class I_Soldier_base_F;
	class ls_acf_sth_sotoa_i_sssf_soldier_base: I_Soldier_base_F
	{
		scope = 1;
		side = 2;
		scopecurator = 0;
		identityTypes[] = {"LanguageFRE_F","Head_Asian","Head_TK","G_NATO_default"};
		genericNames = "TanoanMen";
		editorSubcategory = "EdSubcat_Personnel";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		Icon = "iconMan";
		role = "Rifleman";
	};
	class ls_acf_sth_sotoa_i_sssf_soldier_base_internals: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		editorSubcategory = "ls_acf_i_sth_sssf_internals";
	};
	class ls_acf_sth_sotoa_i_sssf_rifleman: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		backpack = "ls_acf_sthsotoa_b_trrig_rifleman_asspack_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_rifleman.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_rifleman_at: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		icon = "iconManAT";
		role = "MissileSpecialist";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_b_trrig_rifleman_light_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_rifleman_at.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","CUP_launch_APILAS_Loaded","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","CUP_launch_APILAS_Loaded","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_APILAS_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_APILAS_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_unarmed: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Unarmed)";
		role = "Rifleman";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_tshirt";
		backpack = "ls_acf_sth_sotoa_b_troopie_rrig_radio_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_unarmed.jpg";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"Chemlight_green","Chemlight_green"};
		linkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_booniehat_sscm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_booniehat_sscm","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_survivor: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Survivor";
		role = "Rifleman";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_tshirt";
		backpack = "";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_survivor.jpg";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_aa_specialist: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "AA specialist";
		icon = "iconManAT";
		role = "MissileSpecialist";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		backpack = "ls_acf_sthsotoa_backpack_aa";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_aa_specialist.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","launch_B_Titan_F","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","launch_B_Titan_F","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","Titan_AA"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","Titan_AA"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_tan","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_tan","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_asst_aa_specialist: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. AA specialist";
		role = "Assistant";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_backpack_aa";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_asst_aa_specialist.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_booniehat_tan_hs","CUP_G_ESS_KHK_Scarf_Tan_GPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_booniehat_tan_hs","CUP_G_ESS_KHK_Scarf_Tan_GPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_at_specialist: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT specialist";
		icon = "iconManAT";
		role = "MissileSpecialist";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		backpack = "ls_acf_sthsotoa_backpack_at";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_at_specialist.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","CUP_launch_M47","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","CUP_launch_M47","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_Dragon_EP1_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_Dragon_EP1_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_asst_at_specialist: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. AT specialist";
		role = "Assistant";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_backpack_at";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_asst_at_specialist.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_booniehat_sscm","CUP_G_Tan_Scarf_Shades_GPSCombo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_booniehat_sscm","CUP_G_Tan_Scarf_Shades_GPSCombo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_ammobearer: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer";
		role = "Assistant";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_backpack_ammobearer";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_ammobearer.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_booniehat_tan_hs","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_booniehat_tan_hs","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_machinegunner: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		role = "MachineGunner";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_b_rrig_mg_tan";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_machinegunner.jpg";
		weapons[] = {"CUP_lmg_FNMAG_RIS_modern","CUP_hgun_CZ75","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_FNMAG_RIS_modern","CUP_hgun_CZ75","Throw","Put"};
		magazines[] = {"SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","HandGrenade","HandGrenade","CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","HandGrenade","HandGrenade","CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_asst_machinegunner: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Machine Gunner";
		role = "Assistant";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_tshirt";
		backpack = "ls_acf_sthsotoa_b_rrig_mg_tan";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_asst_machinegunner.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_kaapi_ssbm","G_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_kaapi_ssbm","G_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_grenadier: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		role = "Grenadier";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_b_rrig_gl_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_grenadier.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_m203_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_m203_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_1Rnd_HEDP_M203"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_1Rnd_HEDP_M203"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_marksman: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		role = "Marksman";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_b_trrig_rifleman_light_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_marksman.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_dmr_mrksm","CUP_hgun_CZ75","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_dmr_mrksm","CUP_hgun_CZ75","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_booniehat_sscm_hs","CUP_G_Tan_Scarf_GPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_booniehat_sscm_hs","CUP_G_Tan_Scarf_GPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_sniper: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sniper";
		role = "Marksman";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		backpack = "ls_acf_sthsotoa_b_rrig_sniper_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_sniper.jpg";
		weapons[] = {"CUP_srifle_CZ750_SOS_bipod","CUP_hgun_CZ75","Rangefinder","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_CZ750_SOS_bipod","CUP_hgun_CZ75","Rangefinder","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750_Tracer","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750","CUP_10Rnd_762x51_CZ750_Tracer","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_booniehat_brown_hs","CUP_G_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_booniehat_brown_hs","CUP_G_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_gunner_tow: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Gunner (TOW)";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "CUP_B_Tow_Gun_Bag";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_gunner_tow.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_kaapi_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_kaapi_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_asst_gunner_tow: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Gunner (TOW)";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_tshirt";
		backpack = "CUP_B_TOW_Tripod_Bag";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_asst_gunner_tow.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_booniehat_tan","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_booniehat_tan","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_gunner_m252: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Gunner (M252)";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_tshirt";
		backpack = "CUP_B_M252_Gun_Bag";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_gunner_m252.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_booniehat_sscm","CUP_FR_NeckScarf2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_booniehat_sscm","CUP_FR_NeckScarf2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_asst_gunner_m252: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Gunner (M252)";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		backpack = "CUP_B_M252_Bipod_Bag";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_asst_gunner_m252.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_modele85_tan","CUP_FR_NeckScarf2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_modele85_tan","CUP_FR_NeckScarf2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_medic: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_b_rrig_medic_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_medic.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_tan","CUP_G_ESS_KHK_Scarf_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_tan","CUP_G_ESS_KHK_Scarf_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_explosive_specialist: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_backpack_exp";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_explosive_specialist.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_booniehat_tan_hs","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_booniehat_tan_hs","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_engineer: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_b_rrig_engineer_tan";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_engineer.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_RGR","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_mine_specialist: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mine Specialist";
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		backpack = "ls_acf_sthsotoa_backpack_minespec";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_mine_specialist.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_radio_operator: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Radio Operator";
		role = "RadioOperator";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		backpack = "ls_acf_sth_sotoa_b_radiobag_sscm";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_radio_operator.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_cco","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_teamleader: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		role = "Grenadier";
		icon = "iconManLeader";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		backpack = "ls_acf_sthsotoa_b_rrig_gl_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_teamleader.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_m203_cco","CUP_hgun_CZ75","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_m203_cco","CUP_hgun_CZ75","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","SmokeShellBlue","SmokeShellBlue","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","SmokeShellBlue","SmokeShellBlue","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_ESS_KHK_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_squadleader: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		icon = "iconManLeader";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_b_rrig_riflm_full_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_squadleader.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","CUP_hgun_CZ75","Binocular","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","CUP_hgun_CZ75","Binocular","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","SmokeShellBlue","SmokeShellBlue","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","SmokeShellBlue","SmokeShellBlue","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_Tan_Scarf_Shades_GPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA_CB","ls_acf_sth_sotoa_h_modele85_brown","CUP_G_Tan_Scarf_Shades_GPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_officer: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Officer";
		icon = "iconManOfficer";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_b_rrig_riflm_full_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_officer.jpg";
		weapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","CUP_hgun_CZ75","Binocular","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_sa58_osw_grp_cco","CUP_hgun_CZ75","Binocular","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","SmokeShellBlue","SmokeShellBlue","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","SmokeShellBlue","SmokeShellBlue","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_kaapi_white","CUP_G_Tan_Scarf_Shades_GPSCombo","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_MBSS_PACA2_CB","ls_acf_sth_sotoa_h_kaapi_white","CUP_G_Tan_Scarf_Shades_GPSCombo","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_helicopter_pilot: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Pilot";
		role = "Crewman";
		modelSides[] = {0,1,2,3};
		uniformClass = "ls_acf_sth_sotoa_u_coveralls_brown";
		backpack = "";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_helicopter_pilot.jpg";
		weapons[] = {"CUP_hgun_CZ75","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_CZ75","Throw","Put"};
		magazines[] = {"Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","SmokeShell","SmokeShellGreen","SmokeShellBlue","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","SmokeShell","SmokeShellGreen","SmokeShellBlue","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"CUP_V_B_PilotVest","CUP_H_SPH4_khaki_visor","CUP_FR_NeckScarf3","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7_Hide"};
		respawnLinkedItems[] = {"CUP_V_B_PilotVest","CUP_H_SPH4_khaki_visor","CUP_FR_NeckScarf3","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7_Hide"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_pilot: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Pilot";
		role = "Pilot";
		modelSides[] = {0,1,2,3};
		uniformClass = "ls_acf_sth_sotoa_u_coveralls_brown";
		backpack = "B_Parachute";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_pilot.jpg";
		weapons[] = {"CUP_hgun_CZ75","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_CZ75","Throw","Put"};
		magazines[] = {"Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","I_IR_Grenade","I_IR_Grenade","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","I_IR_Grenade","I_IR_Grenade","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"CUP_V_B_PilotVest","H_PilotHelmetFighter_I","CUP_FR_NeckScarf5","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"CUP_V_B_PilotVest","H_PilotHelmetFighter_I","CUP_FR_NeckScarf5","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_crewman: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		role = "Crewman";
		modelSides[] = {0,1,2,3};
		uniformClass = "ls_acf_sth_sotoa_u_coveralls_black";
		backpack = "";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_crewman.jpg";
		weapons[] = {"CUP_hgun_CZ75","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_CZ75","Throw","Put"};
		magazines[] = {"Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","SmokeShell","SmokeShellBlue","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","SmokeShell","SmokeShellBlue","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"ls_acf_sth_sotoa_h_modele85_black","CUP_G_Oakleys_Embr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ls_acf_sth_sotoa_h_modele85_black","CUP_G_Oakleys_Embr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_tankman: ls_acf_sth_sotoa_i_sssf_soldier_base
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Tankman";
		role = "Crewman";
		modelSides[] = {0,1,2,3};
		uniformClass = "ls_acf_sth_sotoa_u_coveralls_crewman";
		backpack = "";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_tankman.jpg";
		weapons[] = {"CUP_hgun_CZ75","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_CZ75","Throw","Put"};
		magazines[] = {"Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","SmokeShell","SmokeShellBlue","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","SmokeShell","SmokeShellBlue","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"ls_acf_sth_sotoa_h_modele85_black","None","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ls_acf_sth_sotoa_h_modele85_black","None","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_rifleman: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_rifleman.jpg";
		weapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_B_RRV_Scout_CB","ls_acf_sth_sotoa_h_kaapi_tan","CUP_FR_NeckScarf2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_Scout_CB","ls_acf_sth_sotoa_h_kaapi_tan","CUP_FR_NeckScarf2","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_scout: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Scout";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_tshirt";
		backpack = "";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_scout.jpg";
		weapons[] = {"CUP_arifle_FNFAL5062","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5062","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_B_RRV_Officer_CB","ls_acf_sth_sotoa_h_booniehat_brown","CUP_G_PMC_RadioHeadset_Glasses_Ember","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_Officer_CB","ls_acf_sth_sotoa_h_booniehat_brown","CUP_G_PMC_RadioHeadset_Glasses_Ember","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_patrolman: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Patrolman";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_patrolman.jpg";
		weapons[] = {"CUP_arifle_FNFAL5061_wooden","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5061_wooden","Binocular","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShellRed","SmokeShellPurple","SmokeShellBlue","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShellRed","SmokeShellPurple","SmokeShellBlue","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_B_RRV_Scout3","ls_acf_sth_sotoa_h_booniehat_tan","CUP_TK_NeckScarf","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_Scout3","ls_acf_sth_sotoa_h_booniehat_tan","CUP_TK_NeckScarf","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_tracker: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Tracker";
		camouflage = 1.6;
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		backpack = "";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_tracker.jpg";
		weapons[] = {"CUP_arifle_FNFAL5062","Binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5062","Binocular","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_B_RRV_TL_CB","ls_acf_sth_sotoa_h_booniehat_sscm","CUP_G_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_TL_CB","ls_acf_sth_sotoa_h_booniehat_sscm","CUP_G_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_medic: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		backpack = "ls_acf_sthsotoa_b_rrig_medic_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_medic.jpg";
		weapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_B_RRV_Medic_CB","ls_acf_sth_sotoa_h_kaapi_ssbm","CUP_G_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_Medic_CB","ls_acf_sth_sotoa_h_kaapi_ssbm","CUP_G_Scarf_Face_Tan","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_engineer: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_b_rrig_engineer_tan";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_engineer.jpg";
		weapons[] = {"CUP_arifle_FNFAL5062","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5062","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_B_RRV_Scout2_CB","ls_acf_sth_sotoa_h_booniehat_brown_hs","CUP_G_ESS_KHK_Scarf_Tan_GPS","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_Scout2_CB","ls_acf_sth_sotoa_h_booniehat_brown_hs","CUP_G_ESS_KHK_Scarf_Tan_GPS","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_machinegunner: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Machine Gunner";
		icon = "iconManMG";
		role = "MachineGunner";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_b_rrig_mg59_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_machinegunner.jpg";
		weapons[] = {"CUP_lmg_UK59","CUP_hgun_CZ75","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_UK59","CUP_hgun_CZ75","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_50Rnd_UK59_762x54R_Tracer","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"CUP_V_B_RRV_MG","ls_acf_sth_sotoa_h_kaapi_brown","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_MG","ls_acf_sth_sotoa_h_kaapi_brown","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_asst_machinegunner: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Machine Gunner";
		role = "Assistant";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_tshirt";
		backpack = "ls_acf_sthsotoa_b_rrig_mg59_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_asst_machinegunner.jpg";
		weapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_B_RRV_Scout_CB","ls_acf_sth_sotoa_h_booniehat_tan","CUP_FR_NeckScarf2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_Scout_CB","ls_acf_sth_sotoa_h_booniehat_tan","CUP_FR_NeckScarf2","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_grenadier: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		role = "Grenadier";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sthsotoa_b_rrig_gl_brown";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_grenadier.jpg";
		weapons[] = {"CUP_glaunch_M79","CUP_hgun_CZ75","Throw","Put"};
		respawnWeapons[] = {"CUP_glaunch_M79","CUP_hgun_CZ75","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HE_M203","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HE_M203","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"CUP_V_B_RRV_Scout2_CB","ls_acf_sth_sotoa_h_kaapi_brown","CUP_G_ESS_KHK_Scarf_Face_Tan_GPS","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_Scout2_CB","ls_acf_sth_sotoa_h_kaapi_brown","CUP_G_ESS_KHK_Scarf_Face_Tan_GPS","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_sharpshooter: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sharpshooter";
		role = "Marksman";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_tshirt";
		backpack = "";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_sharpshooter.jpg";
		weapons[] = {"ls_acf_sth_sotoa_falwood_mrksm","CUP_hgun_CZ75","Throw","Put"};
		respawnWeapons[] = {"ls_acf_sth_sotoa_falwood_mrksm","CUP_hgun_CZ75","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75"};
		linkedItems[] = {"CUP_V_B_RRV_Scout3","CUP_H_PMC_Cap_Back_PRR_Tan","G_Bandanna_aviator","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_Scout3","CUP_H_PMC_Cap_Back_PRR_Tan","G_Bandanna_aviator","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_radioman: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Radioman";
		role = "RadioOperator";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		backpack = "ls_acf_sth_sotoa_b_radiobag_sscm";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_radioman.jpg";
		weapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5061_wooden","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_B_RRV_Scout3","ls_acf_sth_sotoa_h_booniehat_tan_hs","CUP_FR_NeckScarf2","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_Scout3","ls_acf_sth_sotoa_h_booniehat_tan_hs","CUP_FR_NeckScarf2","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_i_sssf_internals_leader: ls_acf_sth_sotoa_i_sssf_soldier_base_internals
	{
		author = "(S)Zumek";
		scope = 2;
		scopeCurator = 2;
		displayName = "Leader";
		icon = "iconManLeader";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		backpack = "";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_sssf_internals_leader.jpg";
		weapons[] = {"CUP_arifle_FNFAL5062","CUP_hgun_CZ75","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_FNFAL5062","CUP_hgun_CZ75","Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","CUP_20Rnd_762x51_FNFAL_M"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","Chemlight_green","Chemlight_green","CUP_16Rnd_9x19_cz75","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_16Rnd_9x19_cz75","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","CUP_20Rnd_762x51_FNFAL_M"};
		linkedItems[] = {"CUP_V_B_RRV_TL_CB","ls_acf_sth_sotoa_h_booniehat_tan_hs","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_B_RRV_TL_CB","ls_acf_sth_sotoa_h_booniehat_tan_hs","CUP_G_Tan_Scarf_Shades","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_full_brown;
	class ls_acf_sthsotoa_b_rrig_riflm_full_brown: ls_acf_sth_sotoa_b_troopie_rrig_full_brown
	{
		scope = 1;
		class TransportMagazines
		{
			class xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 2;
			};
		};
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_light_brown;
	class ls_acf_sthsotoa_b_trrig_rifleman_light_brown: ls_acf_sth_sotoa_b_troopie_rrig_light_brown
	{
		scope = 1;
		class TransportMagazines
		{
			class xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 2;
			};
		};
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_asspack_brown;
	class ls_acf_sthsotoa_b_trrig_rifleman_asspack_brown: ls_acf_sth_sotoa_b_troopie_rrig_asspack_brown
	{
		scope = 1;
		class TransportMagazines
		{
			class xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 2;
			};
		};
	};
	class ls_acf_sthsotoa_b_rrig_mg59_brown: ls_acf_sth_sotoa_b_troopie_rrig_asspack_brown
	{
		scope = 1;
		class TransportMagazines
		{
			class xx_CUP_50Rnd_UK59_762x54R_Tracer
			{
				magazine = "CUP_50Rnd_UK59_762x54R_Tracer";
				count = 3;
			};
		};
	};
	class ls_acf_sthsotoa_b_rrig_medic_brown: ls_acf_sth_sotoa_b_troopie_rrig_asspack_brown
	{
		scope = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_MediKit
			{
				name = "MediKit";
				count = 2;
			};
		};
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_full_tan;
	class ls_acf_sthsotoa_b_rrig_mg_tan: ls_acf_sth_sotoa_b_troopie_rrig_full_tan
	{
		scope = 1;
		class TransportMagazines
		{
			class xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 2;
			};
		};
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_radio_brown;
	class ls_acf_sthsotoa_b_rrig_gl_brown: ls_acf_sth_sotoa_b_troopie_rrig_radio_brown
	{
		scope = 1;
		class TransportMagazines
		{
			class xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class xx_CUP_1Rnd_Smoke_M203
			{
				magazine = "CUP_1Rnd_Smoke_M203";
				count = 2;
			};
			class xx_CUP_1Rnd_SmokeGreen_M203
			{
				magazine = "CUP_1Rnd_SmokeGreen_M203";
				count = 2;
			};
			class xx_CUP_FlareWhite_M203
			{
				magazine = "CUP_FlareWhite_M203";
				count = 2;
			};
		};
	};
	class ls_acf_sthsotoa_b_rrig_sniper_brown: ls_acf_sth_sotoa_b_troopie_rrig_radio_brown
	{
		scope = 1;
		class TransportMagazines
		{
			class xx_CUP_10Rnd_762x51_CZ750
			{
				magazine = "CUP_10Rnd_762x51_CZ750";
				count = 4;
			};
		};
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_asspack_tan;
	class ls_acf_sthsotoa_b_rrig_engineer_tan: ls_acf_sth_sotoa_b_troopie_rrig_asspack_tan
	{
		scope = 1;
		class TransportMagazines
		{
			class xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_Kitbag_cbr;
	class ls_acf_sthsotoa_backpack_aa: B_Kitbag_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class ls_acf_sthsotoa_backpack_at: B_Kitbag_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class xx_CUP_Dragon_EP1_M
			{
				magazine = "CUP_Dragon_EP1_M";
				count = 1;
			};
		};
	};
	class ls_acf_sthsotoa_backpack_ammobearer: B_Kitbag_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 12;
			};
			class xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 2;
			};
			class xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
			class xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 2;
			};
			class xx_Chemlight_green
			{
				magazine = "Chemlight_green";
				count = 4;
			};
		};
	};
	class ls_acf_sthsotoa_backpack_exp: B_Kitbag_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_Carryall_cbr;
	class ls_acf_sthsotoa_backpack_minespec: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_APERSMine_Range_Mag
			{
				magazine = "APERSMine_Range_Mag";
				count = 2;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 2;
			};
			class _xx_APERSMineDispenser_Mag
			{
				magazine = "APERSMineDispenser_Mag";
				count = 2;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine = "APERSTripMine_Wire_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
};
class CfgWeapons
{
	class CUP_arifle_DSA_SA58;
	class ls_acf_sth_sotoa_sa58_cco: CUP_arifle_DSA_SA58
	{
		author = "(S)Zumek";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_CompM2_low";
			};
		};
	};
	class CUP_arifle_DSA_SA58_OSW;
	class ls_acf_sth_sotoa_sa58_osw_cco: CUP_arifle_DSA_SA58_OSW
	{
		author = "(S)Zumek";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_CompM2_low";
			};
		};
	};
	class CUP_arifle_DSA_SA58_OSW_VFG;
	class ls_acf_sth_sotoa_sa58_osw_grp_cco: CUP_arifle_DSA_SA58_OSW_VFG
	{
		author = "(S)Zumek";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_CompM2_low";
			};
		};
	};
	class CUP_arifle_DSA_SA58_OSW_M203;
	class ls_acf_sth_sotoa_sa58_osw_m203_cco: CUP_arifle_DSA_SA58_OSW_M203
	{
		author = "(S)Zumek";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_CompM2_low";
			};
		};
	};
	class CUP_arifle_DSA_SA58_DMR;
	class ls_acf_sth_sotoa_sa58_dmr_mrksm: CUP_arifle_DSA_SA58_DMR
	{
		author = "(S)Zumek";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "CUP_optic_AIMM_M68_BLK";
			};
			class LinkedItemsBipod
			{
				slot = "CUP_PicatinnyUnderMount";
				item = "CUP_bipod_VLTOR_Modpod_black";
			};
		};
	};
	class CUP_arifle_FNFAL5061_wooden_railed;
	class ls_acf_sth_sotoa_falwood_mrksm: CUP_arifle_FNFAL5061_wooden_railed
	{
		author = "(S)Zumek";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_SOS";
			};
		};
	};
};
class cfgMods
{
	author = "(S) Zumek";
	timepacked = "1768515268";
};
