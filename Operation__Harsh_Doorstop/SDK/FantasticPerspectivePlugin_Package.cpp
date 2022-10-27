/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00845AF0
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveActor.Apply
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFantasticPerspectiveStereoscopicPass              StereoPass                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ViewOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ViewRotationMatrix                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ProjectionMatrix                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutViewOrigin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutViewRotationMatrix                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutProjectionMatrix                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool AFantasticPerspectiveActor::Apply(class APlayerController* PlayerController, EFantasticPerspectiveStereoscopicPass StereoPass, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveActor.Apply");
		
		AFantasticPerspectiveActor_Apply_Params params {};
		params.PlayerController = PlayerController;
		params.StereoPass = StereoPass;
		params.ViewOrigin = ViewOrigin;
		params.ViewRotationMatrix = ViewRotationMatrix;
		params.ProjectionMatrix = ProjectionMatrix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutViewOrigin != nullptr)
			*OutViewOrigin = params.OutViewOrigin;
		if (OutViewRotationMatrix != nullptr)
			*OutViewRotationMatrix = params.OutViewRotationMatrix;
		if (OutProjectionMatrix != nullptr)
			*OutProjectionMatrix = params.OutProjectionMatrix;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFantasticPerspectiveActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFantasticPerspectiveActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FantasticPerspectivePlugin.FantasticPerspectiveActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00845DF0
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveComponent.Apply
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFantasticPerspectiveStereoscopicPass              StereoPass                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ViewOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ViewRotationMatrix                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ProjectionMatrix                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutViewOrigin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutViewRotationMatrix                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutProjectionMatrix                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFantasticPerspectiveComponent::Apply(class APlayerController* PlayerController, EFantasticPerspectiveStereoscopicPass StereoPass, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveComponent.Apply");
		
		UFantasticPerspectiveComponent_Apply_Params params {};
		params.PlayerController = PlayerController;
		params.StereoPass = StereoPass;
		params.ViewOrigin = ViewOrigin;
		params.ViewRotationMatrix = ViewRotationMatrix;
		params.ProjectionMatrix = ProjectionMatrix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutViewOrigin != nullptr)
			*OutViewOrigin = params.OutViewOrigin;
		if (OutViewRotationMatrix != nullptr)
			*OutViewRotationMatrix = params.OutViewRotationMatrix;
		if (OutProjectionMatrix != nullptr)
			*OutProjectionMatrix = params.OutProjectionMatrix;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFantasticPerspectiveComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFantasticPerspectiveComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FantasticPerspectivePlugin.FantasticPerspectiveComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847E00
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.WorldToScreenConversionRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FRotator UFantasticPerspectiveFunctions::STATIC_WorldToScreenConversionRotator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.WorldToScreenConversionRotator");
		
		UFantasticPerspectiveFunctions_WorldToScreenConversionRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847DB0
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.WorldToScreenConversionMatrix
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FMatrix UFantasticPerspectiveFunctions::STATIC_WorldToScreenConversionMatrix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.WorldToScreenConversionMatrix");
		
		UFantasticPerspectiveFunctions_WorldToScreenConversionMatrix_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847C50
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.SetTransformSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FFantasticPerspectiveSettings               Target                                                     (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFantasticPerspectiveTransform              Transform                                                  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFantasticPerspectiveFunctions::STATIC_SetTransformSettings(struct FFantasticPerspectiveSettings* Target, const struct FFantasticPerspectiveTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.SetTransformSettings");
		
		UFantasticPerspectiveFunctions_SetTransformSettings_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847AB0
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.SetFrustumSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FFantasticPerspectiveSettings               Target                                                     (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFantasticPerspectiveFrustum                Frustum                                                    (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFantasticPerspectiveFunctions::STATIC_SetFrustumSettings(struct FFantasticPerspectiveSettings* Target, const struct FFantasticPerspectiveFrustum& Frustum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.SetFrustumSettings");
		
		UFantasticPerspectiveFunctions_SetFrustumSettings_Params params {};
		params.Frustum = Frustum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847990
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.SetDebugSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FFantasticPerspectiveSettings               Target                                                     (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFantasticPerspectiveDebug                  Debug                                                      (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFantasticPerspectiveFunctions::STATIC_SetDebugSettings(struct FFantasticPerspectiveSettings* Target, const struct FFantasticPerspectiveDebug& Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.SetDebugSettings");
		
		UFantasticPerspectiveFunctions_SetDebugSettings_Params params {};
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847960
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ScreenToWorldConversionRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FRotator UFantasticPerspectiveFunctions::STATIC_ScreenToWorldConversionRotator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ScreenToWorldConversionRotator");
		
		UFantasticPerspectiveFunctions_ScreenToWorldConversionRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847910
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ScreenToWorldConversionMatrix
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FMatrix UFantasticPerspectiveFunctions::STATIC_ScreenToWorldConversionMatrix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ScreenToWorldConversionMatrix");
		
		UFantasticPerspectiveFunctions_ScreenToWorldConversionMatrix_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847880
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ResetSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FFantasticPerspectiveSettings               Target                                                     (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFantasticPerspectiveFunctions::STATIC_ResetSettings(struct FFantasticPerspectiveSettings* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ResetSettings");
		
		UFantasticPerspectiveFunctions_ResetSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847860
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ResetCache
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UFantasticPerspectiveFunctions::STATIC_ResetCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ResetCache");
		
		UFantasticPerspectiveFunctions_ResetCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847720
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.GetTransformSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFantasticPerspectiveSettings               Target                                                     (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FFantasticPerspectiveTransform UFantasticPerspectiveFunctions::STATIC_GetTransformSettings(const struct FFantasticPerspectiveSettings& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.GetTransformSettings");
		
		UFantasticPerspectiveFunctions_GetTransformSettings_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008475E0
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.GetFrustumSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFantasticPerspectiveSettings               Target                                                     (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FFantasticPerspectiveFrustum UFantasticPerspectiveFunctions::STATIC_GetFrustumSettings(const struct FFantasticPerspectiveSettings& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.GetFrustumSettings");
		
		UFantasticPerspectiveFunctions_GetFrustumSettings_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008474B0
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.GetDebugSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFantasticPerspectiveSettings               Target                                                     (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FFantasticPerspectiveDebug UFantasticPerspectiveFunctions::STATIC_GetDebugSettings(const struct FFantasticPerspectiveSettings& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.GetDebugSettings");
		
		UFantasticPerspectiveFunctions_GetDebugSettings_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847170
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.DrawDebugPositionedFrustum
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ViewOrigin                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ViewRotationMatrix                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ProjectionMatrix                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PerspectiveFrustumDepth                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistentLines                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DepthPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFantasticPerspectiveFunctions::STATIC_DrawDebugPositionedFrustum(class UObject* WorldContextObject, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, const struct FLinearColor& Color, float PerspectiveFrustumDepth, bool bPersistentLines, float LifeTime, unsigned char DepthPriority, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.DrawDebugPositionedFrustum");
		
		UFantasticPerspectiveFunctions_DrawDebugPositionedFrustum_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ViewOrigin = ViewOrigin;
		params.ViewRotationMatrix = ViewRotationMatrix;
		params.ProjectionMatrix = ProjectionMatrix;
		params.Color = Color;
		params.PerspectiveFrustumDepth = PerspectiveFrustumDepth;
		params.bPersistentLines = bPersistentLines;
		params.LifeTime = LifeTime;
		params.DepthPriority = DepthPriority;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00846F20
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyTransformEffects
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFantasticPerspectiveTransform              Transform                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ViewOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ViewRotationMatrix                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutViewOrigin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutViewRotationMatrix                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFantasticPerspectiveFunctions::STATIC_ApplyTransformEffects(const struct FFantasticPerspectiveTransform& Transform, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyTransformEffects");
		
		UFantasticPerspectiveFunctions_ApplyTransformEffects_Params params {};
		params.Transform = Transform;
		params.ViewOrigin = ViewOrigin;
		params.ViewRotationMatrix = ViewRotationMatrix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutViewOrigin != nullptr)
			*OutViewOrigin = params.OutViewOrigin;
		if (OutViewRotationMatrix != nullptr)
			*OutViewRotationMatrix = params.OutViewRotationMatrix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00846DB0
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyToSceneCapture2D
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    SceneCapture                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ViewOrigin                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ViewRotationMatrix                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ProjectionMatrix                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFantasticPerspectiveFunctions::STATIC_ApplyToSceneCapture2D(class USceneCaptureComponent2D* SceneCapture, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyToSceneCapture2D");
		
		UFantasticPerspectiveFunctions_ApplyToSceneCapture2D_Params params {};
		params.SceneCapture = SceneCapture;
		params.ViewOrigin = ViewOrigin;
		params.ViewRotationMatrix = ViewRotationMatrix;
		params.ProjectionMatrix = ProjectionMatrix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00846A40
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplySettingsAndDrawDebug
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFantasticPerspectiveSettings               Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ViewOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ViewRotationMatrix                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ProjectionMatrix                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutViewOrigin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutViewRotationMatrix                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutProjectionMatrix                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFantasticPerspectiveFunctions::STATIC_ApplySettingsAndDrawDebug(class UObject* WorldContextObject, const struct FFantasticPerspectiveSettings& Settings, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplySettingsAndDrawDebug");
		
		UFantasticPerspectiveFunctions_ApplySettingsAndDrawDebug_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Settings = Settings;
		params.ViewOrigin = ViewOrigin;
		params.ViewRotationMatrix = ViewRotationMatrix;
		params.ProjectionMatrix = ProjectionMatrix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutViewOrigin != nullptr)
			*OutViewOrigin = params.OutViewOrigin;
		if (OutViewRotationMatrix != nullptr)
			*OutViewRotationMatrix = params.OutViewRotationMatrix;
		if (OutProjectionMatrix != nullptr)
			*OutProjectionMatrix = params.OutProjectionMatrix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00846710
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplySettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFantasticPerspectiveSettings               Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ViewOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ViewRotationMatrix                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ProjectionMatrix                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutViewOrigin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutViewRotationMatrix                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutProjectionMatrix                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFantasticPerspectiveFunctions::STATIC_ApplySettings(const struct FFantasticPerspectiveSettings& Settings, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplySettings");
		
		UFantasticPerspectiveFunctions_ApplySettings_Params params {};
		params.Settings = Settings;
		params.ViewOrigin = ViewOrigin;
		params.ViewRotationMatrix = ViewRotationMatrix;
		params.ProjectionMatrix = ProjectionMatrix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutViewOrigin != nullptr)
			*OutViewOrigin = params.OutViewOrigin;
		if (OutViewRotationMatrix != nullptr)
			*OutViewRotationMatrix = params.OutViewRotationMatrix;
		if (OutProjectionMatrix != nullptr)
			*OutProjectionMatrix = params.OutProjectionMatrix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00846450
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyPointsBasing
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFantasticPerspectivePoints                 Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ViewOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ViewRotationMatrix                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutViewOrigin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutViewRotationMatrix                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutProjectionMatrix                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFantasticPerspectiveFunctions::STATIC_ApplyPointsBasing(const struct FFantasticPerspectivePoints& Settings, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyPointsBasing");
		
		UFantasticPerspectiveFunctions_ApplyPointsBasing_Params params {};
		params.Settings = Settings;
		params.ViewOrigin = ViewOrigin;
		params.ViewRotationMatrix = ViewRotationMatrix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutViewOrigin != nullptr)
			*OutViewOrigin = params.OutViewOrigin;
		if (OutViewRotationMatrix != nullptr)
			*OutViewRotationMatrix = params.OutViewRotationMatrix;
		if (OutProjectionMatrix != nullptr)
			*OutProjectionMatrix = params.OutProjectionMatrix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008460F0
	 * 		Name   -> Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyFrustumEffects
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFantasticPerspectiveFrustum                Frustum                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ViewOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ViewRotationMatrix                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ProjectionMatrix                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutViewOrigin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutViewRotationMatrix                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     OutProjectionMatrix                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFantasticPerspectiveFunctions::STATIC_ApplyFrustumEffects(const struct FFantasticPerspectiveFrustum& Frustum, const struct FVector& ViewOrigin, const struct FMatrix& ViewRotationMatrix, const struct FMatrix& ProjectionMatrix, struct FVector* OutViewOrigin, struct FMatrix* OutViewRotationMatrix, struct FMatrix* OutProjectionMatrix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FantasticPerspectivePlugin.FantasticPerspectiveFunctions.ApplyFrustumEffects");
		
		UFantasticPerspectiveFunctions_ApplyFrustumEffects_Params params {};
		params.Frustum = Frustum;
		params.ViewOrigin = ViewOrigin;
		params.ViewRotationMatrix = ViewRotationMatrix;
		params.ProjectionMatrix = ProjectionMatrix;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutViewOrigin != nullptr)
			*OutViewOrigin = params.OutViewOrigin;
		if (OutViewRotationMatrix != nullptr)
			*OutViewRotationMatrix = params.OutViewRotationMatrix;
		if (OutProjectionMatrix != nullptr)
			*OutProjectionMatrix = params.OutProjectionMatrix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFantasticPerspectiveFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFantasticPerspectiveFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FantasticPerspectivePlugin.FantasticPerspectiveFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFantasticPerspectiveLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFantasticPerspectiveLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FantasticPerspectivePlugin.FantasticPerspectiveLocalPlayer");
		return ptr;
	}

}


