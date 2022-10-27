/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02F2EE80
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateResultReference              Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAnimationStateMachineLibrary::STATIC_IsStateBlendingOut(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut");
		
		UAnimationStateMachineLibrary_IsStateBlendingOut_Params params {};
		params.UpdateContext = UpdateContext;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2ED60
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateResultReference              Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAnimationStateMachineLibrary::STATIC_IsStateBlendingIn(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn");
		
		UAnimationStateMachineLibrary_IsStateBlendingIn_Params params {};
		params.UpdateContext = UpdateContext;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2E3C0
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateResultReference              AnimationState                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationStateMachineLibrary::STATIC_ConvertToAnimationStateResultPure(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure");
		
		UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationState != nullptr)
			*AnimationState = params.AnimationState;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2E280
	 * 		Name   -> Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAnimationStateResultReference              AnimationState                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationStateMachineLibrary::STATIC_ConvertToAnimationStateResult(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult");
		
		UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationState != nullptr)
			*AnimationState = params.AnimationState;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationStateMachineLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationStateMachineLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimationStateMachineLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2ECA0
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UAnimExecutionContextLibrary::STATIC_GetDeltaTime(const struct FAnimUpdateContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime");
		
		UAnimExecutionContextLibrary_GetDeltaTime_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2EBE0
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UAnimExecutionContextLibrary::STATIC_GetCurrentWeight(const struct FAnimUpdateContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight");
		
		UAnimExecutionContextLibrary_GetCurrentWeight_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2EB10
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnimNodeReference UAnimExecutionContextLibrary::STATIC_GetAnimNodeReference(class UAnimInstance* Instance, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference");
		
		UAnimExecutionContextLibrary_GetAnimNodeReference_Params params {};
		params.Instance = Instance;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2EA50
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimExecutionContext                       Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UAnimInstance* UAnimExecutionContextLibrary::STATIC_GetAnimInstance(const struct FAnimExecutionContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance");
		
		UAnimExecutionContextLibrary_GetAnimInstance_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F2E900
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimExecutionContext                       Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EAnimExecutionContextConversionResult              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnimUpdateContext UAnimExecutionContextLibrary::STATIC_ConvertToUpdateContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext");
		
		UAnimExecutionContextLibrary_ConvertToUpdateContext_Params params {};
		params.Context = Context;
		
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
	 * 		RVA    -> 0x02F2E7B0
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimExecutionContext                       Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EAnimExecutionContextConversionResult              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnimPoseContext UAnimExecutionContextLibrary::STATIC_ConvertToPoseContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext");
		
		UAnimExecutionContextLibrary_ConvertToPoseContext_Params params {};
		params.Context = Context;
		
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
	 * 		RVA    -> 0x02F2E660
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimExecutionContext                       Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EAnimExecutionContextConversionResult              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnimInitializationContext UAnimExecutionContextLibrary::STATIC_ConvertToInitializationContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext");
		
		UAnimExecutionContextLibrary_ConvertToInitializationContext_Params params {};
		params.Context = Context;
		
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
	 * 		RVA    -> 0x02F2E510
	 * 		Name   -> Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimExecutionContext                       Context                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EAnimExecutionContextConversionResult              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnimComponentSpacePoseContext UAnimExecutionContextLibrary::STATIC_ConvertToComponentSpacePoseContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext");
		
		UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params params {};
		params.Context = Context;
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimExecutionContextLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimExecutionContextLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimExecutionContextLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayMontageNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayMontageNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayMontageNotifyWindow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayMontageNotifyWindow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimSequencerInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSequencerInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3B660
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     RootPos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     JointPos                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndPos                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     JointTarget                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Effector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutJointPos                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutEndPos                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowStretching                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartStretchRatio                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxStretchScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKismetAnimationLibrary::STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK");
		
		UKismetAnimationLibrary_K2_TwoBoneIK_Params params {};
		params.RootPos = RootPos;
		params.JointPos = JointPos;
		params.EndPos = EndPos;
		params.JointTarget = JointTarget;
		params.Effector = Effector;
		params.bAllowStretching = bAllowStretching;
		params.StartStretchRatio = StartStretchRatio;
		params.MaxStretchScale = MaxStretchScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutJointPos != nullptr)
			*OutJointPos = params.OutJointPos;
		if (OutEndPos != nullptr)
			*OutEndPos = params.OutEndPos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3B640
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UKismetAnimationLibrary::STATIC_K2_StartProfilingTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer");
		
		UKismetAnimationLibrary_K2_StartProfilingTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3B360
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMinX                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMaxX                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMinY                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMaxY                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMinZ                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMaxZ                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap");
		
		UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		params.RangeOutMinX = RangeOutMinX;
		params.RangeOutMaxX = RangeOutMaxX;
		params.RangeOutMinY = RangeOutMinY;
		params.RangeOutMaxY = RangeOutMaxY;
		params.RangeOutMinZ = RangeOutMinZ;
		params.RangeOutMaxZ = RangeOutMaxZ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3B240
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap");
		
		UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params params {};
		params.Value = Value;
		params.RangeOutMin = RangeOutMin;
		params.RangeOutMax = RangeOutMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3AF60
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  CurrentTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LookAtVector                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseUpVector                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     UpVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ClampConeInDegree                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UKismetAnimationLibrary::STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt");
		
		UKismetAnimationLibrary_K2_LookAt_Params params {};
		params.CurrentTransform = CurrentTransform;
		params.TargetPosition = TargetPosition;
		params.LookAtVector = LookAtVector;
		params.bUseUpVector = bUseUpVector;
		params.UpVector = UpVector;
		params.ClampConeInDegree = ClampConeInDegree;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3AE70
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bLog                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LogPrefix                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer");
		
		UKismetAnimationLibrary_K2_EndProfilingTimer_Params params {};
		params.bLog = bLog;
		params.LogPrefix = LogPrefix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3AB80
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameA                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERelativeTransformSpace                            SocketSpaceA                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameB                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERelativeTransformSpace                            SocketSpaceB                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRemapRange                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeMin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const class FName& SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, const class FName& SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange");
		
		UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params params {};
		params.Component = Component;
		params.SocketOrBoneNameA = SocketOrBoneNameA;
		params.SocketSpaceA = SocketSpaceA;
		params.SocketOrBoneNameB = SocketOrBoneNameB;
		params.SocketSpaceB = SocketSpaceB;
		params.bRemapRange = bRemapRange;
		params.InRangeMin = InRangeMin;
		params.InRangeMax = InRangeMax;
		params.OutRangeMin = OutRangeMin;
		params.OutRangeMax = OutRangeMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3AA70
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameFrom                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameTo                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UKismetAnimationLibrary::STATIC_K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const class FName& SocketOrBoneNameFrom, const class FName& SocketOrBoneNameTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets");
		
		UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params params {};
		params.Component = Component;
		params.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
		params.SocketOrBoneNameTo = SocketOrBoneNameTo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3A610
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneName                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ReferenceSocketOrBone                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERelativeTransformSpace                            SocketSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OffsetInBoneSpace                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPositionHistory                            History                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberOfSamples                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VelocityMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VelocityMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEasingFuncType                                    EasingType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRuntimeFloatCurve                          CustomCurve                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const class FName& SocketOrBoneName, const class FName& ReferenceSocketOrBone, ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets");
		
		UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.Component = Component;
		params.SocketOrBoneName = SocketOrBoneName;
		params.ReferenceSocketOrBone = ReferenceSocketOrBone;
		params.SocketSpace = SocketSpace;
		params.OffsetInBoneSpace = OffsetInBoneSpace;
		params.NumberOfSamples = NumberOfSamples;
		params.VelocityMin = VelocityMin;
		params.VelocityMax = VelocityMax;
		params.EasingType = EasingType;
		params.CustomCurve = CustomCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (History != nullptr)
			*History = params.History;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3A3F0
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPositionHistory                            History                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberOfSamples                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VelocityMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VelocityMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& position, struct FPositionHistory* History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory");
		
		UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.position = position;
		params.NumberOfSamples = NumberOfSamples;
		params.VelocityMin = VelocityMin;
		params.VelocityMax = VelocityMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (History != nullptr)
			*History = params.History;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3A300
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    BaseRotation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection");
		
		UKismetAnimationLibrary_CalculateDirection_Params params {};
		params.Velocity = Velocity;
		params.BaseRotation = BaseRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKismetAnimationLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKismetAnimationLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E2F0
	 * 		Name   -> Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLinkedAnimGraphReference                   Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULinkedAnimGraphLibrary::STATIC_HasLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance");
		
		ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3DE30
	 * 		Name   -> Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLinkedAnimGraphReference                   Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAnimInstance* ULinkedAnimGraphLibrary::STATIC_GetLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance");
		
		ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3D240
	 * 		Name   -> Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLinkedAnimGraphReference                   LinkedAnimGraph                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULinkedAnimGraphLibrary::STATIC_ConvertToLinkedAnimGraphPure(const struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference* LinkedAnimGraph, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure");
		
		ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedAnimGraph != nullptr)
			*LinkedAnimGraph = params.LinkedAnimGraph;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3D140
	 * 		Name   -> Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinkedAnimGraphReference ULinkedAnimGraphLibrary::STATIC_ConvertToLinkedAnimGraph(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph");
		
		ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params params {};
		params.Node = Node;
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkedAnimGraphLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkedAnimGraphLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.LinkedAnimGraphLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E620
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnNotifyEndReceived(const class FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived");
		
		UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params {};
		params.NotifyName = NotifyName;
		params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E530
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const class FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived");
		
		UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params {};
		params.NotifyName = NotifyName;
		params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E460
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded");
		
		UPlayMontageCallbackProxy_OnMontageEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E390
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut");
		
		UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3DAC0
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InSkeletalMeshComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartingPosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartingSection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const class FName& StartingSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage");
		
		UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params {};
		params.InSkeletalMeshComponent = InSkeletalMeshComponent;
		params.MontageToPlay = MontageToPlay;
		params.PlayRate = PlayRate;
		params.StartingPosition = StartingPosition;
		params.StartingSection = StartingSection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayMontageCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayMontageCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3ECF0
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending");
		
		USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params params {};
		params.UpdateContext = UpdateContext;
		params.SequenceEvaluator = SequenceEvaluator;
		params.Sequence = Sequence;
		params.BlendTime = BlendTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3EB10
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_SetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence");
		
		USequenceEvaluatorLibrary_SetSequence_Params params {};
		params.SequenceEvaluator = SequenceEvaluator;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E910
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_SetExplicitTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime");
		
		USequenceEvaluatorLibrary_SetExplicitTime_Params params {};
		params.SequenceEvaluator = SequenceEvaluator;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E010
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAnimSequenceBase* USequenceEvaluatorLibrary::STATIC_GetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence");
		
		USequenceEvaluatorLibrary_GetSequence_Params params {};
		params.SequenceEvaluator = SequenceEvaluator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3DC50
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequenceEvaluatorLibrary::STATIC_GetAccumulatedTime(const struct FSequenceEvaluatorReference& SequenceEvaluator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime");
		
		USequenceEvaluatorLibrary_GetAccumulatedTime_Params params {};
		params.SequenceEvaluator = SequenceEvaluator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3D4A0
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequenceEvaluatorLibrary::STATIC_ConvertToSequenceEvaluatorPure(const struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference* SequenceEvaluator, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure");
		
		USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SequenceEvaluator != nullptr)
			*SequenceEvaluator = params.SequenceEvaluator;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3D3A0
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_ConvertToSequenceEvaluator(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator");
		
		USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params params {};
		params.Node = Node;
		
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
	 * 		RVA    -> 0x02F3CFD0
	 * 		Name   -> Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::STATIC_AdvanceTime(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime");
		
		USequenceEvaluatorLibrary_AdvanceTime_Params params {};
		params.UpdateContext = UpdateContext;
		params.SequenceEvaluator = SequenceEvaluator;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequenceEvaluatorLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceEvaluatorLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.SequenceEvaluatorLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3F0B0
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              StartPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float StartPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition");
		
		USequencePlayerLibrary_SetStartPosition_Params params {};
		params.SequencePlayer = SequencePlayer;
		params.StartPosition = StartPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3EED0
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending");
		
		USequencePlayerLibrary_SetSequenceWithInertialBlending_Params params {};
		params.UpdateContext = UpdateContext;
		params.SequencePlayer = SequencePlayer;
		params.Sequence = Sequence;
		params.BlendTime = BlendTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3EC00
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence");
		
		USequencePlayerLibrary_SetSequence_Params params {};
		params.SequencePlayer = SequencePlayer;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3EA10
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate");
		
		USequencePlayerLibrary_SetPlayRate_Params params {};
		params.SequencePlayer = SequencePlayer;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E710
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime");
		
		USequencePlayerLibrary_SetAccumulatedTime_Params params {};
		params.SequencePlayer = SequencePlayer;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E250
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequencePlayerLibrary::STATIC_GetStartPosition(const struct FSequencePlayerReference& SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition");
		
		USequencePlayerLibrary_GetStartPosition_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E1B0
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAnimSequenceBase* USequencePlayerLibrary::STATIC_GetSequencePure(const struct FSequencePlayerReference& SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure");
		
		USequencePlayerLibrary_GetSequencePure_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E0B0
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           SequenceBase                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** SequenceBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence");
		
		USequencePlayerLibrary_GetSequence_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SequenceBase != nullptr)
			*SequenceBase = params.SequenceBase;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3DF70
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequencePlayerLibrary::STATIC_GetPlayRate(const struct FSequencePlayerReference& SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate");
		
		USequencePlayerLibrary_GetPlayRate_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3DED0
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USequencePlayerLibrary::STATIC_GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation");
		
		USequencePlayerLibrary_GetLoopAnimation_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3DCF0
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USequencePlayerLibrary::STATIC_GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime");
		
		USequencePlayerLibrary_GetAccumulatedTime_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3D700
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USequencePlayerLibrary::STATIC_ConvertToSequencePlayerPure(const struct FAnimNodeReference& Node, struct FSequencePlayerReference* SequencePlayer, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure");
		
		USequencePlayerLibrary_ConvertToSequencePlayerPure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SequencePlayer != nullptr)
			*SequencePlayer = params.SequencePlayer;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3D600
	 * 		Name   -> Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference USequencePlayerLibrary::STATIC_ConvertToSequencePlayer(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer");
		
		USequencePlayerLibrary_ConvertToSequencePlayer_Params params {};
		params.Node = Node;
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequencePlayerLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequencePlayerLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.SequencePlayerLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequencerAnimationSupport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequencerAnimationSupport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.SequencerAnimationSupport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3E810
	 * 		Name   -> Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSkeletalControlReference                   SkeletalControl                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSkeletalControlReference USkeletalControlLibrary::STATIC_SetAlpha(const struct FSkeletalControlReference& SkeletalControl, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha");
		
		USkeletalControlLibrary_SetAlpha_Params params {};
		params.SkeletalControl = SkeletalControl;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3DD90
	 * 		Name   -> Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSkeletalControlReference                   SkeletalControl                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float USkeletalControlLibrary::STATIC_GetAlpha(const struct FSkeletalControlReference& SkeletalControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha");
		
		USkeletalControlLibrary_GetAlpha_Params params {};
		params.SkeletalControl = SkeletalControl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3D960
	 * 		Name   -> Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSkeletalControlReference                   SkeletalControl                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USkeletalControlLibrary::STATIC_ConvertToSkeletalControlPure(const struct FAnimNodeReference& Node, struct FSkeletalControlReference* SkeletalControl, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure");
		
		USkeletalControlLibrary_ConvertToSkeletalControlPure_Params params {};
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkeletalControl != nullptr)
			*SkeletalControl = params.SkeletalControl;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02F3D860
	 * 		Name   -> Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAnimNodeReferenceConversionResult                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSkeletalControlReference USkeletalControlLibrary::STATIC_ConvertToSkeletalControl(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl");
		
		USkeletalControlLibrary_ConvertToSkeletalControl_Params params {};
		params.Node = Node;
		
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkeletalControlLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkeletalControlLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.SkeletalControlLibrary");
		return ptr;
	}

}


