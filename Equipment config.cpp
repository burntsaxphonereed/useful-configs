////////////////////////////////////////////////////////////////////
//DeRap: equipment\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Tue Feb 10 21:45:17 2026 : 'file' last modified on Thu Jan 15 16:14:28 2026
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ls_acf_sth_sotoa_equipment
	{
		name = "ACF | South Sotoa | Equipment";
		units[] = {"ls_acf_sth_sotoa_i_combatuniform_sscm","ls_acf_sth_sotoa_i_combatuniform_sscm_rolled","ls_acf_sth_sotoa_i_combatuniform_sscm_tshirt","ls_acf_sth_sotoa_i_coveralls_brown","ls_acf_sth_sotoa_i_coveralls_black","ls_acf_sth_sotoa_i_coveralls_crewman","ls_acf_sth_sotoa_b_troopie_rrig_full_tan","ls_acf_sth_sotoa_b_troopie_rrig_radio_tan","ls_acf_sth_sotoa_b_troopie_rrig_asspack_tan","ls_acf_sth_sotoa_b_troopie_rrig_light_tan","ls_acf_sth_sotoa_b_troopie_rrig_full_brown","ls_acf_sth_sotoa_b_troopie_rrig_radio_brown","ls_acf_sth_sotoa_b_troopie_rrig_asspack_brown","ls_acf_sth_sotoa_b_troopie_rrig_light_brown","ls_acf_sth_sotoa_b_radiobag_sscm"};
		weapons[] = {"ls_acf_sth_sotoa_u_combatuniform_sscm","ls_acf_sth_sotoa_u_combatuniform_sscm_rolled","ls_acf_sth_sotoa_u_combatuniform_sscm_tshirt","ls_acf_sth_sotoa_u_coveralls_brown","ls_acf_sth_sotoa_v_troopie_rrig_full_tan","ls_acf_sth_sotoa_v_troopie_rrig_radio_tan","ls_acf_sth_sotoa_v_troopie_rrig_asspack_tan","ls_acf_sth_sotoa_v_troopie_rrig_light_tan","ls_acf_sth_sotoa_v_troopie_rrig_full_brown","ls_acf_sth_sotoa_v_troopie_rrig_radio_brown","ls_acf_sth_sotoa_v_troopie_rrig_asspack_brown","ls_acf_sth_sotoa_v_troopie_rrig_light_brown","ls_acf_sth_sotoa_h_modele85_tan","ls_acf_sth_sotoa_h_modele85_brown","ls_acf_sth_sotoa_h_modele85_black","ls_acf_sth_sotoa_h_kaapi_tan","ls_acf_sth_sotoa_h_kaapi_brown","ls_acf_sth_sotoa_h_kaapi_ssbm","ls_acf_sth_sotoa_h_kaapi_white","ls_acf_sth_sotoa_h_booniehat_tan","ls_acf_sth_sotoa_h_booniehat_tan_hs","ls_acf_sth_sotoa_h_booniehat_brown","ls_acf_sth_sotoa_h_booniehat_brown_hs","ls_acf_sth_sotoa_h_booniehat_sscm","ls_acf_sth_sotoa_h_booniehat_sscm_hs","ls_acf_sth_sotoa_h_nvg_scrim_arid","ls_acf_sth_sotoa_h_nvg_scrim_arid_grass","ls_acf_sth_sotoa_h_fcw_scrim_arid","ls_acf_sth_sotoa_h_fcw_scrim_arid_grass"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","CUP_Creatures_People_Core"};
		author = "(S)Zumek";
	};
};
class CfgVehicles
{
	class Bag_Base;
	class B_RadioBag_01_base_F;
	class I_Soldier_base_F;
	class ls_acf_sth_sotoa_i_combatuniform_sscm: I_Soldier_base_F
	{
		author = "(S)zumek";
		scope = 1;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_combatuniform_sscm_co.paa"};
	};
	class I_Soldier_02_F;
	class ls_acf_sth_sotoa_i_combatuniform_sscm_rolled: I_Soldier_02_F
	{
		author = "(S)zumek";
		scope = 1;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_rolled";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_combatuniform_sscm_co.paa"};
	};
	class I_L_Uniform_01_deserter_F;
	class ls_acf_sth_sotoa_i_combatuniform_sscm_tshirt: I_L_Uniform_01_deserter_F
	{
		author = "(S)Zumek";
		scope = 1;
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass = "ls_acf_sth_sotoa_u_combatuniform_sscm_tshirt";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_combatuniform_shirt_brown_co.paa","\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_combatuniform_sscm_co.paa"};
	};
	class CUP_B_USMC_Soldier_06;
	class ls_acf_sth_sotoa_i_coveralls_brown: CUP_B_USMC_Soldier_06
	{
		author = "(S)Zumek";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_coverall.p3d";
		uniformClass = "ls_acf_sth_sotoa_u_coveralls_brown";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_coveralls_brown_co.paa","\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_coveralls_gloves_blk_co.paa"};
	};
	class ls_acf_sth_sotoa_i_coveralls_black: CUP_B_USMC_Soldier_06
	{
		author = "(S)Zumek";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_coverall.p3d";
		uniformClass = "ls_acf_sth_sotoa_u_coveralls_black";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_coveralls_black_co.paa","\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_coveralls_gloves_blk_co.paa"};
	};
	class ls_acf_sth_sotoa_i_coveralls_crewman: CUP_B_USMC_Soldier_06
	{
		author = "(S)Zumek";
		scope = 1;
		scopeCurator = 0;
		modelSides[] = {0,1,2,3};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_coverall.p3d";
		uniformClass = "ls_acf_sth_sotoa_u_coveralls_crewman";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_coveralls_black_tankmen_co.paa","\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_coveralls_gloves_blk_co.paa"};
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_full_tan: Bag_Base
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "Troopie Recon Rig (Tan)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Full.p3d";
		maximumLoad = 140;
		mass = 20;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_troopie_rrig_tan_co.paa"};
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_radio_tan: ls_acf_sth_sotoa_b_troopie_rrig_full_tan
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "Troopie Recon Rig (Tan, Radio)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Radio.p3d";
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_asspack_tan: ls_acf_sth_sotoa_b_troopie_rrig_full_tan
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "Troopie Recon Rig (Tan, Asspack)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Buttpack.p3d";
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_light_tan: ls_acf_sth_sotoa_b_troopie_rrig_full_tan
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "Troopie Recon Rig (Tan, Light)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Light.p3d";
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_full_brown: ls_acf_sth_sotoa_b_troopie_rrig_full_tan
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "Troopie Recon Rig (Brown)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Full.p3d";
		maximumLoad = 140;
		mass = 20;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_troopie_rrig_brown_co.paa"};
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_radio_brown: ls_acf_sth_sotoa_b_troopie_rrig_full_brown
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "Troopie Recon Rig (Brown, Radio)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Radio.p3d";
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_asspack_brown: ls_acf_sth_sotoa_b_troopie_rrig_full_brown
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "Troopie Recon Rig (Brown, Asspack)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Buttpack.p3d";
	};
	class ls_acf_sth_sotoa_b_troopie_rrig_light_brown: ls_acf_sth_sotoa_b_troopie_rrig_full_brown
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "Troopie Recon Rig (Brown, Light)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\smersh\CUP_Smersh_Light.p3d";
	};
	class ls_acf_sth_sotoa_b_radiobag_sscm: B_RadioBag_01_base_F
	{
		author = "(S)Zumek";
		scope = 2;
		displayName = "Radio Pack (SSCM)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_backpack_ca.paa";
		maximumLoad = 80;
		mass = 160;
		tf_dialog = "bussole_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_b_radiobag_ssbm_co.paa"};
	};
};
class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class Uniform_Base;
	class VestItem;
	class ls_acf_sth_sotoa_u_combatuniform_sscm: U_I_CombatUniform
	{
		author = "(S)zumek";
		scope = 2;
		scopecurator = 2;
		displayName = "SSSF Fatigues (SSCM)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_uniform_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_combatuniform_sscm_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "ls_acf_sth_sotoa_i_combatuniform_sscm";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_CombatUniform_shortsleeve;
	class ls_acf_sth_sotoa_u_combatuniform_sscm_rolled: U_I_CombatUniform_shortsleeve
	{
		author = "(S)zumek";
		scope = 2;
		scopecurator = 2;
		displayName = "SSSF Fatigues (SSCM, Rolled-up)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_uniform_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_combatuniform_sscm_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "ls_acf_sth_sotoa_i_combatuniform_sscm_rolled";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_CombatUniform_tshirt;
	class ls_acf_sth_sotoa_u_combatuniform_sscm_tshirt: U_I_CombatUniform_tshirt
	{
		author = "(S)zumek";
		scope = 2;
		scopecurator = 2;
		displayName = "SSSF Fatigues (SSCM, Shirt)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_uniform_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_combatuniform_shirt_brown_co.paa","\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_combatuniform_sscm_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ls_acf_sth_sotoa_i_combatuniform_sscm_tshirt";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class CUP_U_B_USMC_PilotOverall;
	class ls_acf_sth_sotoa_u_coveralls_brown: CUP_U_B_USMC_PilotOverall
	{
		author = "(S)Zumek";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "SSSF Coveralls (Brown)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_uniform_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ls_acf_sth_sotoa_i_coveralls_brown";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ls_acf_sth_sotoa_u_coveralls_black: CUP_U_B_USMC_PilotOverall
	{
		author = "(S)Zumek";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "SSSF Coveralls (Black)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_uniform_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ls_acf_sth_sotoa_i_coveralls_black";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class ls_acf_sth_sotoa_u_coveralls_crewman: CUP_U_B_USMC_PilotOverall
	{
		author = "(S)Zumek";
		scope = 2;
		allowedSlots[] = {901};
		displayName = "SSSF Crewman Coveralls (Black)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_uniform_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ls_acf_sth_sotoa_i_coveralls_crewman";
			containerClass = "Supply40";
			mass = 20;
		};
	};
	class CUP_V_RUS_Smersh_New_Full;
	class ls_acf_sth_sotoa_v_troopie_rrig_full_tan: CUP_V_RUS_Smersh_New_Full
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Troopie Recon Rig";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_troopie_rrig_tan_co.paa"};
	};
	class CUP_V_RUS_Smersh_New_Radio;
	class ls_acf_sth_sotoa_v_troopie_rrig_radio_tan: CUP_V_RUS_Smersh_New_Radio
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Troopie Recon Rig (Radio)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_troopie_rrig_tan_co.paa"};
	};
	class CUP_V_RUS_Smersh_New_Buttpack;
	class ls_acf_sth_sotoa_v_troopie_rrig_asspack_tan: CUP_V_RUS_Smersh_New_Buttpack
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Troopie Recon Rig (Asspack)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_troopie_rrig_tan_co.paa"};
	};
	class CUP_V_RUS_Smersh_New_Light;
	class ls_acf_sth_sotoa_v_troopie_rrig_light_tan: CUP_V_RUS_Smersh_New_Light
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Troopie Recon Rig (Light)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_troopie_rrig_tan_co.paa"};
	};
	class ls_acf_sth_sotoa_v_troopie_rrig_full_brown: CUP_V_RUS_Smersh_New_Full
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Troopie Recon Rig (Brown)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_troopie_rrig_brown_co.paa"};
	};
	class ls_acf_sth_sotoa_v_troopie_rrig_radio_brown: CUP_V_RUS_Smersh_New_Radio
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Troopie Recon Rig (Brown, Radio)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_troopie_rrig_brown_co.paa"};
	};
	class ls_acf_sth_sotoa_v_troopie_rrig_asspack_brown: CUP_V_RUS_Smersh_New_Buttpack
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Troopie Recon Rig (Brown, Asspack)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_troopie_rrig_brown_co.paa"};
	};
	class ls_acf_sth_sotoa_v_troopie_rrig_light_brown: CUP_V_RUS_Smersh_New_Light
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Troopie Recon Rig (Brown, Light)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_suspender_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_troopie_rrig_brown_co.paa"};
	};
	class H_HelmetCrew_I;
	class ls_acf_sth_sotoa_h_modele85_tan: H_HelmetCrew_I
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Modele 85 Helmet (Tan)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_helmet_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_modele85_co.paa"};
	};
	class ls_acf_sth_sotoa_h_modele85_brown: H_HelmetCrew_I
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Modele 85 Helmet (Brown)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_helmet_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_modele85_brown_co.paa"};
	};
	class ls_acf_sth_sotoa_h_modele85_black: H_HelmetCrew_I
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Modele 85 Helmet (Black)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_helmet_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_modele85_black_co.paa"};
	};
	class CUP_H_US_patrol_cap_OD;
	class ls_acf_sth_sotoa_h_kaapi_tan: CUP_H_US_patrol_cap_OD
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Kaapi (Tan)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_cap_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_kaapi_tan_co.paa"};
	};
	class ls_acf_sth_sotoa_h_kaapi_brown: CUP_H_US_patrol_cap_OD
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Kaapi (Brown)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_cap_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_kaapi_brown_co.paa"};
	};
	class ls_acf_sth_sotoa_h_kaapi_white: CUP_H_US_patrol_cap_OD
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Kaapi (White)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_cap_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_kaapi_white_co.paa"};
	};
	class ls_acf_sth_sotoa_h_kaapi_ssbm: CUP_H_US_patrol_cap_OD
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Kaapi (SSCM)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_cap_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_kaapi_ssbm_co.paa"};
	};
	class H_Booniehat_khk;
	class ls_acf_sth_sotoa_h_booniehat_tan: H_Booniehat_khk
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Booniehat (Tan)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_booniehat_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_booniehat_tan_co.paa"};
	};
	class H_Booniehat_khk_hs;
	class ls_acf_sth_sotoa_h_booniehat_tan_hs: H_Booniehat_khk_hs
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Booniehat (Tan, Headset)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_booniehat_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_booniehat_tan_co.paa"};
	};
	class ls_acf_sth_sotoa_h_booniehat_brown: H_Booniehat_khk
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Booniehat (Brown)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_booniehat_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_booniehat_brown_co.paa"};
	};
	class ls_acf_sth_sotoa_h_booniehat_brown_hs: H_Booniehat_khk_hs
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Booniehat (Brown, Headset)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_booniehat_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_booniehat_brown_co.paa"};
	};
	class ls_acf_sth_sotoa_h_booniehat_sscm: H_Booniehat_khk
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Booniehat (SSCM)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_booniehat_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_booniehat_ssbm_co.paa"};
	};
	class ls_acf_sth_sotoa_h_booniehat_sscm_hs: H_Booniehat_khk_hs
	{
		author = "(S)Zumek";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Booniehat (SSCM, Headset)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_booniehat_ca.paa";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_booniehat_ssbm_co.paa"};
	};
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo{};
	};
	class ls_acf_sth_sotoa_h_nvg_scrim_arid: NVGoggles
	{
		scope = 2;
		author = "(S)Zumek";
		descriptionShort = "Helmet Scrim";
		displayName = "Helmet Scrim (Arid)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_scrim_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_scrim_co.paa"};
		visionMode[] = {"Normal"};
		class ItemInfo: ItemInfo
		{
			modelOff = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"","\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_scrim_co.paa"};
			mass = 6;
		};
		class WeaponSlotsInfo
		{
			mass = 6;
		};
	};
	class ls_acf_sth_sotoa_h_nvg_scrim_arid_grass: ls_acf_sth_sotoa_h_nvg_scrim_arid
	{
		scope = 2;
		author = "(S)Zumek";
		displayName = "Helmet Scrim (Arid, Grass)";
		hiddenSelectionsTextures[] = {"","\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_scrim_grass_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_scrim_grass_co.paa"};
		};
	};
};
class cfgGlasses
{
	class None;
	class ls_acf_sth_sotoa_h_fcw_scrim_arid: None
	{
		scope = 2;
		author = "(S)Zumek";
		descriptionShort = "Helmet Scrim";
		displayName = "Helmet Scrim (Arid)";
		picture = "\ls_acf_sth_sotoa_core\misc\UI\ls_acf_sthsotoa_equprev_scrim_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_scrim_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 1;
	};
	class ls_acf_sth_sotoa_h_fcw_scrim_arid_grass: ls_acf_sth_sotoa_h_fcw_scrim_arid
	{
		scope = 2;
		author = "(S)Zumek";
		displayName = "Helmet Scrim (Arid, Grass)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"","\ls_acf_sth_sotoa_core\equipment\data\ls_acf_sth_sotoa_h_scrim_grass_co.paa"};
	};
};
class cfgMods
{
	author = "(S) Zumek";
	timepacked = "1768515268";
};
