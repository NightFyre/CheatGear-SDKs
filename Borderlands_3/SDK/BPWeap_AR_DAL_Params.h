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
	 * Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.UserConstructionScript
	 */
	struct ABPWeap_AR_DAL_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ShowChainFeed
	 */
	struct ABPWeap_AR_DAL_C_ShowChainFeed_Params
	{	};

	/**
	 * Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.Notify_ReloadEnded
	 */
	struct ABPWeap_AR_DAL_C_Notify_ReloadEnded_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.HideChain
	 */
	struct ABPWeap_AR_DAL_C_HideChain_Params
	{	};

	/**
	 * Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ExecuteUbergraph_BPWeap_AR_DAL
	 */
	struct ABPWeap_AR_DAL_C_ExecuteUbergraph_BPWeap_AR_DAL_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
