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
	 * 		Name   -> PredefinedFunction UAIPetsOnDemandSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPetsOnDemandSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.AIPetsOnDemandSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsForcingHangout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsForcingHangout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTDecorator_IsForcingHangout");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsOccupiedHangoutSpotStillAvailable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsOccupiedHangoutSpotStillAvailable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTDecorator_IsOccupiedHangoutSpotStillAvailable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsOccupyingHangoutSpotWithGivenId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsOccupyingHangoutSpotWithGivenId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTDecorator_IsOccupyingHangoutSpotWithGivenId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsPerchedInHangout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsPerchedInHangout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTDecorator_IsPerchedInHangout");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_PetFoodSourceAvailable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_PetFoodSourceAvailable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTDecorator_PetFoodSourceAvailable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_PetRoamingAnimationStateActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_PetRoamingAnimationStateActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTDecorator_PetRoamingAnimationStateActive");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AttachToHangout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AttachToHangout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_AttachToHangout");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ChangeHangoutAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ChangeHangoutAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_ChangeHangoutAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_DetachFromHangout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_DetachFromHangout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_DetachFromHangout");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_EatFood.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_EatFood::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_EatFood");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_GetTotalHangoutTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_GetTotalHangoutTime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_GetTotalHangoutTime");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_NotifyForcedHangoutComplete.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_NotifyForcedHangoutComplete::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_NotifyForcedHangoutComplete");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_PetWaitForAnimationRoamingState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PetWaitForAnimationRoamingState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_PetWaitForAnimationRoamingState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ReactToOwner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ReactToOwner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_ReactToOwner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ReactToThreat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ReactToThreat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_ReactToThreat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RotatePetToFaceBBEntryWithTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RotatePetToFaceBBEntryWithTime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_RotatePetToFaceBBEntryWithTime");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SelectFoodSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SelectFoodSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_SelectFoodSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SelectPetHangoutSpot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SelectPetHangoutSpot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_SelectPetHangoutSpot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SelectWanderFlyStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SelectWanderFlyStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_SelectWanderFlyStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetHangoutInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetHangoutInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetHangoutInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetMemoryInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetMemoryInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetMemoryInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetLifetimeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetLifetimeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetLifetimeInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerPetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerPetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PlayerPetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetReactInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetReactInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetReactInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetDebugPetStateDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetDebugPetStateDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_SetDebugPetStateDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_StopOccupyingHangoutSpot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_StopOccupyingHangoutSpot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.BTTask_StopOccupyingHangoutSpot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCannonSquashComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCannonSquashComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.CannonSquashComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetDangerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetDangerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetDangerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_AverageThreatPositionFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_AverageThreatPositionFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.EnvQueryContext_AverageThreatPositionFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_CurrentHangoutSpot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_CurrentHangoutSpot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.EnvQueryContext_CurrentHangoutSpot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_FirstThreatPositionFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_FirstThreatPositionFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.EnvQueryContext_FirstThreatPositionFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_PerceivedFoodSources.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_PerceivedFoodSources::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.EnvQueryContext_PerceivedFoodSources");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_SafePositionFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_SafePositionFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.EnvQueryContext_SafePositionFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetHangoutSpotsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetHangoutSpotsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetHangoutSpotsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetHangoutSpotSelectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetHangoutSpotSelectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetHangoutSpotSelectorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHangoutSpotSelectionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHangoutSpotSelectionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.HangoutSpotSelectionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetIdleMovementInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetIdleMovementInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetIdleMovementInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68630
	 * 		Name   -> Function Pets.PetAIController.OnPerceptionUpdated
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		TArray<class AActor*>                              ChangedPerceivedActors                                     (Parm, ZeroConstructor)
	 */
	void APetAIController::OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pets.PetAIController.OnPerceptionUpdated");
		
		APetAIController_OnPerceptionUpdated_Params params {};
		params.ChangedPerceivedActors = ChangedPerceivedActors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68520
	 * 		Name   -> Function Pets.PetAIController.GetAthenaAICharPathFollowingComp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAthenaAICharacterPathFollowingComponent* APetAIController::GetAthenaAICharPathFollowingComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pets.PetAIController.GetAthenaAICharPathFollowingComp");
		
		APetAIController_GetAthenaAICharPathFollowingComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APetAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APetAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetCustomisationOverrideDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetCustomisationOverrideDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetCustomisationOverrideDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetCustomisationOverrideMappingsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetCustomisationOverrideMappingsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetCustomisationOverrideMappingsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetDangerDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetDangerDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetDangerDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetFeedingDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetFeedingDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetFeedingDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D687F0
	 * 		Name   -> Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPetHangoutSpotComponent::OnRep_IsOwnerSinking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking");
		
		UPetHangoutSpotComponent_OnRep_IsOwnerSinking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetHangoutSpotComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetHangoutSpotComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetHangoutSpotComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APetItemInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APetItemInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetItemInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetListingDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetListingDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetListingDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetMovementModifierSettingsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetMovementModifierSettingsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetMovementModifierSettingsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetOwnerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetOwnerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetOwnerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68A00
	 * 		Name   -> Function Pets.PetOwnerComponent.Server_RequestDismissal
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void UPetOwnerComponent::Server_RequestDismissal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pets.PetOwnerComponent.Server_RequestDismissal");
		
		UPetOwnerComponent_Server_RequestDismissal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetOwnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetOwnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetOwnerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetPartCustomisationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetPartCustomisationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetPartCustomisationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetPerchComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetPerchComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetPerchComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetSpawnParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetSpawnParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetSpawnParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetsServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetsServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetsServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetsServiceParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetsServiceParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetsServiceParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68970
	 * 		Name   -> Function Pets.PetsService.RemovePetFromActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InOwner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPetsService::RemovePetFromActor(class AActor* InOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pets.PetsService.RemovePetFromActor");
		
		UPetsService_RemovePetFromActor_Params params {};
		params.InOwner = InOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68380
	 * 		Name   -> Function Pets.PetsService.AddPetForActorAndWield
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InPetType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FPetCustomisation                           InCustomisation                                            (ConstParm, Parm)
	 * 		class AActor*                                      InOwner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsWielded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPetsService::AddPetForActorAndWield(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner, bool IsWielded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pets.PetsService.AddPetForActorAndWield");
		
		UPetsService_AddPetForActorAndWield_Params params {};
		params.InPetType = InPetType;
		params.InCustomisation = InCustomisation;
		params.InOwner = InOwner;
		params.IsWielded = IsWielded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68210
	 * 		Name   -> Function Pets.PetsService.AddPetForActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InPetType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FPetCustomisation                           InCustomisation                                            (ConstParm, Parm)
	 * 		class AActor*                                      InOwner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPetsService::AddPetForActor(class UClass* InPetType, const struct FPetCustomisation& InCustomisation, class AActor* InOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pets.PetsService.AddPetForActor");
		
		UPetsService_AddPetForActor_Params params {};
		params.InPetType = InPetType;
		params.InCustomisation = InCustomisation;
		params.InOwner = InOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetsService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetsService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetsService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.PetsSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReactAIStrategyId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReactAIStrategyId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.ReactAIStrategyId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReactStateMappingsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReactStateMappingsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.ReactStateMappingsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D687B0
	 * 		Name   -> Function Pets.WieldablePet.OnRep_HungerReactAnimationState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AWieldablePet::OnRep_HungerReactAnimationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pets.WieldablePet.OnRep_HungerReactAnimationState");
		
		AWieldablePet_OnRep_HungerReactAnimationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68730
	 * 		Name   -> Function Pets.WieldablePet.OnRep_DropRequest
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EWieldablePetDropRequestReason                     PriorDropRequest                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWieldablePet::OnRep_DropRequest(EWieldablePetDropRequestReason PriorDropRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pets.WieldablePet.OnRep_DropRequest");
		
		AWieldablePet_OnRep_DropRequest_Params params {};
		params.PriorDropRequest = PriorDropRequest;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWieldablePet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWieldablePet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.WieldablePet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWieldablePetAnimNotifyWwiseEmitterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWieldablePetAnimNotifyWwiseEmitterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.WieldablePetAnimNotifyWwiseEmitterComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWieldablePetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWieldablePetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.WieldablePetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWieldablePetComponentDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWieldablePetComponentDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.WieldablePetComponentDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWieldablePetHungerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWieldablePetHungerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.WieldablePetHungerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWieldablePetHungerDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWieldablePetHungerDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pets.WieldablePetHungerDataAsset");
		return ptr;
	}

}


