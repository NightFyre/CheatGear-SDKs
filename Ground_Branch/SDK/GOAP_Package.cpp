/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP.GoapPlannerComponent.SimulatePlan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGoapWorldState                             WorldState                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGoapNode>                           Plan                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FGoapWorldState                             ResultWorldState                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGoapPlannerComponent::SimulatePlan(const struct FGoapWorldState& WorldState, TArray<struct FGoapNode> Plan, struct FGoapWorldState* ResultWorldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP.GoapPlannerComponent.SimulatePlan");
		
		UGoapPlannerComponent_SimulatePlan_Params params {};
		params.WorldState = WorldState;
		params.Plan = Plan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultWorldState != nullptr)
			*ResultWorldState = params.ResultWorldState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP.GoapPlannerComponent.SetGoapWorldComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGoapWorldComponent*                         GoapWorldComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGoapPlannerComponent::SetGoapWorldComponent(class UGoapWorldComponent* GoapWorldComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP.GoapPlannerComponent.SetGoapWorldComponent");
		
		UGoapPlannerComponent_SetGoapWorldComponent_Params params {};
		params.GoapWorldComponent = GoapWorldComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP.GoapPlannerComponent.RemoveAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGoapPlannerComponent::RemoveAction(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP.GoapPlannerComponent.RemoveAction");
		
		UGoapPlannerComponent_RemoveAction_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP.GoapPlannerComponent.Plan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGoapWorldState                             WorldState                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGoapWorldState                             GoalState                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnComplete                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGoapPlannerComponent::Plan(const struct FGoapWorldState& WorldState, const struct FGoapWorldState& GoalState, const class FScriptDelegate& OnComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP.GoapPlannerComponent.Plan");
		
		UGoapPlannerComponent_Plan_Params params {};
		params.WorldState = WorldState;
		params.GoalState = GoalState;
		params.OnComplete = OnComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP.GoapPlannerComponent.GetPlan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGoapNode>                           Plan                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGoapPlannerComponent::GetPlan(TArray<struct FGoapNode>* Plan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP.GoapPlannerComponent.GetPlan");
		
		UGoapPlannerComponent_GetPlan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Plan != nullptr)
			*Plan = params.Plan;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP.GoapPlannerComponent.GetGoapWorldComponent
	 * 		Flags  -> ()
	 */
	class UGoapWorldComponent* UGoapPlannerComponent::GetGoapWorldComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP.GoapPlannerComponent.GetGoapWorldComponent");
		
		UGoapPlannerComponent_GetGoapWorldComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP.GoapPlannerComponent.GetActions
	 * 		Flags  -> ()
	 */
	TArray<struct FGoapAction> UGoapPlannerComponent::GetActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP.GoapPlannerComponent.GetActions");
		
		UGoapPlannerComponent_GetActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GOAP.GoapPlannerComponent.AddAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGoapAction                                 NewGoapAction                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UGoapPlannerComponent::AddAction(const struct FGoapAction& NewGoapAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GOAP.GoapPlannerComponent.AddAction");
		
		UGoapPlannerComponent_AddAction_Params params {};
		params.NewGoapAction = NewGoapAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGoapPlannerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGoapPlannerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GOAP.GoapPlannerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGoapWorldComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGoapWorldComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GOAP.GoapWorldComponent");
		return ptr;
	}

}


