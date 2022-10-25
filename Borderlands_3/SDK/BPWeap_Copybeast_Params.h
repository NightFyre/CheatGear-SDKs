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
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.Tediore_WeaponData
	 */
	struct ABPWeap_Copybeast_C_Tediore_WeaponData_Params
	{
	public:
		float                                                      DamageRadius;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D0TO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumMirvProjectiles;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FireRate;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LoadedAmmo;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ThrowType;                                               // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.DetonateActiveProjectiles
	 */
	struct ABPWeap_Copybeast_C_DetonateActiveProjectiles_Params
	{	};

	/**
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.HideWeapon
	 */
	struct ABPWeap_Copybeast_C_HideWeapon_Params
	{	};

	/**
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.ShowWeapon
	 */
	struct ABPWeap_Copybeast_C_ShowWeapon_Params
	{	};

	/**
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.ThrowWeapon
	 */
	struct ABPWeap_Copybeast_C_ThrowWeapon_Params
	{	};

	/**
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.UserConstructionScript
	 */
	struct ABPWeap_Copybeast_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.WeaponAttached
	 */
	struct ABPWeap_Copybeast_C_WeaponAttached_Params
	{	};

	/**
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.Notify_ReloadStarted
	 */
	struct ABPWeap_Copybeast_C_Notify_ReloadStarted_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.ReceiveBeginPlay
	 */
	struct ABPWeap_Copybeast_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.Weapon_NotifyPutDown
	 */
	struct ABPWeap_Copybeast_C_Weapon_NotifyPutDown_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.DetonateProjectiles
	 */
	struct ABPWeap_Copybeast_C_DetonateProjectiles_Params
	{	};

	/**
	 * Function BPWeap_Copybeast.BPWeap_Copybeast_C.ExecuteUbergraph_BPWeap_Copybeast
	 */
	struct ABPWeap_Copybeast_C_ExecuteUbergraph_BPWeap_Copybeast_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
