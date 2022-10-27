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
	 * 		RVA    -> 0x02B2B7B0
	 * 		Name   -> Function AugmentedReality.ARActor.AddARComponent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InComponentClass                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       NativeID                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARComponent* AARActor::AddARComponent(class UClass* InComponentClass, const struct FGuid& NativeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARActor.AddARComponent");
		
		AARActor_AddARComponent_Params params {};
		params.InComponentClass = InComponentClass;
		params.NativeID = NativeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2EB70
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToUnpin                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent");
		
		UARBlueprintLibrary_UnpinComponent_Params params {};
		params.ComponentToUnpin = ComponentToUnpin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2EAA0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bOnOff                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EARCaptureType                                     CaptureType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_ToggleARCapture(bool bOnOff, EARCaptureType CaptureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture");
		
		UARBlueprintLibrary_ToggleARCapture_Params params {};
		params.bOnOff = bOnOff;
		params.CaptureType = CaptureType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2EA80
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.StopARSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UARBlueprintLibrary::STATIC_StopARSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StopARSession");
		
		UARBlueprintLibrary_StopARSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2EA00
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.StartARSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_StartARSession(class UARSessionConfig* SessionConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StartARSession");
		
		UARBlueprintLibrary_StartARSession_Params params {};
		params.SessionConfig = SessionConfig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2E980
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bOnOff                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_SetEnabledXRCamera(bool bOnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera");
		
		UARBlueprintLibrary_SetEnabledXRCamera_Params params {};
		params.bOnOff = bOnOff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2E800
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InWorldScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_SetARWorldScale(float InWorldScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale");
		
		UARBlueprintLibrary_SetARWorldScale_Params params {};
		params.InWorldScale = InWorldScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2E660
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     OriginLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OriginRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsTransformInWorldSpace                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainUpDirection                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation");
		
		UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Params params {};
		params.OriginLocation = OriginLocation;
		params.OriginRotation = OriginRotation;
		params.bIsTransformInWorldSpace = bIsTransformInWorldSpace;
		params.bMaintainUpDirection = bMaintainUpDirection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2E880
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  InAlignmentTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform");
		
		UARBlueprintLibrary_SetAlignmentTransform_Params params {};
		params.InAlignmentTransform = InAlignmentTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2E590
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InSaveName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARPin*                                      InPin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_SaveARPinToLocalStore(const class FName& InSaveName, class UARPin* InPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore");
		
		UARBlueprintLibrary_SaveARPinToLocalStore_Params params {};
		params.InSaveName = InSaveName;
		params.InPin = InPin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2E4F0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FIntPoint                                   InSize                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntPoint UARBlueprintLibrary::STATIC_ResizeXRCamera(const struct FIntPoint& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera");
		
		UARBlueprintLibrary_ResizeXRCamera_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2E470
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemovePin
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARPin*                                      PinToRemove                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_RemovePin(class UARPin* PinToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemovePin");
		
		UARBlueprintLibrary_RemovePin_Params params {};
		params.PinToRemove = PinToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2E3D0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InSaveName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_RemoveARPinFromLocalStore(const class FName& InSaveName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore");
		
		UARBlueprintLibrary_RemoveARPinFromLocalStore_Params params {};
		params.InSaveName = InSaveName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2E450
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UARBlueprintLibrary::STATIC_RemoveAllARPinsFromLocalStore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore");
		
		UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2E240
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARPin* UARBlueprintLibrary::STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const class FName& DebugName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult");
		
		UARBlueprintLibrary_PinComponentToTraceResult_Params params {};
		params.ComponentToPin = ComponentToPin;
		params.TraceResult = TraceResult;
		params.DebugName = DebugName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2E170
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARPin*                                      Pin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin");
		
		UARBlueprintLibrary_PinComponentToARPin_Params params {};
		params.ComponentToPin = ComponentToPin;
		params.Pin = Pin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2DF90
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  PinToWorldTransform                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARPin* UARBlueprintLibrary::STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const class FName& DebugName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponent");
		
		UARBlueprintLibrary_PinComponent_Params params {};
		params.ComponentToPin = ComponentToPin;
		params.PinToWorldTransform = PinToWorldTransform;
		params.TrackedGeometry = TrackedGeometry;
		params.DebugName = DebugName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2DF70
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UARBlueprintLibrary::STATIC_PauseARSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PauseARSession");
		
		UARBlueprintLibrary_PauseARSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2DEA0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TMap<class FName, class UARPin*> UARBlueprintLibrary::STATIC_LoadARPinsFromLocalStore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore");
		
		UARBlueprintLibrary_LoadARPinsFromLocalStore_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2DA80
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARTraceResult> UARBlueprintLibrary::STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D");
		
		UARBlueprintLibrary_LineTraceTrackedObjects3D_Params params {};
		params.Start = Start;
		params.End = End;
		params.bTestFeaturePoints = bTestFeaturePoints;
		params.bTestGroundPlane = bTestGroundPlane;
		params.bTestPlaneExtents = bTestPlaneExtents;
		params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2DCB0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   ScreenCoord                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARTraceResult> UARBlueprintLibrary::STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects");
		
		UARBlueprintLibrary_LineTraceTrackedObjects_Params params {};
		params.ScreenCoord = ScreenCoord;
		params.bTestFeaturePoints = bTestFeaturePoints;
		params.bTestGroundPlane = bTestGroundPlane;
		params.bTestPlaneExtents = bTestPlaneExtents;
		params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2DA00
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EARSessionType                                     SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_IsSessionTypeSupported(EARSessionType SessionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported");
		
		UARBlueprintLibrary_IsSessionTypeSupported_Params params {};
		params.SessionType = SessionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D940
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EARSessionType                                     SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EARSessionTrackingFeature                          SessionTrackingFeature                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported");
		
		UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params params {};
		params.SessionType = SessionType;
		params.SessionTrackingFeature = SessionTrackingFeature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D880
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EARSessionType                                     SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EARSceneReconstruction                             SceneReconstructionMethod                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported");
		
		UARBlueprintLibrary_IsSceneReconstructionSupported_Params params {};
		params.SessionType = SessionType;
		params.SceneReconstructionMethod = SceneReconstructionMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D850
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UARBlueprintLibrary::STATIC_IsARSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARSupported");
		
		UARBlueprintLibrary_IsARSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D820
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UARBlueprintLibrary::STATIC_IsARPinLocalStoreSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported");
		
		UARBlueprintLibrary_IsARPinLocalStoreSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D7F0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UARBlueprintLibrary::STATIC_IsARPinLocalStoreReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady");
		
		UARBlueprintLibrary_IsARPinLocalStoreReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D7C0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EARWorldMappingState UARBlueprintLibrary::STATIC_GetWorldMappingStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus");
		
		UARBlueprintLibrary_GetWorldMappingStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D790
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EARTrackingQualityReason UARBlueprintLibrary::STATIC_GetTrackingQualityReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason");
		
		UARBlueprintLibrary_GetTrackingQualityReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D760
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EARTrackingQuality UARBlueprintLibrary::STATIC_GetTrackingQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality");
		
		UARBlueprintLibrary_GetTrackingQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D490
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EARSessionType                                     SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARVideoFormat> UARBlueprintLibrary::STATIC_GetSupportedVideoFormats(EARSessionType SessionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats");
		
		UARBlueprintLibrary_GetSupportedVideoFormats_Params params {};
		params.SessionType = SessionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D460
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UARSessionConfig* UARBlueprintLibrary::STATIC_GetSessionConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig");
		
		UARBlueprintLibrary_GetSessionConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D3E0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FVector> UARBlueprintLibrary::STATIC_GetPointCloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud");
		
		UARBlueprintLibrary_GetPointCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D3B0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTexture* UARBlueprintLibrary::STATIC_GetPersonSegmentationImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage");
		
		UARBlueprintLibrary_GetPersonSegmentationImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D380
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTexture* UARBlueprintLibrary::STATIC_GetPersonSegmentationDepthImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage");
		
		UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D1F0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InWorldLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EARObjectClassification                            OutClassification                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutClassificationLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxLocationDiff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation");
		
		UARBlueprintLibrary_GetObjectClassificationAtLocation_Params params {};
		params.InWorldLocation = InWorldLocation;
		params.MaxLocationDiff = MaxLocationDiff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutClassification != nullptr)
			*OutClassification = params.OutClassification;
		if (OutClassificationLocation != nullptr)
			*OutClassificationLocation = params.OutClassificationLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D1C0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UARBlueprintLibrary::STATIC_GetNumberOfTrackedFacesSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported");
		
		UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2CD00
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UARLightEstimate* UARBlueprintLibrary::STATIC_GetCurrentLightEstimate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate");
		
		UARBlueprintLibrary_GetCurrentLightEstimate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2CC50
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FARCameraIntrinsics                         OutCameraIntrinsics                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics");
		
		UARBlueprintLibrary_GetCameraIntrinsics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCameraIntrinsics != nullptr)
			*OutCameraIntrinsics = params.OutCameraIntrinsics;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2CC20
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTextureCameraImage* UARBlueprintLibrary::STATIC_GetCameraImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage");
		
		UARBlueprintLibrary_GetCameraImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2CBF0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTextureCameraDepth* UARBlueprintLibrary::STATIC_GetCameraDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth");
		
		UARBlueprintLibrary_GetCameraDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C5A0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UARBlueprintLibrary::STATIC_GetARWorldScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale");
		
		UARBlueprintLibrary_GetARWorldScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C520
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARTexture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EARTextureType                                     TextureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARTexture* UARBlueprintLibrary::STATIC_GetARTexture(EARTextureType TextureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARTexture");
		
		UARBlueprintLibrary_GetARTexture_Params params {};
		params.TextureType = TextureType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C490
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FARSessionStatus UARBlueprintLibrary::STATIC_GetARSessionStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus");
		
		UARBlueprintLibrary_GetARSessionStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2CB70
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedPose*> UARBlueprintLibrary::STATIC_GetAllTrackedPoses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses");
		
		UARBlueprintLibrary_GetAllTrackedPoses_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2CAF0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedPoint*> UARBlueprintLibrary::STATIC_GetAllTrackedPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints");
		
		UARBlueprintLibrary_GetAllTrackedPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2CA70
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARPlaneGeometry*> UARBlueprintLibrary::STATIC_GetAllTrackedPlanes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes");
		
		UARBlueprintLibrary_GetAllTrackedPlanes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C9F0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedImage*> UARBlueprintLibrary::STATIC_GetAllTrackedImages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages");
		
		UARBlueprintLibrary_GetAllTrackedImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C970
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UAREnvironmentCaptureProbe*> UARBlueprintLibrary::STATIC_GetAllTrackedEnvironmentCaptureProbes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes");
		
		UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C830
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<struct FARPose2D> UARBlueprintLibrary::STATIC_GetAllTracked2DPoses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses");
		
		UARBlueprintLibrary_GetAllTracked2DPoses_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C7B0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARPin*> UARBlueprintLibrary::STATIC_GetAllPins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllPins");
		
		UARBlueprintLibrary_GetAllPins_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C6E0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      GeometryClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UARTrackedGeometry*> UARBlueprintLibrary::STATIC_GetAllGeometriesByClass(class UClass* GeometryClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass");
		
		UARBlueprintLibrary_GetAllGeometriesByClass_Params params {};
		params.GeometryClass = GeometryClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C660
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedGeometry*> UARBlueprintLibrary::STATIC_GetAllGeometries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries");
		
		UARBlueprintLibrary_GetAllGeometries_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C5D0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FTransform UARBlueprintLibrary::STATIC_GetAlignmentTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform");
		
		UARBlueprintLibrary_GetAlignmentTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C3B0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PointName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UARTrackedPoint*> UARBlueprintLibrary::STATIC_FindTrackedPointsByName(const class FString& PointName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName");
		
		UARBlueprintLibrary_FindTrackedPointsByName_Params params {};
		params.PointName = PointName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C210
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutlineThickness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry");
		
		UARBlueprintLibrary_DebugDrawTrackedGeometry_Params params {};
		params.TrackedGeometry = TrackedGeometry;
		params.WorldContextObject = WorldContextObject;
		params.Color = Color;
		params.OutlineThickness = OutlineThickness;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2C070
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UARPin*                                      ARPin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin");
		
		UARBlueprintLibrary_DebugDrawPin_Params params {};
		params.ARPin = ARPin;
		params.WorldContextObject = WorldContextObject;
		params.Color = Color;
		params.Scale = Scale;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2BF10
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector>                             StartPoints                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             EndPoints                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ClosestIntersection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_CalculateClosestIntersection(TArray<struct FVector> StartPoints, TArray<struct FVector> EndPoints, struct FVector* ClosestIntersection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection");
		
		UARBlueprintLibrary_CalculateClosestIntersection_Params params {};
		params.StartPoints = StartPoints;
		params.EndPoints = EndPoints;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestIntersection != nullptr)
			*ClosestIntersection = params.ClosestIntersection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2BCE0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  TransformInFirstCoordinateSystem                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TransformInSecondCoordinateSystem                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  AlignmentTransform                                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform* AlignmentTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform");
		
		UARBlueprintLibrary_CalculateAlignmentTransform_Params params {};
		params.TransformInFirstCoordinateSystem = TransformInFirstCoordinateSystem;
		params.TransformInSecondCoordinateSystem = TransformInSecondCoordinateSystem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AlignmentTransform != nullptr)
			*AlignmentTransform = params.AlignmentTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2BB30
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  WorldTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      PointName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeletePointsWithSameName                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_AddTrackedPointWithName(const struct FTransform& WorldTransform, const class FString& PointName, bool bDeletePointsWithSameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName");
		
		UARBlueprintLibrary_AddTrackedPointWithName_Params params {};
		params.WorldTransform = WorldTransform;
		params.PointName = PointName;
		params.bDeletePointsWithSameName = bDeletePointsWithSameName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2B990
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  CandidateTexture                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FriendlyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PhysicalWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARCandidateImage* UARBlueprintLibrary::STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage");
		
		UARBlueprintLibrary_AddRuntimeCandidateImage_Params params {};
		params.SessionConfig = SessionConfig;
		params.CandidateTexture = CandidateTexture;
		params.FriendlyName = FriendlyName;
		params.PhysicalWidth = PhysicalWidth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2B8A0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe");
		
		UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params params {};
		params.Location = Location;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D660
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UARTrackedGeometry* UARTraceResultLibrary::STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry");
		
		UARTraceResultLibrary_GetTrackedGeometry_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D560
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EARLineTraceChannels UARTraceResultLibrary::STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel");
		
		UARTraceResultLibrary_GetTraceChannel_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2D090
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::STATIC_GetLocalTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform");
		
		UARTraceResultLibrary_GetLocalTransform_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2CF60
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform");
		
		UARTraceResultLibrary_GetLocalToWorldTransform_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2CE30
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform");
		
		UARTraceResultLibrary_GetLocalToTrackingTransform_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2CD30
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UARTraceResultLibrary::STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera");
		
		UARTraceResultLibrary_GetDistanceFromCamera_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTraceResultLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTraceResultLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARBaseAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBaseAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2B720
	 * 		Name   -> Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::STATIC_ARSaveWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");
		
		UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARSaveWorldAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARSaveWorldAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B2B5D0
	 * 		Name   -> Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");
		
		UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARGetCandidateObjectAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B36930
	 * 		Name   -> Function AugmentedReality.ARComponent.UpdateVisualization
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UARComponent::UpdateVisualization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.UpdateVisualization");
		
		UARComponent_UpdateVisualization_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B364C0
	 * 		Name   -> Function AugmentedReality.ARComponent.SetNativeID
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARComponent::SetNativeID(const struct FGuid& NativeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.SetNativeID");
		
		UARComponent_SetNativeID_Params params {};
		params.NativeID = NativeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARComponent.ReceiveRemove
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UARComponent::ReceiveRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.ReceiveRemove");
		
		UARComponent_ReceiveRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35760
	 * 		Name   -> Function AugmentedReality.ARComponent.OnRep_Payload
	 * 		Flags  -> (Native, Protected)
	 */
	void UARComponent::OnRep_Payload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.OnRep_Payload");
		
		UARComponent_OnRep_Payload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B354F0
	 * 		Name   -> Function AugmentedReality.ARComponent.GetMRMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UMRMeshComponent* UARComponent::GetMRMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.GetMRMesh");
		
		UARComponent_GetMRMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B366A0
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EPlaneComponentDebugMode                           NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::STATIC_SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode");
		
		UARPlaneComponent_SetPlaneComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B36560
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<EARObjectClassification, struct FLinearColor> InColors                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::STATIC_SetObjectClassificationDebugColors(TMap<EARObjectClassification, struct FLinearColor> InColors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors");
		
		UARPlaneComponent_SetObjectClassificationDebugColors_Params params {};
		params.InColors = InColors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35EB0
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FARPlaneUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload");
		
		UARPlaneComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARPlaneUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ReceiveUpdate");
		
		UARPlaneComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.ReceiveAdd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARPlaneUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPlaneComponent::ReceiveAdd(const struct FARPlaneUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ReceiveAdd");
		
		UARPlaneComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35510
	 * 		Name   -> Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TMap<EARObjectClassification, struct FLinearColor> UARPlaneComponent::STATIC_GetObjectClassificationDebugColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors");
		
		UARPlaneComponent_GetObjectClassificationDebugColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPlaneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPlaneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPlaneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B36020
	 * 		Name   -> Function AugmentedReality.ARPointComponent.ServerUpdatePayload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FARPointUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARPointComponent::ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ServerUpdatePayload");
		
		UARPointComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARPointComponent.ReceiveUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARPointUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARPointComponent::ReceiveUpdate(const struct FARPointUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ReceiveUpdate");
		
		UARPointComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARPointComponent.ReceiveAdd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARPointUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARPointComponent::ReceiveAdd(const struct FARPointUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ReceiveAdd");
		
		UARPointComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPointComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPointComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPointComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B36370
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EFaceComponentDebugMode                            NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::STATIC_SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode");
		
		UARFaceComponent_SetFaceComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35A10
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FARFaceUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ServerUpdatePayload");
		
		UARFaceComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.ReceiveUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARFaceUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::ReceiveUpdate(const struct FARFaceUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ReceiveUpdate");
		
		UARFaceComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARFaceComponent.ReceiveAdd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARFaceUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARFaceComponent::ReceiveAdd(const struct FARFaceUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ReceiveAdd");
		
		UARFaceComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARFaceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARFaceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARFaceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B36450
	 * 		Name   -> Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EImageComponentDebugMode                           NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::STATIC_SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode");
		
		UARImageComponent_SetImageComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35C40
	 * 		Name   -> Function AugmentedReality.ARImageComponent.ServerUpdatePayload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FARImageUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ServerUpdatePayload");
		
		UARImageComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARImageComponent.ReceiveUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARImageUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::ReceiveUpdate(const struct FARImageUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ReceiveUpdate");
		
		UARImageComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARImageComponent.ReceiveAdd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARImageUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARImageComponent::ReceiveAdd(const struct FARImageUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ReceiveAdd");
		
		UARImageComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARImageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARImageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARImageComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B36780
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EQRCodeComponentDebugMode                          NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::STATIC_SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode");
		
		UARQRCodeComponent_SetQRCodeComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B36210
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FARQRCodeUpdatePayload                      NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload");
		
		UARQRCodeComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARQRCodeUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate");
		
		UARQRCodeComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARQRCodeUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARQRCodeComponent::ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ReceiveAdd");
		
		UARQRCodeComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARQRCodeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARQRCodeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARQRCodeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B36710
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EPoseComponentDebugMode                            NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::STATIC_SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode");
		
		UARPoseComponent_SetPoseComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B360D0
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FARPoseUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ServerUpdatePayload");
		
		UARPoseComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.ReceiveUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARPoseUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::ReceiveUpdate(const struct FARPoseUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ReceiveUpdate");
		
		UARPoseComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARPoseComponent.ReceiveAdd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARPoseUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARPoseComponent::ReceiveAdd(const struct FARPoseUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ReceiveAdd");
		
		UARPoseComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPoseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPoseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPoseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35900
	 * 		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FAREnvironmentProbeUpdatePayload            NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAREnvironmentProbeComponent::ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload");
		
		UAREnvironmentProbeComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FAREnvironmentProbeUpdatePayload            Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAREnvironmentProbeComponent::ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate");
		
		UAREnvironmentProbeComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FAREnvironmentProbeUpdatePayload            Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAREnvironmentProbeComponent::ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd");
		
		UAREnvironmentProbeComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAREnvironmentProbeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentProbeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentProbeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35900
	 * 		Name   -> Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FARObjectUpdatePayload                      NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARObjectComponent::ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ServerUpdatePayload");
		
		UARObjectComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARObjectComponent.ReceiveUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARObjectUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARObjectComponent::ReceiveUpdate(const struct FARObjectUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ReceiveUpdate");
		
		UARObjectComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARObjectComponent.ReceiveAdd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARObjectUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARObjectComponent::ReceiveAdd(const struct FARObjectUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ReceiveAdd");
		
		UARObjectComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARObjectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARObjectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARObjectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35D80
	 * 		Name   -> Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FARMeshUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARMeshComponent::ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ServerUpdatePayload");
		
		UARMeshComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARMeshComponent.ReceiveUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARMeshUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARMeshComponent::ReceiveUpdate(const struct FARMeshUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ReceiveUpdate");
		
		UARMeshComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARMeshComponent.ReceiveAdd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARMeshUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARMeshComponent::ReceiveAdd(const struct FARMeshUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ReceiveAdd");
		
		UARMeshComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B363E0
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGeoAnchorComponentDebugMode                       NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::STATIC_SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode");
		
		UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Params params {};
		params.NewDebugMode = NewDebugMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35AF0
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FARGeoAnchorUpdatePayload                   NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload");
		
		UARGeoAnchorComponent_ServerUpdatePayload_Params params {};
		params.NewPayload = NewPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARGeoAnchorUpdatePayload                   Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate");
		
		UARGeoAnchorComponent_ReceiveUpdate_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FARGeoAnchorUpdatePayload                   Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARGeoAnchorComponent::ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd");
		
		UARGeoAnchorComponent_ReceiveAdd_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARGeoAnchorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGeoAnchorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARGeoAnchorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B367F0
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.StartARSessionLatent");
		
		UARDependencyHandler_StartARSessionLatent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionConfig = SessionConfig;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35780
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EARServicePermissionRequestResult                  OutPermissionResult                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, EARServicePermissionRequestResult* OutPermissionResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission");
		
		UARDependencyHandler_RequestARSessionPermission_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionConfig = SessionConfig;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPermissionResult != nullptr)
			*OutPermissionResult = params.OutPermissionResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35610
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.InstallARService
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EARServiceInstallRequestResult                     OutInstallResult                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceInstallRequestResult* OutInstallResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.InstallARService");
		
		UARDependencyHandler_InstallARService_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInstallResult != nullptr)
			*OutInstallResult = params.OutInstallResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35390
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARDependencyHandler* UARDependencyHandler::STATIC_GetARDependencyHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler");
		
		UARDependencyHandler_GetARDependencyHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B350B0
	 * 		Name   -> Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EARServiceAvailability                             OutAvailability                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARDependencyHandler::CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceAvailability* OutAvailability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability");
		
		UARDependencyHandler_CheckARServiceAvailability_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAvailability != nullptr)
			*OutAvailability = params.OutAvailability;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARDependencyHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARDependencyHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARDependencyHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B354C0
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARGeoTrackingSupport* UARGeoTrackingSupport::STATIC_GetGeoTrackingSupport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport");
		
		UARGeoTrackingSupport_GetGeoTrackingSupport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01001140
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARGeoTrackingStateReason UARGeoTrackingSupport::GetGeoTrackingStateReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason");
		
		UARGeoTrackingSupport_GetGeoTrackingStateReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B11180
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARGeoTrackingState UARGeoTrackingSupport::GetGeoTrackingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState");
		
		UARGeoTrackingSupport_GetGeoTrackingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35490
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARGeoTrackingAccuracy UARGeoTrackingSupport::GetGeoTrackingAccuracy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy");
		
		UARGeoTrackingSupport_GetGeoTrackingAccuracy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B34EF0
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AltitudeMeters                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalAnchorName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const class FString& OptionalAnchorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude");
		
		UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Params params {};
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		params.AltitudeMeters = AltitudeMeters;
		params.OptionalAnchorName = OptionalAnchorName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B34D70
	 * 		Name   -> Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalAnchorName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, const class FString& OptionalAnchorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation");
		
		UARGeoTrackingSupport_AddGeoAnchorAtLocation_Params params {};
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		params.OptionalAnchorName = OptionalAnchorName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARGeoTrackingSupport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGeoTrackingSupport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARGeoTrackingSupport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bIsAvailable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature");
		
		UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Params params {};
		params.bIsAvailable = bIsAvailable;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35290
	 * 		Name   -> Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::STATIC_CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation");
		
		UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B35200
	 * 		Name   -> Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::STATIC_CheckGeoTrackingAvailability(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability");
		
		UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Altitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature");
		
		UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Params params {};
		params.Longitude = Longitude;
		params.Latitude = Latitude;
		params.Altitude = Altitude;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B353C0
	 * 		Name   -> Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::STATIC_GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition");
		
		UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetGeoLocationAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39510
	 * 		Name   -> Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		class UClass*                                      ComponentClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor");
		
		UARLifeCycleComponent_ServerSpawnARActor_Params params {};
		params.ComponentClass = ComponentClass;
		params.NativeID = NativeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39400
	 * 		Name   -> Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		class AARActor*                                    Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::ServerDestroyARActor(class AARActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor");
		
		UARLifeCycleComponent_ServerDestroyARActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class AARActor*                                    Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature");
		
		UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasDefaults)
	 * Parameters:
	 * 		class UClass*                                      ComponentClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AARActor*                                    SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARLifeCycleComponent::InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature");
		
		UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Params params {};
		params.ComponentClass = ComponentClass;
		params.NativeID = NativeID;
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARLifeCycleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARLifeCycleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARLifeCycleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARLightEstimate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARLightEstimate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38E30
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARBasicLightEstimate::GetAmbientIntensityLumens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");
		
		UARBasicLightEstimate_GetAmbientIntensityLumens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38E00
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");
		
		UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38DC0
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");
		
		UARBasicLightEstimate_GetAmbientColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARBasicLightEstimate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBasicLightEstimate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAROriginActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAROriginActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AROriginActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39360
	 * 		Name   -> Function AugmentedReality.ARPin.GetTrackingState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARTrackingState UARPin::GetTrackingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");
		
		UARPin_GetTrackingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39330
	 * 		Name   -> Function AugmentedReality.ARPin.GetTrackedGeometry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARTrackedGeometry* UARPin::GetTrackedGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");
		
		UARPin_GetTrackedGeometry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39270
	 * 		Name   -> Function AugmentedReality.ARPin.GetPinnedComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USceneComponent* UARPin::GetPinnedComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");
		
		UARPin_GetPinnedComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B391B0
	 * 		Name   -> Function AugmentedReality.ARPin.GetLocalToWorldTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARPin::GetLocalToWorldTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");
		
		UARPin_GetLocalToWorldTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39120
	 * 		Name   -> Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARPin::GetLocalToTrackingTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");
		
		UARPin_GetLocalToTrackingTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38F80
	 * 		Name   -> Function AugmentedReality.ARPin.GetDebugName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UARPin::GetDebugName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");
		
		UARPin_GetDebugName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38C30
	 * 		Name   -> Function AugmentedReality.ARPin.DebugDraw
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, Const)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");
		
		UARPin_DebugDraw_Params params {};
		params.World = World;
		params.Color = Color;
		params.Scale = Scale;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39EE0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldResetTrackedObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");
		
		UARSessionConfig_ShouldResetTrackedObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39EB0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldResetCameraTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");
		
		UARSessionConfig_ShouldResetCameraTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39E80
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldRenderCameraOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");
		
		UARSessionConfig_ShouldRenderCameraOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39E50
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldEnableCameraTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");
		
		UARSessionConfig_ShouldEnableCameraTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39E20
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldEnableAutoFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");
		
		UARSessionConfig_ShouldEnableAutoFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39D30
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetWorldMapData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              WorldMapData                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetWorldMapData(TArray<unsigned char> WorldMapData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");
		
		UARSessionConfig_SetWorldMapData_Params params {};
		params.WorldMapData = WorldMapData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39CB0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EARSessionTrackingFeature                          InSessionTrackingFeature                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable");
		
		UARSessionConfig_SetSessionTrackingFeatureToEnable_Params params {};
		params.InSessionTrackingFeature = InSessionTrackingFeature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39C30
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EARSceneReconstruction                             InSceneReconstructionMethod                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod");
		
		UARSessionConfig_SetSceneReconstructionMethod_Params params {};
		params.InSceneReconstructionMethod = InSceneReconstructionMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39BA0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");
		
		UARSessionConfig_SetResetTrackedObjects_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39B10
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");
		
		UARSessionConfig_SetResetCameraTracking_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B399A0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EARFaceTrackingUpdate                              InUpdate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");
		
		UARSessionConfig_SetFaceTrackingUpdate_Params params {};
		params.InUpdate = InUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39920
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EARFaceTrackingDirection                           InDirection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetFaceTrackingDirection(EARFaceTrackingDirection InDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");
		
		UARSessionConfig_SetFaceTrackingDirection_Params params {};
		params.InDirection = InDirection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39890
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");
		
		UARSessionConfig_SetEnableAutoFocus_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B397F0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FARVideoFormat                              NewFormat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");
		
		UARSessionConfig_SetDesiredVideoFormat_Params params {};
		params.NewFormat = NewFormat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39740
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UARCandidateObject*>                  InCandidateObjects                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");
		
		UARSessionConfig_SetCandidateObjectList_Params params {};
		params.InCandidateObjects = InCandidateObjects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B393C0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldMapData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<unsigned char> UARSessionConfig::GetWorldMapData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");
		
		UARSessionConfig_GetWorldMapData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39390
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARWorldAlignment UARSessionConfig::GetWorldAlignment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");
		
		UARSessionConfig_GetWorldAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39300
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetSessionType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARSessionType UARSessionConfig::GetSessionType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");
		
		UARSessionConfig_GetSessionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B392D0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARSceneReconstruction UARSessionConfig::GetSceneReconstructionMethod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod");
		
		UARSessionConfig_GetSceneReconstructionMethod_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B392A0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");
		
		UARSessionConfig_GetPlaneDetectionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39240
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");
		
		UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B390F0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");
		
		UARSessionConfig_GetLightEstimationMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B390C0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");
		
		UARSessionConfig_GetFrameSyncMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39090
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");
		
		UARSessionConfig_GetFaceTrackingUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39060
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");
		
		UARSessionConfig_GetFaceTrackingDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39030
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");
		
		UARSessionConfig_GetEnvironmentCaptureProbeType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39000
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature");
		
		UARSessionConfig_GetEnabledSessionTrackingFeature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38FC0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");
		
		UARSessionConfig_GetDesiredVideoFormat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38EF0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");
		
		UARSessionConfig_GetCandidateObjectList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38E60
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");
		
		UARSessionConfig_GetCandidateImageList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38880
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARCandidateObject*                          CandidateObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");
		
		UARSessionConfig_AddCandidateObject_Params params {};
		params.CandidateObject = CandidateObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B387F0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateImage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARCandidateImage*                           NewCandidateImage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");
		
		UARSessionConfig_AddCandidateImage_Params params {};
		params.NewCandidateImage = NewCandidateImage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARSessionConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARSessionConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39A20
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ImageData                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char> ImageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");
		
		AARSharedWorldGameMode_SetPreviewImageData_Params params {};
		params.ImageData = ImageData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39720
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void AARSharedWorldGameMode::SetARWorldSharingIsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");
		
		AARSharedWorldGameMode_SetARWorldSharingIsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39630
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ARWorldData                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char> ARWorldData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");
		
		AARSharedWorldGameMode_SetARSharedWorldData_Params params {};
		params.ARWorldData = ARWorldData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38D90
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");
		
		AARSharedWorldGameMode_GetARSharedWorldGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSharedWorldGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");
		
		AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSharedWorldGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B394C0
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving");
		
		AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38B20
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32_t Offset, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData");
		
		AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params params {};
		params.Offset = Offset;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38A10
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientUpdateARWorldData(int32_t Offset, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData");
		
		AARSharedWorldPlayerController_ClientUpdateARWorldData_Params params {};
		params.Offset = Offset;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B38910
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		int32_t                                            PreviewImageSize                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ARWorldDataSize                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld");
		
		AARSharedWorldPlayerController_ClientInitSharedWorld_Params params {};
		params.PreviewImageSize = PreviewImageSize;
		params.ARWorldDataSize = ARWorldDataSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSharedWorldPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3EBE0
	 * 		Name   -> Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAREnvironmentCaptureProbe*                  InCaptureProbe                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");
		
		AARSkyLight_SetEnvironmentCaptureProbe_Params params {};
		params.InCaptureProbe = InCaptureProbe;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSkyLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSkyLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSkyLight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTextureCameraImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTextureCameraImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTextureCameraDepth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTextureCameraDepth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAREnvironmentCaptureProbeTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentCaptureProbeTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTraceResultDummy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTraceResultDummy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3EA50
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.IsTracked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARTrackedGeometry::IsTracked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");
		
		UARTrackedGeometry_IsTracked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E9C0
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EARSpatialMeshUsageFlags                           InFlag                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARTrackedGeometry::HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags InFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag");
		
		UARTrackedGeometry_HasSpatialMeshUsageFlag_Params params {};
		params.InFlag = InFlag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E8B0
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");
		
		UARTrackedGeometry_GetUnderlyingMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39360
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARTrackingState UARTrackedGeometry::GetTrackingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");
		
		UARTrackedGeometry_GetTrackingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E610
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARObjectClassification UARTrackedGeometry::GetObjectClassification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");
		
		UARTrackedGeometry_GetObjectClassification_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E5D0
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UARTrackedGeometry::GetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetName");
		
		UARTrackedGeometry_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E520
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");
		
		UARTrackedGeometry_GetLocalToWorldTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B39120
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");
		
		UARTrackedGeometry_GetLocalToTrackingTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E410
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARTrackedGeometry::GetLastUpdateTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");
		
		UARTrackedGeometry_GetLastUpdateTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E3E0
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UARTrackedGeometry::GetLastUpdateFrameNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");
		
		UARTrackedGeometry_GetLastUpdateFrameNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E240
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetDebugName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UARTrackedGeometry::GetDebugName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");
		
		UARTrackedGeometry_GetDebugName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E860
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");
		
		UARPlaneGeometry_GetSubsumedBy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E800
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetOrientation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARPlaneOrientation UARPlaneGeometry::GetOrientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetOrientation");
		
		UARPlaneGeometry_GetOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E350
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetExtent
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UARPlaneGeometry::GetExtent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");
		
		UARPlaneGeometry_GetExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E210
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetCenter
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UARPlaneGeometry::GetCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");
		
		UARPlaneGeometry_GetCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E0C0
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");
		
		UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPlaneGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPlaneGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E2D0
	 * 		Name   -> Function AugmentedReality.ARTrackedImage.GetEstimateSize
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FVector2D UARTrackedImage::GetEstimateSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");
		
		UARTrackedImage_GetEstimateSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E280
	 * 		Name   -> Function AugmentedReality.ARTrackedImage.GetDetectedImage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARCandidateImage* UARTrackedImage::GetDetectedImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");
		
		UARTrackedImage_GetDetectedImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedQRCode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedQRCode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedQRCode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E8E0
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EAREye                                             Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye Eye)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");
		
		UARFaceGeometry_GetWorldSpaceEyeTransform_Params params {};
		params.Eye = Eye;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E460
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EAREye                                             Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye Eye)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");
		
		UARFaceGeometry_GetLocalSpaceEyeTransform_Params params {};
		params.Eye = Eye;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3DED0
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EARFaceBlendShape                                  BlendShape                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape BlendShape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");
		
		UARFaceGeometry_GetBlendShapeValue_Params params {};
		params.BlendShape = BlendShape;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3DF60
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");
		
		UARFaceGeometry_GetBlendShapes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARFaceGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARFaceGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E310
	 * 		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UAREnvironmentCaptureProbe::GetExtent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");
		
		UAREnvironmentCaptureProbe_GetExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E2A0
	 * 		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");
		
		UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAREnvironmentCaptureProbe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentCaptureProbe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E280
	 * 		Name   -> Function AugmentedReality.ARTrackedObject.GetDetectedObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARCandidateObject* UARTrackedObject::GetDetectedObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");
		
		UARTrackedObject_GetDetectedObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E880
	 * 		Name   -> Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FARPose3D UARTrackedPose::GetTrackedPoseData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedPose.GetTrackedPoseData");
		
		UARTrackedPose_GetTrackedPoseData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedPose.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedPose::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPose");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E630
	 * 		Name   -> Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InWorldLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EARObjectClassification                            OutClassification                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutClassificationLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxLocationDiff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARMeshGeometry::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation");
		
		UARMeshGeometry_GetObjectClassificationAtLocation_Params params {};
		params.InWorldLocation = InWorldLocation;
		params.MaxLocationDiff = MaxLocationDiff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutClassification != nullptr)
			*OutClassification = params.OutClassification;
		if (OutClassificationLocation != nullptr)
			*OutClassificationLocation = params.OutClassificationLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARMeshGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARMeshGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARMeshGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E5B0
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetLongitude
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARGeoAnchor::GetLongitude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetLongitude");
		
		UARGeoAnchor_GetLongitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E440
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetLatitude
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARGeoAnchor::GetLatitude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetLatitude");
		
		UARGeoAnchor_GetLatitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3DEB0
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARAltitudeSource UARGeoAnchor::GetAltitudeSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetAltitudeSource");
		
		UARGeoAnchor_GetAltitudeSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3DE90
	 * 		Name   -> Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARGeoAnchor::GetAltitudeMeters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters");
		
		UARGeoAnchor_GetAltitudeMeters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARGeoAnchor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGeoAnchor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARGeoAnchor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackableNotifyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackableNotifyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackableNotifyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTypesDummyClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTypesDummyClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E840
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARCandidateImage::GetPhysicalWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");
		
		UARCandidateImage_GetPhysicalWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E820
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARCandidateImage::GetPhysicalHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");
		
		UARCandidateImage_GetPhysicalHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E7E0
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetOrientation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARCandidateImageOrientation UARCandidateImage::GetOrientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");
		
		UARCandidateImage_GetOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E380
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetFriendlyName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UARCandidateImage::GetFriendlyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");
		
		UARCandidateImage_GetFriendlyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E1F0
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetCandidateTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTexture2D* UARCandidateImage::GetCandidateTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");
		
		UARCandidateImage_GetCandidateTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARCandidateImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARCandidateImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3EC70
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetFriendlyName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetFriendlyName(const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetFriendlyName");
		
		UARCandidateObject_SetFriendlyName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3EB30
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              InCandidateObject                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char> InCandidateObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");
		
		UARCandidateObject_SetCandidateObjectData_Params params {};
		params.InCandidateObject = InCandidateObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3EA80
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetBoundingBox
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FBox                                        InBoundingBox                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");
		
		UARCandidateObject_SetBoundingBox_Params params {};
		params.InBoundingBox = InBoundingBox;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E3B0
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetFriendlyName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UARCandidateObject::GetFriendlyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");
		
		UARCandidateObject_GetFriendlyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E1C0
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");
		
		UARCandidateObject_GetCandidateObjectData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B3E180
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetBoundingBox
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBox UARCandidateObject::GetBoundingBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");
		
		UARCandidateObject_GetBoundingBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARCandidateObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARCandidateObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		return ptr;
	}

}


