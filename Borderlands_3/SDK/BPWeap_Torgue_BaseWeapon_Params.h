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
	 * Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateActiveProjectiles
	 */
	struct ABPWeap_Torgue_BaseWeapon_C_DetonateActiveProjectiles_Params
	{	};

	/**
	 * Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.UserConstructionScript
	 */
	struct ABPWeap_Torgue_BaseWeapon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ReceiveBeginPlay
	 */
	struct ABPWeap_Torgue_BaseWeapon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ModeSwitched
	 */
	struct ABPWeap_Torgue_BaseWeapon_C_ModeSwitched_Params
	{	};

	/**
	 * Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Notify_ReloadEnded
	 */
	struct ABPWeap_Torgue_BaseWeapon_C_Notify_ReloadEnded_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateProjectiles
	 */
	struct ABPWeap_Torgue_BaseWeapon_C_DetonateProjectiles_Params
	{	};

	/**
	 * Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Weapon_NotifyPutDown
	 */
	struct ABPWeap_Torgue_BaseWeapon_C_Weapon_NotifyPutDown_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ExecuteUbergraph_BPWeap_Torgue_BaseWeapon
	 */
	struct ABPWeap_Torgue_BaseWeapon_C_ExecuteUbergraph_BPWeap_Torgue_BaseWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
