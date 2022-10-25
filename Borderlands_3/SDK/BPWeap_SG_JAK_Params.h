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
	 * Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.UserConstructionScript
	 */
	struct ABPWeap_SG_JAK_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.Notify_ReloadEnded
	 */
	struct ABPWeap_SG_JAK_C_Notify_ReloadEnded_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ResetVisibleAmmo
	 */
	struct ABPWeap_SG_JAK_C_ResetVisibleAmmo_Params
	{	};

	/**
	 * Function BPWeap_SG_JAK.BPWeap_SG_JAK_C.ExecuteUbergraph_BPWeap_SG_JAK
	 */
	struct ABPWeap_SG_JAK_C_ExecuteUbergraph_BPWeap_SG_JAK_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
