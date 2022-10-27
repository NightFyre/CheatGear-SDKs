#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.StopOverheatAudio
	 */
	struct AWeapon_Hardpoint_Minigun_C_StopOverheatAudio_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.InitAudio
	 */
	struct AWeapon_Hardpoint_Minigun_C_InitAudio_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.SetupMod2
	 */
	struct AWeapon_Hardpoint_Minigun_C_SetupMod2_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.SetupMod1
	 */
	struct AWeapon_Hardpoint_Minigun_C_SetupMod1_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.SetupMod3
	 */
	struct AWeapon_Hardpoint_Minigun_C_SetupMod3_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.GetShellCasingEjectEffect
	 */
	struct AWeapon_Hardpoint_Minigun_C_GetShellCasingEjectEffect_Params
	{
	public:
		class UParticleSystem*                                     FX;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.InitializeBarrelMaterials
	 */
	struct AWeapon_Hardpoint_Minigun_C_InitializeBarrelMaterials_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.UserConstructionScript
	 */
	struct AWeapon_Hardpoint_Minigun_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.BndEvt__HeatComponent_Gunner_Minigun_K2Node_ComponentBoundEvent_0_HeatChangedDelegate__DelegateSignature_Weapon_Hardpoint_Minigun
	 */
	struct AWeapon_Hardpoint_Minigun_C_BndEvt__HeatComponent_Gunner_Minigun_K2Node_ComponentBoundEvent_0_HeatChangedDelegate__DelegateSignature_Weapon_Hardpoint_Minigun_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.K2_InitializeMod
	 */
	struct AWeapon_Hardpoint_Minigun_C_K2_InitializeMod_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.K2_Initialize
	 */
	struct AWeapon_Hardpoint_Minigun_C_K2_Initialize_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.InitializeHardPointIronCub
	 */
	struct AWeapon_Hardpoint_Minigun_C_InitializeHardPointIronCub_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Minigun.Weapon_Hardpoint_Minigun_C.ExecuteUbergraph_Weapon_Hardpoint_Minigun
	 */
	struct AWeapon_Hardpoint_Minigun_C_ExecuteUbergraph_Weapon_Hardpoint_Minigun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5PFK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
