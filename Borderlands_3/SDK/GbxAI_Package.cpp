/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0078D6E0
	 * 		Name   -> Function GbxAI.AIActionBase.StopBP
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAIActionBase*                               Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSucceeded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIActionBase::STATIC_StopBP(class UAIActionBase* Action, const struct FAIActionBlueprintContext& Context, bool bSucceeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionBase.StopBP");
		
		UAIActionBase_StopBP_Params params {};
		params.Action = Action;
		params.Context = Context;
		params.bSucceeded = bSucceeded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078CEB0
	 * 		Name   -> Function GbxAI.AIActionBase.CreateSubobjectNoName
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UAIActionBase::CreateSubobjectNoName(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionBase.CreateSubobjectNoName");
		
		UAIActionBase_CreateSubobjectNoName_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIActionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIActionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIActionBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00789D50
	 * 		Name   -> Function GbxAI.AIAction.CreateSubAction
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UClass*                                      ActionClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIAction* UAIAction::CreateSubAction(class UClass* ActionClass, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction.CreateSubAction");
		
		UAIAction_CreateSubAction_Params params {};
		params.ActionClass = ActionClass;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00789CB0
	 * 		Name   -> Function GbxAI.AIAction_Composite.CreateChild
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FName                                        ChildName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIAction_CompositeChild* UAIAction_Composite::CreateChild(const class FName& ChildName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction_Composite.CreateChild");
		
		UAIAction_Composite_CreateChild_Params params {};
		params.ChildName = ChildName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Composite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Composite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Composite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Selector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Selector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Selector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Sequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Sequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Sequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_GoToPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_GoToPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_GoToPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_ActionAtPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_ActionAtPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_ActionAtPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_ActionAtPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_ActionAtPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_ActionAtPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Priority.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Priority::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Priority");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_AITree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_AITree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_AITree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Charge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Charge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Charge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_Charge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_Charge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_Charge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00789C20
	 * 		Name   -> Function GbxAI.AIAction_CompositeChild.CreateAction
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UClass*                                      ActionClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIAction* UAIAction_CompositeChild::CreateAction(class UClass* ActionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction_CompositeChild.CreateAction");
		
		UAIAction_CompositeChild_CreateAction_Params params {};
		params.ActionClass = ActionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_CompositeChild.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_CompositeChild::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_CompositeChild");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Decorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Decorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Decorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_MoveNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_MoveNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_MoveNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Dropship.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Dropship::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Dropship");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Follow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Follow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Follow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_GoToPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_GoToPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_GoToPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Land.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Land::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Land");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_LeadRoute.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_LeadRoute::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_LeadRoute");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_LeadRoute.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_LeadRoute::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_LeadRoute");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Leap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Leap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Leap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_Leap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_Leap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_Leap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_LeapDirect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_LeapDirect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_LeapDirect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_LeapDirect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_LeapDirect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_LeapDirect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_LookAroundRandomly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_LookAroundRandomly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_LookAroundRandomly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_MoveNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_MoveNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_MoveNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00789E10
	 * 		Name   -> Function GbxAI.AIAction_MoveSpline.SetupMoveSpline
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     TargetSpline                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsReverse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIAction_MoveSpline::STATIC_SetupMoveSpline(class AActor* TargetActor, class UObject* TargetSpline, float Offset, bool bIsReverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction_MoveSpline.SetupMoveSpline");
		
		UAIAction_MoveSpline_SetupMoveSpline_Params params {};
		params.TargetActor = TargetActor;
		params.TargetSpline = TargetSpline;
		params.Offset = Offset;
		params.bIsReverse = bIsReverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00789B50
	 * 		Name   -> Function GbxAI.AIAction_MoveSpline.ChangeSplineOffset
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIAction_MoveSpline::STATIC_ChangeSplineOffset(class AActor* TargetActor, float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction_MoveSpline.ChangeSplineOffset");
		
		UAIAction_MoveSpline_ChangeSplineOffset_Params params {};
		params.TargetActor = TargetActor;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_MoveSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_MoveSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_MoveSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_OnAggro.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_OnAggro::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_OnAggro");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Orbit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Orbit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Orbit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Parallel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Parallel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Parallel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_ParallelChild.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_ParallelChild::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_ParallelChild");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Plan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Plan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Plan");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_PlayGbxAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_PlayGbxAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_PlayGbxAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_PlayGbxAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_PlayGbxAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_PlayGbxAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Random.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Random::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Random");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_RandomChild.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_RandomChild::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_RandomChild");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Route.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Route::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Route");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_Route.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_Route::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_Route");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_UseCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_UseCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_UseCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_SimpleCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_SimpleCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_SimpleCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_WeaponAtPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_WeaponAtPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_WeaponAtPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_SimpleHide.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_SimpleHide::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_SimpleHide");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_SimpleMelee.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_SimpleMelee::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_SimpleMelee");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_SimpleRangedAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_SimpleRangedAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_SimpleRangedAttack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_SimpleWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_SimpleWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_SimpleWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_StateMachine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_StateMachine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_StateMachine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078CF50
	 * 		Name   -> Function GbxAI.AIAction_StateMachineChild.GetAvailableStates
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<class UAIAction_StateMachineChild*>         Array                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIAction_StateMachineChild::GetAvailableStates(TArray<class UAIAction_StateMachineChild*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction_StateMachineChild.GetAvailableStates");
		
		UAIAction_StateMachineChild_GetAvailableStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_StateMachineChild.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_StateMachineChild::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_StateMachineChild");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Sweep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Sweep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Sweep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Swoop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Swoop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Swoop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_TargetSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_TargetSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_TargetSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_Teleport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_Teleport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_Teleport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_Teleport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_Teleport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_Teleport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_UseCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_UseCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_UseCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_UseSmartObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_UseSmartObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_UseSmartObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_UseSmartObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_UseSmartObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_UseSmartObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_WeaponAtPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_WeaponAtPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_WeaponAtPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_WeaponIdle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_WeaponIdle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_WeaponIdle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_WeaponIdle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_WeaponIdle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_WeaponIdle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078D660
	 * 		Name   -> Function GbxAI.AIActionBlueprint.ShouldSkipBlackboardProperty
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		class UProperty*                                   Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIActionBlueprint::STATIC_ShouldSkipBlackboardProperty(class UProperty* Property)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionBlueprint.ShouldSkipBlackboardProperty");
		
		UAIActionBlueprint_ShouldSkipBlackboardProperty_Params params {};
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIActionBlueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIActionBlueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIActionBlueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIActionBlueprintGeneratedClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIActionBlueprintGeneratedClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIActionBlueprintGeneratedClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078D5A0
	 * 		Name   -> Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Object
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::STATIC_RunScriptedAIAction_Object(class UObject* Object, class UClass* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Object");
		
		UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Object_Params params {};
		params.Object = Object;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078D4E0
	 * 		Name   -> Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Controller
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxAIController*                            Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::STATIC_RunScriptedAIAction_Controller(class AGbxAIController* Controller, class UClass* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Controller");
		
		UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Controller_Params params {};
		params.Controller = Controller;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078D360
	 * 		Name   -> Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_AIActionComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIActionComponent*                          AIActionComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::STATIC_RunScriptedAIAction_AIActionComponent(class UAIActionComponent* AIActionComponent, class UClass* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_AIActionComponent");
		
		UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_AIActionComponent_Params params {};
		params.AIActionComponent = AIActionComponent;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078D420
	 * 		Name   -> Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Actor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::STATIC_RunScriptedAIAction_Actor(class AActor* Actor, class UClass* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Actor");
		
		UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Actor_Params params {};
		params.Actor = Actor;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_RunScriptedAIAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_RunScriptedAIAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GameplayTask_RunScriptedAIAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078D270
	 * 		Name   -> Function GbxAI.AIActionComponent.ReplaceMainAIAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIActionComponent::ReplaceMainAIAction(class UClass* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionComponent.ReplaceMainAIAction");
		
		UAIActionComponent_ReplaceMainAIAction_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078D000
	 * 		Name   -> Function GbxAI.AIActionComponent.GetBlackboardData
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	class UBlackboardData* UAIActionComponent::GetBlackboardData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionComponent.GetBlackboardData");
		
		UAIActionComponent_GetBlackboardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078CE20
	 * 		Name   -> Function GbxAI.AIActionComponent.AbortScriptedAIAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bStopImmediately                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIActionComponent::AbortScriptedAIAction(bool bStopImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionComponent.AbortScriptedAIAction");
		
		UAIActionComponent_AbortScriptedAIAction_Params params {};
		params.bStopImmediately = bStopImmediately;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIActionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIActionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIActionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIActionManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIActionManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIActionManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078D0D0
	 * 		Name   -> Function GbxAI.AIAspect_ActorCollision.OnPawnHit
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAIAspect_ActorCollision::OnPawnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_ActorCollision.OnPawnHit");
		
		UAIAspect_ActorCollision_OnPawnHit_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0078D030
	 * 		Name   -> Function GbxAI.AIAspect_ActorCollision.GetOnCollisionOptions
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		TArray<class FName>                                Options                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIAspect_ActorCollision::STATIC_GetOnCollisionOptions(TArray<class FName>* Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_ActorCollision.GetOnCollisionOptions");
		
		UAIAspect_ActorCollision_GetOnCollisionOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Options != nullptr)
			*Options = params.Options;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_ActorCollision.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_ActorCollision::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_ActorCollision");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00792030
	 * 		Name   -> Function GbxAI.AIAspect_Condition.GetConditionDataDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAIAspectSettings_ConditionData             ConditionData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class FString UAIAspect_Condition::STATIC_GetConditionDataDescription(const struct FAIAspectSettings_ConditionData& ConditionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Condition.GetConditionDataDescription");
		
		UAIAspect_Condition_GetConditionDataDescription_Params params {};
		params.ConditionData = ConditionData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Condition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Condition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Condition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_AIGroupCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_AIGroupCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_AIGroupCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_AvoidWhileIdle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_AvoidWhileIdle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_AvoidWhileIdle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00792340
	 * 		Name   -> Function GbxAI.AIAspect_BlackboardKey.GetSettingsDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAIAspectSettings_BlackboardKey             BBKeySettings                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UAIAspect_BlackboardKey::STATIC_GetSettingsDescription(const struct FAIAspectSettings_BlackboardKey& BBKeySettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_BlackboardKey.GetSettingsDescription");
		
		UAIAspect_BlackboardKey_GetSettingsDescription_Params params {};
		params.BBKeySettings = BBKeySettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_BlackboardKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_BlackboardKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_BlackboardKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Charge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Charge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Charge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796300
	 * 		Name   -> Function GbxAI.AIAspect_Navigation.GetNavSettingsDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAIAspectSettings_Navigation                NavSettings                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UProperty*                                   Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAIAspect_Navigation::STATIC_GetNavSettingsDescription(const struct FAIAspectSettings_Navigation& NavSettings, class UProperty* Property)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Navigation.GetNavSettingsDescription");
		
		UAIAspect_Navigation_GetNavSettingsDescription_Params params {};
		params.NavSettings = NavSettings;
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Navigation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Navigation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Navigation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Circle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Circle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Circle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_ClaimSmartObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_ClaimSmartObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_ClaimSmartObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Cooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Cooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Cooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Crouch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Crouch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Crouch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_DisableAvoidance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_DisableAvoidance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_DisableAvoidance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_MoveNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_MoveNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_MoveNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_UseNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_UseNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_UseNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_DropshipSpawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_DropshipSpawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_DropshipSpawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00792110
	 * 		Name   -> Function GbxAI.AIAspect_EnvQuery.GetQuerySettingsDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAIAspectSettings_EnvQuery                  QuerySettings                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UProperty*                                   Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAIAspect_EnvQuery::STATIC_GetQuerySettingsDescription(const struct FAIAspectSettings_EnvQuery& QuerySettings, class UProperty* Property)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_EnvQuery.GetQuerySettingsDescription");
		
		UAIAspect_EnvQuery_GetQuerySettingsDescription_Params params {};
		params.QuerySettings = QuerySettings;
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_EnvQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_EnvQuery::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_EnvQuery");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_FaceNearbyCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_FaceNearbyCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_FaceNearbyCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_GbxAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_GbxAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_GbxAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_FallToGround.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_FallToGround::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_FallToGround");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_FindClosestPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_FindClosestPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_FindClosestPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_FindCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_FindCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_FindCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_FlyToNavMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_FlyToNavMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_FlyToNavMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_FollowUpdate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_FollowUpdate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_FollowUpdate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_GroupLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_GroupLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_GroupLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_IntCompare.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_IntCompare::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_IntCompare");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_IsInRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_IsInRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_IsInRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_IsInTerritory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_IsInTerritory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_IsInTerritory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Land.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Land::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Land");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_LeadUpdate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_LeadUpdate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_LeadUpdate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796510
	 * 		Name   -> Function GbxAI.AIAspect_Leap.GetQuerySettingsDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAIAspectSettings_Leap                      LeapSettings                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UProperty*                                   Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAIAspect_Leap::STATIC_GetQuerySettingsDescription(const struct FAIAspectSettings_Leap& LeapSettings, class UProperty* Property)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Leap.GetQuerySettingsDescription");
		
		UAIAspect_Leap_GetQuerySettingsDescription_Params params {};
		params.LeapSettings = LeapSettings;
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Leap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Leap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Leap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Location.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Location::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Location");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_LockTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_LockTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_LockTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_LookAroundRandomly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_LookAroundRandomly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_LookAroundRandomly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796B20
	 * 		Name   -> Function GbxAI.AIAspect_Loop.GetSettingsDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAIAspectSettings_Loop                      LoopSettings                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class FString UAIAspect_Loop::STATIC_GetSettingsDescription(const struct FAIAspectSettings_Loop& LoopSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Loop.GetSettingsDescription");
		
		UAIAspect_Loop_GetSettingsDescription_Params params {};
		params.LoopSettings = LoopSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Loop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Loop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Loop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_MoveSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_MoveSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_MoveSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_NavBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_NavBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_NavBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_NavCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_NavCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_NavCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_NavFlyOffset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_NavFlyOffset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_NavFlyOffset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Orbit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Orbit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Orbit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Plan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Plan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Plan");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796910
	 * 		Name   -> Function GbxAI.AIAspect_Rotation.GetRotationSettingsDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAIAspectSettings_Rotation                  RotationSettings                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UProperty*                                   Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAIAspect_Rotation::STATIC_GetRotationSettingsDescription(const struct FAIAspectSettings_Rotation& RotationSettings, class UProperty* Property)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Rotation.GetRotationSettingsDescription");
		
		UAIAspect_Rotation_GetRotationSettingsDescription_Params params {};
		params.RotationSettings = RotationSettings;
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00796700
	 * 		Name   -> Function GbxAI.AIAspect_Rotation.GetRotationChannelSettingsDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAIAspectSettings_RotationChannel           RotationChannelSettings                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UProperty*                                   Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAIAspect_Rotation::STATIC_GetRotationChannelSettingsDescription(const struct FAIAspectSettings_RotationChannel& RotationChannelSettings, class UProperty* Property)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Rotation.GetRotationChannelSettingsDescription");
		
		UAIAspect_Rotation_GetRotationChannelSettingsDescription_Params params {};
		params.RotationChannelSettings = RotationChannelSettings;
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Rotation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Rotation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Rotation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Route.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Route::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Route");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Stance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Stance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Stance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Sweep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Sweep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Sweep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Swoop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Swoop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Swoop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_TakeOff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_TakeOff::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_TakeOff");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C170
	 * 		Name   -> Function GbxAI.AIAspect_Teleport.GetTeleportSettingsDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAIAspectSettings_Teleport                  TeleportSettings                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UProperty*                                   Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAIAspect_Teleport::STATIC_GetTeleportSettingsDescription(const struct FAIAspectSettings_Teleport& TeleportSettings, class UProperty* Property)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Teleport.GetTeleportSettingsDescription");
		
		UAIAspect_Teleport_GetTeleportSettingsDescription_Params params {};
		params.TeleportSettings = TeleportSettings;
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Teleport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Teleport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Teleport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Territory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Territory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Territory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Ticket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Ticket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Ticket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_TimedCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_TimedCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_TimedCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_TimeLimit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_TimeLimit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_TimeLimit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Timer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Timer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Timer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_UseCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_UseCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_UseCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_UseSmartObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_UseSmartObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_UseSmartObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C380
	 * 		Name   -> Function GbxAI.AIAspect_Weapon.GetWeaponSettingsDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAIAspectSettings_Weapon                    WeaponSettings                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UProperty*                                   Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAIAspect_Weapon::STATIC_GetWeaponSettingsDescription(const struct FAIAspectSettings_Weapon& WeaponSettings, class UProperty* Property)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Weapon.GetWeaponSettingsDescription");
		
		UAIAspect_Weapon_GetWeaponSettingsDescription_Params params {};
		params.WeaponSettings = WeaponSettings;
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_Weapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_Weapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_Weapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_ZeroRotation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_ZeroRotation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspect_ZeroRotation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspectBlueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspectBlueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAspectBlueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAICloakData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAICloakData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AICloakData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C800
	 * 		Name   -> Function GbxAI.AICloakComponent.SetCloakData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAICloakData*                                NewCloakData                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAICloakComponent::SetCloakData(class UAICloakData* NewCloakData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.SetCloakData");
		
		UAICloakComponent_SetCloakData_Params params {};
		params.NewCloakData = NewCloakData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C7E0
	 * 		Name   -> Function GbxAI.AICloakComponent.OnRep_Cloaked
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAICloakComponent::OnRep_Cloaked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.OnRep_Cloaked");
		
		UAICloakComponent_OnRep_Cloaked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C620
	 * 		Name   -> Function GbxAI.AICloakComponent.IsPlayingAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAICloakComponent::IsPlayingAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.IsPlayingAction");
		
		UAICloakComponent_IsPlayingAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C5C0
	 * 		Name   -> Function GbxAI.AICloakComponent.IsCloakStateForced
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAICloakComponent::IsCloakStateForced()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.IsCloakStateForced");
		
		UAICloakComponent_IsCloakStateForced_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C5F0
	 * 		Name   -> Function GbxAI.AICloakComponent.IsCloaked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAICloakComponent::IsCloaked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.IsCloaked");
		
		UAICloakComponent_IsCloaked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C5A0
	 * 		Name   -> Function GbxAI.AICloakComponent.InterruptCloakAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAICloakComponent::InterruptCloakAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.InterruptCloakAction");
		
		UAICloakComponent_InterruptCloakAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C140
	 * 		Name   -> Function GbxAI.AICloakComponent.GetCloakData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAICloakData* UAICloakComponent::GetCloakData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.GetCloakData");
		
		UAICloakComponent_GetCloakData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C0B0
	 * 		Name   -> Function GbxAI.AICloakComponent.ForceUncloak
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInCanPlayActions                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAICloakComponent::ForceUncloak(bool bInCanPlayActions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.ForceUncloak");
		
		UAICloakComponent_ForceUncloak_Params params {};
		params.bInCanPlayActions = bInCanPlayActions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C020
	 * 		Name   -> Function GbxAI.AICloakComponent.ForceCloak
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInCanPlayActions                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAICloakComponent::ForceCloak(bool bInCanPlayActions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.ForceCloak");
		
		UAICloakComponent_ForceCloak_Params params {};
		params.bInCanPlayActions = bInCanPlayActions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079BF20
	 * 		Name   -> Function GbxAI.AICloakComponent.ClearForcedState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAICloakComponent::ClearForcedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.ClearForcedState");
		
		UAICloakComponent_ClearForcedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079BF00
	 * 		Name   -> Function GbxAI.AICloakComponent.ClearCloakData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAICloakComponent::ClearCloakData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.ClearCloakData");
		
		UAICloakComponent_ClearCloakData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAICloakComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAICloakComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AICloakComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIConstraint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C6F0
	 * 		Name   -> Function GbxAI.AIGroupBlueprintLibrary.IsUsingAITicket
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AAIController*                               AIUser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAITicketDataAsset*                          Ticket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterruptible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIGroupBlueprintLibrary::STATIC_IsUsingAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, bool bInterruptible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.IsUsingAITicket");
		
		UAIGroupBlueprintLibrary_IsUsingAITicket_Params params {};
		params.AIUser = AIUser;
		params.Ticket = Ticket;
		params.bInterruptible = bInterruptible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079C650
	 * 		Name   -> Function GbxAI.AIGroupBlueprintLibrary.IsTicketValid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAITicketHandle                             TicketHandle                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAIGroupBlueprintLibrary::STATIC_IsTicketValid(struct FAITicketHandle* TicketHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.IsTicketValid");
		
		UAIGroupBlueprintLibrary_IsTicketValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TicketHandle != nullptr)
			*TicketHandle = params.TicketHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079BF40
	 * 		Name   -> Function GbxAI.AIGroupBlueprintLibrary.ClearTicket
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAITicketHandle                             TicketHandle                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              HoldDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIGroupBlueprintLibrary::STATIC_ClearTicket(struct FAITicketHandle* TicketHandle, float HoldDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.ClearTicket");
		
		UAIGroupBlueprintLibrary_ClearTicket_Params params {};
		params.HoldDuration = HoldDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TicketHandle != nullptr)
			*TicketHandle = params.TicketHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079BE00
	 * 		Name   -> Function GbxAI.AIGroupBlueprintLibrary.ClearAITicket
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AAIController*                               AIUser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAITicketDataAsset*                          Ticket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HoldDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIGroupBlueprintLibrary::STATIC_ClearAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float HoldDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.ClearAITicket");
		
		UAIGroupBlueprintLibrary_ClearAITicket_Params params {};
		params.AIUser = AIUser;
		params.Ticket = Ticket;
		params.HoldDuration = HoldDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079BCC0
	 * 		Name   -> Function GbxAI.AIGroupBlueprintLibrary.CanUseAITicket
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AAIController*                               AIUser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAITicketDataAsset*                          Ticket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterruptible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIGroupBlueprintLibrary::STATIC_CanUseAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, bool bInterruptible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.CanUseAITicket");
		
		UAIGroupBlueprintLibrary_CanUseAITicket_Params params {};
		params.AIUser = AIUser;
		params.Ticket = Ticket;
		params.Value = Value;
		params.bInterruptible = bInterruptible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0079BAB0
	 * 		Name   -> Function GbxAI.AIGroupBlueprintLibrary.AddAITicket
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAITicketHandle                             OutTicketHandle                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AAIController*                               AIUser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAITicketDataAsset*                          Ticket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPriority                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterruptible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIGroupBlueprintLibrary::STATIC_AddAITicket(struct FAITicketHandle* OutTicketHandle, class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, float MaxDuration, bool bPriority, bool bInterruptible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.AddAITicket");
		
		UAIGroupBlueprintLibrary_AddAITicket_Params params {};
		params.AIUser = AIUser;
		params.Ticket = Ticket;
		params.Value = Value;
		params.MaxDuration = MaxDuration;
		params.bPriority = bPriority;
		params.bInterruptible = bInterruptible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTicketHandle != nullptr)
			*OutTicketHandle = params.OutTicketHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIGroupBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIGroupBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIGroupBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2070
	 * 		Name   -> Function GbxAI.AIGroupState.OnThreatActorDied
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIGroupState::OnThreatActorDied(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupState.OnThreatActorDied");
		
		UAIGroupState_OnThreatActorDied_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIGroupState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIGroupState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIGroupState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1FB0
	 * 		Name   -> Function GbxAI.AINode.OnPawnDepartedNodeCB
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      NodeActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       DepartedPawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAINode::OnPawnDepartedNodeCB(class AActor* NodeActor, class APawn* DepartedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINode.OnPawnDepartedNodeCB");
		
		AAINode_OnPawnDepartedNodeCB_Params params {};
		params.NodeActor = NodeActor;
		params.DepartedPawn = DepartedPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1EF0
	 * 		Name   -> Function GbxAI.AINode.OnPawnArrivedNodeCB
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      NodeActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       ArrivedPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAINode::OnPawnArrivedNodeCB(class AActor* NodeActor, class APawn* ArrivedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINode.OnPawnArrivedNodeCB");
		
		AAINode_OnPawnArrivedNodeCB_Params params {};
		params.NodeActor = NodeActor;
		params.ArrivedPawn = ArrivedPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAINode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAINode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AINode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1660
	 * 		Name   -> Function GbxAI.AINodeBlueprintLibrary.FindNearestNode
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeDisabled                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UAINodeBlueprintLibrary::STATIC_FindNearestNode(class UObject* WorldContextObject, const struct FVector& Location, bool bIncludeDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeBlueprintLibrary.FindNearestNode");
		
		UAINodeBlueprintLibrary_FindNearestNode_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.bIncludeDisabled = bIncludeDisabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1530
	 * 		Name   -> Function GbxAI.AINodeBlueprintLibrary.FindAllNodes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class AActor*>                              OutputNodes                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeDisabled                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAINodeBlueprintLibrary::STATIC_FindAllNodes(TArray<class AActor*>* OutputNodes, class UObject* WorldContextObject, bool bIncludeDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeBlueprintLibrary.FindAllNodes");
		
		UAINodeBlueprintLibrary_FindAllNodes_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.bIncludeDisabled = bIncludeDisabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputNodes != nullptr)
			*OutputNodes = params.OutputNodes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A13A0
	 * 		Name   -> Function GbxAI.AINodeBlueprintLibrary.ChooseRandomNode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeDisabled                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UAINodeBlueprintLibrary::STATIC_ChooseRandomNode(class UObject* WorldContextObject, bool bIncludeDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeBlueprintLibrary.ChooseRandomNode");
		
		UAINodeBlueprintLibrary_ChooseRandomNode_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.bIncludeDisabled = bIncludeDisabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAINodeBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAINodeBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AINodeBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2350
	 * 		Name   -> Function GbxAI.AINodeComponent.SelectNextNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UAINodeComponent::SelectNextNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.SelectNextNode");
		
		UAINodeComponent_SelectNextNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1CA0
	 * 		Name   -> Function GbxAI.AINodeComponent.HasLinkTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAINodeComponent::HasLinkTo(class AActor* Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.HasLinkTo");
		
		UAINodeComponent_HasLinkTo_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1C10
	 * 		Name   -> Function GbxAI.AINodeComponent.HasLinkFrom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAINodeComponent::HasLinkFrom(class AActor* Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.HasLinkFrom");
		
		UAINodeComponent_HasLinkFrom_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1B30
	 * 		Name   -> Function GbxAI.AINodeComponent.HasArrived
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Error                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAINodeComponent::HasArrived(const struct FVector& Point, float Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.HasArrived");
		
		UAINodeComponent_HasArrived_Params params {};
		params.Point = Point;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1930
	 * 		Name   -> Function GbxAI.AINodeComponent.GetLinkedNodeNum
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UAINodeComponent::GetLinkedNodeNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.GetLinkedNodeNum");
		
		UAINodeComponent_GetLinkedNodeNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A18A0
	 * 		Name   -> Function GbxAI.AINodeComponent.GetLinkedNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            I                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UAINodeComponent::GetLinkedNode(int32_t I)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.GetLinkedNode");
		
		UAINodeComponent_GetLinkedNode_Params params {};
		params.I = I;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1460
	 * 		Name   -> Function GbxAI.AINodeComponent.CreateLinkTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Weight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAINodeComponent::CreateLinkTo(class AActor* Node, float Weight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.CreateLinkTo");
		
		UAINodeComponent_CreateLinkTo_Params params {};
		params.Node = Node;
		params.Weight = Weight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1200
	 * 		Name   -> Function GbxAI.AINodeComponent.BreakLinkTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Node                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAINodeComponent::BreakLinkTo(class AActor* Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.BreakLinkTo");
		
		UAINodeComponent_BreakLinkTo_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAINodeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAINodeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AINodeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPlanData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPlanData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIPlanData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Proximity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Proximity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AISense_Proximity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Threat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Threat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AISense_Threat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig_Proximity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Proximity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AISenseConfig_Proximity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig_Threat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Threat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AISenseConfig_Threat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIStanceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIStanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIStanceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1DF0
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedByInfo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTargetActorInfo                            TargetInfo                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UAITargetingBlueprintLibrary::STATIC_IsThreatenedByInfo(class AActor* AIActor, const struct FTargetActorInfo& TargetInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedByInfo");
		
		UAITargetingBlueprintLibrary_IsThreatenedByInfo_Params params {};
		params.AIActor = AIActor;
		params.TargetInfo = TargetInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1D30
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedBy
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAITargetingBlueprintLibrary::STATIC_IsThreatenedBy(class AActor* AIActor, class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedBy");
		
		UAITargetingBlueprintLibrary_IsThreatenedBy_Params params {};
		params.AIActor = AIActor;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1A30
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.GetTargetSenseAge
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTargetActorInfo                            TargetInfo                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Sense                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAITargetingBlueprintLibrary::STATIC_GetTargetSenseAge(const struct FTargetActorInfo& TargetInfo, class UClass* Sense)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.GetTargetSenseAge");
		
		UAITargetingBlueprintLibrary_GetTargetSenseAge_Params params {};
		params.TargetInfo = TargetInfo;
		params.Sense = Sense;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1960
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.GetNumTargetsInRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAITargetingBlueprintLibrary::STATIC_GetNumTargetsInRange(class AActor* AIActor, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.GetNumTargetsInRange");
		
		UAITargetingBlueprintLibrary_GetNumTargetsInRange_Params params {};
		params.AIActor = AIActor;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1770
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.GetBestKnownLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UAITargetingBlueprintLibrary::STATIC_GetBestKnownLocation(class AActor* AIActor, class AActor* TargetActor, const class FName& Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.GetBestKnownLocation");
		
		UAITargetingBlueprintLibrary_GetBestKnownLocation_Params params {};
		params.AIActor = AIActor;
		params.TargetActor = TargetActor;
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1290
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.CalcTargetGroupLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GroupDistance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Result                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAITargetingBlueprintLibrary::STATIC_CalcTargetGroupLocation(class AActor* AIActor, float GroupDistance, struct FVector* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.CalcTargetGroupLocation");
		
		UAITargetingBlueprintLibrary_CalcTargetGroupLocation_Params params {};
		params.AIActor = AIActor;
		params.GroupDistance = GroupDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A10C0
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.ApplyTargetScoringBoost
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoostName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAITargetScoringBoost                              ScoringBoost                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationInSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAITargetingBlueprintLibrary::STATIC_ApplyTargetScoringBoost(class AActor* TargetActor, const class FName& BoostName, EAITargetScoringBoost ScoringBoost, float DurationInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.ApplyTargetScoringBoost");
		
		UAITargetingBlueprintLibrary_ApplyTargetScoringBoost_Params params {};
		params.TargetActor = TargetActor;
		params.BoostName = BoostName;
		params.ScoringBoost = ScoringBoost;
		params.DurationInSeconds = DurationInSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A0FB0
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.AISetTargetInBlackboard
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGbxBlackboardKeySelector                   Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TargetIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAITargetingBlueprintLibrary::STATIC_AISetTargetInBlackboard(class AActor* AIActor, const struct FGbxBlackboardKeySelector& Key, int32_t TargetIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AISetTargetInBlackboard");
		
		UAITargetingBlueprintLibrary_AISetTargetInBlackboard_Params params {};
		params.AIActor = AIActor;
		params.Key = Key;
		params.TargetIndex = TargetIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A0F00
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.AISetScriptedTarget
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAITargetingBlueprintLibrary::STATIC_AISetScriptedTarget(class AActor* AIActor, class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AISetScriptedTarget");
		
		UAITargetingBlueprintLibrary_AISetScriptedTarget_Params params {};
		params.AIActor = AIActor;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A0E40
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.AISendCommunication
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAITargetingBlueprintLibrary::STATIC_AISendCommunication(class AActor* AIActor, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AISendCommunication");
		
		UAITargetingBlueprintLibrary_AISendCommunication_Params params {};
		params.AIActor = AIActor;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A0D00
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.AIProvokeSpecificSense
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AITarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      SenseType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StimulusLocation                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAITargetingBlueprintLibrary::STATIC_AIProvokeSpecificSense(class AActor* AITarget, class AActor* Source, class UClass* SenseType, const struct FVector& StimulusLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AIProvokeSpecificSense");
		
		UAITargetingBlueprintLibrary_AIProvokeSpecificSense_Params params {};
		params.AITarget = AITarget;
		params.Source = Source;
		params.SenseType = SenseType;
		params.StimulusLocation = StimulusLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A0C50
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.AIProvoke
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AITarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAITargetingBlueprintLibrary::STATIC_AIProvoke(class AActor* AITarget, class AActor* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AIProvoke");
		
		UAITargetingBlueprintLibrary_AIProvoke_Params params {};
		params.AITarget = AITarget;
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A0BE0
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.AIPlayerProvoke
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AITarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAITargetingBlueprintLibrary::STATIC_AIPlayerProvoke(class AActor* AITarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AIPlayerProvoke");
		
		UAITargetingBlueprintLibrary_AIPlayerProvoke_Params params {};
		params.AITarget = AITarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A0B60
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.AIGetScriptedTarget
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UAITargetingBlueprintLibrary::STATIC_AIGetScriptedTarget(class AActor* AIActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AIGetScriptedTarget");
		
		UAITargetingBlueprintLibrary_AIGetScriptedTarget_Params params {};
		params.AIActor = AIActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A0A70
	 * 		Name   -> Function GbxAI.AITargetingBlueprintLibrary.AICanCommunicate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinSenseAgeDelta                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAITargetingBlueprintLibrary::STATIC_AICanCommunicate(class AActor* AIActor, float Radius, float MinSenseAgeDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AICanCommunicate");
		
		UAITargetingBlueprintLibrary_AICanCommunicate_Params params {};
		params.AIActor = AIActor;
		params.Radius = Radius;
		params.MinSenseAgeDelta = MinSenseAgeDelta;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITargetingBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITargetingBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AITargetingBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITask_UseLookAtPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask_UseLookAtPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AITask_UseLookAtPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITask_UsePerch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask_UsePerch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AITask_UsePerch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITask_UseSmartObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask_UseSmartObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AITask_UseSmartObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITicketDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITicketDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AITicketDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIUsableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIUsableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIUsableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2380
	 * 		Name   -> Function GbxAI.AIUseComponent.StopUse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSucceeded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIUseComponent::StopUse(bool bSucceeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIUseComponent.StopUse");
		
		UAIUseComponent_StopUse_Params params {};
		params.bSucceeded = bSucceeded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A21F0
	 * 		Name   -> Function GbxAI.AIUseComponent.RequestUse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      SmartObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActionName                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAbortExisting                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUntilInterrupted                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIUseComponent::RequestUse(class AActor* SmartObject, const struct FGameplayTag& ActionName, bool bAbortExisting, bool bUntilInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIUseComponent.RequestUse");
		
		UAIUseComponent_RequestUse_Params params {};
		params.SmartObject = SmartObject;
		params.ActionName = ActionName;
		params.bAbortExisting = bAbortExisting;
		params.bUntilInterrupted = bUntilInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A2130
	 * 		Name   -> Function GbxAI.AIUseComponent.OnUseCompleted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UAITask*                                     Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESmartObjectTaskResult                             Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIUseComponent::OnUseCompleted(class UAITask* Task, ESmartObjectTaskResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIUseComponent.OnUseCompleted");
		
		UAIUseComponent_OnUseCompleted_Params params {};
		params.Task = Task;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A1870
	 * 		Name   -> Function GbxAI.AIUseComponent.GetCurrentObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class AActor* UAIUseComponent::GetCurrentObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIUseComponent.GetCurrentObject");
		
		UAIUseComponent_GetCurrentObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIUseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIUseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIUseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A5960
	 * 		Name   -> Function GbxAI.AIUseSlotComponent.GetAvailableSocketNames
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<class FName>                                Array                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIUseSlotComponent::GetAvailableSocketNames(TArray<class FName>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIUseSlotComponent.GetAvailableSocketNames");
		
		UAIUseSlotComponent_GetAvailableSocketNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIUseSlotComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIUseSlotComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIUseSlotComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A5BB0
	 * 		Name   -> Function GbxAI.AIWeaponUserComponent.WantsToFire
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAIWeaponUserComponent::WantsToFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIWeaponUserComponent.WantsToFire");
		
		UAIWeaponUserComponent_WantsToFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A5A70
	 * 		Name   -> Function GbxAI.AIWeaponUserComponent.OnWeaponUsed
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAIWeaponUserComponent::OnWeaponUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.AIWeaponUserComponent.OnWeaponUsed");
		
		UAIWeaponUserComponent_OnWeaponUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIWeaponUserComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIWeaponUserComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIWeaponUserComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_SmartObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_SmartObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AnimNotify_SmartObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_UseSmartAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_UseSmartAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AnimNotify_UseSmartAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_SmartAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_SmartAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BlackboardKeyType_SmartAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTComposite_Random.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTComposite_Random::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTComposite_Random");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_AIAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_AIAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTDecorator_AIAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUBTDecorator_AITicket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUBTDecorator_AITicket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.UBTDecorator_AITicket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_GbxLoop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_GbxLoop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTDecorator_GbxLoop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsInRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsInRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTDecorator_IsInRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_GameFocus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_GameFocus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTService_GameFocus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_GbxRunEQS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_GbxRunEQS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTService_GbxRunEQS");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AIAction_Custom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AIAction_Custom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_AIAction_Custom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_LookAt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_LookAt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_LookAt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveToComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveToComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_MoveToComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveToNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveToNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_MoveToNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_UseCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_UseCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_UseCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_UseSmartObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_UseSmartObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.BTTask_UseSmartObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A5A90
	 * 		Name   -> Function GbxAI.Cover.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACover::SetEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.Cover.SetEnabled");
		
		ACover_SetEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A5A10
	 * 		Name   -> Function GbxAI.Cover.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ACover::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.Cover.IsEnabled");
		
		ACover_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.Cover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A5B20
	 * 		Name   -> Function GbxAI.CoverSlotComponent.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewEnabled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverSlotComponent::SetEnabled(bool bNewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.CoverSlotComponent.SetEnabled");
		
		UCoverSlotComponent_SetEnabled_Params params {};
		params.bNewEnabled = bNewEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A5A40
	 * 		Name   -> Function GbxAI.CoverSlotComponent.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCoverSlotComponent::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.CoverSlotComponent.IsEnabled");
		
		UCoverSlotComponent_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoverSlotComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoverSlotComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.CoverSlotComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoverSlotData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoverSlotData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.CoverSlotData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoverStyleData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoverStyleData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.CoverStyleData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCoverTransitionTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCoverTransitionTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCoverTransitionTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A95A0
	 * 		Name   -> Function GbxAI.CoverUserComponent.SetEnterTransitionTable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxCoverTransitionTable*                    NewTable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverUserComponent::SetEnterTransitionTable(class UGbxCoverTransitionTable* NewTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.CoverUserComponent.SetEnterTransitionTable");
		
		UCoverUserComponent_SetEnterTransitionTable_Params params {};
		params.NewTable = NewTable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A9580
	 * 		Name   -> Function GbxAI.CoverUserComponent.OnRep_ClientData
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoverUserComponent::OnRep_ClientData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.CoverUserComponent.OnRep_ClientData");
		
		UCoverUserComponent_OnRep_ClientData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A9480
	 * 		Name   -> Function GbxAI.CoverUserComponent.OnMovementModeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoverUserComponent::OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.CoverUserComponent.OnMovementModeChanged");
		
		UCoverUserComponent_OnMovementModeChanged_Params params {};
		params.Character = Character;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A9460
	 * 		Name   -> Function GbxAI.CoverUserComponent.GetStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCoverStyleData* UCoverUserComponent::GetStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.CoverUserComponent.GetStyle");
		
		UCoverUserComponent_GetStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoverUserComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoverUserComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.CoverUserComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoverViewData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoverViewData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.CoverViewData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_AllTargets.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_AllTargets::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryContext_AllTargets");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_Friendlies.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Friendlies::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryContext_Friendlies");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_Target.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Target::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryContext_Target");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_TargetActualLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_TargetActualLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryContext_TargetActualLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_AINodes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_AINodes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_AINodes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_Cover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_Cover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_Cover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_DynamicPoints.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_DynamicPoints::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_DynamicPoints");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_FindLookAtPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_FindLookAtPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_FindLookAtPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_FindPerch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_FindPerch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_FindPerch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_SmartAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_SmartAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_SmartAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_SmartGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_SmartGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_SmartGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_Territory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_Territory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryGenerator_Territory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_SmartAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_SmartAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryItemType_SmartAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_ActorHealth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_ActorHealth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_ActorHealth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_AITicket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_AITicket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_AITicket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_Angle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Angle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_Angle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_ArcTrace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_ArcTrace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_ArcTrace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_AttackerCountAgainstTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_AttackerCountAgainstTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_AttackerCountAgainstTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_BlackboardKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_BlackboardKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_BlackboardKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_Boundary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Boundary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_Boundary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_CoverCurrent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_CoverCurrent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_CoverCurrent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_CoverExposure.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_CoverExposure::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_CoverExposure");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_CoverView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_CoverView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_CoverView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_CurrentTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_CurrentTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_CurrentTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_CustomScoringBoost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_CustomScoringBoost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_CustomScoringBoost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_DirectPath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_DirectPath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_DirectPath");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_GbxPath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_GbxPath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_GbxPath");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_IsInGodMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_IsInGodMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_IsInGodMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_MyMasterIsAttackingTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_MyMasterIsAttackingTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_MyMasterIsAttackingTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_PetModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_PetModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_PetModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_PetOwnerDistance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_PetOwnerDistance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_PetOwnerDistance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_StandardCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_StandardCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_StandardCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_TacticalCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_TacticalCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TacticalCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_TargetIsAttackingMyMaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_TargetIsAttackingMyMaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetIsAttackingMyMaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_TargetIsCloseToMyMaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_TargetIsCloseToMyMaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetIsCloseToMyMaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_TargetIsExposed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_TargetIsExposed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetIsExposed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_TargetIsHurtingMe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_TargetIsHurtingMe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetIsHurtingMe");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_TargetIsThreat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_TargetIsThreat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetIsThreat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_TargetSensed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_TargetSensed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_TargetSensed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_UberTrace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_UberTrace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_UberTrace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_WithinTerritory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_WithinTerritory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.EnvQueryTest_WithinTerritory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIResource_ScriptedAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIResource_ScriptedAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIResource_ScriptedAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AD6B0
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedAction.OnActorSpawned
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_ScriptedAction::OnActorSpawned(class ASpawner* Spawner, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedAction.OnActorSpawned");
		
		UGameplayTask_ScriptedAction_OnActorSpawned_Params params {};
		params.Spawner = Spawner;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_ScriptedAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_ScriptedAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxAI.GameplayTask_ScriptedCover.TaskScriptedCoverDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UGameplayTask_ScriptedCover::TaskScriptedCoverDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedCover.TaskScriptedCoverDelegate__DelegateSignature");
		
		UGameplayTask_ScriptedCover_TaskScriptedCoverDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AD640
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedCover.EndScriptedCover
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_ScriptedCover::STATIC_EndScriptedCover(class AActor* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedCover.EndScriptedCover");
		
		UGameplayTask_ScriptedCover_EndScriptedCover_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AC770
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedCover.BeginScriptedCover
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACover*                                      Cover                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedCover* UGameplayTask_ScriptedCover::STATIC_BeginScriptedCover(class AActor* User, class ACover* Cover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedCover.BeginScriptedCover");
		
		UGameplayTask_ScriptedCover_BeginScriptedCover_Params params {};
		params.User = User;
		params.Cover = Cover;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_ScriptedCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_ScriptedCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxAI.GameplayTask_ScriptedFollow.TaskScriptedMoveDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UGameplayTask_ScriptedFollow::TaskScriptedMoveDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedFollow.TaskScriptedMoveDelegate__DelegateSignature");
		
		UGameplayTask_ScriptedFollow_TaskScriptedMoveDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AC830
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedFollow.BeginScriptedFollow
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Follower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorToFollow                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedFollow* UGameplayTask_ScriptedFollow::STATIC_BeginScriptedFollow(class AActor* Follower, class AActor* ActorToFollow, class UStanceDataProvider* OptionalStance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedFollow.BeginScriptedFollow");
		
		UGameplayTask_ScriptedFollow_BeginScriptedFollow_Params params {};
		params.Follower = Follower;
		params.ActorToFollow = ActorToFollow;
		params.OptionalStance = OptionalStance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_ScriptedFollow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_ScriptedFollow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedFollow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxAI.GameplayTask_ScriptedLand.TaskScriptedLandDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UGameplayTask_ScriptedLand::TaskScriptedLandDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedLand.TaskScriptedLandDelegate__DelegateSignature");
		
		UGameplayTask_ScriptedLand_TaskScriptedLandDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AC920
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedLand.BeginScriptedLand
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Lander                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedLand* UGameplayTask_ScriptedLand::STATIC_BeginScriptedLand(class AActor* Lander)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedLand.BeginScriptedLand");
		
		UGameplayTask_ScriptedLand_BeginScriptedLand_Params params {};
		params.Lander = Lander;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_ScriptedLand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_ScriptedLand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedLand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxAI.GameplayTask_ScriptedLead.TaskScriptedLeadDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UGameplayTask_ScriptedLead::TaskScriptedLeadDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedLead.TaskScriptedLeadDelegate__DelegateSignature");
		
		UGameplayTask_ScriptedLead_TaskScriptedLeadDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AC9A0
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedLead.BeginScriptedLead
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Leader                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DestAINode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorToLead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedLead* UGameplayTask_ScriptedLead::STATIC_BeginScriptedLead(class AActor* Leader, class AActor* DestAINode, class AActor* ActorToLead, class UStanceDataProvider* OptionalStance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedLead.BeginScriptedLead");
		
		UGameplayTask_ScriptedLead_BeginScriptedLead_Params params {};
		params.Leader = Leader;
		params.DestAINode = DestAINode;
		params.ActorToLead = ActorToLead;
		params.OptionalStance = OptionalStance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_ScriptedLead.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_ScriptedLead::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedLead");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxAI.GameplayTask_ScriptedMove.TaskScriptedMoveDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UGameplayTask_ScriptedMove::TaskScriptedMoveDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedMove.TaskScriptedMoveDelegate__DelegateSignature");
		
		UGameplayTask_ScriptedMove_TaskScriptedMoveDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ACAD0
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMoveActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AAIController*                               Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      StartNode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OptionalLookAtActor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::STATIC_BeginScriptedMoveActor(class AAIController* Target, class AActor* StartNode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMoveActor");
		
		UGameplayTask_ScriptedMove_BeginScriptedMoveActor_Params params {};
		params.Target = Target;
		params.StartNode = StartNode;
		params.OptionalStance = OptionalStance;
		params.OptionalLookAtActor = OptionalLookAtActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ACAD0
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove2
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      StartAINode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OptionalLookAtActor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::STATIC_BeginScriptedMove2(class AActor* User, class AActor* StartAINode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove2");
		
		UGameplayTask_ScriptedMove_BeginScriptedMove2_Params params {};
		params.User = User;
		params.StartAINode = StartAINode;
		params.OptionalStance = OptionalStance;
		params.OptionalLookAtActor = OptionalLookAtActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ACC00
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      StartNode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScriptedActionRule                                SuccessRule                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScriptedActionRule                                FailRule                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddSpawned                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OptionalLookAtActor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleportOnFail                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::STATIC_BeginScriptedMove(class AActor* Target, class AActor* StartNode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, bool bTeleportOnFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove");
		
		UGameplayTask_ScriptedMove_BeginScriptedMove_Params params {};
		params.Target = Target;
		params.StartNode = StartNode;
		params.SuccessRule = SuccessRule;
		params.FailRule = FailRule;
		params.bAddSpawned = bAddSpawned;
		params.OptionalStance = OptionalStance;
		params.OptionalLookAtActor = OptionalLookAtActor;
		params.bTeleportOnFail = bTeleportOnFail;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_ScriptedMove.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_ScriptedMove::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedMove");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxAI.GameplayTask_ScriptedMoveSpline.TaskScriptedMoveDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class AActor*                                      Targeted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_ScriptedMoveSpline::TaskScriptedMoveDelegate__DelegateSignature(class AActor* Targeted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedMoveSpline.TaskScriptedMoveDelegate__DelegateSignature");
		
		UGameplayTask_ScriptedMoveSpline_TaskScriptedMoveDelegate__DelegateSignature_Params params {};
		params.Targeted = Targeted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007ACE30
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedMoveSpline.BeginScriptedMoveOnSpline
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      StartSpline                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScriptedActionRule                                SuccessRule                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScriptedActionRule                                FailRule                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReverse                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddSpawned                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OptionalLookAtActor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      OptionalAIAction                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedMoveSpline* UGameplayTask_ScriptedMoveSpline::STATIC_BeginScriptedMoveOnSpline(class AActor* Target, class AActor* StartSpline, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, float Offset, bool bReverse, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, class UClass* OptionalAIAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMoveSpline.BeginScriptedMoveOnSpline");
		
		UGameplayTask_ScriptedMoveSpline_BeginScriptedMoveOnSpline_Params params {};
		params.Target = Target;
		params.StartSpline = StartSpline;
		params.SuccessRule = SuccessRule;
		params.FailRule = FailRule;
		params.Offset = Offset;
		params.bReverse = bReverse;
		params.bAddSpawned = bAddSpawned;
		params.OptionalStance = OptionalStance;
		params.OptionalLookAtActor = OptionalLookAtActor;
		params.OptionalAIAction = OptionalAIAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_ScriptedMoveSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_ScriptedMoveSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedMoveSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_MoveToLevelSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_MoveToLevelSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIAction_MoveToLevelSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UGameplayTask_ScriptedMoveToLevelSequence::TaskScriptedMoveDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveDelegate__DelegateSignature");
		
		UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorsDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UGameplayTask_ScriptedMoveToLevelSequence::TaskScriptedMoveActorsDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorsDelegate__DelegateSignature");
		
		UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveActorsDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_ScriptedMoveToLevelSequence::TaskScriptedMoveActorDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorDelegate__DelegateSignature");
		
		UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveActorDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AD790
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceStopped
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceStopped");
		
		UGameplayTask_ScriptedMoveToLevelSequence_OnLevelSequenceStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AD770
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceFinished");
		
		UGameplayTask_ScriptedMoveToLevelSequence_OnLevelSequenceFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AD240
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequenceMulti
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AActor*>                              Targets                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AGbxLevelSequenceActor*                      LevelSequenceActor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStartSequence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedMoveToLevelSequence* UGameplayTask_ScriptedMoveToLevelSequence::STATIC_BeginScriptedMoveToLevelSequenceMulti(TArray<class AActor*> Targets, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequenceMulti");
		
		UGameplayTask_ScriptedMoveToLevelSequence_BeginScriptedMoveToLevelSequenceMulti_Params params {};
		params.Targets = Targets;
		params.LevelSequenceActor = LevelSequenceActor;
		params.bStartSequence = bStartSequence;
		params.OptionalStance = OptionalStance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AD100
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequence
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGbxLevelSequenceActor*                      LevelSequenceActor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStartSequence                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedMoveToLevelSequence* UGameplayTask_ScriptedMoveToLevelSequence::STATIC_BeginScriptedMoveToLevelSequence(class AActor* Target, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequence");
		
		UGameplayTask_ScriptedMoveToLevelSequence_BeginScriptedMoveToLevelSequence_Params params {};
		params.Target = Target;
		params.LevelSequenceActor = LevelSequenceActor;
		params.bStartSequence = bStartSequence;
		params.OptionalStance = OptionalStance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_ScriptedMoveToLevelSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_ScriptedMoveToLevelSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedMoveToLevelSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxAI.GameplayTask_ScriptedRoute.TaskScriptedMoveDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UGameplayTask_ScriptedRoute::TaskScriptedMoveDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedRoute.TaskScriptedMoveDelegate__DelegateSignature");
		
		UGameplayTask_ScriptedRoute_TaskScriptedMoveDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AD3A0
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute2
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      FirstAINode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScriptedActionRule                                SuccessRule                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScriptedActionRule                                FailRule                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddSpawned                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedRoute* UGameplayTask_ScriptedRoute::STATIC_BeginScriptedRoute2(class AActor* Target, class AActor* FirstAINode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute2");
		
		UGameplayTask_ScriptedRoute_BeginScriptedRoute2_Params params {};
		params.Target = Target;
		params.FirstAINode = FirstAINode;
		params.SuccessRule = SuccessRule;
		params.FailRule = FailRule;
		params.bAddSpawned = bAddSpawned;
		params.OptionalStance = OptionalStance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007AD550
	 * 		Name   -> Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      FirstAINode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_ScriptedRoute* UGameplayTask_ScriptedRoute::STATIC_BeginScriptedRoute(class AActor* User, class AActor* FirstAINode, class UStanceDataProvider* OptionalStance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute");
		
		UGameplayTask_ScriptedRoute_BeginScriptedRoute_Params params {};
		params.User = User;
		params.FirstAINode = FirstAINode;
		params.OptionalStance = OptionalStance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_ScriptedRoute.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_ScriptedRoute::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GameplayTask_ScriptedRoute");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B29B0
	 * 		Name   -> Function GbxAI.GameplayTask_SmartAction.UnreserveCallback
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SmartObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActionTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_SmartAction::UnreserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.UnreserveCallback");
		
		UGameplayTask_SmartAction_UnreserveCallback_Params params {};
		params.User = User;
		params.SmartObject = SmartObject;
		params.ActionTag = ActionTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B28B0
	 * 		Name   -> Function GbxAI.GameplayTask_SmartAction.SuccessCallback
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SmartObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActionTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_SmartAction::SuccessCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.SuccessCallback");
		
		UGameplayTask_SmartAction_SuccessCallback_Params params {};
		params.User = User;
		params.SmartObject = SmartObject;
		params.ActionTag = ActionTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2320
	 * 		Name   -> Function GbxAI.GameplayTask_SmartAction.ReserveCallback
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SmartObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActionTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_SmartAction::ReserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.ReserveCallback");
		
		UGameplayTask_SmartAction_ReserveCallback_Params params {};
		params.User = User;
		params.SmartObject = SmartObject;
		params.ActionTag = ActionTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2050
	 * 		Name   -> Function GbxAI.GameplayTask_SmartAction.InterruptCallback
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SmartObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActionTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_SmartAction::InterruptCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.InterruptCallback");
		
		UGameplayTask_SmartAction_InterruptCallback_Params params {};
		params.User = User;
		params.SmartObject = SmartObject;
		params.ActionTag = ActionTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B17C0
	 * 		Name   -> Function GbxAI.GameplayTask_SmartAction.EndSmartAction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_SmartAction::STATIC_EndSmartAction(class AActor* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.EndSmartAction");
		
		UGameplayTask_SmartAction_EndSmartAction_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1550
	 * 		Name   -> Function GbxAI.GameplayTask_SmartAction.BeginSmartAction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SmartObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActionTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayTask_SmartAction* UGameplayTask_SmartAction::STATIC_BeginSmartAction(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.BeginSmartAction");
		
		UGameplayTask_SmartAction_BeginSmartAction_Params params {};
		params.User = User;
		params.SmartObject = SmartObject;
		params.ActionTag = ActionTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1450
	 * 		Name   -> Function GbxAI.GameplayTask_SmartAction.BeginCallback
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SmartObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActionTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTask_SmartAction::BeginCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.BeginCallback");
		
		UGameplayTask_SmartAction_BeginCallback_Params params {};
		params.User = User;
		params.SmartObject = SmartObject;
		params.ActionTag = ActionTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> DelegateFunction GbxAI.GameplayTask_SmartAction.AITaskEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UGameplayTask_SmartAction::AITaskEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_SmartAction.AITaskEvent__DelegateSignature");
		
		UGameplayTask_SmartAction_AITaskEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTask_SmartAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTask_SmartAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GameplayTask_SmartAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAction_CoverHitReaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAction_CoverHitReaction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAction_CoverHitReaction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAction_CoverTransition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAction_CoverTransition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAction_CoverTransition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2210
	 * 		Name   -> Function GbxAI.GbxAction_Navigation.K2_GetExitLocation
	 * 		Flags  -> (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UGbxAction_Navigation::K2_GetExitLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAction_Navigation.K2_GetExitLocation");
		
		UGbxAction_Navigation_K2_GetExitLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B21D0
	 * 		Name   -> Function GbxAI.GbxAction_Navigation.K2_GetEntryLocation
	 * 		Flags  -> (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UGbxAction_Navigation::K2_GetEntryLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAction_Navigation.K2_GetEntryLocation");
		
		UGbxAction_Navigation_K2_GetEntryLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAction_Navigation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAction_Navigation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAction_Navigation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAction_NavAnim.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAction_NavAnim::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAction_NavAnim");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxAI.GbxAction_NavJump.OnIdle
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAction_NavJump::OnIdle(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAction_NavJump.OnIdle");
		
		UGbxAction_NavJump_OnIdle_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxAI.GbxAction_NavJump.OnExit
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAction_NavJump::OnExit(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAction_NavJump.OnExit");
		
		UGbxAction_NavJump_OnExit_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAction_NavJump.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAction_NavJump::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAction_NavJump");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAction_NavHomingJump.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAction_NavHomingJump::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAction_NavHomingJump");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxAI.GbxAction_NavLerp.OnAlmostDone
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAction_NavLerp::OnAlmostDone(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAction_NavLerp.OnAlmostDone");
		
		UGbxAction_NavLerp_OnAlmostDone_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAction_NavLerp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAction_NavLerp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAction_NavLerp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B26F0
	 * 		Name   -> Function GbxAI.GbxAIBlueprintLibrary.SetPerceivableToAllAI
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPerceivable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAIBlueprintLibrary::STATIC_SetPerceivableToAllAI(class AActor* Actor, bool bPerceivable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.SetPerceivableToAllAI");
		
		UGbxAIBlueprintLibrary_SetPerceivableToAllAI_Params params {};
		params.Actor = Actor;
		params.bPerceivable = bPerceivable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2560
	 * 		Name   -> Function GbxAI.GbxAIBlueprintLibrary.SetAIPathFindingData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UHavokPathFindingData*                       PathFindingData                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAIBlueprintLibrary::STATIC_SetAIPathFindingData(class AActor* InActor, class UHavokPathFindingData* PathFindingData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.SetAIPathFindingData");
		
		UGbxAIBlueprintLibrary_SetAIPathFindingData_Params params {};
		params.InActor = InActor;
		params.PathFindingData = PathFindingData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B24B0
	 * 		Name   -> Function GbxAI.GbxAIBlueprintLibrary.SetAINavAreaData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGbxNavAreaData*                             NavAreaData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAIBlueprintLibrary::STATIC_SetAINavAreaData(class AActor* InActor, class UGbxNavAreaData* NavAreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.SetAINavAreaData");
		
		UGbxAIBlueprintLibrary_SetAINavAreaData_Params params {};
		params.InActor = InActor;
		params.NavAreaData = NavAreaData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2420
	 * 		Name   -> Function GbxAI.GbxAIBlueprintLibrary.ResetTeamForAllAIChildren
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAIBlueprintLibrary::STATIC_ResetTeamForAllAIChildren(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.ResetTeamForAllAIChildren");
		
		UGbxAIBlueprintLibrary_ResetTeamForAllAIChildren_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2150
	 * 		Name   -> Function GbxAI.GbxAIBlueprintLibrary.IsActorThreatened
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxAIBlueprintLibrary::STATIC_IsActorThreatened(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.IsActorThreatened");
		
		UGbxAIBlueprintLibrary_IsActorThreatened_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1E90
	 * 		Name   -> Function GbxAI.GbxAIBlueprintLibrary.GetValueAsActorAndLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UBlackboardComponent*                        Blackboard                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxAIBlueprintLibrary::STATIC_GetValueAsActorAndLocation(class UBlackboardComponent* Blackboard, const struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.GetValueAsActorAndLocation");
		
		UGbxAIBlueprintLibrary_GetValueAsActorAndLocation_Params params {};
		params.Blackboard = Blackboard;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
		if (Location != nullptr)
			*Location = params.Location;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1A10
	 * 		Name   -> Function GbxAI.GbxAIBlueprintLibrary.GetBlackboardValueAsActorAndLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     BTNode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxAIBlueprintLibrary::STATIC_GetBlackboardValueAsActorAndLocation(class UBTNode* BTNode, const struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.GetBlackboardValueAsActorAndLocation");
		
		UGbxAIBlueprintLibrary_GetBlackboardValueAsActorAndLocation_Params params {};
		params.BTNode = BTNode;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
		if (Location != nullptr)
			*Location = params.Location;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1260
	 * 		Name   -> Function GbxAI.GbxAIBlueprintLibrary.AIScriptedUseWeapon
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseWeapon                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAIBlueprintLibrary::STATIC_AIScriptedUseWeapon(class AActor* Actor, bool bUseWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.AIScriptedUseWeapon");
		
		UGbxAIBlueprintLibrary_AIScriptedUseWeapon_Params params {};
		params.Actor = Actor;
		params.bUseWeapon = bUseWeapon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B11B0
	 * 		Name   -> Function GbxAI.GbxAIBlueprintLibrary.AIScriptedAction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAIBlueprintLibrary::STATIC_AIScriptedAction(class AActor* Actor, class UClass* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.AIScriptedAction");
		
		UGbxAIBlueprintLibrary_AIScriptedAction_Params params {};
		params.Actor = Actor;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B10F0
	 * 		Name   -> Function GbxAI.GbxAIBlueprintLibrary.AIIsWithinTerritory
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETerritoryType                                     Zone                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxAIBlueprintLibrary::STATIC_AIIsWithinTerritory(class AActor* AIActor, ETerritoryType Zone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.AIIsWithinTerritory");
		
		UGbxAIBlueprintLibrary_AIIsWithinTerritory_Params params {};
		params.AIActor = AIActor;
		params.Zone = Zone;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAIBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAIBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAIBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2830
	 * 		Name   -> Function GbxAI.GbxAIController.SetTerritory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTerritoryComponent*                         Territory                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxAIController::SetTerritory(class UTerritoryComponent* Territory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.SetTerritory");
		
		AGbxAIController_SetTerritory_Params params {};
		params.Territory = Territory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B27B0
	 * 		Name   -> Function GbxAI.GbxAIController.SetTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UTeam*                                       Team                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxAIController::SetTeam(class UTeam* Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.SetTeam");
		
		AGbxAIController_SetTeam_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2610
	 * 		Name   -> Function GbxAI.GbxAIController.SetObstacleAvoidanceLock
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDisable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxAIController::SetObstacleAvoidanceLock(bool bDisable, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.SetObstacleAvoidanceLock");
		
		AGbxAIController_SetObstacleAvoidanceLock_Params params {};
		params.bDisable = bDisable;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2490
	 * 		Name   -> Function GbxAI.GbxAIController.ResetTerritoryToDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGbxAIController::ResetTerritoryToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.ResetTerritoryToDefault");
		
		AGbxAIController_ResetTerritoryToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2250
	 * 		Name   -> Function GbxAI.GbxAIController.OnMyWeaponHitSomething
	 * 		Flags  -> (Final, Native, Private, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxAIController::OnMyWeaponHitSomething(class AActor* HitActor, const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.OnMyWeaponHitSomething");
		
		AGbxAIController_OnMyWeaponHitSomething_Params params {};
		params.HitActor = HitActor;
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2020
	 * 		Name   -> Function GbxAI.GbxAIController.GetWeaponUserComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAIWeaponUserComponent* AGbxAIController::GetWeaponUserComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetWeaponUserComponent");
		
		AGbxAIController_GetWeaponUserComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1E70
	 * 		Name   -> Function GbxAI.GbxAIController.GetUseComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAIUseComponent* AGbxAIController::GetUseComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetUseComponent");
		
		AGbxAIController_GetUseComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1E50
	 * 		Name   -> Function GbxAI.GbxAIController.GetTerritory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTerritoryComponent* AGbxAIController::GetTerritory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetTerritory");
		
		AGbxAIController_GetTerritory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1E30
	 * 		Name   -> Function GbxAI.GbxAIController.GetTeamComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTeamComponent* AGbxAIController::GetTeamComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetTeamComponent");
		
		AGbxAIController_GetTeamComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1DF0
	 * 		Name   -> Function GbxAI.GbxAIController.GetTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTeam* AGbxAIController::GetTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetTeam");
		
		AGbxAIController_GetTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1DD0
	 * 		Name   -> Function GbxAI.GbxAIController.GetTargetingComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTargetingComponent* AGbxAIController::GetTargetingComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetTargetingComponent");
		
		AGbxAIController_GetTargetingComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1DB0
	 * 		Name   -> Function GbxAI.GbxAIController.GetTargetableComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTargetableComponent* AGbxAIController::GetTargetableComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetTargetableComponent");
		
		AGbxAIController_GetTargetableComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1D80
	 * 		Name   -> Function GbxAI.GbxAIController.GetSpawnerComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USpawnerComponent* AGbxAIController::GetSpawnerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetSpawnerComponent");
		
		AGbxAIController_GetSpawnerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1D50
	 * 		Name   -> Function GbxAI.GbxAIController.GetSpawner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ASpawner* AGbxAIController::GetSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetSpawner");
		
		AGbxAIController_GetSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1D10
	 * 		Name   -> Function GbxAI.GbxAIController.GetPerceptionComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAIPerceptionComponent* AGbxAIController::GetPerceptionComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetPerceptionComponent");
		
		AGbxAIController_GetPerceptionComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1CE0
	 * 		Name   -> Function GbxAI.GbxAIController.GetNumChildActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AGbxAIController::GetNumChildActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetNumChildActors");
		
		AGbxAIController_GetNumChildActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1CC0
	 * 		Name   -> Function GbxAI.GbxAIController.GetNavComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGbxNavComponent* AGbxAIController::GetNavComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetNavComponent");
		
		AGbxAIController_GetNavComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1CA0
	 * 		Name   -> Function GbxAI.GbxAIController.GetMovementComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGbxCharacterMovementComponent* AGbxAIController::GetMovementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetMovementComponent");
		
		AGbxAIController_GetMovementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1C70
	 * 		Name   -> Function GbxAI.GbxAIController.GetGroupState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAIGroupState* AGbxAIController::GetGroupState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetGroupState");
		
		AGbxAIController_GetGroupState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1C50
	 * 		Name   -> Function GbxAI.GbxAIController.GetGbxCharacter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AGbxCharacter* AGbxAIController::GetGbxCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetGbxCharacter");
		
		AGbxAIController_GetGbxCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1C30
	 * 		Name   -> Function GbxAI.GbxAIController.GetGbxActionComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGbxActionComponent* AGbxAIController::GetGbxActionComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetGbxActionComponent");
		
		AGbxAIController_GetGbxActionComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1BA0
	 * 		Name   -> Function GbxAI.GbxAIController.GetChildActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AActor*> AGbxAIController::GetChildActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetChildActors");
		
		AGbxAIController_GetChildActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B19F0
	 * 		Name   -> Function GbxAI.GbxAIController.GetBlackboardComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UBlackboardComponent* AGbxAIController::GetBlackboardComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetBlackboardComponent");
		
		AGbxAIController_GetBlackboardComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B19C0
	 * 		Name   -> Function GbxAI.GbxAIController.GetBlackboardAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UBlackboardData* AGbxAIController::GetBlackboardAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetBlackboardAsset");
		
		AGbxAIController_GetBlackboardAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1990
	 * 		Name   -> Function GbxAI.GbxAIController.GetAIGroupSize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AGbxAIController::GetAIGroupSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetAIGroupSize");
		
		AGbxAIController_GetAIGroupSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1850
	 * 		Name   -> Function GbxAI.GbxAIController.GetAIGroupList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class AActor*>                              AIGroupList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeSelf                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxAIController::GetAIGroupList(TArray<class AActor*>* AIGroupList, bool bIncludeSelf, float InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetAIGroupList");
		
		AGbxAIController_GetAIGroupList_Params params {};
		params.bIncludeSelf = bIncludeSelf;
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AIGroupList != nullptr)
			*AIGroupList = params.AIGroupList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1830
	 * 		Name   -> Function GbxAI.GbxAIController.GetAIActionComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAIActionComponent* AGbxAIController::GetAIActionComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetAIActionComponent");
		
		AGbxAIController_GetAIActionComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1740
	 * 		Name   -> Function GbxAI.GbxAIController.ChildDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxAIController::ChildDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.ChildDestroyed");
		
		AGbxAIController_ChildDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1640
	 * 		Name   -> Function GbxAI.GbxAIController.CheckPauseWhileFalling
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACharacter*                                  TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxAIController::CheckPauseWhileFalling(class ACharacter* TheCharacter, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.CheckPauseWhileFalling");
		
		AGbxAIController_CheckPauseWhileFalling_Params params {};
		params.TheCharacter = TheCharacter;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B13A0
	 * 		Name   -> Function GbxAI.GbxAIController.AddChildActors
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AActor*>                              NewChildren                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AGbxAIController::AddChildActors(TArray<class AActor*> NewChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.AddChildActors");
		
		AGbxAIController_AddChildActors_Params params {};
		params.NewChildren = NewChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1320
	 * 		Name   -> Function GbxAI.GbxAIController.AddChildActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      NewChild                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxAIController::AddChildActor(class AActor* NewChild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.AddChildActor");
		
		AGbxAIController_AddChildActor_Params params {};
		params.NewChild = NewChild;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAINavSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAINavSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAINavSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAISystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAISystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAISystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6F10
	 * 		Name   -> Function GbxAI.GbxAnimStateManager_Cover.Owner_PostBeginPlay
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGbxAnimStateManager_Cover::Owner_PostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAnimStateManager_Cover.Owner_PostBeginPlay");
		
		UGbxAnimStateManager_Cover_Owner_PostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAnimStateManager_Cover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAnimStateManager_Cover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxAnimStateManager_Cover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxBehaviorTreeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxBehaviorTreeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxBehaviorTreeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_AI_IsInRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_AI_IsInRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_AI_IsInRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_AI_IsMoving.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_AI_IsMoving::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_AI_IsMoving");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_AIHasNearbyAllies.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_AIHasNearbyAllies::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_AIHasNearbyAllies");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_BlackboardKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_BlackboardKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_BlackboardKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_CanFidgetNow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_CanFidgetNow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_CanFidgetNow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_HasEnemyTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_HasEnemyTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_HasEnemyTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_HasFriendlyTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_HasFriendlyTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_HasFriendlyTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_HasPlayerTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_HasPlayerTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_HasPlayerTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_HasTargetsInRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_HasTargetsInRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_HasTargetsInRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_IsActorThreatened.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_IsActorThreatened::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_IsActorThreatened");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_IsAttachedToOtherActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_IsAttachedToOtherActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_IsAttachedToOtherActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_IsCloaked.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_IsCloaked::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_IsCloaked");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_IsInCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_IsInCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_IsInCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_IsInStance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_IsInStance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxCondition_IsInStance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxEqsTestingPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxEqsTestingPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxEqsTestingPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6D30
	 * 		Name   -> Function GbxAI.SmartObject.GetSmartObjectComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class USmartObjectComponent* ASmartObject::GetSmartObjectComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObject.GetSmartObjectComponent");
		
		ASmartObject_GetSmartObjectComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6D10
	 * 		Name   -> Function GbxAI.SmartObject.GetGbxActionComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UGbxActionComponent* ASmartObject::GetGbxActionComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObject.GetGbxActionComponent");
		
		ASmartObject_GetGbxActionComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASmartObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASmartObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.SmartObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxSmartObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxSmartObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxSmartObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1CC0
	 * 		Name   -> Function GbxAI.GbxSpawner.GetGameplayTasksComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGameplayTasksComponent* AGbxSpawner::GetGameplayTasksComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxSpawner.GetGameplayTasksComponent");
		
		AGbxSpawner_GetGameplayTasksComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6BF0
	 * 		Name   -> Function GbxAI.GbxSpawner.GetAINodeComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAINodeComponent* AGbxSpawner::GetAINodeComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxSpawner.GetAINodeComponent");
		
		AGbxSpawner_GetAINodeComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6BC0
	 * 		Name   -> Function GbxAI.GbxSpawner.GetAIGroupState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAIGroupState* AGbxSpawner::GetAIGroupState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxSpawner.GetAIGroupState");
		
		AGbxSpawner_GetAIGroupState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A5BB0
	 * 		Name   -> Function GbxAI.GbxSpawner.DEPRECATED_IsThreatened
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AGbxSpawner::DEPRECATED_IsThreatened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxSpawner.DEPRECATED_IsThreatened");
		
		AGbxSpawner_DEPRECATED_IsThreatened_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxSpawnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxSpawnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxSpawnerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6D50
	 * 		Name   -> Function GbxAI.GbxSpawnPoint.HasNavNearSpawnPointFor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USpawnPointComponent*                        SpawnPointComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USpawnOptionData*                            SpawnOptions                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AGbxSpawnPoint::STATIC_HasNavNearSpawnPointFor(class USpawnPointComponent* SpawnPointComp, class USpawnOptionData* SpawnOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.GbxSpawnPoint.HasNavNearSpawnPointFor");
		
		AGbxSpawnPoint_HasNavNearSpawnPointFor_Params params {};
		params.SpawnPointComp = SpawnPointComp;
		params.SpawnOptions = SpawnOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxSpawnPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxSpawnPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.GbxSpawnPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALookAtPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALookAtPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.LookAtPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULookAtPointComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtPointComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.LookAtPointComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULookAtPointTag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtPointTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.LookAtPointTag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APerch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APerch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.Perch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerchComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerchComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.PerchComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerchTag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerchTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.PerchTag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerchType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerchType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.PerchType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6F30
	 * 		Name   -> Function GbxAI.ScriptedBehaviorTreeLibrary.PerformScriptedAbort
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopImmediately                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScriptedBehaviorTreeLibrary::STATIC_PerformScriptedAbort(class AActor* Target, bool bStopImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.ScriptedBehaviorTreeLibrary.PerformScriptedAbort");
		
		UScriptedBehaviorTreeLibrary_PerformScriptedAbort_Params params {};
		params.Target = Target;
		params.bStopImmediately = bStopImmediately;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B69D0
	 * 		Name   -> Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedWait
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScriptedBehaviorTreeLibrary::STATIC_BeginScriptedWait(class AActor* Target, class UStanceDataProvider* OptionalStance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedWait");
		
		UScriptedBehaviorTreeLibrary_BeginScriptedWait_Params params {};
		params.Target = Target;
		params.OptionalStance = OptionalStance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6840
	 * 		Name   -> Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedLook
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      LookAtActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAimAtActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireWeaponAtActor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStanceDataProvider*                         OptionalStance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScriptedBehaviorTreeLibrary::STATIC_BeginScriptedLook(class AActor* Target, class AActor* LookAtActor, bool bAimAtActor, bool bFireWeaponAtActor, class UStanceDataProvider* OptionalStance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedLook");
		
		UScriptedBehaviorTreeLibrary_BeginScriptedLook_Params params {};
		params.Target = Target;
		params.LookAtActor = LookAtActor;
		params.bAimAtActor = bAimAtActor;
		params.bFireWeaponAtActor = bFireWeaponAtActor;
		params.OptionalStance = OptionalStance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptedBehaviorTreeLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptedBehaviorTreeLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.ScriptedBehaviorTreeLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartObjectAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartObjectAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.SmartObjectAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIResource_SmartObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIResource_SmartObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.AIResource_SmartObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartObjectInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartObjectInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.SmartObjectInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B70C0
	 * 		Name   -> Function GbxAI.SmartObjectBlueprintLibrary.UseSmartObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SmartObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActionTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAbortExisting                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUntilInterrupted                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USmartObjectBlueprintLibrary::STATIC_UseSmartObject(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag, bool bAbortExisting, bool bUntilInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectBlueprintLibrary.UseSmartObject");
		
		USmartObjectBlueprintLibrary_UseSmartObject_Params params {};
		params.User = User;
		params.SmartObject = SmartObject;
		params.ActionTag = ActionTag;
		params.bAbortExisting = bAbortExisting;
		params.bUntilInterrupted = bUntilInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6760
	 * 		Name   -> Function GbxAI.SmartObjectBlueprintLibrary.AbortSmartObjectUse
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmartObjectBlueprintLibrary::STATIC_AbortSmartObjectUse(class AActor* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectBlueprintLibrary.AbortSmartObjectUse");
		
		USmartObjectBlueprintLibrary_AbortSmartObjectUse_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartObjectBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartObjectBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.SmartObjectBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B67D0
	 * 		Name   -> Function GbxAI.SmartObjectComponent.UnreserveEventSignature
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmartObjectComponent::UnreserveEventSignature(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.UnreserveEventSignature");
		
		USmartObjectComponent_UnreserveEventSignature_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6FF0
	 * 		Name   -> Function GbxAI.SmartObjectComponent.ToggleActionSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FSmartObjectActionSet                       ActionSet                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	void USmartObjectComponent::ToggleActionSet(const struct FSmartObjectActionSet& ActionSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.ToggleActionSet");
		
		USmartObjectComponent_ToggleActionSet_Params params {};
		params.ActionSet = ActionSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B67D0
	 * 		Name   -> Function GbxAI.SmartObjectComponent.SuccessEventSignature
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmartObjectComponent::SuccessEventSignature(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.SuccessEventSignature");
		
		USmartObjectComponent_SuccessEventSignature_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B67D0
	 * 		Name   -> Function GbxAI.SmartObjectComponent.ReserveEventSignature
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmartObjectComponent::ReserveEventSignature(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.ReserveEventSignature");
		
		USmartObjectComponent_ReserveEventSignature_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6E10
	 * 		Name   -> Function GbxAI.SmartObjectComponent.OnActionEnded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActionName                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmartObjectComponent::OnActionEnded(EGbxActionEndState EndState, const struct FGameplayTag& ActionName, class AController* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.OnActionEnded");
		
		USmartObjectComponent_OnActionEnded_Params params {};
		params.EndState = EndState;
		params.ActionName = ActionName;
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B67D0
	 * 		Name   -> Function GbxAI.SmartObjectComponent.InterruptEventSignature
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmartObjectComponent::InterruptEventSignature(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.InterruptEventSignature");
		
		USmartObjectComponent_InterruptEventSignature_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007A5960
	 * 		Name   -> Function GbxAI.SmartObjectComponent.GetAvailableSocketNames
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<class FName>                                Array                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USmartObjectComponent::GetAvailableSocketNames(TArray<class FName>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.GetAvailableSocketNames");
		
		USmartObjectComponent_GetAvailableSocketNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6C20
	 * 		Name   -> Function GbxAI.SmartObjectComponent.GetActionUsers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGameplayTag                                ActionTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class APawn*>                               OutUsers                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USmartObjectComponent::GetActionUsers(const struct FGameplayTag& ActionTag, TArray<class APawn*>* OutUsers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.GetActionUsers");
		
		USmartObjectComponent_GetActionUsers_Params params {};
		params.ActionTag = ActionTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUsers != nullptr)
			*OutUsers = params.OutUsers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6BA0
	 * 		Name   -> Function GbxAI.SmartObjectComponent.EnableAllActions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USmartObjectComponent::EnableAllActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.EnableAllActions");
		
		USmartObjectComponent_EnableAllActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6B20
	 * 		Name   -> Function GbxAI.SmartObjectComponent.EnableAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                ActionTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmartObjectComponent::EnableAction(const struct FGameplayTag& ActionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.EnableAction");
		
		USmartObjectComponent_EnableAction_Params params {};
		params.ActionTag = ActionTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6B00
	 * 		Name   -> Function GbxAI.SmartObjectComponent.DisableAllActions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USmartObjectComponent::DisableAllActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.DisableAllActions");
		
		USmartObjectComponent_DisableAllActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6A80
	 * 		Name   -> Function GbxAI.SmartObjectComponent.DisableAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                ActionTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmartObjectComponent::DisableAction(const struct FGameplayTag& ActionTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.DisableAction");
		
		USmartObjectComponent_DisableAction_Params params {};
		params.ActionTag = ActionTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B67D0
	 * 		Name   -> Function GbxAI.SmartObjectComponent.BeginEventSignature
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmartObjectComponent::BeginEventSignature(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.BeginEventSignature");
		
		USmartObjectComponent_BeginEventSignature_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartObjectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartObjectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.SmartObjectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B8550
	 * 		Name   -> Function GbxAI.SmartObjectPreviewComponent.OnReplayAction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USmartObjectPreviewComponent::OnReplayAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectPreviewComponent.OnReplayAction");
		
		USmartObjectPreviewComponent_OnReplayAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B84D0
	 * 		Name   -> Function GbxAI.SmartObjectPreviewComponent.OnCycleActor
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECycleDirection                                    Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmartObjectPreviewComponent::OnCycleActor(ECycleDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectPreviewComponent.OnCycleActor");
		
		USmartObjectPreviewComponent_OnCycleActor_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartObjectPreviewComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartObjectPreviewComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.SmartObjectPreviewComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmartObjectUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmartObjectUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.SmartObjectUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B8570
	 * 		Name   -> Function GbxAI.SpawnBlueprintLibrary.SetSpawnOptions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      SpawnerActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USpawnOptionData*                            SpawnOptions                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnBlueprintLibrary::STATIC_SetSpawnOptions(class AActor* SpawnerActor, class USpawnOptionData* SpawnOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SpawnBlueprintLibrary.SetSpawnOptions");
		
		USpawnBlueprintLibrary_SetSpawnOptions_Params params {};
		params.SpawnerActor = SpawnerActor;
		params.SpawnOptions = SpawnOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B8390
	 * 		Name   -> Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByRadius
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USpawnerStyle*                               Style                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETeamAttitude                                      MinRequiredAttitude                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ASpawner* USpawnBlueprintLibrary::STATIC_GenerateSpawnerByRadius(class AActor* Instigator, class USpawnerStyle* Style, float Radius, ETeamAttitude MinRequiredAttitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByRadius");
		
		USpawnBlueprintLibrary_GenerateSpawnerByRadius_Params params {};
		params.Instigator = Instigator;
		params.Style = Style;
		params.Radius = Radius;
		params.MinRequiredAttitude = MinRequiredAttitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B82D0
	 * 		Name   -> Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByOwningSpawner
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USpawnerStyle*                               Style                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ASpawner* USpawnBlueprintLibrary::STATIC_GenerateSpawnerByOwningSpawner(class AActor* Instigator, class USpawnerStyle* Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByOwningSpawner");
		
		USpawnBlueprintLibrary_GenerateSpawnerByOwningSpawner_Params params {};
		params.Instigator = Instigator;
		params.Style = Style;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.SpawnBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnNodeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnNodeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.SpawnNodeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6D30
	 * 		Name   -> Function GbxAI.Territory.GetTerritoryComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTerritoryComponent* ATerritory::GetTerritoryComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAI.Territory.GetTerritoryComponent");
		
		ATerritory_GetTerritoryComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATerritory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATerritory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAI.Territory");
		return ptr;
	}

}


