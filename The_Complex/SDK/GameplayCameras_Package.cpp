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
	 * 		RVA    -> 0x0126C660
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCameraAnimationHandle                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraAnimationCameraModifier::StopCameraAnimation(const struct FCameraAnimationHandle& Handle, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation");
		
		UCameraAnimationCameraModifier_StopCameraAnimation_Params params {};
		params.Handle = Handle;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0126C590
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCameraAnimationSequence*                    Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraAnimationCameraModifier::StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf");
		
		UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params params {};
		params.Sequence = Sequence;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0126C500
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraAnimationCameraModifier::StopAllCameraAnimations(bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations");
		
		UCameraAnimationCameraModifier_StopAllCameraAnimations_Params params {};
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0126C000
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCameraAnimationSequence*                    Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCameraAnimationParams                      Params                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FCameraAnimationHandle UCameraAnimationCameraModifier::PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation");
		
		UCameraAnimationCameraModifier_PlayCameraAnimation_Params params {};
		params.Sequence = Sequence;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0126BF50
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FCameraAnimationHandle                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCameraAnimationCameraModifier::IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive");
		
		UCameraAnimationCameraModifier_IsCameraAnimationActive_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0126BEC0
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::STATIC_GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController");
		
		UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0126BDF0
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::STATIC_GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32_t ControllerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID");
		
		UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ControllerId = ControllerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0126BD20
	 * 		Name   -> Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::STATIC_GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier");
		
		UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraAnimationCameraModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraAnimationCameraModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.CameraAnimationCameraModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestCameraShake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.TestCameraShake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.SimpleCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstantCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstantCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.ConstantCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositeCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositeCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.CompositeCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDefaultCameraShakeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultCameraShakeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.DefaultCameraShakeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0126C310
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerCameraManager*                        PlayerCameraManager                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ShakeClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraShakeSourceComponent*                 SourceComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECameraShakePlaySpace                              PlaySpace                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    UserPlaySpaceRot                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UMatineeCameraShake* UMatineeCameraShake::STATIC_StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource");
		
		UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params params {};
		params.PlayerCameraManager = PlayerCameraManager;
		params.ShakeClass = ShakeClass;
		params.SourceComponent = SourceComponent;
		params.Scale = Scale;
		params.PlaySpace = PlaySpace;
		params.UserPlaySpaceRot = UserPlaySpaceRot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0126C140
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerCameraManager*                        PlayerCameraManager                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ShakeClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECameraShakePlaySpace                              PlaySpace                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    UserPlaySpaceRot                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UMatineeCameraShake* UMatineeCameraShake::STATIC_StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake");
		
		UMatineeCameraShake_StartMatineeCameraShake_Params params {};
		params.PlayerCameraManager = PlayerCameraManager;
		params.ShakeClass = ShakeClass;
		params.Scale = Scale;
		params.PlaySpace = PlaySpace;
		params.UserPlaySpaceRot = UserPlaySpaceRot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bImmediately                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatineeCameraShake::ReceiveStopShake(bool bImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.ReceiveStopShake");
		
		UMatineeCameraShake_ReceiveStopShake_Params params {};
		params.bImmediately = bImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatineeCameraShake::ReceivePlayShake(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.ReceivePlayShake");
		
		UMatineeCameraShake_ReceivePlayShake_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E260
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	bool UMatineeCameraShake::ReceiveIsFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished");
		
		UMatineeCameraShake_ReceiveIsFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMinimalViewInfo                            POV                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FMinimalViewInfo                            ModifiedPOV                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UMatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake");
		
		UMatineeCameraShake_BlueprintUpdateCameraShake_Params params {};
		params.DeltaTime = DeltaTime;
		params.Alpha = Alpha;
		params.POV = POV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedPOV != nullptr)
			*ModifiedPOV = params.ModifiedPOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatineeCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatineeCameraShake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.MatineeCameraShake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatineeCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatineeCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.MatineeCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMatineeCameraShakeEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMatineeCameraShakeEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0126BCA0
	 * 		Name   -> Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UCameraShakeBase*                            CameraShake                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMatineeCameraShake* UMatineeCameraShakeFunctionLibrary::STATIC_Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake");
		
		UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params params {};
		params.CameraShake = CameraShake;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatineeCameraShakeFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatineeCameraShakeFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.MatineeCameraShakeFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerlinNoiseCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerlinNoiseCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.PerlinNoiseCameraShakePattern");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaveOscillatorCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaveOscillatorCameraShakePattern::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayCameras.WaveOscillatorCameraShakePattern");
		return ptr;
	}

}


