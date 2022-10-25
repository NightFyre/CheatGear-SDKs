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
	 * Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod3
	 */
	struct AWeapon_Hardpoint_Salamander_C_SetupMod3_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupNoMod
	 */
	struct AWeapon_Hardpoint_Salamander_C_SetupNoMod_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.SetupMod2
	 */
	struct AWeapon_Hardpoint_Salamander_C_SetupMod2_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ApplySalamanderMod2
	 */
	struct AWeapon_Hardpoint_Salamander_C_ApplySalamanderMod2_Params
	{
	public:
		class UObject*                                             DamageSource;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hardpoint;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ToggleBlockEnabled
	 */
	struct AWeapon_Hardpoint_Salamander_C_ToggleBlockEnabled_Params
	{
	public:
		bool                                                       Toggle;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I6C5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.UserConstructionScript
	 */
	struct AWeapon_Hardpoint_Salamander_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.CausedDamage_Salamander
	 */
	struct AWeapon_Hardpoint_Salamander_C_CausedDamage_Salamander_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QS88[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander
	 */
	struct AWeapon_Hardpoint_Salamander_C_BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_0_WeaponReloadStartedEvent__DelegateSignature_Weapon_Hardpoint_Salamander_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize
	 */
	struct AWeapon_Hardpoint_Salamander_C_K2_Initialize_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.K2_Initialize1P
	 */
	struct AWeapon_Hardpoint_Salamander_C_K2_Initialize1P_Params
	{	};

	/**
	 * Function Weapon_Hardpoint_Salamander.Weapon_Hardpoint_Salamander_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander
	 */
	struct AWeapon_Hardpoint_Salamander_C_ExecuteUbergraph_Weapon_Hardpoint_Salamander_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VLST[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
