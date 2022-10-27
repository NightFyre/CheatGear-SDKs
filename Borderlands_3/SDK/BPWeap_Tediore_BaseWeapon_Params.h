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
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Tediore_WeaponData
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_Tediore_WeaponData_Params
	{
	public:
		float                                                      DamageRadius;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1EE1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumMirvProjectiles;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FireRate;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LoadedAmmo;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ThrowType;                                               // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.OnRep_HideLegs
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_OnRep_HideLegs_Params
	{	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreShowWeapon
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_TedioreShowWeapon_Params
	{	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreHideWeapon
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_TedioreHideWeapon_Params
	{	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreThrowWeapon
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_TedioreThrowWeapon_Params
	{
	public:
		class AActor*                                              ThrownProjectile;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.UserConstructionScript
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ReceiveBeginPlay
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Notify_ReloadStarted
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_Notify_ReloadStarted_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.WeaponAttached
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_WeaponAttached_Params
	{	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeOverhand
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_ThrowTypeOverhand_Params
	{	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideRL
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_ThrowTypeSideRL_Params
	{	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeUnderhand
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_ThrowTypeUnderhand_Params
	{	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideLR
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_ThrowTypeSideLR_Params
	{	};

	/**
	 * Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ExecuteUbergraph_BPWeap_Tediore_BaseWeapon
	 */
	struct ABPWeap_Tediore_BaseWeapon_C_ExecuteUbergraph_BPWeap_Tediore_BaseWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_363X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
