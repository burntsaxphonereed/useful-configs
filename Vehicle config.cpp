////////////////////////////////////////////////////////////////////
//DeRap: vehicles\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Tue Feb 10 21:45:19 2026 : 'file' last modified on Thu Jan 15 16:14:28 2026
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ls_acf_sth_sotoa_vehicles
	{
		name = "ACF | South Sotoa | Vehicles";
		units[] = {"ls_acf_sth_sotoa_i_v_sssf_m151","ls_acf_sth_sotoa_i_v_sssf_m151_m2","ls_acf_sth_sotoa_i_v_sssf_pickup","ls_acf_sth_sotoa_i_v_sssf_towingtractor","ls_acf_sth_sotoa_i_v_sssf_vbtt13_m2","ls_acf_sth_sotoa_i_v_sssf_vbtt13_mk19","ls_acf_sth_sotoa_i_v_sssf_vbtt13_gc","ls_acf_sth_sotoa_i_v_sssf_vbtt13e_m2","ls_acf_sth_sotoa_i_v_sssf_ssmt","ls_acf_sth_sotoa_i_v_sssf_ssmt_ammo","ls_acf_sth_sotoa_i_v_sssf_ssmt_fuel","ls_acf_sth_sotoa_i_v_sssf_ssmt_repair","ls_acf_sth_sotoa_i_v_sssf_rm70","ls_acf_sth_sotoa_i_v_sssf_icv_m2","ls_acf_sth_sotoa_i_v_sssf_icv_mk19","ls_acf_sth_sotoa_i_v_sssf_icv_cv","ls_acf_sth_sotoa_i_v_sssf_icv_mev","ls_acf_sth_sotoa_i_v_sssf_icv_tow","ls_acf_sth_sotoa_i_v_sssf_icv_mortar","ls_acf_sth_sotoa_i_v_sssf_icv_mgs","ls_acf_sth_sotoa_i_v_sssf_wolverine_apc","ls_acf_sth_sotoa_i_v_sssf_wolverine_apc_unarmed","ls_acf_sth_sotoa_i_v_sssf_wolverine_apc_medical","ls_acf_sth_sotoa_i_v_sssf_aevbastion","ls_acf_sth_sotoa_i_v_sssf_aevzsu234","ls_acf_sth_sotoa_i_v_sssf_sa330","ls_acf_sth_sotoa_i_v_sssf_superhind","ls_acf_sth_sotoa_i_v_sssf_sa201y","ls_acf_sth_sotoa_i_v_sssf_sa201y_medevac","ls_acf_sth_sotoa_i_v_sssf_sa201y_armed","ls_acf_sth_sotoa_i_v_sssf_c130","ls_acf_sth_sotoa_i_v_sssf_c130_cargo","ls_acf_sth_sotoa_i_v_sssf_a10a","ls_acf_sth_sotoa_i_v_sssf_su34","ls_acf_sth_sotoa_i_v_sssf_jas39","ls_acf_sth_sotoa_i_v_sssf_cessna_t41","ls_acf_sth_sotoa_i_v_sssf_cessna_t41_armed","ls_acf_sth_sotoa_i_v_sssf_c47","ls_acf_sth_sotoa_i_v_sssf_ca47","ls_acf_sth_sotoa_i_v_sssf_mq9","ls_acf_sth_sotoa_i_v_lifeboat","ls_acf_sth_sotoa_i_v_assboat","ls_acf_sth_sotoa_i_v_rhib","ls_acf_sth_sotoa_i_v_rhib_m2","ls_acf_sth_sotoa_i_v_rhib_mk19","ls_acf_sth_sotoa_i_v_rhib_mk10_lst","ls_acf_sth_sotoa_i_v_frigate","ls_acf_sth_sotoa_i_t_rt3000_sam_radar","ls_acf_sth_sotoa_i_t_sampt_sam","ls_acf_sth_sotoa_i_t_l119","ls_acf_sth_sotoa_i_t_zu23","ls_acf_sth_sotoa_i_t_tow","ls_acf_sth_sotoa_i_t_spike_aa","ls_acf_sth_sotoa_i_t_m252","ls_acf_sth_sotoa_i_t_gmg","ls_acf_sth_sotoa_i_t_hmg_high","ls_acf_sth_sotoa_i_t_hmg"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","CUP_Creatures_People_Core"};
		author = "(S)Zumek";
	};
};
class AnimationSources;
class CfgVehicles
{
	class Car_F;
	class CUP_M151_base: Car_F
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_M151_hull_camo_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_M151\data\m151_canvas_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_M151\data\m151_detail_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_M151\data\m151_underbody_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_M151_wheel_camo_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_Pickup_Base: Car_F
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_pickup02_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_RG31_BASE: Car_F
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_body_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_interior2_co.paa","","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_a_ca.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_1_ca.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_serial_00_ca.paa",""};
				factions[] = {};
			};
		};
	};
	class CUP_MTVR_Base: Car_F
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body2_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_interier_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_tarp_camo_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_MTVR_Reammo_Base: CUP_MTVR_Base
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body2_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_interier_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_tarp_camo_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_MTVR_Refuel_Base: CUP_MTVR_Base
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body2_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_interier_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_fuel_camo_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_MTVR_Repair_Base: CUP_MTVR_Base
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body2_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_interier_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_repair_camo_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_StrykerBase;
	class CUP_M1126_ICV_BASE: CUP_StrykerBase
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_alfa_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_alfa_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_B_M1128_MGS_Desert: CUP_StrykerBase
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_mgs_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_mgs_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_alfa_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
				factions[] = {};
			};
			class SSSF_andou
			{
				displayName = "South Sotoan Security Forces (Andou)";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_mgs_body1_andou_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_mgs_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_alfa_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_B_M1126_ICV_M2_Desert;
	class CUP_B_M1130_CV_M2_Desert: CUP_B_M1126_ICV_M2_Desert
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_command_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_B_M1126_ICV_MK19_Desert;
	class CUP_B_M1129_MC_MK19_Desert: CUP_B_M1126_ICV_MK19_Desert
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body1_mortar_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_interior1_mortar_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_B_M1135_ATGMV_Desert: CUP_StrykerBase
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_alfa_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_tow_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_command_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_B_M1133_MEV_Desert: CUP_M1126_ICV_BASE
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_medevac_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
				factions[] = {};
			};
		};
	};
	class Wheeled_APC_F;
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_hull_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_adds_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_turret_camo_co.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
				factions[] = {};
			};
			class SSSF_Med
			{
				displayName = "South Sotoan Security Forces (MEV)";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_hull_medical_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_adds_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_turret_camo_co.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_BM21_Base;
	class CUP_B_RM70_Base: CUP_BM21_Base
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_rm70_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_rm70_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_rm70_body3_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_rm70_uc_co.paa",""};
				factions[] = {};
			};
		};
	};
	class Tank_F;
	class CUP_ZSU23_Base: Tank_F
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\other\ls_acf_sthsotoa_zsu23_01_co.paa","\ls_acf_sth_sotoa_core\vehicles\other\ls_acf_sthsotoa_zsu23_02_co.paa","\ls_acf_sth_sotoa_core\vehicles\other\ls_acf_sthsotoa_zsu23_03_co.paa"};
				factions[] = {};
			};
		};
	};
	class Helicopter_Base_H;
	class CUP_SA330_Base: Helicopter_Base_H
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_puma_sssf_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_Mi24_Base;
	class CUP_MI35_TOH_Base: CUP_Mi24_Base
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_mi24superhind_01_co.paa","\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_mi24superhind_02_co.paa","\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_mi24superhind_03_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_B_UH1Y_Base: Helicopter_Base_H
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Security Forces";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_superhuey_ext_co.paa","\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_superhuey_int_co.paa"};
				factions[] = {};
			};
			class SSSF_med
			{
				displayName = "South Sotoan Security Forces (MEDEVAC)";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_superhuey_ext_medical_co.paa","\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_superhuey_int_co.paa"};
				factions[] = {};
			};
		};
	};
	class Plane_Base_F;
	class CUP_C130J_Base: Plane_Base_F
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Air Force";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_c130j_body_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_c130j_wings_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_A10_Base: Plane_Base_F
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Air Force";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_a10_Fuselage_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_a10_extras_co.paa"};
				factions[] = {};
			};
			class SSSF_Kagura
			{
				displayName = "South Sotoan Air Force (Kag)";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_a10_Fuselage_kag_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_a10_extras_co.paa"};
				factions[] = {};
			};
		};
	};
	class Plane;
	class CUP_SU34_BASE: Plane
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Air Force";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_SU34_ext1_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_SU34_ext2_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_DC3_Base: Plane_Base_F
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Air Force";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_dc3_body_01_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_dc3_body_02_co.paa"};
				factions[] = {};
			};
		};
	};
	class Plane_Fighter_04_Base_F: Plane_Base_F
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Air Force";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_gripen_ext1_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_gripen_ext2_co.paa","a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa","","",""};
				factions[] = {};
			};
		};
	};
	class cup_cessna_base: Plane_Base_F
	{
		class textureSources
		{
			class SSSF
			{
				displayName = "South Sotoan Air Force";
				author = "(S)Zumek";
				textures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_t41_body_co.paa"};
				factions[] = {};
			};
		};
	};
	class CUP_B_M151_HIL;
	class ls_acf_sth_sotoa_i_v_sssf_m151: CUP_B_M151_HIL
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "M151";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_internals_rifleman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_m151.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_M151_hull_camo_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_M151\data\m151_canvas_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_M151\data\m151_detail_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_M151\data\m151_underbody_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_M151_wheel_camo_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 1;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class CUP_B_M151_M2_HIL;
	class ls_acf_sth_sotoa_i_v_sssf_m151_m2: CUP_B_M151_M2_HIL
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "M151 (M2)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_internals_rifleman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_m151_m2.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_M151_hull_camo_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_M151\data\m151_canvas_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_M151\data\m151_detail_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_M151\data\m151_underbody_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_M151_wheel_camo_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 1;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class CUP_I_Pickup_Unarmed_PMC;
	class ls_acf_sth_sotoa_i_v_sssf_pickup: CUP_I_Pickup_Unarmed_PMC
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "Pickup";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_pickup.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_pickup02_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 1;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class CUP_C_TowingTractor_CIV;
	class ls_acf_sth_sotoa_i_v_sssf_towingtractor: CUP_C_TowingTractor_CIV
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_unarmed";
	};
	class CUP_RG31_M2;
	class ls_acf_sth_sotoa_i_v_sssf_vbtt13_m2: CUP_RG31_M2
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "VBTT-13 (HMG)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_vbtt13_m2.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_body_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_interior2_co.paa","","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_a_ca.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_1_ca.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_serial_00_ca.paa",""};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_RG31_Mk19;
	class ls_acf_sth_sotoa_i_v_sssf_vbtt13_mk19: CUP_RG31_Mk19
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "VBTT-13 (GMG)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_vbtt13_mk19.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_body_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_interior2_co.paa","","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_a_ca.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_1_ca.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_serial_00_ca.paa",""};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_RG31_M2_GC;
	class ls_acf_sth_sotoa_i_v_sssf_vbtt13_gc: CUP_RG31_M2_GC
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "VBTT-13 (GC)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_vbtt13_gc.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_body_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_interior2_co.paa","","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_a_ca.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_1_ca.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_serial_00_ca.paa",""};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_RG31E_M2;
	class ls_acf_sth_sotoa_i_v_sssf_vbtt13e_m2: CUP_RG31E_M2
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "VBTT-13E (HMG)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_vbtt13e_m2.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_body_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sth_sotoa_rg31_interior2_co.paa","","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_a_ca.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_1_ca.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_serial_00_ca.paa",""};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_B_MTVR_HIL;
	class ls_acf_sth_sotoa_i_v_sssf_ssmt: CUP_B_MTVR_HIL
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "SSMT";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_internals_rifleman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_ssmt.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body2_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_interier_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_tarp_camo_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 10;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 2;
			};
		};
	};
	class CUP_B_MTVR_Ammo_HIL;
	class ls_acf_sth_sotoa_i_v_sssf_ssmt_ammo: CUP_B_MTVR_Ammo_HIL
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "SSMT (Ammo)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_internals_rifleman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_ssmt_ammo.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body2_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_interier_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_tarp_camo_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 10;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 2;
			};
		};
	};
	class CUP_B_MTVR_Refuel_HIL;
	class ls_acf_sth_sotoa_i_v_sssf_ssmt_fuel: CUP_B_MTVR_Refuel_HIL
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "SSMT (Fuel)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_internals_rifleman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_ssmt_fuel.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body2_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_interier_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_fuel_camo_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 10;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 2;
			};
		};
	};
	class CUP_B_MTVR_Repair_HIL;
	class ls_acf_sth_sotoa_i_v_sssf_ssmt_repair: CUP_B_MTVR_Repair_HIL
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "SSMT (Repair)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_internals_rifleman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_ssmt_repair.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_body2_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_interier_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_mtvr_repair_camo_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 10;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 2;
			};
		};
	};
	class ls_acf_sth_sotoa_i_v_sssf_rm70: CUP_B_RM70_Base
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "RM-70";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_rm70.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_rm70_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_rm70_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_rm70_body3_co.paa","\ls_acf_sth_sotoa_core\vehicles\cars\ls_acf_sthsotoa_rm70_uc_co.paa",""};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 10;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
			class _xx_MediKit
			{
				name = "MediKit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 2;
			};
		};
	};
	class ls_acf_sth_sotoa_i_v_sssf_icv_m2: CUP_B_M1126_ICV_M2_Desert
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		editorSubcategory = "EdSubcat_APCs";
		displayName = "ICV (HMG)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_icv_m2.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_alfa_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_alfa_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class ls_acf_sth_sotoa_i_v_sssf_icv_mk19: CUP_B_M1126_ICV_MK19_Desert
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		editorSubcategory = "EdSubcat_APCs";
		displayName = "ICV (GMG)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_icv_mk19.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_alfa_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_alfa_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class ls_acf_sth_sotoa_i_v_sssf_icv_cv: CUP_B_M1130_CV_M2_Desert
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		editorSubcategory = "EdSubcat_APCs";
		displayName = "ICV (CV)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_icv_cv.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_command_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class ls_acf_sth_sotoa_i_v_sssf_icv_mev: CUP_B_M1133_MEV_Desert
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		editorSubcategory = "EdSubcat_APCs";
		displayName = "ICV (MEV)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_icv_mev.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_medevac_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class ls_acf_sth_sotoa_i_v_sssf_icv_tow: CUP_B_M1135_ATGMV_Desert
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		editorSubcategory = "EdSubcat_APCs";
		displayName = "ICV (TOW)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_icv_tow.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_alfa_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_tow_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_command_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class ls_acf_sth_sotoa_i_v_sssf_icv_mortar: CUP_B_M1129_MC_MK19_Desert
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		editorSubcategory = "EdSubcat_Artillery";
		displayName = "ICV (Mortar)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_icv_mortar.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body1_mortar_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_interior1_mortar_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class ls_acf_sth_sotoa_i_v_sssf_icv_mgs: CUP_B_M1128_MGS_Desert
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		editorSubcategory = "EdSubcat_Tanks";
		displayName = "ICV (MGS)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_tankman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_icv_mgs.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_mgs_body1_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_mgs_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_body2_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_alfa_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_slat_armor_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sth_sotoa_icv_default_co.paa"};
		textureList[] = {"SSSF",0.9,"SSSF_andou",0.1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class B_APC_Wheeled_01_cannon_F;
	class ls_acf_sth_sotoa_i_v_sssf_wolverine_apc: B_APC_Wheeled_01_cannon_F
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "Wolverine";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_wolverine_apc.jpg";
		textureList[] = {"SSSF",1};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_hull_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_adds_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_turret_camo_co.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class ls_acf_sth_sotoa_i_v_sssf_wolverine_apc_unarmed: B_APC_Wheeled_01_cannon_F
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "Wolverine (Unarmed)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_wolverine_apc_unarmed.jpg";
		class AnimationSources: AnimationSources
		{
			class HideTurret
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.001;
			};
		};
		textureList[] = {"SSSF",1};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_hull_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_adds_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_turret_camo_co.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class ls_acf_sth_sotoa_i_v_sssf_wolverine_apc_medical: B_APC_Wheeled_01_cannon_F
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "Wolverine (MEV)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_wolverine_apc_medical.jpg";
		supplyRadius = 10;
		attendant = 1;
		threat[] = {0,0,0};
		class AnimationSources: AnimationSources
		{
			class HideTurret
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.001;
			};
		};
		textureList[] = {"SSSF_Med",1};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_hull_medical_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_adds_camo_co.paa","\ls_acf_sth_sotoa_core\vehicles\apc\ls_acf_sthsotoa_apc_wolverine_turret_camo_co.paa","a3\Armor_F\Data\camonet_NATO_Desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa"};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_O_2S6_RU;
	class ls_acf_sth_sotoa_i_v_sssf_aevbastion: CUP_O_2S6_RU
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "AEV Bastion";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_aevbastion.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\other\ls_acf_sthsotoa_bastion_spaa_hull_co.paa","\ls_acf_sth_sotoa_core\vehicles\other\ls_acf_sthsotoa_bastion_spaa_tracks_co.paa","\ls_acf_sth_sotoa_core\vehicles\other\ls_acf_sthsotoa_bastion_spaa_turret_co.paa"};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 10;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
			class _xx_MediKit
			{
				name = "MediKit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 2;
			};
		};
	};
	class CUP_I_ZSU23_AAF;
	class ls_acf_sth_sotoa_i_v_sssf_aevzsu234: CUP_I_ZSU23_AAF
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "AEV ZSU-23-4";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_crewman";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_aevzsu234.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\other\ls_acf_sthsotoa_zsu23_01_co.paa","\ls_acf_sth_sotoa_core\vehicles\other\ls_acf_sthsotoa_zsu23_02_co.paa","\ls_acf_sth_sotoa_core\vehicles\other\ls_acf_sthsotoa_zsu23_03_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 10;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
			class _xx_MediKit
			{
				name = "MediKit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 2;
			};
		};
	};
	class CUP_B_SA330_Puma_HC2_BAF;
	class ls_acf_sth_sotoa_i_v_sssf_sa330: CUP_B_SA330_Puma_HC2_BAF
	{
		author = "(S)Zumek";
		displayName = "SA-330.G Puma";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_helicopter_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_sa330.jpg";
		hiddenSelections[] = {"_OFrP_330_skin01"};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_puma_sssf_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_O_Mi24_Mk4_CSAT_T;
	class ls_acf_sth_sotoa_i_v_sssf_superhind: CUP_O_Mi24_Mk4_CSAT_T
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "SA-335.B Superhind";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_helicopter_pilot";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_helicopter_pilot"};
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_superhind.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_mi24superhind_01_co.paa","\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_mi24superhind_02_co.paa","\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_mi24superhind_03_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_hgun_CZ75
			{
				weapon = "CUP_hgun_CZ75";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_16Rnd_9x19_cz75
			{
				magazine = "CUP_16Rnd_9x19_cz75";
				count = 10;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_Chemlight_Red
			{
				magazine = "Chemlight_Red";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_ItemGPS
			{
				name = "ItemGPS";
				count = 1;
			};
		};
		class TransportBackpacks{};
	};
	class CUP_B_UH1Y_UNA_USMC;
	class ls_acf_sth_sotoa_i_v_sssf_sa201y: CUP_B_UH1Y_UNA_USMC
	{
		author = "(S)Zumek";
		displayName = "SA-201.V Super Huey";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_helicopter_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_sa201y.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_superhuey_ext_co.paa","\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_superhuey_int_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_B_UH1Y_MEV_USMC;
	class ls_acf_sth_sotoa_i_v_sssf_sa201y_medevac: CUP_B_UH1Y_MEV_USMC
	{
		author = "(S)Zumek";
		displayName = "SA-201.V Super Huey (MEDEVAC)";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_helicopter_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_sa201y_medevac.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_superhuey_ext_medical_co.paa","\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_superhuey_int_co.paa"};
		textureList[] = {"SSSF_med",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_B_UH1Y_Gunship_Dynamic_USMC;
	class ls_acf_sth_sotoa_i_v_sssf_sa201y_armed: CUP_B_UH1Y_Gunship_Dynamic_USMC
	{
		author = "(S)Zumek";
		displayName = "SA-201.V Super Huey (Armed)";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_helicopter_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_sa201y_armed.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_superhuey_ext_co.paa","\ls_acf_sth_sotoa_core\vehicles\helicopters\ls_acf_sthsotoa_superhuey_int_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_I_C130J_RACS;
	class ls_acf_sth_sotoa_i_v_sssf_c130: CUP_I_C130J_RACS
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "C-130J";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_c130.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_c130j_body_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_c130j_wings_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_Chemlight_Red
			{
				magazine = "Chemlight_Red";
				count = 2;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 16;
			};
		};
	};
	class CUP_I_C130J_Cargo_RACS;
	class ls_acf_sth_sotoa_i_v_sssf_c130_cargo: CUP_I_C130J_Cargo_RACS
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "C-130J (VIV)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_c130_cargo.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_c130j_body_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_c130j_wings_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_Chemlight_Red
			{
				magazine = "Chemlight_Red";
				count = 2;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 16;
			};
		};
	};
	class CUP_B_A10_DYN_USA;
	class ls_acf_sth_sotoa_i_v_sssf_a10a: CUP_B_A10_DYN_USA
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "A-10A Thunderbolt II";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_a10a.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_a10_Fuselage_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_a10_extras_co.paa"};
		textureList[] = {"SSSF",1};
	};
	class CUP_O_SU34_RU;
	class ls_acf_sth_sotoa_i_v_sssf_su34: CUP_O_SU34_RU
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "SU-34";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_su34.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_SU34_ext1_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_SU34_ext2_co.paa"};
		textureList[] = {"SSSF",1};
	};
	class I_Plane_Fighter_04_F;
	class ls_acf_sth_sotoa_i_v_sssf_jas39: I_Plane_Fighter_04_F
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "JAS-39";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_jas39.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_gripen_ext1_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_gripen_ext2_co.paa","a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa","","",""};
		textureList[] = {"SSSF",1};
	};
	class cup_cessna_t41_base;
	class ls_acf_sth_sotoa_i_v_sssf_cessna_t41: cup_cessna_t41_base
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "Cessna T-41";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_cessna_t41.jpg";
		textureList[] = {"SSSF",1};
	};
	class cup_cessna_t41_armed_base;
	class ls_acf_sth_sotoa_i_v_sssf_cessna_t41_armed: cup_cessna_t41_armed_base
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "Cessna T-41 (Armed)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_cessna_t41_armed.jpg";
		textureList[] = {"SSSF",1};
	};
	class CUP_O_C47_SLA;
	class ls_acf_sth_sotoa_i_v_sssf_c47: CUP_O_C47_SLA
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "C-47";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_helicopter_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_c47.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_dc3_body_01_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_dc3_body_02_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_Chemlight_Red
			{
				magazine = "Chemlight_Red";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_MediKit
			{
				name = "MediKit";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 20;
			};
		};
	};
	class CUP_B_AC47_Spooky_USA;
	class ls_acf_sth_sotoa_i_v_sssf_ca47: CUP_B_AC47_Spooky_USA
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "C-47 (Gunship)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_helicopter_pilot";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_ca47.jpg";
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_dc3_body_01_co.paa","\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_ssaf_dc3_body_02_co.paa"};
		textureList[] = {"SSSF",1};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_Chemlight_Red
			{
				magazine = "Chemlight_Red";
				count = 2;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 4;
			};
		};
	};
	class CUP_B_USMC_DYN_MQ9;
	class ls_acf_sth_sotoa_i_v_sssf_mq9: CUP_B_USMC_DYN_MQ9
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		displayName = "MQ-9 Reaper";
		crew = "I_UAV_AI";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_v_sssf_mq9.jpg";
		typicalCargo[] = {"I_UAV_AI"};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\planes\ls_acf_sthsotoa_mq9_predator_co.paa"};
	};
	class B_Lifeboat;
	class ls_acf_sth_sotoa_i_v_lifeboat: B_Lifeboat
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_unarmed";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_unarmed"};
	};
	class B_Boat_Transport_01_F;
	class ls_acf_sth_sotoa_i_v_assboat: B_Boat_Transport_01_F
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
	};
	class I_C_Boat_Transport_02_F;
	class ls_acf_sth_sotoa_i_v_rhib: I_C_Boat_Transport_02_F
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
	};
	class CUP_B_RHIB_USMC;
	class ls_acf_sth_sotoa_i_v_rhib_m2: CUP_B_RHIB_USMC
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "RHIB (HMG)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_B_RHIB2Turret_USMC;
	class ls_acf_sth_sotoa_i_v_rhib_mk19: CUP_B_RHIB2Turret_USMC
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "RHIB (GMG)";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_B_MK10_GB;
	class ls_acf_sth_sotoa_i_v_rhib_mk10_lst: CUP_B_MK10_GB
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
		class TransportWeapons
		{
			class _xx_CUP_arifle_DSA_SA58_OSW
			{
				weapon = "CUP_arifle_DSA_SA58_OSW";
				count = 2;
			};
			class _xx_CUP_launch_APILAS_Loaded
			{
				weapon = "CUP_launch_APILAS_Loaded";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_FNFAL_M
			{
				magazine = "CUP_20Rnd_762x51_FNFAL_M";
				count = 20;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M";
				count = 4;
			};
			class _xx_CUP_1Rnd_HEDP_M203
			{
				magazine = "CUP_1Rnd_HEDP_M203";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
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
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_cbr
			{
				backpack = "B_Kitbag_cbr";
				count = 4;
			};
		};
	};
	class CUP_I_Frigate_RACS;
	class ls_acf_sth_sotoa_i_v_frigate: CUP_I_Frigate_RACS
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_unarmed";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_unarmed"};
	};
	class O_Radar_System_02_F;
	class ls_acf_sth_sotoa_i_t_rt3000_sam_radar: O_Radar_System_02_F
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "RT300 Radar";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "I_UAV_AI";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_t_rt3000_sam_radar.jpg";
		typicalCargo[] = {"I_UAV_AI"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\turrets\ls_acf_sthsotoa_Radar_system_02_01_CO.paa","\ls_acf_sth_sotoa_core\vehicles\turrets\ls_acf_sthsotoa_Radar_system_02_02_CO.paa"};
	};
	class O_SAM_System_04_F;
	class ls_acf_sth_sotoa_i_t_sampt_sam: O_SAM_System_04_F
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		displayName = "SAMP/T";
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "I_UAV_AI";
		editorPreview = "\ls_acf_sth_sotoa_core\misc\UI\unitpreviews\ls_acf_sth_sotoa_i_t_sampt_sam.jpg";
		typicalCargo[] = {"I_UAV_AI"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\ls_acf_sth_sotoa_core\vehicles\turrets\ls_acf_sthsotoa_sampt_sam_04_01_co.paa","\ls_acf_sth_sotoa_core\vehicles\turrets\ls_acf_sthsotoa_sampt_sam_04_02_co.paa"};
	};
	class CUP_B_M119_USMC;
	class ls_acf_sth_sotoa_i_t_l119: CUP_B_M119_USMC
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
	};
	class CUP_I_ZU23_NAPA;
	class ls_acf_sth_sotoa_i_t_zu23: CUP_I_ZU23_NAPA
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
	};
	class CUP_B_TOW_TriPod_USMC;
	class ls_acf_sth_sotoa_i_t_tow: CUP_B_TOW_TriPod_USMC
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
	};
	class B_static_AA_F;
	class ls_acf_sth_sotoa_i_t_spike_aa: B_static_AA_F
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
	};
	class CUP_B_M252_US;
	class ls_acf_sth_sotoa_i_t_m252: CUP_B_M252_US
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
	};
	class CUP_B_MK19_TriPod_US;
	class ls_acf_sth_sotoa_i_t_gmg: CUP_B_MK19_TriPod_US
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
	};
	class I_HMG_02_high_F;
	class ls_acf_sth_sotoa_i_t_hmg_high: I_HMG_02_high_F
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
	};
	class I_HMG_02_F;
	class ls_acf_sth_sotoa_i_t_hmg: I_HMG_02_F
	{
		author = "(S)Zumek";
		side = 2;
		scope = 2;
		faction = "ls_acf_i_sth_sotoa_security_forces";
		crew = "ls_acf_sth_sotoa_i_sssf_rifleman";
		typicalCargo[] = {"ls_acf_sth_sotoa_i_sssf_rifleman"};
	};
};
class cfgMods
{
	author = "(S) Zumek";
	timepacked = "1768515268";
};
