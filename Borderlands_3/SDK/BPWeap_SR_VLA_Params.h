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
	 * Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnPutDown
	 */
	struct ABPWeap_SR_VLA_C_OnPutDown_Params
	{	};

	/**
	 * Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnSwitchedMode
	 */
	struct ABPWeap_SR_VLA_C_OnSwitchedMode_Params
	{	};

	/**
	 * Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnEquipped
	 */
	struct ABPWeap_SR_VLA_C_OnEquipped_Params
	{	};

	/**
	 * Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.UpdateResourceLocks
	 */
	struct ABPWeap_SR_VLA_C_UpdateResourceLocks_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9PL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.UserConstructionScript
	 */
	struct ABPWeap_SR_VLA_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ReceiveBeginPlay
	 */
	struct ABPWeap_SR_VLA_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ReceiveEndPlay
	 */
	struct ABPWeap_SR_VLA_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.Weapon_NotifyPutDown
	 */
	struct ABPWeap_SR_VLA_C_Weapon_NotifyPutDown_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ExecuteUbergraph_BPWeap_SR_VLA
	 */
	struct ABPWeap_SR_VLA_C_ExecuteUbergraph_BPWeap_SR_VLA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SOWM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
