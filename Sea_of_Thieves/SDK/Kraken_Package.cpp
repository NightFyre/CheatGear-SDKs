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
	 * 		RVA    -> 0x044518B0
	 * 		Name   -> Function Kraken.KrakenTentacle.OnDamageToTentacle
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FImpactDamageEvent                          ImpactDamageEvent                                          (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void AKrakenTentacle::OnDamageToTentacle(const struct FImpactDamageEvent& ImpactDamageEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.KrakenTentacle.OnDamageToTentacle");
		
		AKrakenTentacle_OnDamageToTentacle_Params params {};
		params.ImpactDamageEvent = ImpactDamageEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AKrakenTentacle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKrakenTentacle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenTentacle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04451750
	 * 		Name   -> Function Kraken.Murk.DeactivateMurkBP
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AMurk::DeactivateMurkBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.Murk.DeactivateMurkBP");
		
		AMurk_DeactivateMurkBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044516B0
	 * 		Name   -> Function Kraken.Murk.ActivateMurkBP
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AMurk::ActivateMurkBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.Murk.ActivateMurkBP");
		
		AMurk_ActivateMurkBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMurk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMurk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.Murk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoordinatedKrakenInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoordinatedKrakenInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.CoordinatedKrakenInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoordinatedKrakenPhaseActionsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoordinatedKrakenPhaseActionsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.CoordinatedKrakenPhaseActionsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_AllKrakenOccupiedLocations.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_AllKrakenOccupiedLocations::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_AllocatedShip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_AllocatedShip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllocatedShip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_AllShipsInWorld.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_AllShipsInWorld::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllShipsInWorld");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_AllWatercraftsInWorld.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_AllWatercraftsInWorld::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.EnvQueryContext_AllWatercraftsInWorld");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_PreviousLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_PreviousLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.EnvQueryContext_PreviousLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_KrakenSpawnLocations.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_KrakenSpawnLocations::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.EnvQueryGenerator_KrakenSpawnLocations");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_KrakenTentacleSpawnLocations.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_KrakenTentacleSpawnLocations::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044519B0
	 * 		Name   -> Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AKrakenShipWrappingTentacle::OnRep_CurrentServerAnimationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState");
		
		AKrakenShipWrappingTentacle_OnRep_CurrentServerAnimationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AKrakenShipWrappingTentacle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKrakenShipWrappingTentacle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingTentacle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenTelemetryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenTelemetryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenTelemetryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04451810
	 * 		Name   -> Function Kraken.Kraken.Multicast_OnTentacleTakenDamage
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
	 */
	void AKraken::Multicast_OnTentacleTakenDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.Kraken.Multicast_OnTentacleTakenDamage");
		
		AKraken_Multicast_OnTentacleTakenDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044516D0
	 * 		Name   -> Function Kraken.Kraken.AddActorToKnownTargets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AKraken::AddActorToKnownTargets(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.Kraken.AddActorToKnownTargets");
		
		AKraken_AddActorToKnownTargets_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AKraken.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKraken::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.Kraken");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenAnimatedTentacleAnimationDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenAnimatedTentacleAnimationDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenAnimatedTentacleAnimationMappingDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenAnimatedTentacleAnimationMappingDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenAnimatedTentacleAnimationSpecDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenAnimatedTentacleAnimationSpecDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenAnimatedTentacleStateAnimationsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenAnimatedTentacleStateAnimationsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenHeadStateAnimationsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenHeadStateAnimationsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenHeadStateAnimationsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04451B90
	 * 		Name   -> Function Kraken.KrakenHead.TestSetDamageEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InEnabled                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AKrakenHead::TestSetDamageEnabled(bool InEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.KrakenHead.TestSetDamageEnabled");
		
		AKrakenHead_TestSetDamageEnabled_Params params {};
		params.InEnabled = InEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04451AF0
	 * 		Name   -> Function Kraken.KrakenHead.RequestState
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      NewState                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AKrakenHead::RequestState(class UClass* NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.KrakenHead.RequestState");
		
		AKrakenHead_RequestState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044519F0
	 * 		Name   -> Function Kraken.KrakenHead.OnRep_IsDamageEnabled
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AKrakenHead::OnRep_IsDamageEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.KrakenHead.OnRep_IsDamageEnabled");
		
		AKrakenHead_OnRep_IsDamageEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044519D0
	 * 		Name   -> Function Kraken.KrakenHead.OnRep_HeadStateRequest
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AKrakenHead::OnRep_HeadStateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.KrakenHead.OnRep_HeadStateRequest");
		
		AKrakenHead_OnRep_HeadStateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04451830
	 * 		Name   -> Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECoordinatedKrakenSpecialEventTypes                InEventType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AKrakenHead::OnCoordinatedKrakenSpecialEvent(ECoordinatedKrakenSpecialEventTypes InEventType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent");
		
		AKrakenHead_OnCoordinatedKrakenSpecialEvent_Params params {};
		params.InEventType = InEventType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AKrakenHead.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKrakenHead::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenHead");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenHeadAnimationInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenHeadAnimationInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenHeadAnimationInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenHeadBreathingInStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenHeadBreathingInStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenHeadBreathingInStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenHeadHealthParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenHeadHealthParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenHeadHealthParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenHeadHitReactAnimationsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenHeadHitReactAnimationsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenHeadHitReactAnimationsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenHeadRoaringStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenHeadRoaringStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenHeadRoaringStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenIdleBehaviourParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenIdleBehaviourParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenIdleBehaviourParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenPlayerGrabbingBehaviourParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenPlayerGrabbingBehaviourParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04451A10
	 * 		Name   -> Function Kraken.KrakenService.RequestKrakenWithLocation
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     SpawnLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      SpawnedForActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AKrakenService::RequestKrakenWithLocation(const struct FVector& SpawnLocation, class AActor* SpawnedForActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.RequestKrakenWithLocation");
		
		AKrakenService_RequestKrakenWithLocation_Params params {};
		params.SpawnLocation = SpawnLocation;
		params.SpawnedForActor = SpawnedForActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044517E0
	 * 		Name   -> Function Kraken.KrakenService.IsServiceInitialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AKrakenService::IsServiceInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.IsServiceInitialized");
		
		AKrakenService_IsServiceInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044517A0
	 * 		Name   -> Function Kraken.KrakenService.IsKrakenActive
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AKrakenService::IsKrakenActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.IsKrakenActive");
		
		AKrakenService_IsKrakenActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04451770
	 * 		Name   -> Function Kraken.KrakenService.DismissKraken
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AKrakenService::DismissKraken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Kraken.KrakenService.DismissKraken");
		
		AKrakenService_DismissKraken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AKrakenService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AKrakenService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenServiceParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenServiceParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenServiceParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenShipHittingBehaviourParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenShipHittingBehaviourParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenShipHittingBehaviourParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenShipWrappingBehaviourParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenShipWrappingBehaviourParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKrakenShipWrappingKnockbackRegionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKrakenShipWrappingKnockbackRegionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Kraken.KrakenShipWrappingKnockbackRegionComponent");
		return ptr;
	}

}


