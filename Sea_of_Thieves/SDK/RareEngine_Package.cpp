/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction URareGameEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URareGameEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareEngine.RareGameEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetReferencer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetReferencer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareEngine.AssetReferencer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioHardwareDeviceService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioHardwareDeviceService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareEngine.AudioHardwareDeviceService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0600
	 * 		Name   -> Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InThreshold                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHitchDiagnosisBlueprintFunctionLibrary::STATIC_SetHitchThreshold(int32_t InThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold");
		
		UHitchDiagnosisBlueprintFunctionLibrary_SetHitchThreshold_Params params {};
		params.InThreshold = InThreshold;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0560
	 * 		Name   -> Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UHitchDiagnosisBlueprintFunctionLibrary::STATIC_GetMaxHitchNameThisFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame");
		
		UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchNameThisFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0530
	 * 		Name   -> Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UHitchDiagnosisBlueprintFunctionLibrary::STATIC_GetMaxHitchLengthThisFrameMs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs");
		
		UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchLengthThisFrameMs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0110
	 * 		Name   -> Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UHitchDiagnosisBlueprintFunctionLibrary::STATIC_DumpThisFramesHitchesToLog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog");
		
		UHitchDiagnosisBlueprintFunctionLibrary_DumpThisFramesHitchesToLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F00E0
	 * 		Name   -> Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UHitchDiagnosisBlueprintFunctionLibrary::STATIC_DidHitchOccurThisFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame");
		
		UHitchDiagnosisBlueprintFunctionLibrary_DidHitchOccurThisFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitchDiagnosisBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitchDiagnosisBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMemoryUsageVisualiserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMemoryUsageVisualiserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareEngine.MemoryUsageVisualiserSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARareHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARareHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareEngine.RareHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F00C0
	 * 		Name   -> Function RareEngine.StallDetector.Deactivate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStallDetector::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.Deactivate");
		
		UStallDetector_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030EFFF0
	 * 		Name   -> Function RareEngine.StallDetector.CreateStallDetector
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CreateActive                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UStallDetector* UStallDetector::STATIC_CreateStallDetector(float Delay, bool CreateActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.CreateStallDetector");
		
		UStallDetector_CreateStallDetector_Params params {};
		params.Delay = Delay;
		params.CreateActive = CreateActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030EFFD0
	 * 		Name   -> Function RareEngine.StallDetector.Activate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStallDetector::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.Activate");
		
		UStallDetector_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStallDetector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStallDetector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareEngine.StallDetector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0330
	 * 		Name   -> Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UStaticMesh*>                         MeshFilter                                                 (ConstParm, Parm, ZeroConstructor)
	 * 		TArray<struct FStaticMeshComponentList>            OutComponentLists                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
	 * 		class ULevel*                                      RestrictToLevel                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaticMeshActorBlueprintLibrary::STATIC_FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshComponentList>* OutComponentLists, class ULevel* RestrictToLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents");
		
		UStaticMeshActorBlueprintLibrary_FindAllStaticMeshComponents_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MeshFilter = MeshFilter;
		params.RestrictToLevel = RestrictToLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutComponentLists != nullptr)
			*OutComponentLists = params.OutComponentLists;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0130
	 * 		Name   -> Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UStaticMesh*>                         MeshFilter                                                 (ConstParm, Parm, ZeroConstructor)
	 * 		TArray<struct FStaticMeshActorList>                OutActorLists                                              (Parm, OutParm, ZeroConstructor)
	 * 		class ULevel*                                      RestrictToLevel                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaticMeshActorBlueprintLibrary::STATIC_FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, TArray<struct FStaticMeshActorList>* OutActorLists, class ULevel* RestrictToLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors");
		
		UStaticMeshActorBlueprintLibrary_FindAllStaticMeshActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MeshFilter = MeshFilter;
		params.RestrictToLevel = RestrictToLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActorLists != nullptr)
			*OutActorLists = params.OutActorLists;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaticMeshActorBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaticMeshActorBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RareEngine.StaticMeshActorBlueprintLibrary");
		return ptr;
	}

}


