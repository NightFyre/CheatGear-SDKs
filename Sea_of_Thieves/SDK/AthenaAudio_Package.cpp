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
	 * 		Name   -> PredefinedFunction UAthenaAudioConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAudioConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAudio.AthenaAudioConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAudioModuleSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAudioModuleSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAudio.AthenaAudioModuleSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03565780
	 * 		Name   -> Function AthenaAudio.AudioPortalComponent.SetParentShip
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ParentShip                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAudioPortalComponent::SetParentShip(class AActor* ParentShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAudio.AudioPortalComponent.SetParentShip");
		
		UAudioPortalComponent_SetParentShip_Params params {};
		params.ParentShip = ParentShip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPortalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPortalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAudio.AudioPortalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03565810
	 * 		Name   -> Function AthenaAudio.AudioPortalInterface.UnregisterPortal
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAudioPortalComponent*                       AudioPortal                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAudioPortalInterface::UnregisterPortal(class UAudioPortalComponent* AudioPortal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAudio.AudioPortalInterface.UnregisterPortal");
		
		UAudioPortalInterface_UnregisterPortal_Params params {};
		params.AudioPortal = AudioPortal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035656A0
	 * 		Name   -> Function AthenaAudio.AudioPortalInterface.RegisterPortal
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAudioPortalComponent*                       AudioPortal                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OwningActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAudioPortalInterface::RegisterPortal(class UAudioPortalComponent* AudioPortal, class AActor* OwningActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAudio.AudioPortalInterface.RegisterPortal");
		
		UAudioPortalInterface_RegisterPortal_Params params {};
		params.AudioPortal = AudioPortal;
		params.OwningActor = OwningActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035655B0
	 * 		Name   -> Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class UAudioSpaceDataAsset*                        AudioSpace                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OwningActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortalsInSpecificSpace(class UAudioSpaceDataAsset* AudioSpace, class AActor* OwningActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace");
		
		UAudioPortalInterface_GetAllRegisteredPortalsInSpecificSpace_Params params {};
		params.AudioSpace = AudioSpace;
		params.OwningActor = OwningActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03565550
	 * 		Name   -> Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortals
	 * 		Flags  -> (Native, Public, Const)
	 */
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortals");
		
		UAudioPortalInterface_GetAllRegisteredPortals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPortalInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPortalInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAudio.AudioPortalInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPortalService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPortalService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAudio.AudioPortalService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03565760
	 * 		Name   -> Function AthenaAudio.MultiEmitter.ResetNamingCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AMultiEmitter::ResetNamingCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAudio.MultiEmitter.ResetNamingCount");
		
		AMultiEmitter_ResetNamingCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035653F0
	 * 		Name   -> Function AthenaAudio.MultiEmitter.CreateAndAddMergedEmitterComponentToRoot
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InOffset                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class UWwiseEvent*                                 InWwiseEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWwiseObjectPoolWrapper*                     InPool                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiEmitter::CreateAndAddMergedEmitterComponentToRoot(const class FName& InName, const struct FVector& InOffset, class UWwiseEvent* InWwiseEvent, class UWwiseObjectPoolWrapper* InPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAudio.MultiEmitter.CreateAndAddMergedEmitterComponentToRoot");
		
		AMultiEmitter_CreateAndAddMergedEmitterComponentToRoot_Params params {};
		params.InName = InName;
		params.InOffset = InOffset;
		params.InWwiseEvent = InWwiseEvent;
		params.InPool = InPool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMultiEmitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMultiEmitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAudio.MultiEmitter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryDrivenAudioPortalDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryDrivenAudioPortalDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAudio.StoryDrivenAudioPortalDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoryDrivenAudioPortalCollectionDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoryDrivenAudioPortalCollectionDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAudio.StoryDrivenAudioPortalCollectionDataAsset");
		return ptr;
	}

}


