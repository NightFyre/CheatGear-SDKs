/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * 		Name   -> PredefinedFunction URetargetChainSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetargetChainSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.RetargetChainSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRetargeter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRetargeter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRetargeter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRetargetProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRetargetProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRetargetProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01256DA0
	 * 		Name   -> Function IKRig.IKRigComponent.SetIKRigGoalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        GoalName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              PositionAlpha                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationAlpha                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIKRigComponent::SetIKRigGoalTransform(const class FName& GoalName, const struct FTransform& Transform, float PositionAlpha, float RotationAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.SetIKRigGoalTransform");
		
		UIKRigComponent_SetIKRigGoalTransform_Params params {};
		params.GoalName = GoalName;
		params.Transform = Transform;
		params.PositionAlpha = PositionAlpha;
		params.RotationAlpha = RotationAlpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01256B40
	 * 		Name   -> Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        GoalName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       Rotation                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              PositionAlpha                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotationAlpha                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIKRigComponent::SetIKRigGoalPositionAndRotation(const class FName& GoalName, const struct FVector& Position, const struct FQuat& Rotation, float PositionAlpha, float RotationAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation");
		
		UIKRigComponent_SetIKRigGoalPositionAndRotation_Params params {};
		params.GoalName = GoalName;
		params.Position = Position;
		params.Rotation = Rotation;
		params.PositionAlpha = PositionAlpha;
		params.RotationAlpha = RotationAlpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01256A20
	 * 		Name   -> Function IKRig.IKRigComponent.SetIKRigGoal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FIKRigGoal                                  Goal                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIKRigComponent::SetIKRigGoal(const struct FIKRigGoal& Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.SetIKRigGoal");
		
		UIKRigComponent_SetIKRigGoal_Params params {};
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012569F0
	 * 		Name   -> Function IKRig.IKRigComponent.ClearAllGoals
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UIKRigComponent::ClearAllGoals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.ClearAllGoals");
		
		UIKRigComponent_ClearAllGoals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigEffectorGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigEffectorGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigEffectorGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012568B0
	 * 		Name   -> Function IKRig.IKGoalCreatorInterface.AddIKGoals
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FName, struct FIKRigGoal>               OutGoals                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UIKGoalCreatorInterface::AddIKGoals(TMap<class FName, struct FIKRigGoal>* OutGoals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IKRig.IKGoalCreatorInterface.AddIKGoals");
		
		UIKGoalCreatorInterface_AddIKGoals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGoals != nullptr)
			*OutGoals = params.OutGoals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKGoalCreatorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKGoalCreatorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKGoalCreatorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigSolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigSolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigSolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_BodyMoverEffector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_BodyMoverEffector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_BodyMoverEffector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_BodyMover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_BodyMover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_BodyMover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_LimbEffector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_LimbEffector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_LimbEffector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_LimbSolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_LimbSolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_LimbSolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_FBIKEffector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_FBIKEffector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_FBIKEffector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_PBIKBoneSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_PBIKBoneSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_PBIKBoneSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRigPBIKSolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRigPBIKSolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRigPBIKSolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_PoleSolverEffector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_PoleSolverEffector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_PoleSolverEffector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_PoleSolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_PoleSolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_PoleSolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_SetTransformEffector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_SetTransformEffector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_SetTransformEffector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIKRig_SetTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIKRig_SetTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IKRig.IKRig_SetTransform");
		return ptr;
	}

}


