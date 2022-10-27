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
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindItemClicked
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_UnbindItemClicked_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindTabModeOpened
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_UnbindTabModeOpened_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.GetPrisoner
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_GetPrisoner_Params
	{
	public:
		class APrisoner*                                           AsPrisoner;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.AddToDialogueQueue
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_AddToDialogueQueue_Params
	{
	public:
		EDialogEvent                                               dialogEvent;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O4T7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveStarted
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveStarted_Params
	{	};

	/**
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnTabModeOpened
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnTabModeOpened_Params
	{
	public:
		ETabMode                                                   tabMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingTabOpened
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_CraftingTabOpened_Params
	{	};

	/**
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingItemClicked
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_CraftingItemClicked_Params
	{
	public:
		class UCraftableItem*                                      CraftableItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveCompleted
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveCompleted_Params
	{	};

	/**
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveFailed
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveFailed_Params
	{	};

	/**
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveBelated
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveBelated_Params
	{	};

	/**
	 * Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective
	 */
	struct ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
