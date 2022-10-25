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
	 * Function GOAP.GoapPlannerComponent.SimulatePlan
	 */
	struct UGoapPlannerComponent_SimulatePlan_Params
	{
	public:
		struct FGoapWorldState                                     WorldState;                                              // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FGoapNode>                                   Plan;                                                    // 0x0050(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FGoapWorldState                                     ResultWorldState;                                        // 0x0060(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAP.GoapPlannerComponent.SetGoapWorldComponent
	 */
	struct UGoapPlannerComponent_SetGoapWorldComponent_Params
	{
	public:
		class UGoapWorldComponent*                                 GoapWorldComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAP.GoapPlannerComponent.RemoveAction
	 */
	struct UGoapPlannerComponent_RemoveAction_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAP.GoapPlannerComponent.Plan
	 */
	struct UGoapPlannerComponent_Plan_Params
	{
	public:
		struct FGoapWorldState                                     WorldState;                                              // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		struct FGoapWorldState                                     GoalState;                                               // 0x0050(0x0050)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnComplete;                                              // 0x00A0(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAP.GoapPlannerComponent.GetPlan
	 */
	struct UGoapPlannerComponent_GetPlan_Params
	{
	public:
		TArray<struct FGoapNode>                                   Plan;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAP.GoapPlannerComponent.GetGoapWorldComponent
	 */
	struct UGoapPlannerComponent_GetGoapWorldComponent_Params
	{
	public:
		class UGoapWorldComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAP.GoapPlannerComponent.GetActions
	 */
	struct UGoapPlannerComponent_GetActions_Params
	{
	public:
		TArray<struct FGoapAction>                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GOAP.GoapPlannerComponent.AddAction
	 */
	struct UGoapPlannerComponent_AddAction_Params
	{
	public:
		struct FGoapAction                                         NewGoapAction;                                           // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
