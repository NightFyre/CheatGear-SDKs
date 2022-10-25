#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function GOAPNPC.GOAPAction.Validate
	 */
	struct UGOAPAction_Validate_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPAction.ReceiveIsActionInvalid
	 */
	struct UGOAPAction_ReceiveIsActionInvalid_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPAction.HasCompleted
	 */
	struct UGOAPAction_HasCompleted_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPAction.GetTargetsList
	 */
	struct UGOAPAction_GetTargetsList_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPAction.EndAction
	 */
	struct UGOAPAction_EndAction_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPAction.DoAction
	 */
	struct UGOAPAction_DoAction_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FailureReason;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPAction.CheckProceduralPrecondition
	 */
	struct UGOAPAction_CheckProceduralPrecondition_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPlanning;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPAction.BeginAction
	 */
	struct UGOAPAction_BeginAction_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPComponent.UpdateCurrentWorld
	 */
	struct UGOAPComponent_UpdateCurrentWorld_Params
	{
	public:
		TArray<struct FAtom>                                       Atoms;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPComponent.SetGoal
	 */
	struct UGOAPComponent_SetGoal_Params
	{
	public:
		class UGOAPGoal*                                           NewGoal;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPComponent.SetCurrentWorld
	 */
	struct UGOAPComponent_SetCurrentWorld_Params
	{
	public:
		TArray<struct FAtom>                                       NewCurrentWorld;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPComponent.Reset
	 */
	struct UGOAPComponent_Reset_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPComponent.ReceiveOnReset
	 */
	struct UGOAPComponent_ReceiveOnReset_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPComponent.IsPlanValid
	 */
	struct UGOAPComponent_IsPlanValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPComponent.InvalidatePlan
	 */
	struct UGOAPComponent_InvalidatePlan_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPComponent.InvalidateGoalSelection
	 */
	struct UGOAPComponent_InvalidateGoalSelection_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPComponent.HasPlan
	 */
	struct UGOAPComponent_HasPlan_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPComponent.GetPlanSnapshot
	 */
	struct UGOAPComponent_GetPlanSnapshot_Params
	{
	public:
		TArray<class UGOAPAction*>                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPComponent.GetDesiredWorldStateAtoms
	 */
	struct UGOAPComponent_GetDesiredWorldStateAtoms_Params
	{
	public:
		TArray<struct FAtom>                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPComponent.GetCurrentWorldStateAtoms
	 */
	struct UGOAPComponent_GetCurrentWorldStateAtoms_Params
	{
	public:
		TArray<struct FAtom>                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPComponent.GeneratePlan
	 */
	struct UGOAPComponent_GeneratePlan_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPComponent.ExecuteGOAP
	 */
	struct UGOAPComponent_ExecuteGOAP_Params
	{
	public:
		bool                                                       bCreatePlan;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRemoveActionOnComplete;                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPComponent.ClearPlan
	 */
	struct UGOAPComponent_ClearPlan_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPGoalManager.UpdateGoalSet
	 */
	struct UGOAPGoalManager_UpdateGoalSet_Params
	{
	public:
		class UGOAPGoalSet*                                        InGoalSet;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPGoalManager.SetGoalSet
	 */
	struct UGOAPGoalManager_SetGoalSet_Params
	{
	public:
		class UGOAPGoalSet*                                        InGoalSet;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPGoalManager.SetCurrentGoal
	 */
	struct UGOAPGoalManager_SetCurrentGoal_Params
	{
	public:
		class UGOAPGoal*                                           NewGoal;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeactivatePreviousGoal;                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPGoalManager.RemoveGoal
	 */
	struct UGOAPGoalManager_RemoveGoal_Params
	{
	public:
		class UClass*                                              GoalClass;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPGoalManager.InvalidatePlan
	 */
	struct UGOAPGoalManager_InvalidatePlan_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPGoalManager.InvalidateGoalSelection
	 */
	struct UGOAPGoalManager_InvalidateGoalSelection_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPGoalManager.GetOuterGOAPComp
	 */
	struct UGOAPGoalManager_GetOuterGOAPComp_Params
	{
	public:
		class UGOAPComponent*                                      ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPGoalManager.GetCurrentGoalAtoms
	 */
	struct UGOAPGoalManager_GetCurrentGoalAtoms_Params
	{
	public:
		TArray<struct FAtom>                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPGoalManager.FindGoal
	 */
	struct UGOAPGoalManager_FindGoal_Params
	{
	public:
		class UClass*                                              GoalClass;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGOAPGoal*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPGoalManager.ClearGoals
	 */
	struct UGOAPGoalManager_ClearGoals_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPGoalManager.AddGoal
	 */
	struct UGOAPGoalManager_AddGoal_Params
	{
	public:
		class UClass*                                              GoalClass;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGOAPGoal*                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPGoal.RequiresNewPlan
	 */
	struct UGOAPGoal_RequiresNewPlan_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPGoal.GetOuterGoalManager
	 */
	struct UGOAPGoal_GetOuterGoalManager_Params
	{
	public:
		class UGOAPGoalManager*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAPNPC.GOAPGoal.GeneratePlanFailure
	 */
	struct UGOAPGoal_GeneratePlanFailure_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPGoal.Deactivate
	 */
	struct UGOAPGoal_Deactivate_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPGoal.ClearRelevance
	 */
	struct UGOAPGoal_ClearRelevance_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPGoal.CalculateRelevance
	 */
	struct UGOAPGoal_CalculateRelevance_Params
	{	};

	/**
	 * Function GOAPNPC.GOAPGoal.Activate
	 */
	struct UGOAPGoal_Activate_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
