#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function BP_MissionObjective.BP_MissionObjective_C.OnChanged
	 */
	struct ABP_MissionObjective_C_OnChanged_Params
	{	};

	/**
	 * Function BP_MissionObjective.BP_MissionObjective_C.GetDescription
	 */
	struct ABP_MissionObjective_C_GetDescription_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_MissionObjective.BP_MissionObjective_C.IsCompleted
	 */
	struct ABP_MissionObjective_C_IsCompleted_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MissionObjective.BP_MissionObjective_C.Changed__DelegateSignature
	 */
	struct ABP_MissionObjective_C_Changed__DelegateSignature_Params
	{
	public:
		class ABP_MissionObjective_C*                              sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
