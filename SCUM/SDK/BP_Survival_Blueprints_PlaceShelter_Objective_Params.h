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
	 * Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.GetPrisoner
	 */
	struct ABP_Survival_Blueprints_PlaceShelter_Objective_C_GetPrisoner_Params
	{
	public:
		class APrisoner*                                           Prisoner;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.AddToDialogueQueue
	 */
	struct ABP_Survival_Blueprints_PlaceShelter_Objective_C_AddToDialogueQueue_Params
	{
	public:
		EDialogEvent                                               DialogueEvent;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2400[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnObjectiveStarted
	 */
	struct ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnObjectiveStarted_Params
	{	};

	/**
	 * Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnTabModeOpened
	 */
	struct ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnTabModeOpened_Params
	{
	public:
		ETabMode                                                   tabMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective
	 */
	struct ABP_Survival_Blueprints_PlaceShelter_Objective_C_ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BKEJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
