/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x009E5790
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.StopSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_StopSession(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.StopSession");
		
		UAnselFunctionLibrary_StopSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E5720
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.StartSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_StartSession(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.StartSession");
		
		UAnselFunctionLibrary_StartSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E5620
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.SetUIControlVisibility
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUIControlEffectTarget                             UIControlTarget                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsVisible                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_SetUIControlVisibility(class UObject* WorldContextObject, EUIControlEffectTarget UIControlTarget, bool bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetUIControlVisibility");
		
		UAnselFunctionLibrary_SetUIControlVisibility_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UIControlTarget = UIControlTarget;
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E55B0
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.SetSettleFrames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumSettleFrames                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_SetSettleFrames(int32_t NumSettleFrames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetSettleFrames");
		
		UAnselFunctionLibrary_SetSettleFrames_Params params {};
		params.NumSettleFrames = NumSettleFrames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E5530
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsPhotographyAllowed                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_SetIsPhotographyAllowed(bool bIsPhotographyAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed");
		
		UAnselFunctionLibrary_SetIsPhotographyAllowed_Params params {};
		params.bIsPhotographyAllowed = bIsPhotographyAllowed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E54C0
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              TranslationSpeed                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_SetCameraMovementSpeed(float TranslationSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed");
		
		UAnselFunctionLibrary_SetCameraMovementSpeed_Params params {};
		params.TranslationSpeed = TranslationSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E5450
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MaxCameraDistance                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_SetCameraConstraintDistance(float MaxCameraDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance");
		
		UAnselFunctionLibrary_SetCameraConstraintDistance_Params params {};
		params.MaxCameraDistance = MaxCameraDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E53E0
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              CameraSize                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_SetCameraConstraintCameraSize(float CameraSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize");
		
		UAnselFunctionLibrary_SetCameraConstraintCameraSize_Params params {};
		params.CameraSize = CameraSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E5360
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.SetAutoPostprocess
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShouldAutoPostprocess                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_SetAutoPostprocess(bool bShouldAutoPostprocess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetAutoPostprocess");
		
		UAnselFunctionLibrary_SetAutoPostprocess_Params params {};
		params.bShouldAutoPostprocess = bShouldAutoPostprocess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E52E0
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.SetAutoPause
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShouldAutoPause                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_SetAutoPause(bool bShouldAutoPause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.SetAutoPause");
		
		UAnselFunctionLibrary_SetAutoPause_Params params {};
		params.bShouldAutoPause = bShouldAutoPause;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E52B0
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UAnselFunctionLibrary::STATIC_IsPhotographyAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable");
		
		UAnselFunctionLibrary_IsPhotographyAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E5280
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UAnselFunctionLibrary::STATIC_IsPhotographyAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed");
		
		UAnselFunctionLibrary_IsPhotographyAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E50D0
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewCameraLocation                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PreviousCameraLocation                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OriginalCameraLocation                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutCameraLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry");
		
		UAnselFunctionLibrary_ConstrainCameraByGeometry_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NewCameraLocation = NewCameraLocation;
		params.PreviousCameraLocation = PreviousCameraLocation;
		params.OriginalCameraLocation = OriginalCameraLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCameraLocation != nullptr)
			*OutCameraLocation = params.OutCameraLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009E4EE0
	 * 		Name   -> Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewCameraLocation                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PreviousCameraLocation                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OriginalCameraLocation                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutCameraLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnselFunctionLibrary::STATIC_ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation, float MaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance");
		
		UAnselFunctionLibrary_ConstrainCameraByDistance_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NewCameraLocation = NewCameraLocation;
		params.PreviousCameraLocation = PreviousCameraLocation;
		params.OriginalCameraLocation = OriginalCameraLocation;
		params.MaxDistance = MaxDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCameraLocation != nullptr)
			*OutCameraLocation = params.OutCameraLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnselFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnselFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Ansel.AnselFunctionLibrary");
		return ptr;
	}

}


