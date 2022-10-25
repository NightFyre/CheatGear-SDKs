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
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GetGraspDuration
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_GetGraspDuration_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.GraspTarget
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_GraspTarget_Params
	{
	public:
		class AActor*                                              GraspTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetSearchFailed
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_HandleGraspTargetSearchFailed_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.HandleGraspTargetFound
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_HandleGraspTargetFound_Params
	{
	public:
		class AOakCharacter*                                       GraspTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PerformGraspFeedback
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_PerformGraspFeedback_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindInstantPhaseWebGraspTarget
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_FindInstantPhaseWebGraspTarget_Params
	{
	public:
		class AOakCharacter*                                       res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Failure_08B09A8F480F3929252234B2AB30A873
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_Failure_08B09A8F480F3929252234B2AB30A873_Params
	{
	public:
		struct FEnvQueryResult                                     QueryResult;                                             // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             Location;                                                // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HILY[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.Success_08B09A8F480F3929252234B2AB30A873
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_Success_08B09A8F480F3929252234B2AB30A873_Params
	{
	public:
		struct FEnvQueryResult                                     QueryResult;                                             // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             Location;                                                // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VCBP[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillReactDialogue
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_TriggerActionSkillReactDialogue_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.TriggerActionSkillUseDialogue
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_TriggerActionSkillUseDialogue_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.OnServerBegin
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartRumble
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_AN_PerformGraspStartRumble_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.AN_PerformGraspStartCS
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_AN_PerformGraspStartCS_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.PlayPhaseTranceHandEffects
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_PlayPhaseTranceHandEffects_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.FindGraspTargetAsync
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_FindGraspTargetAsync_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Grasp_Base.Action_PhaseTrance_Grasp_Base_C.ExecuteUbergraph_Action_PhaseTrance_Grasp_Base
	 */
	struct UAction_PhaseTrance_Grasp_Base_C_ExecuteUbergraph_Action_PhaseTrance_Grasp_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SOPW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
