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
	 * Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.UserConstructionScript
	 */
	struct ABPWeap_SR_JAK_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ReceiveBeginPlay
	 */
	struct ABPWeap_SR_JAK_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.HideMag
	 */
	struct ABPWeap_SR_JAK_C_HideMag_Params
	{	};

	/**
	 * Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ShowAmmo
	 */
	struct ABPWeap_SR_JAK_C_ShowAmmo_Params
	{	};

	/**
	 * Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.HideAmmo
	 */
	struct ABPWeap_SR_JAK_C_HideAmmo_Params
	{	};

	/**
	 * Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.Fire_Rotate
	 */
	struct ABPWeap_SR_JAK_C_Fire_Rotate_Params
	{	};

	/**
	 * Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.RotationReset
	 */
	struct ABPWeap_SR_JAK_C_RotationReset_Params
	{	};

	/**
	 * Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.Notify_ReloadEnded
	 */
	struct ABPWeap_SR_JAK_C_Notify_ReloadEnded_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ExecuteUbergraph_BPWeap_SR_JAK
	 */
	struct ABPWeap_SR_JAK_C_ExecuteUbergraph_BPWeap_SR_JAK_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_19K6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
