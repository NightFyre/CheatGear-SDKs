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
	 * 		RVA    -> 0x011EABC0
	 * 		Name   -> Function Water.BuoyancyComponent.OnPontoonExitedWater
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSphericalPontoon                           Pontoon                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UBuoyancyComponent::OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonExitedWater");
		
		UBuoyancyComponent_OnPontoonExitedWater_Params params {};
		params.Pontoon = Pontoon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EAAF0
	 * 		Name   -> Function Water.BuoyancyComponent.OnPontoonEnteredWater
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSphericalPontoon                           Pontoon                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UBuoyancyComponent::OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonEnteredWater");
		
		UBuoyancyComponent_OnPontoonEnteredWater_Params params {};
		params.Pontoon = Pontoon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EAAC0
	 * 		Name   -> Function Water.BuoyancyComponent.IsOverlappingWaterBody
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBuoyancyComponent::IsOverlappingWaterBody()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.IsOverlappingWaterBody");
		
		UBuoyancyComponent_IsOverlappingWaterBody_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EAA90
	 * 		Name   -> Function Water.BuoyancyComponent.IsInWaterBody
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBuoyancyComponent::IsInWaterBody()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.IsInWaterBody");
		
		UBuoyancyComponent_IsInWaterBody_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA0B0
	 * 		Name   -> Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     OutWaterPlaneLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutWaterPlaneNormal                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutWaterSurfacePosition                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutWaterDepth                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutWaterBodyIdx                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutWaterVelocity                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBuoyancyComponent::GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32_t* OutWaterBodyIdx, struct FVector* OutWaterVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo");
		
		UBuoyancyComponent_GetLastWaterSurfaceInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWaterPlaneLocation != nullptr)
			*OutWaterPlaneLocation = params.OutWaterPlaneLocation;
		if (OutWaterPlaneNormal != nullptr)
			*OutWaterPlaneNormal = params.OutWaterPlaneNormal;
		if (OutWaterSurfacePosition != nullptr)
			*OutWaterSurfacePosition = params.OutWaterSurfacePosition;
		if (OutWaterDepth != nullptr)
			*OutWaterDepth = params.OutWaterDepth;
		if (OutWaterBodyIdx != nullptr)
			*OutWaterBodyIdx = params.OutWaterBodyIdx;
		if (OutWaterVelocity != nullptr)
			*OutWaterVelocity = params.OutWaterVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E9E20
	 * 		Name   -> Function Water.BuoyancyComponent.GetCurrentWaterBodyComponents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UWaterBodyComponent*> UBuoyancyComponent::GetCurrentWaterBodyComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.GetCurrentWaterBodyComponents");
		
		UBuoyancyComponent_GetCurrentWaterBodyComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuoyancyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuoyancyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.BuoyancyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E9CC0
	 * 		Name   -> Function Water.BuoyancyManager.GetBuoyancyComponentManager
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ABuoyancyManager*                            Manager                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABuoyancyManager::STATIC_GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager** Manager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyManager.GetBuoyancyComponentManager");
		
		ABuoyancyManager_GetBuoyancyComponentManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Manager != nullptr)
			*Manager = params.Manager;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuoyancyManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuoyancyManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.BuoyancyManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_InsideWaterBody.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_InsideWaterBody::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.EnvQueryTest_InsideWaterBody");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E9B70
	 * 		Name   -> Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<struct FGerstnerWave>                       OutWaves                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGerstnerWaterWaveGeneratorBase::GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves");
		
		UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWaves != nullptr)
			*OutWaves = params.OutWaves;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGerstnerWaterWaveGeneratorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGerstnerWaterWaveGeneratorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.GerstnerWaterWaveGeneratorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGerstnerWaterWaveGeneratorSimple.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGerstnerWaterWaveGeneratorSimple::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.GerstnerWaterWaveGeneratorSimple");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGerstnerWaterWaveGeneratorSpectrum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGerstnerWaterWaveGeneratorSpectrum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.GerstnerWaterWaveGeneratorSpectrum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterWavesBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterWavesBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterWavesBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterWaves.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterWaves::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterWaves");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGerstnerWaterWaves.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGerstnerWaterWaves::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.GerstnerWaterWaves");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGerstnerWaterWaveSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGerstnerWaterWaveSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.GerstnerWaterWaveSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULakeCollisionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULakeCollisionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.LakeCollisionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceWater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceWater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.NiagaraDataInterfaceWater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EAF50
	 * 		Name   -> Function Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWaterBodyComponent*                         WaterBodyComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraWaterFunctionLibrary::STATIC_SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UWaterBodyComponent* WaterBodyComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent");
		
		UNiagaraWaterFunctionLibrary_SetWaterBodyComponent_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.WaterBodyComponent = WaterBodyComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EAE30
	 * 		Name   -> Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AWaterBody*                                  WaterBody                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraWaterFunctionLibrary::STATIC_SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.NiagaraWaterFunctionLibrary.SetWaterBody");
		
		UNiagaraWaterFunctionLibrary_SetWaterBody_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.WaterBody = WaterBody;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraWaterFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraWaterFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.NiagaraWaterFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOceanCollisionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanCollisionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.OceanCollisionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOceanBoxCollisionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanBoxCollisionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.OceanBoxCollisionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EB100
	 * 		Name   -> Function Water.WaterBody.SetWaterWaves
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWaterWavesBase*                             InWaterWaves                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWaterBody::SetWaterWaves(class UWaterWavesBase* InWaterWaves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.SetWaterWaves");
		
		AWaterBody_SetWaterWaves_Params params {};
		params.InWaterWaves = InWaterWaves;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EB070
	 * 		Name   -> Function Water.WaterBody.SetWaterMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          InMaterial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWaterBody::SetWaterMaterial(class UMaterialInterface* InMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.SetWaterMaterial");
		
		AWaterBody_SetWaterMaterial_Params params {};
		params.InMaterial = InMaterial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EAC90
	 * 		Name   -> Function Water.WaterBody.OnWaterBodyChanged
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShapeOrPositionChanged                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWeightmapSettingsChanged                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.OnWaterBodyChanged");
		
		AWaterBody_OnWaterBodyChanged_Params params {};
		params.bShapeOrPositionChanged = bShapeOrPositionChanged;
		params.bWeightmapSettingsChanged = bWeightmapSettingsChanged;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA9B0
	 * 		Name   -> Function Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AWaterBody::GetWaterVelocityVectorAtSplineInputKey(float InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey");
		
		AWaterBody_GetWaterVelocityVectorAtSplineInputKey_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA870
	 * 		Name   -> Function Water.WaterBody.GetWaterVelocityAtSplineInputKey
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AWaterBody::GetWaterVelocityAtSplineInputKey(float InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterVelocityAtSplineInputKey");
		
		AWaterBody_GetWaterVelocityAtSplineInputKey_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA5D0
	 * 		Name   -> Function Water.WaterBody.GetWaterSpline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UWaterSplineComponent* AWaterBody::GetWaterSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterSpline");
		
		AWaterBody_GetWaterSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA560
	 * 		Name   -> Function Water.WaterBody.GetWaterMaterialInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterMaterialInstance");
		
		AWaterBody_GetWaterMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA510
	 * 		Name   -> Function Water.WaterBody.GetWaterBodyType
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EWaterBodyType AWaterBody::GetWaterBodyType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterBodyType");
		
		AWaterBody_GetWaterBodyType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA4F0
	 * 		Name   -> Function Water.WaterBody.GetWaterBodyComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UWaterBodyComponent* AWaterBody::GetWaterBodyComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterBodyComponent");
		
		AWaterBody_GetWaterBodyComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA3A0
	 * 		Name   -> Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance");
		
		AWaterBody_GetRiverToOceanTransitionMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA330
	 * 		Name   -> Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance");
		
		AWaterBody_GetRiverToLakeTransitionMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E9FB0
	 * 		Name   -> Function Water.WaterBody.GetIslands
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AWaterBodyIsland*> AWaterBody::GetIslands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetIslands");
		
		AWaterBody_GetIslands_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E9EB0
	 * 		Name   -> Function Water.WaterBody.GetExclusionVolumes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetExclusionVolumes");
		
		AWaterBody_GetExclusionVolumes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E9C20
	 * 		Name   -> Function Water.WaterBody.GetAudioIntensityAtSplineInputKey
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AWaterBody::GetAudioIntensityAtSplineInputKey(float InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetAudioIntensityAtSplineInputKey");
		
		AWaterBody_GetAudioIntensityAtSplineInputKey_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBody.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBody::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBody");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterBodyGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterBodyGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EAD60
	 * 		Name   -> Function Water.WaterBodyComponent.OnWaterBodyChanged
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShapeOrPositionChanged                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWeightmapSettingsChanged                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWaterBodyComponent::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.OnWaterBodyChanged");
		
		UWaterBodyComponent_OnWaterBodyChanged_Params params {};
		params.bShapeOrPositionChanged = bShapeOrPositionChanged;
		params.bWeightmapSettingsChanged = bWeightmapSettingsChanged;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EAA60
	 * 		Name   -> Function Water.WaterBodyComponent.GetWaterWaves
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UWaterWavesBase* UWaterBodyComponent::GetWaterWaves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterWaves");
		
		UWaterBodyComponent_GetWaterWaves_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA910
	 * 		Name   -> Function Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InKey                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWaterBodyComponent::GetWaterVelocityAtSplineInputKey(float InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey");
		
		UWaterBodyComponent_GetWaterVelocityAtSplineInputKey_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA620
	 * 		Name   -> Function Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutWaterSurfaceLocation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutWaterSurfaceNormal                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutWaterVelocity                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutWaterDepth                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeDepth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWaterBodyComponent::GetWaterSurfaceInfoAtLocation(const struct FVector& InLocation, struct FVector* OutWaterSurfaceLocation, struct FVector* OutWaterSurfaceNormal, struct FVector* OutWaterVelocity, float* OutWaterDepth, bool bIncludeDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation");
		
		UWaterBodyComponent_GetWaterSurfaceInfoAtLocation_Params params {};
		params.InLocation = InLocation;
		params.bIncludeDepth = bIncludeDepth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWaterSurfaceLocation != nullptr)
			*OutWaterSurfaceLocation = params.OutWaterSurfaceLocation;
		if (OutWaterSurfaceNormal != nullptr)
			*OutWaterSurfaceNormal = params.OutWaterSurfaceNormal;
		if (OutWaterVelocity != nullptr)
			*OutWaterVelocity = params.OutWaterVelocity;
		if (OutWaterDepth != nullptr)
			*OutWaterDepth = params.OutWaterDepth;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA5F0
	 * 		Name   -> Function Water.WaterBodyComponent.GetWaterSpline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UWaterSplineComponent* UWaterBodyComponent::GetWaterSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterSpline");
		
		UWaterBodyComponent_GetWaterSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA5A0
	 * 		Name   -> Function Water.WaterBodyComponent.GetWaterMaterialInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterMaterialInstance");
		
		UWaterBodyComponent_GetWaterMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA540
	 * 		Name   -> Function Water.WaterBodyComponent.GetWaterMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMaterialInterface* UWaterBodyComponent::GetWaterMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterMaterial");
		
		UWaterBodyComponent_GetWaterMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA4C0
	 * 		Name   -> Function Water.WaterBodyComponent.GetWaterBodyActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AWaterBody* UWaterBodyComponent::GetWaterBodyActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetWaterBodyActor");
		
		UWaterBodyComponent_GetWaterBodyActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA490
	 * 		Name   -> Function Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UMaterialInstanceDynamic* UWaterBodyComponent::GetUnderwaterPostProcessMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance");
		
		UWaterBodyComponent_GetUnderwaterPostProcessMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA410
	 * 		Name   -> Function Water.WaterBodyComponent.GetStandardRenderableComponents
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UPrimitiveComponent*> UWaterBodyComponent::GetStandardRenderableComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetStandardRenderableComponents");
		
		UWaterBodyComponent_GetStandardRenderableComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA3E0
	 * 		Name   -> Function Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	class UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToOceanTransitionMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance");
		
		UWaterBodyComponent_GetRiverToOceanTransitionMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA370
	 * 		Name   -> Function Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	class UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToLakeTransitionMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance");
		
		UWaterBodyComponent_GetRiverToLakeTransitionMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA300
	 * 		Name   -> Function Water.WaterBodyComponent.GetMaxWaveHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWaterBodyComponent::GetMaxWaveHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetMaxWaveHeight");
		
		UWaterBodyComponent_GetMaxWaveHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA030
	 * 		Name   -> Function Water.WaterBodyComponent.GetIslands
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AWaterBodyIsland*> UWaterBodyComponent::GetIslands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetIslands");
		
		UWaterBodyComponent_GetIslands_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E9F30
	 * 		Name   -> Function Water.WaterBodyComponent.GetExclusionVolumes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AWaterBodyExclusionVolume*> UWaterBodyComponent::GetExclusionVolumes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetExclusionVolumes");
		
		UWaterBodyComponent_GetExclusionVolumes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E9DA0
	 * 		Name   -> Function Water.WaterBodyComponent.GetCollisionComponents
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UPrimitiveComponent*> UWaterBodyComponent::GetCollisionComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyComponent.GetCollisionComponents");
		
		UWaterBodyComponent_GetCollisionComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterBodyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterBodyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMeshGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMeshGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.CustomMeshGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyCustom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyCustom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyCustom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterBodyCustomComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterBodyCustomComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyCustomComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyExclusionVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyExclusionVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyExclusionVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EA5D0
	 * 		Name   -> Function Water.WaterBodyIsland.GetWaterSpline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyIsland.GetWaterSpline");
		
		AWaterBodyIsland_GetWaterSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyIsland.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyIsland::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyIsland");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULakeGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULakeGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.LakeGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyLake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyLake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyLake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterBodyLakeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterBodyLakeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyLakeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOceanGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.OceanGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyOcean.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyOcean::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyOcean");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterBodyOceanComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterBodyOceanComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyOceanComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URiverGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URiverGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.RiverGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyRiver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyRiver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyRiver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterBodyRiverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterBodyRiverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyRiverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterBrushActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterBrushActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBrushActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDC30
	 * 		Name   -> Function Water.WaterMeshComponent.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWaterMeshComponent::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterMeshComponent.IsEnabled");
		
		UWaterMeshComponent_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterRuntimeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterRuntimeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterRuntimeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSplineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSplineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterSplineComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSplineMetadata.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSplineMetadata::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterSplineMetadata");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDDC0
	 * 		Name   -> Function Water.WaterSubsystem.SetOceanFloodHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InFloodHeight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWaterSubsystem::SetOceanFloodHeight(float InFloodHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.SetOceanFloodHeight");
		
		UWaterSubsystem_SetOceanFloodHeight_Params params {};
		params.InFloodHeight = InFloodHeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDCE0
	 * 		Name   -> Function Water.WaterSubsystem.PrintToWaterLog
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWarning                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWaterSubsystem::PrintToWaterLog(const class FString& Message, bool bWarning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.PrintToWaterLog");
		
		UWaterSubsystem_PrintToWaterLog_Params params {};
		params.Message = Message;
		params.bWarning = bWarning;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDCB0
	 * 		Name   -> Function Water.WaterSubsystem.IsWaterRenderingEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWaterSubsystem::IsWaterRenderingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsWaterRenderingEnabled");
		
		UWaterSubsystem_IsWaterRenderingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDC80
	 * 		Name   -> Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWaterSubsystem::IsUnderwaterPostProcessEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled");
		
		UWaterSubsystem_IsUnderwaterPostProcessEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDC50
	 * 		Name   -> Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWaterSubsystem::IsShallowWaterSimulationEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled");
		
		UWaterSubsystem_IsShallowWaterSimulationEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDC00
	 * 		Name   -> Function Water.WaterSubsystem.GetWaterTimeSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWaterSubsystem::GetWaterTimeSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetWaterTimeSeconds");
		
		UWaterSubsystem_GetWaterTimeSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDBD0
	 * 		Name   -> Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWaterSubsystem::GetSmoothedWorldTimeSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds");
		
		UWaterSubsystem_GetSmoothedWorldTimeSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDBA0
	 * 		Name   -> Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UWaterSubsystem::STATIC_GetShallowWaterSimulationRenderTargetSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize");
		
		UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDB70
	 * 		Name   -> Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UWaterSubsystem::STATIC_GetShallowWaterMaxImpulseForces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces");
		
		UWaterSubsystem_GetShallowWaterMaxImpulseForces_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDB40
	 * 		Name   -> Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UWaterSubsystem::STATIC_GetShallowWaterMaxDynamicForces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces");
		
		UWaterSubsystem_GetShallowWaterMaxDynamicForces_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDAF0
	 * 		Name   -> Function Water.WaterSubsystem.GetOceanTotalHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWaterSubsystem::GetOceanTotalHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanTotalHeight");
		
		UWaterSubsystem_GetOceanTotalHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDAD0
	 * 		Name   -> Function Water.WaterSubsystem.GetOceanFloodHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWaterSubsystem::GetOceanFloodHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanFloodHeight");
		
		UWaterSubsystem_GetOceanFloodHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDAA0
	 * 		Name   -> Function Water.WaterSubsystem.GetOceanBaseHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWaterSubsystem::GetOceanBaseHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanBaseHeight");
		
		UWaterSubsystem_GetOceanBaseHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011EDA80
	 * 		Name   -> Function Water.WaterSubsystem.GetCameraUnderwaterDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWaterSubsystem::GetCameraUnderwaterDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetCameraUnderwaterDepth");
		
		UWaterSubsystem_GetCameraUnderwaterDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterWavesAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterWavesAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterWavesAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterWavesAssetReference.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterWavesAssetReference::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterWavesAssetReference");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterZone");
		return ptr;
	}

}


