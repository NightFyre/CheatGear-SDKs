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
	 * Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.UserConstructionScript
	 */
	struct ABPWeap_PS_Jakobs_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.HideSpeedLoader
	 */
	struct ABPWeap_PS_Jakobs_C_HideSpeedLoader_Params
	{	};

	/**
	 * Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.ReceiveBeginPlay
	 */
	struct ABPWeap_PS_Jakobs_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.HideAmmo
	 */
	struct ABPWeap_PS_Jakobs_C_HideAmmo_Params
	{	};

	/**
	 * Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.Notify_ReloadEnded
	 */
	struct ABPWeap_PS_Jakobs_C_Notify_ReloadEnded_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.ResetCylinder
	 */
	struct ABPWeap_PS_Jakobs_C_ResetCylinder_Params
	{	};

	/**
	 * Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.Weapon_NotifyPutDown
	 */
	struct ABPWeap_PS_Jakobs_C_Weapon_NotifyPutDown_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.ExecuteUbergraph_BPWeap_PS_Jakobs
	 */
	struct ABPWeap_PS_Jakobs_C_ExecuteUbergraph_BPWeap_PS_Jakobs_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T9RB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
