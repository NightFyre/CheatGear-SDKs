#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_GBSkyActor.BP_GBSkyActor_C.GetNVGMultiplier
	 */
	struct ABP_GBSkyActor_C_GetNVGMultiplier_Params
	{
	public:
		float                                                      OutMultiplier;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GBSkyActor.BP_GBSkyActor_C.UserConstructionScript
	 */
	struct ABP_GBSkyActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GBSkyActor.BP_GBSkyActor_C.OnTimeSpanChangeEvent
	 */
	struct ABP_GBSkyActor_C_OnTimeSpanChangeEvent_Params
	{	};

	/**
	 * Function BP_GBSkyActor.BP_GBSkyActor_C.InternalOnTimeSpanChanged
	 */
	struct ABP_GBSkyActor_C_InternalOnTimeSpanChanged_Params
	{	};

	/**
	 * Function BP_GBSkyActor.BP_GBSkyActor_C.ExecuteUbergraph_BP_GBSkyActor
	 */
	struct ABP_GBSkyActor_C_ExecuteUbergraph_BP_GBSkyActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GBSkyActor.BP_GBSkyActor_C.OnTimeSpanChanged__DelegateSignature
	 */
	struct ABP_GBSkyActor_C_OnTimeSpanChanged__DelegateSignature_Params
	{
	public:
		class FName                                                Timespan;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
