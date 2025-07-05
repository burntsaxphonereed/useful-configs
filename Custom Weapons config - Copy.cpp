////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Sat Jul 05 14:25:13 2025 : 'file' last modified on Fri May 02 10:07:16 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class JAM_Weapons_AE
	{
		author = "OokamiJamie";
		name = "JAM Project - Asian Escalation - Weapons";
		requiredAddons[] = {"JAM_Data_AE","cba_jr","cba_jr_prep"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		magazines[] = {"JAM_AE_Rocket_PF98","JAM_AE_100rnd_545_Magazine_Type88_Helical","JAM_AE_15rnd_58x21_Magazine_QSZ92"};
		ammo[] = {"JAM_AE_Ammo_Type86p"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgWeapons
{
	class Default
	{
		fireLightDiffuse[] = {0.937,0.322,0.259};
		fireLightDuration = 0.005;
	};
	class RifleCore;
	class MGunCore;
	class CannonCore;
	class ItemCore;
	class GrenadeLauncher;
	class UGL_F;
	class Rifle: RifleCore
	{
		zeroingSound[] = {"\A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal","db0",1,5};
	};
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Launcher_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"JAM_AE_ThrowMuzzle_Type86p"};
		class ThrowMuzzle;
		class JAM_AE_ThrowMuzzle_Type86p: ThrowMuzzle
		{
			magazines[] = {"JAM_AE_HandGrenade_Type86p"};
		};
	};
	class muzzle_snds_M;
	class JAM_AE_PLA_Muzzle_SNDS_58_QBZ95: muzzle_snds_M
	{
		author = "OokamiJamie";
		displayName = "Suppressor (5.8, QBZ-95)";
		model = "\JAM_AE\jam_weapons_ae\Accessories\snds_qbz95.p3d";
	};
};
class CfgAmmo
{
	class Default;
	class GrenadeHand;
	class JAM_AE_Ammo_Type86p: GrenadeHand
	{
		model = "\JAM_AE\jam_weapons_ae\Explosives\type86p_thrown.p3d";
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class HandGrenade;
	class RPG32_F;
	class 30Rnd_545x39_Mag_F;
	class 16Rnd_9x21_Mag;
	class JAM_AE_Rocket_PF98: RPG32_F
	{
		author = "OokamiJamie";
		scope = 2;
		scopeArsenal = 2;
		modelSpecialIsProxy = 1;
		displayName = "PF-98 Rocket";
		displayNameShort = "HEAT";
		descriptionShort = "Type: High Explosive Anti Tank<br />Caliber: 120mm";
		modelSpecial = "\JAM_AE\jam_weapons_ae\Launchers\PF98\rocket_pf98.p3d";
		initSpeed = 300;
		mass = 80;
	};
	class JAM_AE_100rnd_545_Magazine_Type88_Helical: 30Rnd_545x39_Mag_F
	{
		author = "Lukinator";
		scope = 2;
		scopeArsenal = 2;
		count = 100;
		modelSpecialIsProxy = 1;
		displayName = "100rnd 5.45 Type 88 Helical Mag";
		modelSpecial = "\JAM_AE\jam_weapons_ae\Rifles\Type88\magazine_type88_helical.p3d";
		mass = 50;
	};
	class JAM_AE_15rnd_58x21_Magazine_QSZ92: 16Rnd_9x21_Mag
	{
		author = "OokamiJamie";
		scope = 2;
		scopeArsenal = 2;
		count = 15;
		modelSpecialIsProxy = 1;
		displayName = "15rnd 5.8 QSZ-92 Mag";
		modelSpecial = "\JAM_AE\jam_weapons_ae\Pistols\QSZ92\magazine_qsz92.p3d";
		mass = 10;
	};
	class JAM_AE_HandGrenade_Type86p: HandGrenade
	{
		author = "OokamiJamie";
		mass = 15;
		displayName = "Type 86p Frag Grenade";
		model = "\JAM_AE\jam_weapons_ae\Explosives\type86p.p3d";
		ammo = "JAM_AE_Ammo_Type86p";
		displayNameShort = "Type 86p Grenade";
		picture = "\JAM_AE\jam_weapons_ae\Explosives\Data\UI\type86p_ico_CA.paa";
	};
};
class CfgMagazineWells
{
	class JAM_AE_Magwell_Launch_PF98
	{
		JAM_AE_Magazines[] = {"JAM_AE_Rocket_PF98"};
	};
	class JAM_AE_AK_545x39_Helical
	{
		JAM_AE_Magazines[] = {"JAM_AE_100rnd_545_Magazine_Type88_Helical"};
	};
	class JAM_AE_Magwell_QSZ92_58x21
	{
		JAM_AE_Magazines[] = {"JAM_AE_15rnd_58x21_Magazine_QSZ92"};
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_58: asdg_MuzzleSlot
{
	class compatibleItems
	{
		JAM_AE_PLA_Muzzle_SNDS_58_QBZ95 = 1;
	};
};
