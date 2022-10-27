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
	 * Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.TryIdleAudio
	 */
	struct ABPWeap_PS_MAL_SuckerPunch_C_TryIdleAudio_Params
	{	};

	/**
	 * Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.UserConstructionScript
	 */
	struct ABPWeap_PS_MAL_SuckerPunch_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.WeaponAttached
	 */
	struct ABPWeap_PS_MAL_SuckerPunch_C_WeaponAttached_Params
	{	};

	/**
	 * Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.EquipEventNotify
	 */
	struct ABPWeap_PS_MAL_SuckerPunch_C_EquipEventNotify_Params
	{	};

	/**
	 * Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.WeaponPutDownEvent
	 */
	struct ABPWeap_PS_MAL_SuckerPunch_C_WeaponPutDownEvent_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.OnKilledEnemy_Event
	 */
	struct ABPWeap_PS_MAL_SuckerPunch_C_OnKilledEnemy_Event_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.Notify_ReloadStarted
	 */
	struct ABPWeap_PS_MAL_SuckerPunch_C_Notify_ReloadStarted_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_PS_MAL_SuckerPunch.BPWeap_PS_MAL_SuckerPunch_C.ExecuteUbergraph_BPWeap_PS_MAL_SuckerPunch
	 */
	struct ABPWeap_PS_MAL_SuckerPunch_C_ExecuteUbergraph_BPWeap_PS_MAL_SuckerPunch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3KL6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
