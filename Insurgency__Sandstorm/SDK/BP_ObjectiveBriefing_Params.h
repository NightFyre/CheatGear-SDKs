#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.DoCreateDestructibleObjectiveIcon
	 */
	struct UBP_ObjectiveBriefing_C_DoCreateDestructibleObjectiveIcon_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.DoCreateCapturingObjectiveIcon
	 */
	struct UBP_ObjectiveBriefing_C_DoCreateCapturingObjectiveIcon_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.NotifyNewObjective
	 */
	struct UBP_ObjectiveBriefing_C_NotifyNewObjective_Params
	{	};

	/**
	 * Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.Construct
	 */
	struct UBP_ObjectiveBriefing_C_Construct_Params
	{	};

	/**
	 * Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.Tick
	 */
	struct UBP_ObjectiveBriefing_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveBriefing.BP_ObjectiveBriefing_C.ExecuteUbergraph_BP_ObjectiveBriefing
	 */
	struct UBP_ObjectiveBriefing_C_ExecuteUbergraph_BP_ObjectiveBriefing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
