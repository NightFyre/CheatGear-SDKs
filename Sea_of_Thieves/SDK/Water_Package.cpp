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
	 * 		Name   -> PredefinedFunction USplashProbeDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplashProbeDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.SplashProbeDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034C1950
	 * 		Name   -> Function Water.SplashProbeVFXComponent.IsProbeEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USplashProbeVFXComponent::IsProbeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.SplashProbeVFXComponent.IsProbeEnabled");
		
		USplashProbeVFXComponent_IsProbeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034C1760
	 * 		Name   -> Function Water.SplashProbeVFXComponent.EnableSplashProbe
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USplashProbeVFXComponent::EnableSplashProbe(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.SplashProbeVFXComponent.EnableSplashProbe");
		
		USplashProbeVFXComponent_EnableSplashProbe_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplashProbeVFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplashProbeVFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.SplashProbeVFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034C1C30
	 * 		Name   -> Function Water.WaterSplashProbeFunctionLibrary.TickProbes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InOwner                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FWaterSplashProbe>                   InSplashProbes                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		float                                              InDeltaTime                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterSplashProbeFunctionLibrary::STATIC_TickProbes(class AActor* InOwner, TArray<struct FWaterSplashProbe>* InSplashProbes, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.TickProbes");
		
		UWaterSplashProbeFunctionLibrary_TickProbes_Params params {};
		params.InOwner = InOwner;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSplashProbes != nullptr)
			*InSplashProbes = params.InSplashProbes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034C1AC0
	 * 		Name   -> Function Water.WaterSplashProbeFunctionLibrary.TickProbe
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InOwner                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWaterSplashProbe                           InSplashProbe                                              (Parm, OutParm, ReferenceParm)
	 * 		float                                              InDeltaTime                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterSplashProbeFunctionLibrary::STATIC_TickProbe(class AActor* InOwner, struct FWaterSplashProbe* InSplashProbe, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.TickProbe");
		
		UWaterSplashProbeFunctionLibrary_TickProbe_Params params {};
		params.InOwner = InOwner;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSplashProbe != nullptr)
			*InSplashProbe = params.InSplashProbe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034C1980
	 * 		Name   -> Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FWaterSplashProbe>                   InSplashProbes                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		float                                              SamplingTime                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterSplashProbeFunctionLibrary::STATIC_SetSamplingTime(TArray<struct FWaterSplashProbe>* InSplashProbes, float SamplingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.SetSamplingTime");
		
		UWaterSplashProbeFunctionLibrary_SetSamplingTime_Params params {};
		params.SamplingTime = SamplingTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSplashProbes != nullptr)
			*InSplashProbes = params.InSplashProbes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034C17F0
	 * 		Name   -> Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FWaterSplashProbe>                   InSplashProbes                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            ProbeIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UWaterSplashProbeFunctionLibrary::STATIC_GetRelativeWaterHeightChangeSpd(TArray<struct FWaterSplashProbe>* InSplashProbes, int32_t ProbeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSplashProbeFunctionLibrary.GetRelativeWaterHeightChangeSpd");
		
		UWaterSplashProbeFunctionLibrary_GetRelativeWaterHeightChangeSpd_Params params {};
		params.ProbeIndex = ProbeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSplashProbes != nullptr)
			*InSplashProbes = params.InSplashProbes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSplashProbeFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSplashProbeFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterSplashProbeFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034C1670
	 * 		Name   -> Function Water.WaterSpoutVFXComponent.AddSplashVFXSpawnerWithLocation
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FWaterSpout                                 WaterSplashLocator                                         (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWaterSpoutVFXComponent::AddSplashVFXSpawnerWithLocation(struct FWaterSpout* WaterSplashLocator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSpoutVFXComponent.AddSplashVFXSpawnerWithLocation");
		
		UWaterSpoutVFXComponent_AddSplashVFXSpawnerWithLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WaterSplashLocator != nullptr)
			*WaterSplashLocator = params.WaterSplashLocator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034C1650
	 * 		Name   -> Function Water.WaterSpoutVFXComponent.ActivateSplashVFXWithDelay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWaterSpoutVFXComponent::ActivateSplashVFXWithDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSpoutVFXComponent.ActivateSplashVFXWithDelay");
		
		UWaterSpoutVFXComponent_ActivateSplashVFXWithDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSpoutVFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSpoutVFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterSpoutVFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAthenaFFTWater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAthenaFFTWater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.AthenaFFTWater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterEmissionVolumeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterEmissionVolumeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterEmissionVolumeInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAthenaWaterEmissionVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAthenaWaterEmissionVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.AthenaWaterEmissionVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x047022A0
	 * 		Name   -> Function Water.FFTWaterInterface.SetExtendedPlaneComponent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFFTWaterExtendedPlaneComponent*             InFFTWaterComponent                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFFTWaterInterface::SetExtendedPlaneComponent(class UFFTWaterExtendedPlaneComponent* InFFTWaterComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.SetExtendedPlaneComponent");
		
		UFFTWaterInterface_SetExtendedPlaneComponent_Params params {};
		params.InFFTWaterComponent = InFFTWaterComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04702210
	 * 		Name   -> Function Water.FFTWaterInterface.SetComponent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFFTWaterComponent*                          InFFTWaterComponent                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFFTWaterInterface::SetComponent(class UFFTWaterComponent* InFFTWaterComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.SetComponent");
		
		UFFTWaterInterface_SetComponent_Params params {};
		params.InFFTWaterComponent = InFFTWaterComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701DE0
	 * 		Name   -> Function Water.FFTWaterInterface.SetActor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AAthenaFFTWater*                             InFFTWaterActor                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFFTWaterInterface::SetActor(class AAthenaFFTWater* InFFTWaterActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.SetActor");
		
		UFFTWaterInterface_SetActor_Params params {};
		params.InFFTWaterActor = InFFTWaterActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04700DD0
	 * 		Name   -> Function Water.FFTWaterInterface.GetExtendedPlaneComponent
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UFFTWaterExtendedPlaneComponent* UFFTWaterInterface::GetExtendedPlaneComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.GetExtendedPlaneComponent");
		
		UFFTWaterInterface_GetExtendedPlaneComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04700DA0
	 * 		Name   -> Function Water.FFTWaterInterface.GetComponent
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UFFTWaterComponent* UFFTWaterInterface::GetComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.GetComponent");
		
		UFFTWaterInterface_GetComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04700C20
	 * 		Name   -> Function Water.FFTWaterInterface.GetActor
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AAthenaFFTWater* UFFTWaterInterface::GetActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.FFTWaterInterface.GetActor");
		
		UFFTWaterInterface_GetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFFTWaterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFFTWaterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.FFTWaterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701890
	 * 		Name   -> Function Water.WaterInterface.IsReadyToBeQueried
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWaterInterface::IsReadyToBeQueried()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.IsReadyToBeQueried");
		
		UWaterInterface_IsReadyToBeQueried_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x047015F0
	 * 		Name   -> Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ApproxVelocity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Normal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ChoppynessScalar                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EWaterQueryResult UWaterInterface::GetWaterInformationWithScaledChoppyness(const struct FVector& SamplePosition, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal, class AActor* Actor, float ChoppynessScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterInformationWithScaledChoppyness");
		
		UWaterInterface_GetWaterInformationWithScaledChoppyness_Params params {};
		params.SamplePosition = SamplePosition;
		params.Actor = Actor;
		params.ChoppynessScalar = ChoppynessScalar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Height != nullptr)
			*Height = params.Height;
		if (ApproxVelocity != nullptr)
			*ApproxVelocity = params.ApproxVelocity;
		if (Normal != nullptr)
			*Normal = params.Normal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701390
	 * 		Name   -> Function Water.WaterInterface.GetWaterInformationBatched
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FVector2D>                           SamplePositions                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      Heights                                                    (Parm, OutParm, ZeroConstructor)
	 * 		TArray<struct FVector2D>                           ApproxVelocities                                           (Parm, OutParm, ZeroConstructor)
	 * 		TArray<struct FVector>                             Normals                                                    (Parm, OutParm, ZeroConstructor)
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EWaterQueryResult UWaterInterface::GetWaterInformationBatched(TArray<struct FVector2D> SamplePositions, TArray<float>* Heights, TArray<struct FVector2D>* ApproxVelocities, TArray<struct FVector>* Normals, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterInformationBatched");
		
		UWaterInterface_GetWaterInformationBatched_Params params {};
		params.SamplePositions = SamplePositions;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Heights != nullptr)
			*Heights = params.Heights;
		if (ApproxVelocities != nullptr)
			*ApproxVelocities = params.ApproxVelocities;
		if (Normals != nullptr)
			*Normals = params.Normals;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701190
	 * 		Name   -> Function Water.WaterInterface.GetWaterInformation
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ApproxVelocity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Normal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EWaterQueryResult UWaterInterface::GetWaterInformation(const struct FVector& SamplePosition, float* Height, struct FVector2D* ApproxVelocity, struct FVector* Normal, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterInformation");
		
		UWaterInterface_GetWaterInformation_Params params {};
		params.SamplePosition = SamplePosition;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Height != nullptr)
			*Height = params.Height;
		if (ApproxVelocity != nullptr)
			*ApproxVelocity = params.ApproxVelocity;
		if (Normal != nullptr)
			*Normal = params.Normal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04700FB0
	 * 		Name   -> Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Interpolate                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ChoppynessScalar                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EWaterQueryResult UWaterInterface::GetWaterHeightWithScaledChoppyness(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height, float ChoppynessScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterHeightWithScaledChoppyness");
		
		UWaterInterface_GetWaterHeightWithScaledChoppyness_Params params {};
		params.SamplePosition = SamplePosition;
		params.Actor = Actor;
		params.Interpolate = Interpolate;
		params.ChoppynessScalar = ChoppynessScalar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Height != nullptr)
			*Height = params.Height;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04700E30
	 * 		Name   -> Function Water.WaterInterface.GetWaterHeight
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SamplePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Interpolate                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EWaterQueryResult UWaterInterface::GetWaterHeight(const struct FVector& SamplePosition, class AActor* Actor, bool Interpolate, float* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetWaterHeight");
		
		UWaterInterface_GetWaterHeight_Params params {};
		params.SamplePosition = SamplePosition;
		params.Actor = Actor;
		params.Interpolate = Interpolate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Height != nullptr)
			*Height = params.Height;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04700CF0
	 * 		Name   -> Function Water.WaterInterface.GetActorWaterPlane
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FWaterSimPlane UWaterInterface::GetActorWaterPlane(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetActorWaterPlane");
		
		UWaterInterface_GetActorWaterPlane_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04700C50
	 * 		Name   -> Function Water.WaterInterface.GetActorWaterInformation
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FWaterInformation UWaterInterface::GetActorWaterInformation(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInterface.GetActorWaterInformation");
		
		UWaterInterface_GetActorWaterInformation_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701DC0
	 * 		Name   -> Function Water.FFTWaterService.OnRep_FFTWaterComponent
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AFFTWaterService::OnRep_FFTWaterComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.FFTWaterService.OnRep_FFTWaterComponent");
		
		AFFTWaterService_OnRep_FFTWaterComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701DA0
	 * 		Name   -> Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AFFTWaterService::OnRep_ExtendedPlaneComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.FFTWaterService.OnRep_ExtendedPlaneComponent");
		
		AFFTWaterService_OnRep_ExtendedPlaneComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFFTWaterService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFFTWaterService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.FFTWaterService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701A50
	 * 		Name   -> Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatWaterPlaneComponent::OnActorLeaveWaterPlane(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.FlatWaterPlaneComponent.OnActorLeaveWaterPlane");
		
		UFlatWaterPlaneComponent_OnActorLeaveWaterPlane_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x047019D0
	 * 		Name   -> Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatWaterPlaneComponent::OnActorEnterWaterPlane(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.FlatWaterPlaneComponent.OnActorEnterWaterPlane");
		
		UFlatWaterPlaneComponent_OnActorEnterWaterPlane_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04700AD0
	 * 		Name   -> Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     WorldSpacePosition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector2D UFlatWaterPlaneComponent::ConvertToWaterSpace(const struct FVector& WorldSpacePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.FlatWaterPlaneComponent.ConvertToWaterSpace");
		
		UFlatWaterPlaneComponent_ConvertToWaterSpace_Params params {};
		params.WorldSpacePosition = WorldSpacePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlatWaterPlaneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlatWaterPlaneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.FlatWaterPlaneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockWaterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockWaterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.MockWaterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockWaterServiceWithValidWaterPlane.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockWaterServiceWithValidWaterPlane::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.MockWaterServiceWithValidWaterPlane");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNoSwimWaterId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoSwimWaterId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.NoSwimWaterId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeaWaterId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeaWaterId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.SeaWaterId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipWaterId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipWaterId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.ShipWaterId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUndergroundSeaWaterId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUndergroundSeaWaterId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.UndergroundSeaWaterId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04702AD0
	 * 		Name   -> Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InOwner                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWaterBuoyancy                              InWaterBuoyancy                                            (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		float                                              InDeltaTime                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InChoppinessScalar                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FakeZOffsetGeneratorScalar                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UWaterBuoyancyFunctionLibrary::STATIC_TickBuoyancy(class AActor* InOwner, struct FWaterBuoyancy* InWaterBuoyancy, float InDeltaTime, float InChoppinessScalar, float FakeZOffsetGeneratorScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.TickBuoyancy");
		
		UWaterBuoyancyFunctionLibrary_TickBuoyancy_Params params {};
		params.InOwner = InOwner;
		params.InDeltaTime = InDeltaTime;
		params.InChoppinessScalar = InChoppinessScalar;
		params.FakeZOffsetGeneratorScalar = FakeZOffsetGeneratorScalar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWaterBuoyancy != nullptr)
			*InWaterBuoyancy = params.InWaterBuoyancy;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x047020F0
	 * 		Name   -> Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWaterBuoyancy                              InWaterBuoyancy                                            (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		float                                              ZOffset                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterBuoyancyFunctionLibrary::STATIC_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis(struct FWaterBuoyancy* InWaterBuoyancy, float ZOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancySamplesZOffsetSymmetricalAroundXAxis");
		
		UWaterBuoyancyFunctionLibrary_SetBuoyancySamplesZOffsetSymmetricalAroundXAxis_Params params {};
		params.ZOffset = ZOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWaterBuoyancy != nullptr)
			*InWaterBuoyancy = params.InWaterBuoyancy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701FD0
	 * 		Name   -> Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWaterBuoyancy                              InWaterBuoyancy                                            (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		float                                              UnaryBlendOverride                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterBuoyancyFunctionLibrary::STATIC_SetBuoyancyProbeCurveBlendDebugOverride(struct FWaterBuoyancy* InWaterBuoyancy, float UnaryBlendOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlendDebugOverride");
		
		UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlendDebugOverride_Params params {};
		params.UnaryBlendOverride = UnaryBlendOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWaterBuoyancy != nullptr)
			*InWaterBuoyancy = params.InWaterBuoyancy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701E70
	 * 		Name   -> Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWaterBuoyancy                              InWaterBuoyancy                                            (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		float                                              Blend                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBuoyancyBlend                                     BlendType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterBuoyancyFunctionLibrary::STATIC_SetBuoyancyProbeCurveBlend(struct FWaterBuoyancy* InWaterBuoyancy, float Blend, EBuoyancyBlend BlendType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancyFunctionLibrary.SetBuoyancyProbeCurveBlend");
		
		UWaterBuoyancyFunctionLibrary_SetBuoyancyProbeCurveBlend_Params params {};
		params.Blend = Blend;
		params.BlendType = BlendType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWaterBuoyancy != nullptr)
			*InWaterBuoyancy = params.InWaterBuoyancy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterBuoyancyFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterBuoyancyFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBuoyancyFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04702CC0
	 * 		Name   -> Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWaterBuoyancy                              InWaterBuoyancy                                            (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FBuoyancySampleMovement                     InSampleMovement                                           (Parm, OutParm)
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_TickLocalSampleMovement(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.TickLocalSampleMovement");
		
		UWaterBuoyancySampleMovementFunctionLibrary_TickLocalSampleMovement_Params params {};
		params.InActor = InActor;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWaterBuoyancy != nullptr)
			*InWaterBuoyancy = params.InWaterBuoyancy;
		if (InSampleMovement != nullptr)
			*InSampleMovement = params.InSampleMovement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x047028F0
	 * 		Name   -> Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWaterBuoyancy                              InWaterBuoyancy                                            (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FBuoyancySampleMovement                     InSampleMovement                                           (Parm, OutParm)
	 */
	void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByRandomConfigurationIndex");
		
		UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByRandomConfigurationIndex_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWaterBuoyancy != nullptr)
			*InWaterBuoyancy = params.InWaterBuoyancy;
		if (InSampleMovement != nullptr)
			*InSampleMovement = params.InSampleMovement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x047026D0
	 * 		Name   -> Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWaterBuoyancy                              InWaterBuoyancy                                            (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FBuoyancySampleMovement                     InSampleMovement                                           (Parm, OutParm)
	 * 		int32_t                                            ConfigurationIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_StartMovingVolumeSamplesLocallyByConfigurationIndex(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, int32_t ConfigurationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocallyByConfigurationIndex");
		
		UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocallyByConfigurationIndex_Params params {};
		params.InActor = InActor;
		params.ConfigurationIndex = ConfigurationIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWaterBuoyancy != nullptr)
			*InWaterBuoyancy = params.InWaterBuoyancy;
		if (InSampleMovement != nullptr)
			*InSampleMovement = params.InSampleMovement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04702330
	 * 		Name   -> Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWaterBuoyancy                              InWaterBuoyancy                                            (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FBuoyancySampleMovement                     InSampleMovement                                           (Parm, OutParm)
	 * 		class UCurveVector*                                InCenterOfMassOffsetCurve                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FBuoyancySampleMovementConfigurationEntry> NewSampleData                                              (Parm, OutParm, ZeroConstructor)
	 * 		float                                              BuoyancyScalarAtNewPosition                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveFloat*                                 BuoyancyScalarCurve                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveFloat*                                 ProbeMovementCurve                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveTime                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterBuoyancySampleMovementFunctionLibrary::STATIC_StartMovingVolumeSamplesLocally(class AActor* InActor, struct FWaterBuoyancy* InWaterBuoyancy, struct FBuoyancySampleMovement* InSampleMovement, class UCurveVector* InCenterOfMassOffsetCurve, TArray<struct FBuoyancySampleMovementConfigurationEntry>* NewSampleData, float BuoyancyScalarAtNewPosition, class UCurveFloat* BuoyancyScalarCurve, class UCurveFloat* ProbeMovementCurve, float MoveTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBuoyancySampleMovementFunctionLibrary.StartMovingVolumeSamplesLocally");
		
		UWaterBuoyancySampleMovementFunctionLibrary_StartMovingVolumeSamplesLocally_Params params {};
		params.InActor = InActor;
		params.InCenterOfMassOffsetCurve = InCenterOfMassOffsetCurve;
		params.BuoyancyScalarAtNewPosition = BuoyancyScalarAtNewPosition;
		params.BuoyancyScalarCurve = BuoyancyScalarCurve;
		params.ProbeMovementCurve = ProbeMovementCurve;
		params.MoveTime = MoveTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWaterBuoyancy != nullptr)
			*InWaterBuoyancy = params.InWaterBuoyancy;
		if (InSampleMovement != nullptr)
			*InSampleMovement = params.InSampleMovement;
		if (NewSampleData != nullptr)
			*NewSampleData = params.NewSampleData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterBuoyancySampleMovementFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterBuoyancySampleMovementFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBuoyancySampleMovementFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterEmissionVolumeService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterEmissionVolumeService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterEmissionVolumeService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterExclusionSurfaceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterExclusionSurfaceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterExclusionSurfaceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterPlaneInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterPlaneInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterPlaneInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701940
	 * 		Name   -> Function Water.WaterInteractionComponent.LeaveWaterPlane
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBaseWaterComponent*                         WaterComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterInteractionComponent::LeaveWaterPlane(class UBaseWaterComponent* WaterComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.LeaveWaterPlane");
		
		UWaterInteractionComponent_LeaveWaterPlane_Params params {};
		params.WaterComponent = WaterComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701920
	 * 		Name   -> Function Water.WaterInteractionComponent.LeaveWaterExclusionZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWaterInteractionComponent::LeaveWaterExclusionZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.LeaveWaterExclusionZone");
		
		UWaterInteractionComponent_LeaveWaterExclusionZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x047018F0
	 * 		Name   -> Function Water.WaterInteractionComponent.IsUsingWaterExcludedZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UWaterInteractionComponent::IsUsingWaterExcludedZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.IsUsingWaterExcludedZone");
		
		UWaterInteractionComponent_IsUsingWaterExcludedZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x047018C0
	 * 		Name   -> Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UWaterInteractionComponent::IsUsingNonDefaultWaterPlane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.IsUsingNonDefaultWaterPlane");
		
		UWaterInteractionComponent_IsUsingNonDefaultWaterPlane_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701860
	 * 		Name   -> Function Water.WaterInteractionComponent.IsInWaterExcludedZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWaterInteractionComponent::IsInWaterExcludedZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.IsInWaterExcludedZone");
		
		UWaterInteractionComponent_IsInWaterExcludedZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701830
	 * 		Name   -> Function Water.WaterInteractionComponent.GetWaterPlaneComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UBaseWaterComponent* UWaterInteractionComponent::GetWaterPlaneComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.GetWaterPlaneComponent");
		
		UWaterInteractionComponent_GetWaterPlaneComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04700E00
	 * 		Name   -> Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	unsigned char UWaterInteractionComponent::GetNumberOfWaterPlanes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.GetNumberOfWaterPlanes");
		
		UWaterInteractionComponent_GetNumberOfWaterPlanes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04700B90
	 * 		Name   -> Function Water.WaterInteractionComponent.EnterWaterPlane
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBaseWaterComponent*                         WaterComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterInteractionComponent::EnterWaterPlane(class UBaseWaterComponent* WaterComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.EnterWaterPlane");
		
		UWaterInteractionComponent_EnterWaterPlane_Params params {};
		params.WaterComponent = WaterComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04700B70
	 * 		Name   -> Function Water.WaterInteractionComponent.EnterWaterExclusionZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWaterInteractionComponent::EnterWaterExclusionZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterInteractionComponent.EnterWaterExclusionZone");
		
		UWaterInteractionComponent_EnterWaterExclusionZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterInteractionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterInteractionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterInteractionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701CA0
	 * 		Name   -> Function Water.WaterPlaneExclusionComponent.OnOverlapEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWaterPlaneExclusionComponent::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterPlaneExclusionComponent.OnOverlapEnd");
		
		UWaterPlaneExclusionComponent_OnOverlapEnd_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04701AD0
	 * 		Name   -> Function Water.WaterPlaneExclusionComponent.OnOverlapBegin
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FromSweep                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UWaterPlaneExclusionComponent::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterPlaneExclusionComponent.OnOverlapBegin");
		
		UWaterPlaneExclusionComponent_OnOverlapBegin_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.FromSweep = FromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterPlaneExclusionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterPlaneExclusionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterPlaneExclusionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterPlaneRetrievalProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterPlaneRetrievalProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterPlaneRetrievalProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterVolumeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterVolumeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterVolumeInterface");
		return ptr;
	}

}


