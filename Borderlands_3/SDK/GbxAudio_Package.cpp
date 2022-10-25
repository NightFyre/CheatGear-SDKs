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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationChooser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationChooser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.NominateSoundLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UActiveAmbientSoundComponent*                ActiveAmbientComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Out_Location                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Out_Radius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UActiveAmbientLocationChooser_Blueprint::NominateSoundLocation(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FVector* Out_Location, float Out_Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.NominateSoundLocation");
		
		UActiveAmbientLocationChooser_Blueprint_NominateSoundLocation_Params params {};
		params.ActiveAmbientComponent = ActiveAmbientComponent;
		params.Out_Radius = Out_Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_Location != nullptr)
			*Out_Location = params.Out_Location;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.InitLocationChooser
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UActiveAmbientSoundComponent*                ActiveAmbientComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActiveAmbientLocationChooser_Blueprint::InitLocationChooser(class UActiveAmbientSoundComponent* ActiveAmbientComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.InitLocationChooser");
		
		UActiveAmbientLocationChooser_Blueprint_InitLocationChooser_Params params {};
		params.ActiveAmbientComponent = ActiveAmbientComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationChooser_Blueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationChooser_Blueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_Blueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationChooser_RandomWithinActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationChooser_RandomWithinActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_RandomWithinActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationChooser_RandomWithTrace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationChooser_RandomWithTrace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_RandomWithTrace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationChooser_RandomOnCeiling.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationChooser_RandomOnCeiling::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_RandomOnCeiling");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationChooser_RandomOnFloor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationChooser_RandomOnFloor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_RandomOnFloor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.UpdateLocations
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UActiveAmbientLocationChooser_PreselectedLocation::UpdateLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.UpdateLocations");
		
		UActiveAmbientLocationChooser_PreselectedLocation_UpdateLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.DrawLocations
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UActiveAmbientLocationChooser_PreselectedLocation::DrawLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.DrawLocations");
		
		UActiveAmbientLocationChooser_PreselectedLocation_DrawLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D6E90
	 * 		Name   -> Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.AddLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UActiveAmbientLocationChooser_PreselectedLocation::AddLocation(const struct FVector& InLocation, float InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.AddLocation");
		
		UActiveAmbientLocationChooser_PreselectedLocation_AddLocation_Params params {};
		params.InLocation = InLocation;
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationChooser_PreselectedLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationChooser_PreselectedLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationChooser_Party.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationChooser_Party::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationChooser_Party");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationValidator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationValidator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationValidator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxAudio.ActiveAmbientLocationValidator_Blueprint.IsProposedLocationValid
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UActiveAmbientSoundComponent*                ActiveAmbientComponent                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UActiveAmbientLocationValidator_Blueprint::IsProposedLocationValid(class UActiveAmbientSoundComponent* ActiveAmbientComponent, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationValidator_Blueprint.IsProposedLocationValid");
		
		UActiveAmbientLocationValidator_Blueprint_IsProposedLocationValid_Params params {};
		params.ActiveAmbientComponent = ActiveAmbientComponent;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationValidator_Blueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationValidator_Blueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationValidator_Blueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationValidator_DistanceFromListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationValidator_DistanceFromListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationValidator_DistanceFromListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70D0
	 * 		Name   -> Function GbxAudio.ActiveAmbientSound.EnableSounds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AActiveAmbientSound::EnableSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientSound.EnableSounds");
		
		AActiveAmbientSound_EnableSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D7090
	 * 		Name   -> Function GbxAudio.ActiveAmbientSound.DisableSounds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AActiveAmbientSound::DisableSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientSound.DisableSounds");
		
		AActiveAmbientSound_DisableSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AActiveAmbientSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActiveAmbientSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70F0
	 * 		Name   -> Function GbxAudio.ActiveAmbientSoundComponent.Startle
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActiveAmbientSoundComponent::Startle(const struct FVector& Location, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientSoundComponent.Startle");
		
		UActiveAmbientSoundComponent_Startle_Params params {};
		params.Location = Location;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientSoundComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientSoundComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientSoundComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientUpdater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientUpdater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientUpdater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxAudio.ActiveAmbientUpdater_Blueprint.UpdateActiveAmbientInstance
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UActiveAmbientSoundComponent*                ActiveAmbientComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActiveAmbientInstance                      ActiveAmbientInstance                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActiveAmbientUpdater_Blueprint::UpdateActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FActiveAmbientInstance* ActiveAmbientInstance, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientUpdater_Blueprint.UpdateActiveAmbientInstance");
		
		UActiveAmbientUpdater_Blueprint_UpdateActiveAmbientInstance_Params params {};
		params.ActiveAmbientComponent = ActiveAmbientComponent;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveAmbientInstance != nullptr)
			*ActiveAmbientInstance = params.ActiveAmbientInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxAudio.ActiveAmbientUpdater_Blueprint.InitializeActiveAmbientInstance
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UActiveAmbientSoundComponent*                ActiveAmbientComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActiveAmbientInstance                      ActiveAmbientInstance                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UActiveAmbientUpdater_Blueprint::InitializeActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FActiveAmbientInstance* ActiveAmbientInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientUpdater_Blueprint.InitializeActiveAmbientInstance");
		
		UActiveAmbientUpdater_Blueprint_InitializeActiveAmbientInstance_Params params {};
		params.ActiveAmbientComponent = ActiveAmbientComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveAmbientInstance != nullptr)
			*ActiveAmbientInstance = params.ActiveAmbientInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientUpdater_Blueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientUpdater_Blueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientUpdater_Blueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientUpdater_MoveInRandomDirection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientUpdater_MoveInRandomDirection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientUpdater_MoveInRandomDirection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientUpdater_MoveWithWobble.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientUpdater_MoveWithWobble::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientUpdater_MoveWithWobble");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmbientSoundBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmbientSoundBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AmbientSoundBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmbientSoundSphere.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmbientSoundSphere::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AmbientSoundSphere");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmbientSoundSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmbientSoundSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AmbientSoundSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_CharacterSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_CharacterSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AnimNotify_CharacterSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_Foley.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_Foley::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AnimNotify_Foley");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_FootFoley.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_FootFoley::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AnimNotify_FootFoley");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_WwiseEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_WwiseEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AnimNotify_WwiseEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_LoopingSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_LoopingSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AnimNotifyState_LoopingSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioDistanceThresholdSubscriberInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioDistanceThresholdSubscriberInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioDistanceThresholdSubscriberInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioDistanceThresholdManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioDistanceThresholdManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioDistanceThresholdManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioOcclusionVoxelDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioOcclusionVoxelDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioOcclusionVoxelDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxAudio.AudioOcclusionVoxelizerZone.Voxelize
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AAudioOcclusionVoxelizerZone::Voxelize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.AudioOcclusionVoxelizerZone.Voxelize");
		
		AAudioOcclusionVoxelizerZone_Voxelize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRLE
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AAudioOcclusionVoxelizerZone::ExportAsRLE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRLE");
		
		AAudioOcclusionVoxelizerZone_ExportAsRLE_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRaw
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AAudioOcclusionVoxelizerZone::ExportAsRaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRaw");
		
		AAudioOcclusionVoxelizerZone_ExportAsRaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAudioOcclusionVoxelizerZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAudioOcclusionVoxelizerZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioOcclusionVoxelizerZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationConsumer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationConsumer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationConsumer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D6F70
	 * 		Name   -> Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioPrepLocationFinder_Blueprint::AddLocation(const struct FVector& Location, const struct FRotator& Rotation, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddLocation");
		
		UAudioPrepLocationFinder_Blueprint_AddLocation_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddFoundLocations
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAudioPrepLocationFinder_Blueprint::AddFoundLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddFoundLocations");
		
		UAudioPrepLocationFinder_Blueprint_AddFoundLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_Blueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_Blueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_Blueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function GbxAudio.ActiveAmbientLocationFinder_Blueprint.AddFoundLocations
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UActiveAmbientSoundComponent*                ActiveAmbientComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActiveAmbientLocationChooser_PreselectedLocation* PreselectedLocationChooser                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActiveAmbientLocationFinder_Blueprint::AddFoundLocations(class UActiveAmbientSoundComponent* ActiveAmbientComponent, class UActiveAmbientLocationChooser_PreselectedLocation* PreselectedLocationChooser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.ActiveAmbientLocationFinder_Blueprint.AddFoundLocations");
		
		UActiveAmbientLocationFinder_Blueprint_AddFoundLocations_Params params {};
		params.ActiveAmbientComponent = ActiveAmbientComponent;
		params.PreselectedLocationChooser = PreselectedLocationChooser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveAmbientLocationFinder_Blueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveAmbientLocationFinder_Blueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ActiveAmbientLocationFinder_Blueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_ActorList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_ActorList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_ActorList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_FilteredComponents.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_FilteredComponents::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_FilteredComponents");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_SplineTracer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_SplineTracer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_SplineTracer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_PincushionTracer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_PincushionTracer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_PincushionTracer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_TraceDownToActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_TraceDownToActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_TraceDownToActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_FoliageLocations.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_FoliageLocations::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_FoliageLocations");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_LandscapeGrassLocations.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_LandscapeGrassLocations::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_LandscapeGrassLocations");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_InstanceLocations.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_InstanceLocations::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_InstanceLocations");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_Grid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_Grid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_Grid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_TraceGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_TraceGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_TraceGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPrepLocationFinder_VoxelMaterialBoundary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPrepLocationFinder_VoxelMaterialBoundary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.AudioPrepLocationFinder_VoxelMaterialBoundary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxAudio.CharacterSoundData.RefreshAll
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCharacterSoundData::RefreshAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.CharacterSoundData.RefreshAll");
		
		UCharacterSoundData_RefreshAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterSoundData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterSoundData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.CharacterSoundData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterSoundInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterSoundInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.CharacterSoundInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterSoundLogicComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterSoundLogicComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.CharacterSoundLogicComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterSoundTag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterSoundTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.CharacterSoundTag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxAudio.DistributedAmbientSound.DoUpdateTree
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ADistributedAmbientSound::DoUpdateTree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.DistributedAmbientSound.DoUpdateTree");
		
		ADistributedAmbientSound_DoUpdateTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxAudio.DistributedAmbientSound.DoFindNewLocationsAndRebuild
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ADistributedAmbientSound::DoFindNewLocationsAndRebuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.DistributedAmbientSound.DoFindNewLocationsAndRebuild");
		
		ADistributedAmbientSound_DoFindNewLocationsAndRebuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADistributedAmbientSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADistributedAmbientSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.DistributedAmbientSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxAudio.FluidSimExampleZone.UpdateVisualization
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AFluidSimExampleZone::UpdateVisualization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.FluidSimExampleZone.UpdateVisualization");
		
		AFluidSimExampleZone_UpdateVisualization_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxAudio.FluidSimExampleZone.ExportVectorField
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AFluidSimExampleZone::ExportVectorField()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.FluidSimExampleZone.ExportVectorField");
		
		AFluidSimExampleZone_ExportVectorField_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D70B0
	 * 		Name   -> Function GbxAudio.FluidSimExampleZone.ApplyToOtherSim
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AFluidSimExampleZone::ApplyToOtherSim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.FluidSimExampleZone.ApplyToOtherSim");
		
		AFluidSimExampleZone_ApplyToOtherSim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFluidSimExampleZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFluidSimExampleZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.FluidSimExampleZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFoleyAccessoryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoleyAccessoryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.FoleyAccessoryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFoleyImplementerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoleyImplementerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.FoleyImplementerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DAAD0
	 * 		Name   -> Function GbxAudio.FoleyMainComponent.SetSurfaceModifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 PlayEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FootstepVolumeMultiplier                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFoleyMainComponent::SetSurfaceModifier(class UWwiseEvent* PlayEvent, float Volume, float FootstepVolumeMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.FoleyMainComponent.SetSurfaceModifier");
		
		UFoleyMainComponent_SetSurfaceModifier_Params params {};
		params.PlayEvent = PlayEvent;
		params.Volume = Volume;
		params.FootstepVolumeMultiplier = FootstepVolumeMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DA670
	 * 		Name   -> Function GbxAudio.FoleyMainComponent.PlayFootstepEvent
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		struct FFoleyEventParams                           EventParams                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void UFoleyMainComponent::PlayFootstepEvent(const struct FFoleyEventParams& EventParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.FoleyMainComponent.PlayFootstepEvent");
		
		UFoleyMainComponent_PlayFootstepEvent_Params params {};
		params.EventParams = EventParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DA450
	 * 		Name   -> Function GbxAudio.FoleyMainComponent.PlayFootstep
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     FootstepLocation                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    FootstepRotation                                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UWwiseSwitch*                                MaterialSwitch                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VolumeAdjustment                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchAdjustment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWwiseEvent*                                 ConfigureEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPreview                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFoleyMainComponent::PlayFootstep(const struct FVector& FootstepLocation, const struct FRotator& FootstepRotation, class UWwiseSwitch* MaterialSwitch, float VolumeAdjustment, float PitchAdjustment, class UWwiseEvent* ConfigureEvent, bool bPreview)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.FoleyMainComponent.PlayFootstep");
		
		UFoleyMainComponent_PlayFootstep_Params params {};
		params.FootstepLocation = FootstepLocation;
		params.FootstepRotation = FootstepRotation;
		params.MaterialSwitch = MaterialSwitch;
		params.VolumeAdjustment = VolumeAdjustment;
		params.PitchAdjustment = PitchAdjustment;
		params.ConfigureEvent = ConfigureEvent;
		params.bPreview = bPreview;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFoleyMainComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoleyMainComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.FoleyMainComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DABD0
	 * 		Name   -> Function GbxAudio.GbxAudioBlueprintLibrary.TriggerCharacterSound
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCharacterSoundTag*                          SoundTag                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAudioBlueprintLibrary::STATIC_TriggerCharacterSound(class AActor* Character, class UCharacterSoundTag* SoundTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.GbxAudioBlueprintLibrary.TriggerCharacterSound");
		
		UGbxAudioBlueprintLibrary_TriggerCharacterSound_Params params {};
		params.Character = Character;
		params.SoundTag = SoundTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DA890
	 * 		Name   -> Function GbxAudio.GbxAudioBlueprintLibrary.RemoveListenerAudioEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWwiseAuxBus*                                Efx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAudioBlueprintLibrary::STATIC_RemoveListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.GbxAudioBlueprintLibrary.RemoveListenerAudioEffect");
		
		UGbxAudioBlueprintLibrary_RemoveListenerAudioEffect_Params params {};
		params.Character = Character;
		params.Efx = Efx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DA180
	 * 		Name   -> Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationHitFilter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FAudioPrepHitResultFilter                   Filter                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UGbxAudioBlueprintLibrary::STATIC_PassesAudioPreparationHitFilter(const struct FHitResult& Hit, const struct FAudioPrepHitResultFilter& Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationHitFilter");
		
		UGbxAudioBlueprintLibrary_PassesAudioPreparationHitFilter_Params params {};
		params.Hit = Hit;
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DA050
	 * 		Name   -> Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationComponentFilter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAudioPrepComponentFilter                   Filter                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UGbxAudioBlueprintLibrary::STATIC_PassesAudioPreparationComponentFilter(class UPrimitiveComponent* Component, const struct FAudioPrepComponentFilter& Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationComponentFilter");
		
		UGbxAudioBlueprintLibrary_PassesAudioPreparationComponentFilter_Params params {};
		params.Component = Component;
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005D9F20
	 * 		Name   -> Function GbxAudio.GbxAudioBlueprintLibrary.ApplyListenerAudioEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWwiseAuxBus*                                Efx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WetVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DryVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxAudioBlueprintLibrary::STATIC_ApplyListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx, float WetVolume, float DryVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.GbxAudioBlueprintLibrary.ApplyListenerAudioEffect");
		
		UGbxAudioBlueprintLibrary_ApplyListenerAudioEffect_Params params {};
		params.Character = Character;
		params.Efx = Efx;
		params.WetVolume = WetVolume;
		params.DryVolume = DryVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAudioBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAudioBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.GbxAudioBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAudioGlobalsData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAudioGlobalsData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.GbxAudioGlobalsData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAudioSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAudioSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.GbxAudioSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DA940
	 * 		Name   -> Function GbxAudio.LightAudioComponent.SetRTPCValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseRtpc*                                  GameParameter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ValueChangeDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseCurveInterpolation                           FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightAudioComponent::SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, bool bPersistent, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.LightAudioComponent.SetRTPCValue");
		
		ULightAudioComponent_SetRTPCValue_Params params {};
		params.GameParameter = GameParameter;
		params.Value = Value;
		params.bPersistent = bPersistent;
		params.ValueChangeDuration = ValueChangeDuration;
		params.FadeCurve = FadeCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DA7E0
	 * 		Name   -> Function GbxAudio.LightAudioComponent.PostWwiseEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwisePlaybackInstance ULightAudioComponent::PostWwiseEvent(class UWwiseEvent* WwiseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.LightAudioComponent.PostWwiseEvent");
		
		ULightAudioComponent_PostWwiseEvent_Params params {};
		params.WwiseEvent = WwiseEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightAudioComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightAudioComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.LightAudioComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DBE00
	 * 		Name   -> Function GbxAudio.MusicSequencerComponent.StopSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMusicSequencerComponent::StopSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.StopSequence");
		
		UMusicSequencerComponent_StopSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DBB70
	 * 		Name   -> Function GbxAudio.MusicSequencerComponent.PostSequenceEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseAudioComponent*                        WwiseComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Note                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartBeat                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMusicSequencerComponent::PostSequenceEvent(class UWwiseAudioComponent* WwiseComponent, class UWwiseEvent* WwiseEvent, int32_t Note, int32_t Velocity, int32_t Channel, float StartBeat, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.PostSequenceEvent");
		
		UMusicSequencerComponent_PostSequenceEvent_Params params {};
		params.WwiseComponent = WwiseComponent;
		params.WwiseEvent = WwiseEvent;
		params.Note = Note;
		params.Velocity = Velocity;
		params.Channel = Channel;
		params.StartBeat = StartBeat;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DBB50
	 * 		Name   -> Function GbxAudio.MusicSequencerComponent.PlaySequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMusicSequencerComponent::PlaySequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.PlaySequence");
		
		UMusicSequencerComponent_PlaySequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DBB30
	 * 		Name   -> Function GbxAudio.MusicSequencerComponent.PauseSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMusicSequencerComponent::PauseSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.PauseSequence");
		
		UMusicSequencerComponent_PauseSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DBB00
	 * 		Name   -> Function GbxAudio.MusicSequencerComponent.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UMusicSequencerComponent::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.IsPlaying");
		
		UMusicSequencerComponent_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DBA70
	 * 		Name   -> Function GbxAudio.MusicSequencerComponent.GetRealTimeUntilBeat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Beat                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMusicSequencerComponent::GetRealTimeUntilBeat(float Beat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.GetRealTimeUntilBeat");
		
		UMusicSequencerComponent_GetRealTimeUntilBeat_Params params {};
		params.Beat = Beat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DBA40
	 * 		Name   -> Function GbxAudio.MusicSequencerComponent.GetCurrentBeat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	float UMusicSequencerComponent::GetCurrentBeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.MusicSequencerComponent.GetCurrentBeat");
		
		UMusicSequencerComponent_GetCurrentBeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMusicSequencerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMusicSequencerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.MusicSequencerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleGbxAudioBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleGbxAudioBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ParticleModuleGbxAudioBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleGbxAudioLoop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleGbxAudioLoop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ParticleModuleGbxAudioLoop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleGbxAudioPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleGbxAudioPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.ParticleModuleGbxAudioPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWindAudioLoopComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindAudioLoopComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.WindAudioLoopComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DBD80
	 * 		Name   -> Function GbxAudio.WwiseListenerEffectComponent.RemoveAudioEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseAuxBus*                                Efx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseListenerEffectComponent::RemoveAudioEffect(class UWwiseAuxBus* Efx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.WwiseListenerEffectComponent.RemoveAudioEffect");
		
		UWwiseListenerEffectComponent_RemoveAudioEffect_Params params {};
		params.Efx = Efx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DBD60
	 * 		Name   -> Function GbxAudio.WwiseListenerEffectComponent.RemoveAllAudioEffects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWwiseListenerEffectComponent::RemoveAllAudioEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.WwiseListenerEffectComponent.RemoveAllAudioEffects");
		
		UWwiseListenerEffectComponent_RemoveAllAudioEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005DB940
	 * 		Name   -> Function GbxAudio.WwiseListenerEffectComponent.ApplyAudioEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseAuxBus*                                Efx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WetPercent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DryPercent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseListenerEffectComponent::ApplyAudioEffect(class UWwiseAuxBus* Efx, float WetPercent, float DryPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAudio.WwiseListenerEffectComponent.ApplyAudioEffect");
		
		UWwiseListenerEffectComponent_ApplyAudioEffect_Params params {};
		params.Efx = Efx;
		params.WetPercent = WetPercent;
		params.DryPercent = DryPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseListenerEffectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseListenerEffectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAudio.WwiseListenerEffectComponent");
		return ptr;
	}

}


