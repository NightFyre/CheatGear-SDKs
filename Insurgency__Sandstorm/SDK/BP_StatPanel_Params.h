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
	 * Function BP_StatPanel.BP_StatPanel_C.SetUserIdText
	 */
	struct UBP_StatPanel_C_SetUserIdText_Params
	{	};

	/**
	 * Function BP_StatPanel.BP_StatPanel_C.SetMapAndScenarioName
	 */
	struct UBP_StatPanel_C_SetMapAndScenarioName_Params
	{
	public:
		bool                                                       ShouldRerun;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MF0R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_StatPanel.BP_StatPanel_C.SetBuildVersion
	 */
	struct UBP_StatPanel_C_SetBuildVersion_Params
	{	};

	/**
	 * Function BP_StatPanel.BP_StatPanel_C.OnLocationToggled
	 */
	struct UBP_StatPanel_C_OnLocationToggled_Params
	{	};

	/**
	 * Function BP_StatPanel.BP_StatPanel_C.GetLocationText
	 */
	struct UBP_StatPanel_C_GetLocationText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_StatPanel.BP_StatPanel_C.OnNetStatsToggled
	 */
	struct UBP_StatPanel_C_OnNetStatsToggled_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_StatPanel.BP_StatPanel_C.OnNetStatsUpdated
	 */
	struct UBP_StatPanel_C_OnNetStatsUpdated_Params
	{
	public:
		struct FClientNetStats                                     Stats;                                                   // 0x0000(0x002C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C40X[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_StatPanel.BP_StatPanel_C.Construct
	 */
	struct UBP_StatPanel_C_Construct_Params
	{	};

	/**
	 * Function BP_StatPanel.BP_StatPanel_C.Tick
	 */
	struct UBP_StatPanel_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatPanel.BP_StatPanel_C.Destruct
	 */
	struct UBP_StatPanel_C_Destruct_Params
	{	};

	/**
	 * Function BP_StatPanel.BP_StatPanel_C.AttemptGamemodeCast
	 */
	struct UBP_StatPanel_C_AttemptGamemodeCast_Params
	{	};

	/**
	 * Function BP_StatPanel.BP_StatPanel_C.ExecuteUbergraph_BP_StatPanel
	 */
	struct UBP_StatPanel_C_ExecuteUbergraph_BP_StatPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
