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
	 * 		Name   -> PredefinedFunction UStatusBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusResponse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivateableSurfaceMaterialStatusZoneInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateableSurfaceMaterialStatusZoneInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.ActivateableSurfaceMaterialStatusZoneInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAppliedStatusToSelfStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAppliedStatusToSelfStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.AppliedStatusToSelfStatCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuffReceiverInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuffReceiverInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.BuffReceiverInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuffReceiverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuffReceiverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.BuffReceiverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugMenuStatusDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugMenuStatusDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.DebugMenuStatusDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebugStatusTicketHolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugStatusTicketHolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.DebugStatusTicketHolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectCancellationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectCancellationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectCancellationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectRecipientInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectRecipientInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectRecipientInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectResponseConfigurationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectResponseConfigurationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectResponseConfigurationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectSuspensionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectSuspensionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectSuspensionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusResponseAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusRecipientResponseList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusRecipientResponseList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusRecipientResponseList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033E8D70
	 * 		Name   -> Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FActiveStatusEffect>                 OldEffects                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ULightWeightStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects");
		
		ULightWeightStatusEffectManagerComponent_OnRep_ActiveEffects_Params params {};
		params.OldEffects = OldEffects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033E88C0
	 * 		Name   -> Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		TArray<struct FActiveStatusEffect>                 AddedEffects                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FActiveStatusEffect>                 RemovedEffects                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 */
	void ULightWeightStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus");
		
		ULightWeightStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params params {};
		params.AddedEffects = AddedEffects;
		params.RemovedEffects = RemovedEffects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightWeightStatusEffectManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightWeightStatusEffectManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.LightWeightStatusEffectManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialStatusSusceptibilityInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialStatusSusceptibilityInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.MaterialStatusSusceptibilityInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurfaceMaterialStatusZoneInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurfaceMaterialStatusZoneInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.SurfaceMaterialStatusZoneInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialStatusSusceptibilityComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialStatusSusceptibilityComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.MaterialStatusSusceptibilityComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASphericalStatusEffectZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASphericalStatusEffectZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.SphericalStatusEffectZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusApplicationDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusApplicationDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusApplicationDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusApplicationMonitorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusApplicationMonitorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusApplicationMonitorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033E87F0
	 * 		Name   -> Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Recipient                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStatus                                     Status                                                     (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UStatusEffectHelperFunctionLibrary::STATIC_ApplyOneShotStatus(class AActor* Recipient, const struct FStatus& Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus");
		
		UStatusEffectHelperFunctionLibrary_ApplyOneShotStatus_Params params {};
		params.Recipient = Recipient;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectHelperFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectHelperFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectHelperFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectTicketDispenserInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectTicketDispenserInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectTicketDispenserInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033E8E20
	 * 		Name   -> Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FActiveStatusEffect>                 OldEffects                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects");
		
		UStatusEffectManagerComponent_OnRep_ActiveEffects_Params params {};
		params.OldEffects = OldEffects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033E89B0
	 * 		Name   -> Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		TArray<struct FActiveStatusEffect>                 AddedEffects                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FActiveStatusEffect>                 RemovedEffects                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 */
	void UStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus");
		
		UStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params params {};
		params.AddedEffects = AddedEffects;
		params.RemovedEffects = RemovedEffects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStatusEffectOverlapZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStatusEffectOverlapZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectOverlapZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectPersistenceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectPersistenceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectPersistenceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectPersistenceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectPersistenceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectPersistenceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectsSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033E8ED0
	 * 		Name   -> Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusEffectVolumeComponent::UnaffectActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor");
		
		UStatusEffectVolumeComponent_UnaffectActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033E8C70
	 * 		Name   -> Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusEffectVolumeComponent::OnParentComponentEndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap");
		
		UStatusEffectVolumeComponent_OnParentComponentEndOverlap_Params params {};
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
	 * 		RVA    -> 0x033E8AA0
	 * 		Name   -> Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UStatusEffectVolumeComponent::OnParentComponentBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap");
		
		UStatusEffectVolumeComponent_OnParentComponentBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033E8770
	 * 		Name   -> Function StatusEffects.StatusEffectVolumeComponent.AffectActor
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusEffectVolumeComponent::AffectActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusEffects.StatusEffectVolumeComponent.AffectActor");
		
		UStatusEffectVolumeComponent_AffectActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectVolumeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectVolumeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusEffectVolumeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetCanReceiveBuffStatusResponse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetCanReceiveBuffStatusResponse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.SetCanReceiveBuffStatusResponse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseNull.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseNull::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StatusEffects.StatusResponseNull");
		return ptr;
	}

}


