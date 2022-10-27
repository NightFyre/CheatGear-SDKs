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
	 * Function BPWeap_PS_COV.BPWeap_PS_COV_C.DisablePlug
	 */
	struct ABPWeap_PS_COV_C_DisablePlug_Params
	{	};

	/**
	 * Function BPWeap_PS_COV.BPWeap_PS_COV_C.EnablePlug
	 */
	struct ABPWeap_PS_COV_C_EnablePlug_Params
	{	};

	/**
	 * Function BPWeap_PS_COV.BPWeap_PS_COV_C.UserConstructionScript
	 */
	struct ABPWeap_PS_COV_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_PS_COV.BPWeap_PS_COV_C.ReceiveBeginPlay
	 */
	struct ABPWeap_PS_COV_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_PS_COV.BPWeap_PS_COV_C.FirstPersonCreated
	 */
	struct ABPWeap_PS_COV_C_FirstPersonCreated_Params
	{	};

	/**
	 * Function BPWeap_PS_COV.BPWeap_PS_COV_C.Notify_ReloadEnded
	 */
	struct ABPWeap_PS_COV_C_Notify_ReloadEnded_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_PS_COV.BPWeap_PS_COV_C.ExecuteUbergraph_BPWeap_PS_COV
	 */
	struct ABPWeap_PS_COV_C_ExecuteUbergraph_BPWeap_PS_COV_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
