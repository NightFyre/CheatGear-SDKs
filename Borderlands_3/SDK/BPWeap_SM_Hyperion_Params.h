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
	 * Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.Tediore_WeaponData
	 */
	struct ABPWeap_SM_Hyperion_C_Tediore_WeaponData_Params
	{
	public:
		float                                                      DamageRadius;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8SQ4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumMirvProjectiles;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FireRate;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LoadedAmmo;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ThrowType;                                               // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.HideWeapon
	 */
	struct ABPWeap_SM_Hyperion_C_HideWeapon_Params
	{	};

	/**
	 * Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ShowWeapon
	 */
	struct ABPWeap_SM_Hyperion_C_ShowWeapon_Params
	{	};

	/**
	 * Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ThrowWeapon
	 */
	struct ABPWeap_SM_Hyperion_C_ThrowWeapon_Params
	{	};

	/**
	 * Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.UserConstructionScript
	 */
	struct ABPWeap_SM_Hyperion_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.WeaponAttached
	 */
	struct ABPWeap_SM_Hyperion_C_WeaponAttached_Params
	{	};

	/**
	 * Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.Notify_ReloadStarted
	 */
	struct ABPWeap_SM_Hyperion_C_Notify_ReloadStarted_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ExecuteUbergraph_BPWeap_SM_Hyperion
	 */
	struct ABPWeap_SM_Hyperion_C_ExecuteUbergraph_BPWeap_SM_Hyperion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
