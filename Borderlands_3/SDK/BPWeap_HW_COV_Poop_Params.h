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
	 * Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.TryIdleAudio
	 */
	struct ABPWeap_HW_COV_Poop_C_TryIdleAudio_Params
	{	};

	/**
	 * Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.UserConstructionScript
	 */
	struct ABPWeap_HW_COV_Poop_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.Notify_ReloadStarted
	 */
	struct ABPWeap_HW_COV_Poop_C_Notify_ReloadStarted_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponAttached
	 */
	struct ABPWeap_HW_COV_Poop_C_WeaponAttached_Params
	{	};

	/**
	 * Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.EquipEventNotify
	 */
	struct ABPWeap_HW_COV_Poop_C_EquipEventNotify_Params
	{	};

	/**
	 * Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.WeaponPutDownEvent
	 */
	struct ABPWeap_HW_COV_Poop_C_WeaponPutDownEvent_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.OnKilledEnemy_Event
	 */
	struct ABPWeap_HW_COV_Poop_C_OnKilledEnemy_Event_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPWeap_HW_COV_Poop.BPWeap_HW_COV_Poop_C.ExecuteUbergraph_BPWeap_HW_COV_Poop
	 */
	struct ABPWeap_HW_COV_Poop_C_ExecuteUbergraph_BPWeap_HW_COV_Poop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
