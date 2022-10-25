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
	 * 		RVA    -> 0x04638020
	 * 		Name   -> Function AthenaAI.AthenaAIFormComponent.OnRep_FormData
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAthenaAIFormComponent::OnRep_FormData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIFormComponent.OnRep_FormData");
		
		UAthenaAIFormComponent_OnRep_FormData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIFormComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIFormComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIStrategyId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIStrategyId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIStrategyId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637C30
	 * 		Name   -> Function AthenaAI.AISpawner.GetNumOfSpawnRequests
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UAISpawner::GetNumOfSpawnRequests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AISpawner.GetNumOfSpawnRequests");
		
		UAISpawner_GetNumOfSpawnRequests_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPerCrewSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerCrewSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPerCrewSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIFormDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIFormDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPlayerTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPlayerTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPlayerTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnerPlayerTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnerPlayerTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnerPlayerTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIInteractableType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIInteractableType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIInteractableType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIWaveSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIWaveSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIWaveSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIAbilityStageParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIAbilityStageParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityStageParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIInteractableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIInteractableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIInteractableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_BaseConditional.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_BaseConditional::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_BaseConditional");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_TargetOnShip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TargetOnShip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetOnShip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_QueryShipsForTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_QueryShipsForTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_QueryShipsForTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SwimAttackTargetActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SwimAttackTargetActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimAttackTargetActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SwimAttackTargetShip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SwimAttackTargetShip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimAttackTargetShip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABurrowEruptBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABurrowEruptBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BurrowEruptBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAnimationStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAnimationStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIAnimationStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnerBehaviourStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnerBehaviourStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.SpawnerBehaviourStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAICreatureCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAICreatureCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03776110
	 * 		Name   -> Function AthenaAI.AICreatureCharacter.SetAIStrategy
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InStrategy                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AAICreatureCharacter::SetAIStrategy(class UClass* InStrategy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.SetAIStrategy");
		
		AAICreatureCharacter_SetAIStrategy_Params params {};
		params.InStrategy = InStrategy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03776090
	 * 		Name   -> Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UClass*                                      OldAIStrategy                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AAICreatureCharacter::OnRep_CurrentAIStrategy(class UClass* OldAIStrategy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy");
		
		AAICreatureCharacter_OnRep_CurrentAIStrategy_Params params {};
		params.OldAIStrategy = OldAIStrategy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03776070
	 * 		Name   -> Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void AAICreatureCharacter::Multicast_DespawnRPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC");
		
		AAICreatureCharacter_Multicast_DespawnRPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03776030
	 * 		Name   -> Function AthenaAI.AICreatureCharacter.GetAIStrategy
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* AAICreatureCharacter::GetAIStrategy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.GetAIStrategy");
		
		AAICreatureCharacter_GetAIStrategy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAICreatureCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAICreatureCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAICharacterPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAICharacterPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterPathFollowingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAICreatureCharacterPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAICreatureCharacterPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AICreatureCharacterPathFollowingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAICreatureMovementModifierInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAICreatureMovementModifierInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AICreatureMovementModifierInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAICreatureMovementModifierParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAICreatureMovementModifierParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AICreatureMovementModifierParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBehaviourTreeInterruptionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviourTreeInterruptionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BehaviourTreeInterruptionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForcedIdleBehaviourInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForcedIdleBehaviourInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.ForcedIdleBehaviourInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDialogueStateProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDialogueStateProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDialogueStateProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleDialogueStateProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleDialogueStateProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.SimpleDialogueStateProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBountySpawnerAudioZonesInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBountySpawnerAudioZonesInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BountySpawnerAudioZonesInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIBountySpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIBountySpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIBountySpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPostBountyAIPawnSpawnedAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostBountyAIPawnSpawnedAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PostBountyAIPawnSpawnedAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UApplyNameplateToBountyWaveSpawnedAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UApplyNameplateToBountyWaveSpawnedAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.ApplyNameplateToBountyWaveSpawnedAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AD250
	 * 		Name   -> Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIFaunaSpawner::SpawnFaunaGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup");
		
		UAIFaunaSpawner_SpawnFaunaGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFaunaSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFaunaSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIFaunaSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046398E0
	 * 		Name   -> Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAthenaAIControllerBase::SetNamedControllerParam(const class FName& ParamName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam");
		
		AAthenaAIControllerBase_SetNamedControllerParam_Params params {};
		params.ParamName = ParamName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046379B0
	 * 		Name   -> Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FWeightedProbabilityRangeOfRanges AAthenaAIControllerBase::FindNamedWeightedRangesControllerParam(const class FName& ParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam");
		
		AAthenaAIControllerBase_FindNamedWeightedRangesControllerParam_Params params {};
		params.ParamName = ParamName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637900
	 * 		Name   -> Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float AAthenaAIControllerBase::FindNamedControllerParam(const class FName& ParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam");
		
		AAthenaAIControllerBase_FindNamedControllerParam_Params params {};
		params.ParamName = ParamName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046373D0
	 * 		Name   -> Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAthenaAIControllerParamsDataAsset*          ParamsAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       InPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAthenaAIControllerBase::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams");
		
		AAthenaAIControllerBase_ApplyControllerParams_Params params {};
		params.ParamsAsset = ParamsAsset;
		params.InPawn = InPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAthenaAIControllerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAthenaAIControllerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639DB0
	 * 		Name   -> Function AthenaAI.AthenaAIController.StopBehaviourLogic
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AAthenaAIController::StopBehaviourLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.StopBehaviourLogic");
		
		AAthenaAIController_StopBehaviourLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639A40
	 * 		Name   -> Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ExpirationAge                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Sense                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AAthenaAIController::SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor");
		
		AAthenaAIController_SetPerceptionExpirationAgeForActor_Params params {};
		params.Actor = Actor;
		params.ExpirationAge = ExpirationAge;
		params.Sense = Sense;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638C60
	 * 		Name   -> Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TriggerActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAthenaAIController::RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus");
		
		AAthenaAIController_RegisterSpawnTriggerActorAsStimulus_Params params {};
		params.TriggerActor = TriggerActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637E20
	 * 		Name   -> Function AthenaAI.AthenaAIController.OnPerceptionUpdated
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		TArray<class AActor*>                              ChangedPerceivedActors                                     (Parm, ZeroConstructor)
	 */
	void AAthenaAIController::OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnPerceptionUpdated");
		
		AAthenaAIController_OnPerceptionUpdated_Params params {};
		params.ChangedPerceivedActors = ChangedPerceivedActors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AthenaAI.AthenaAIController.OnNewlySpawned
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAthenaAIController::OnNewlySpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnNewlySpawned");
		
		AAthenaAIController_OnNewlySpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AthenaAI.AthenaAIController.OnFinishDespawn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAthenaAIController::OnFinishDespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnFinishDespawn");
		
		AAthenaAIController_OnFinishDespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637CC0
	 * 		Name   -> Function AthenaAI.AthenaAIController.IsActorPerceived
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AAthenaAIController::IsActorPerceived(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.IsActorPerceived");
		
		AAthenaAIController_IsActorPerceived_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637C90
	 * 		Name   -> Function AthenaAI.AthenaAIController.GetTargetActor
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* AAthenaAIController::GetTargetActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetTargetActor");
		
		AAthenaAIController_GetTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637BD0
	 * 		Name   -> Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UAthenaAIPerceptionComponent* AAthenaAIController::GetAthenaAIPerceptionComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent");
		
		AAthenaAIController_GetAthenaAIPerceptionComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637B10
	 * 		Name   -> Function AthenaAI.AthenaAIController.GetAllSeenActors
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AActor*>                              SeenActors                                                 (Parm, OutParm, ZeroConstructor)
	 */
	void AAthenaAIController::GetAllSeenActors(TArray<class AActor*>* SeenActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetAllSeenActors");
		
		AAthenaAIController_GetAllSeenActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SeenActors != nullptr)
			*SeenActors = params.SeenActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637300
	 * 		Name   -> Function AthenaAI.AthenaAIController.ApplyControllerParams
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAthenaAIControllerParamsDataAsset*          ParamsAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       InPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAthenaAIController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.ApplyControllerParams");
		
		AAthenaAIController_ApplyControllerParams_Params params {};
		params.ParamsAsset = ParamsAsset;
		params.InPawn = InPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAthenaAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAthenaAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AD1C0
	 * 		Name   -> Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InDormancyCheckingEnabledInAutomation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAthenaFaunaAIController::SetDormancyCheckingEnabled(bool InDormancyCheckingEnabledInAutomation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled");
		
		AAthenaFaunaAIController_SetDormancyCheckingEnabled_Params params {};
		params.InDormancyCheckingEnabledInAutomation = InDormancyCheckingEnabledInAutomation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038ACE60
	 * 		Name   -> Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAthenaFaunaAIController::LeaderDestroyed(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed");
		
		AAthenaFaunaAIController_LeaderDestroyed_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AC680
	 * 		Name   -> Function AthenaAI.AthenaFaunaAIController.GetLeader
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* AAthenaFaunaAIController::GetLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetLeader");
		
		AAthenaFaunaAIController_GetLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AC380
	 * 		Name   -> Function AthenaAI.AthenaFaunaAIController.GetCourage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AAthenaFaunaAIController::GetCourage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetCourage");
		
		AAthenaFaunaAIController_GetCourage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AC350
	 * 		Name   -> Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAthenaAICharacterPathFollowingComponent* AAthenaFaunaAIController::GetAthenaAICharPathFollowingComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp");
		
		AAthenaFaunaAIController_GetAthenaAICharPathFollowingComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAthenaFaunaAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAthenaFaunaAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaFaunaAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCatchFaunaConditionalStatTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCatchFaunaConditionalStatTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.CatchFaunaConditionalStatTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_LeaderFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_LeaderFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_LeaderFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_Threat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Threat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_Threat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AD270
	 * 		Name   -> Function AthenaAI.Fauna.TestingSetWaterState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EFaunaInWaterState                                 NewInState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFauna::TestingSetWaterState(EFaunaInWaterState NewInState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.TestingSetWaterState");
		
		AFauna_TestingSetWaterState_Params params {};
		params.NewInState = NewInState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AD1A0
	 * 		Name   -> Function AthenaAI.Fauna.OnRep_TargetTurnAngle
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AFauna::OnRep_TargetTurnAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_TargetTurnAngle");
		
		AFauna_OnRep_TargetTurnAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AD180
	 * 		Name   -> Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AFauna::OnRep_IsPlayingStarvingAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim");
		
		AFauna_OnRep_IsPlayingStarvingAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AD160
	 * 		Name   -> Function AthenaAI.Fauna.OnRep_IsCalm
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AFauna::OnRep_IsCalm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_IsCalm");
		
		AFauna_OnRep_IsCalm_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AD140
	 * 		Name   -> Function AthenaAI.Fauna.OnRep_IsAgitated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AFauna::OnRep_IsAgitated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_IsAgitated");
		
		AFauna_OnRep_IsAgitated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AD120
	 * 		Name   -> Function AthenaAI.Fauna.OnRep_InWaterState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AFauna::OnRep_InWaterState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_InWaterState");
		
		AFauna_OnRep_InWaterState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AD090
	 * 		Name   -> Function AthenaAI.Fauna.OnRep_CratedState
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		EFaunaCratedState                                  PreviousCratedState                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFauna::OnRep_CratedState(EFaunaCratedState PreviousCratedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_CratedState");
		
		AFauna_OnRep_CratedState_Params params {};
		params.PreviousCratedState = PreviousCratedState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AD000
	 * 		Name   -> Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		class AActor*                                      Crate                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFauna::Multicast_PlayPutInCrateEffectsRPC(class AActor* Crate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC");
		
		AFauna_Multicast_PlayPutInCrateEffectsRPC_Params params {};
		params.Crate = Crate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038ACF70
	 * 		Name   -> Function AthenaAI.Fauna.Multicast_JustBeenFedRPC
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		class AActor*                                      FedBy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFauna::Multicast_JustBeenFedRPC(class AActor* FedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.Multicast_JustBeenFedRPC");
		
		AFauna_Multicast_JustBeenFedRPC_Params params {};
		params.FedBy = FedBy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038ACEE0
	 * 		Name   -> Function AthenaAI.Fauna.Multicast_HightlightLeader
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		bool                                               bIsLeader                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFauna::Multicast_HightlightLeader(bool bIsLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.Multicast_HightlightLeader");
		
		AFauna_Multicast_HightlightLeader_Params params {};
		params.bIsLeader = bIsLeader;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AC1E0
	 * 		Name   -> Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AFauna::GenerateNewRandomAnimationSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed");
		
		AFauna_GenerateNewRandomAnimationSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038AC130
	 * 		Name   -> Function AthenaAI.Fauna.ActivateResponseRPC
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		float                                              InTargetTurnAngle                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFauna::ActivateResponseRPC(float InTargetTurnAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.ActivateResponseRPC");
		
		AFauna_ActivateResponseRPC_Params params {};
		params.InTargetTurnAngle = InTargetTurnAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFauna.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFauna::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.Fauna");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFaunaAIPlayerTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFaunaAIPlayerTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.FaunaAIPlayerTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFaunaAnimationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFaunaAnimationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.FaunaAnimationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFaunaMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFaunaMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.FaunaMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMerchantCrateMetaGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMerchantCrateMetaGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.MerchantCrateMetaGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7FC00
	 * 		Name   -> Function AthenaAI.AIDebugSpawnActor.StartSpawning
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void AAIDebugSpawnActor::StartSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIDebugSpawnActor.StartSpawning");
		
		AAIDebugSpawnActor_StartSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIDebugSpawnActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIDebugSpawnActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDebugSpawnActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7F8E0
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnMultipleAI
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAIEncounterSettings*                        EncounterSettings                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MakeAIPermanentlyNetRelevant                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InstancedNavMesh                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<struct FAIEncounterSpecification> UAthenaAIDebugFunctionLibrary::STATIC_SpawnMultipleAI(int32_t Count, class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnMultipleAI");
		
		UAthenaAIDebugFunctionLibrary_SpawnMultipleAI_Params params {};
		params.Count = Count;
		params.EncounterSettings = EncounterSettings;
		params.Pos = Pos;
		params.Rot = Rot;
		params.Delay = Delay;
		params.MakeAIPermanentlyNetRelevant = MakeAIPermanentlyNetRelevant;
		params.InstancedNavMesh = InstancedNavMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7F120
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class UClass>                            AIType                                                     (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	 * 		TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                                                   (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	 * 		TAssetPtr<class ULoadoutAsset>                     Loadout                                                    (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	 * 		TAssetPtr<class UAthenaAIFormDataAsset>            Form                                                       (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	 * 		TAssetPtr<class UClass>                            AIItemSpawnComponent                                       (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      ClassId                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		TAssetPtr<class UAthenaAIAmmoDataAsset>            Ammo                                                       (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Region                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TriggerActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NavMeshOverride                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaAIDebugFunctionLibrary::STATIC_SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, TAssetPtr<class UClass> AIItemSpawnComponent, class UClass* ClassId, TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo, const struct FVector& Pos, const struct FRotator& Rot, const class FName& Region, class AActor* TriggerActor, const class FName& NavMeshOverride, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings");
		
		UAthenaAIDebugFunctionLibrary_SpawnAIWithSettings_Params params {};
		params.AIType = AIType;
		params.Skillset = Skillset;
		params.Loadout = Loadout;
		params.Form = Form;
		params.AIItemSpawnComponent = AIItemSpawnComponent;
		params.ClassId = ClassId;
		params.Ammo = Ammo;
		params.Pos = Pos;
		params.Rot = Rot;
		params.Region = Region;
		params.TriggerActor = TriggerActor;
		params.NavMeshOverride = NavMeshOverride;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7EDF0
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UAIEncounterSettings*                        EncounterSettings                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MakeAIPermanentlyNetRelevant                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InstancedNavMesh                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FAIEncounterSpecification UAthenaAIDebugFunctionLibrary::STATIC_SpawnAI(class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI");
		
		UAthenaAIDebugFunctionLibrary_SpawnAI_Params params {};
		params.EncounterSettings = EncounterSettings;
		params.Pos = Pos;
		params.Rot = Rot;
		params.Delay = Delay;
		params.MakeAIPermanentlyNetRelevant = MakeAIPermanentlyNetRelevant;
		params.InstancedNavMesh = InstancedNavMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7ED30
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InMaxAllowedSeconds                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     QueryOwner                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaAIDebugFunctionLibrary::STATIC_SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds");
		
		UAthenaAIDebugFunctionLibrary_SetEnvQueryManagerMaxAllowedSeconds_Params params {};
		params.InMaxAllowedSeconds = InMaxAllowedSeconds;
		params.QueryOwner = QueryOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7ED10
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAthenaAIDebugFunctionLibrary::STATIC_KillAllDebugAISpawners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners");
		
		UAthenaAIDebugFunctionLibrary_KillAllDebugAISpawners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7EC90
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     QueryOwner                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UAthenaAIDebugFunctionLibrary::STATIC_GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries");
		
		UAthenaAIDebugFunctionLibrary_GetEnvQueryManagerNumRunningQueries_Params params {};
		params.QueryOwner = QueryOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7EC20
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AAthenaAIController*                         AIController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaAIDebugFunctionLibrary::STATIC_EnableMaximumSightSettings(class AAthenaAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings");
		
		UAthenaAIDebugFunctionLibrary_EnableMaximumSightSettings_Params params {};
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7EBB0
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaAIDebugFunctionLibrary::STATIC_EnableBehaviorTreeLogging(class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging");
		
		UAthenaAIDebugFunctionLibrary_EnableBehaviorTreeLogging_Params params {};
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7EB40
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaAIDebugFunctionLibrary::STATIC_DespawnAIPawn(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn");
		
		UAthenaAIDebugFunctionLibrary_DespawnAIPawn_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7EA40
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAISpawner*                                  SpawnerAsset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UAthenaAIDebugFunctionLibrary::STATIC_CreateAISpawnerAtPosition(class UObject* WorldContext, class UAISpawner* SpawnerAsset, const struct FVector& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition");
		
		UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtPosition_Params params {};
		params.WorldContext = WorldContext;
		params.SpawnerAsset = SpawnerAsset;
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7E950
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAISpawner*                                  SpawnerAsset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SpawnLocationActor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaAIDebugFunctionLibrary::STATIC_CreateAISpawnerAtActor(class UObject* WorldContext, class UAISpawner* SpawnerAsset, class AActor* SpawnLocationActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor");
		
		UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtActor_Params params {};
		params.WorldContext = WorldContext;
		params.SpawnerAsset = SpawnerAsset;
		params.SpawnLocationActor = SpawnLocationActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A7E780
	 * 		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FVector                                     QueryExtent                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector UAthenaAIDebugFunctionLibrary::STATIC_CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation");
		
		UAthenaAIDebugFunctionLibrary_CanProjectPointToNavigation_Params params {};
		params.WorldContext = WorldContext;
		params.Point = Point;
		params.NavData = NavData;
		params.FilterClass = FilterClass;
		params.QueryExtent = QueryExtent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIDebugFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIDebugFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIDebugFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebugAISpawnerCreator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugAISpawnerCreator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.DebugAISpawnerCreator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDioramaLocationSourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDioramaLocationSourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDioramaLocationSourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIDiorama.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIDiorama::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDiorama");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDioramaCategory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDioramaCategory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDioramaCategory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDioramaController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDioramaController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDioramaController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDioramaDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDioramaDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDioramaDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDioramaLocationSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDioramaLocationSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDioramaLocationSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDioramaServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDioramaServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDioramaServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIDioramaService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIDioramaService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDioramaService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebugDioramaCreator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugDioramaCreator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.DebugDioramaCreator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInDioramaAIStrategyId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInDioramaAIStrategyId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.InDioramaAIStrategyId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638080
	 * 		Name   -> Function AthenaAI.AINameplateComponent.OnRep_Title
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAINameplateComponent::OnRep_Title()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_Title");
		
		UAINameplateComponent_OnRep_Title_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638000
	 * 		Name   -> Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAINameplateComponent::OnRep_DisplayNameAsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString");
		
		UAINameplateComponent_OnRep_DisplayNameAsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637FE0
	 * 		Name   -> Function AthenaAI.AINameplateComponent.OnRep_DisplayName
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAINameplateComponent::OnRep_DisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_DisplayName");
		
		UAINameplateComponent_OnRep_DisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637FC0
	 * 		Name   -> Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAINameplateComponent::OnRep_DebugDisplayText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText");
		
		UAINameplateComponent_OnRep_DebugDisplayText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAINameplateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAINameplateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AINameplateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetNameplateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetNameplateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PetNameplateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68A50
	 * 		Name   -> Function AthenaAI.Pet.SetExitTakeOffFlag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InExitTakeOffFlag                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APet::SetExitTakeOffFlag(bool InExitTakeOffFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.SetExitTakeOffFlag");
		
		APet_SetExitTakeOffFlag_Params params {};
		params.InExitTakeOffFlag = InExitTakeOffFlag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D688F0
	 * 		Name   -> Function AthenaAI.Pet.OnShipDestroyed
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      InShip                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APet::OnShipDestroyed(class AActor* InShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnShipDestroyed");
		
		APet_OnShipDestroyed_Params params {};
		params.InShip = InShip;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D688D0
	 * 		Name   -> Function AthenaAI.Pet.OnRep_RollRequest
	 * 		Flags  -> (Final, Native, Private)
	 */
	void APet::OnRep_RollRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_RollRequest");
		
		APet_OnRep_RollRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D688B0
	 * 		Name   -> Function AthenaAI.Pet.OnRep_ResetRollAndZOffset
	 * 		Flags  -> (Final, Native, Private)
	 */
	void APet::OnRep_ResetRollAndZOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_ResetRollAndZOffset");
		
		APet_OnRep_ResetRollAndZOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68890
	 * 		Name   -> Function AthenaAI.Pet.OnRep_PetTurnToFaceData
	 * 		Flags  -> (Final, Native, Public)
	 */
	void APet::OnRep_PetTurnToFaceData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PetTurnToFaceData");
		
		APet_OnRep_PetTurnToFaceData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68870
	 * 		Name   -> Function AthenaAI.Pet.OnRep_PetOwner
	 * 		Flags  -> (Final, Native, Private)
	 */
	void APet::OnRep_PetOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PetOwner");
		
		APet_OnRep_PetOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68850
	 * 		Name   -> Function AthenaAI.Pet.OnRep_PetIsSad
	 * 		Flags  -> (Final, Native, Private)
	 */
	void APet::OnRep_PetIsSad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PetIsSad");
		
		APet_OnRep_PetIsSad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68830
	 * 		Name   -> Function AthenaAI.Pet.OnRep_PerchedInHangout
	 * 		Flags  -> (Final, Native, Private)
	 */
	void APet::OnRep_PerchedInHangout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PerchedInHangout");
		
		APet_OnRep_PerchedInHangout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68810
	 * 		Name   -> Function AthenaAI.Pet.OnRep_MovementRequest
	 * 		Flags  -> (Final, Native, Private)
	 */
	void APet::OnRep_MovementRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_MovementRequest");
		
		APet_OnRep_MovementRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D687D0
	 * 		Name   -> Function AthenaAI.Pet.OnRep_InHangout
	 * 		Flags  -> (Final, Native, Private)
	 */
	void APet::OnRep_InHangout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_InHangout");
		
		APet_OnRep_InHangout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D685B0
	 * 		Name   -> Function AthenaAI.Pet.OnOwnerDestroyed
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      InOwner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APet::OnOwnerDestroyed(class AActor* InOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnOwnerDestroyed");
		
		APet_OnOwnerDestroyed_Params params {};
		params.InOwner = InOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68590
	 * 		Name   -> Function AthenaAI.Pet.Multicast_DitherOut
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void APet::Multicast_DitherOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.Multicast_DitherOut");
		
		APet_Multicast_DitherOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68570
	 * 		Name   -> Function AthenaAI.Pet.Multicast_DitherIn
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void APet::Multicast_DitherIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.Multicast_DitherIn");
		
		APet_Multicast_DitherIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D68550
	 * 		Name   -> Function AthenaAI.Pet.GetFloorMeshOffsetZ
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float APet::GetFloorMeshOffsetZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.GetFloorMeshOffsetZ");
		
		APet_GetFloorMeshOffsetZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.Pet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetRoamingPetAnimationState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetRoamingPetAnimationState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetRoamingPetAnimationState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_PositionFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_PositionFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_PositionFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetDitherComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetDitherComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PetDitherComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetPartCustomisationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetPartCustomisationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PetPartCustomisationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetPartSizeMappingsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetPartSizeMappingsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PetPartSizeMappingsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetSicknessComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetSicknessComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PetSicknessComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPartsDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPartsDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPartsDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetsPartsDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetsPartsDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PetsPartsDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetTelemetryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetTelemetryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PetTelemetryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPetWieldableReactMappingsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPetWieldableReactMappingsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PetWieldableReactMappingsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APreviewPet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APreviewPet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PreviewPet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03E92730
	 * 		Name   -> Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAthenaAIControllerParamsDataAsset*          InControllerParametersAsset                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       InPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAthenaSwimmingAIController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* InControllerParametersAsset, class APawn* InPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams");
		
		AAthenaSwimmingAIController_ApplyControllerParams_Params params {};
		params.InControllerParametersAsset = InControllerParametersAsset;
		params.InPawn = InPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAthenaSwimmingAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAthenaSwimmingAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaSwimmingAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_NearSurfaceOfWater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_NearSurfaceOfWater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_NearSurfaceOfWater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetFloatToTheSurfaceWhileInBranch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetFloatToTheSurfaceWhileInBranch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_SetFloatToTheSurfaceWhileInBranch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetFloatToTheSurface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetFloatToTheSurface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetFloatToTheSurface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USwimmingCreatureMovementAnimationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwimmingCreatureMovementAnimationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.SwimmingCreatureMovementAnimationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USwimmingPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwimmingPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.SwimmingPathFollowingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SwimTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SwimTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SwimTurnOnTheSpot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SwimTurnOnTheSpot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SwimTurnOnTheSpot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIControllerParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIControllerParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetTinySharkExperienceParticipatingCrews.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetTinySharkExperienceParticipatingCrews::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TaleQuestGetTinySharkExperienceParticipatingCrews");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetTinySharkExperienceParticipatingCrewsDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetTinySharkExperienceParticipatingCrewsDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TaleQuestGetTinySharkExperienceParticipatingCrewsDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetTinySharkPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetTinySharkPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TaleQuestGetTinySharkPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetTinySharkPawnDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetTinySharkPawnDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TaleQuestGetTinySharkPawnDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStartTinySharkExperienceStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStartTinySharkExperienceStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TaleQuestStartTinySharkExperienceStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestTinySharkService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestTinySharkService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TaleQuestTinySharkService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestTinySharkServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestTinySharkServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TaleQuestTinySharkServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStartTinySharkExperienceStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStartTinySharkExperienceStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TaleQuestStartTinySharkExperienceStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestTinySharkExperienceTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestTinySharkExperienceTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TaleQuestTinySharkExperienceTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestShroudedDeepSGExperienceTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestShroudedDeepSGExperienceTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TaleQuestShroudedDeepSGExperienceTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTinySharkTelemetryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTinySharkTelemetryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TinySharkTelemetryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFEC0
	 * 		Name   -> Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      InDestroyedActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATinySharkExperience::TinySharkPawnDestroyed(class AActor* InDestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed");
		
		ATinySharkExperience_TinySharkPawnDestroyed_Params params {};
		params.InDestroyedActor = InDestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFC50
	 * 		Name   -> Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class ASharkPawn*                                  LastTinySharkPawn                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATinySharkExperience::OnRep_TinySharkPawn(class ASharkPawn* LastTinySharkPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn");
		
		ATinySharkExperience_OnRep_TinySharkPawn_Params params {};
		params.LastTinySharkPawn = LastTinySharkPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFC30
	 * 		Name   -> Function AthenaAI.TinySharkExperience.GetTrackedShip
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AShip* ATinySharkExperience::GetTrackedShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetTrackedShip");
		
		ATinySharkExperience_GetTrackedShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFC10
	 * 		Name   -> Function AthenaAI.TinySharkExperience.GetCurrentState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ETinySharkState ATinySharkExperience::GetCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetCurrentState");
		
		ATinySharkExperience_GetCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFBF0
	 * 		Name   -> Function AthenaAI.TinySharkExperience.GetActiveState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ETinySharkActiveState ATinySharkExperience::GetActiveState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetActiveState");
		
		ATinySharkExperience_GetActiveState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATinySharkExperience.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATinySharkExperience::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TinySharkExperience");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTinySharkParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTinySharkParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TinySharkParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTinySharkServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTinySharkServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TinySharkServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFDC0
	 * 		Name   -> Function AthenaAI.TinySharkService.RequestTinySharkWithShip
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AShip*                                       InTrackedShip                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OverrideControllerParamIndex                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PartIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ATinySharkService::RequestTinySharkWithShip(class AShip* InTrackedShip, int32_t OverrideControllerParamIndex, int32_t PartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.RequestTinySharkWithShip");
		
		ATinySharkService_RequestTinySharkWithShip_Params params {};
		params.InTrackedShip = InTrackedShip;
		params.OverrideControllerParamIndex = OverrideControllerParamIndex;
		params.PartIndex = PartIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFCE0
	 * 		Name   -> Function AthenaAI.TinySharkService.RequestTinySharkWithLocation
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     SpawnLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PartIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ATinySharkService::RequestTinySharkWithLocation(const struct FVector& SpawnLocation, int32_t PartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.RequestTinySharkWithLocation");
		
		ATinySharkService_RequestTinySharkWithLocation_Params params {};
		params.SpawnLocation = SpawnLocation;
		params.PartIndex = PartIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFBC0
	 * 		Name   -> Function AthenaAI.TinySharkService.DismissAllTinySharks
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ATinySharkService::DismissAllTinySharks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.DismissAllTinySharks");
		
		ATinySharkService_DismissAllTinySharks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FFFB80
	 * 		Name   -> Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATinySharkService::CanSpawnTinySharkExperience()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience");
		
		ATinySharkService_CanSpawnTinySharkExperience_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATinySharkService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATinySharkService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TinySharkService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTinySharkServiceParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTinySharkServiceParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TinySharkServiceParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshMemoryConstraintsAIPartsDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshMemoryConstraintsAIPartsDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.MeshMemoryConstraintsAIPartsDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeleportAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeleportAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.TeleportAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIItemParameterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIItemParameterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIItemParameterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIControllerSharedParamValuesDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIControllerSharedParamValuesDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerSharedParamValuesDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAICharacterControllerSharedParamValuesDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAICharacterControllerSharedParamValuesDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterControllerSharedParamValuesDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAICharacterControllerParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAICharacterControllerParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterControllerParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIAmmoDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIAmmoDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIAmmoDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAmmoRankProgression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAmmoRankProgression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIAmmoRankProgression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAmmoProgressionTypeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAmmoProgressionTypeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIAmmoProgressionTypeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAmmoTypeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAmmoTypeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIAmmoTypeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAnimationStateInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAnimationStateInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIAnimationStateInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIChargeUpInterruptedStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIChargeUpInterruptedStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIChargeUpInterruptedStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIClassId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIClassId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIClassId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPartsCategory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPartsCategory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPartsCategory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPartsServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPartsServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPartsServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638B50
	 * 		Name   -> Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class UAISkillsetRankProgression>        Progression                                                (Parm, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UAIEncounterServiceInterface::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression");
		
		UAIEncounterServiceInterface_RegisterLoadedSkillsetProgression_Params params {};
		params.Progression = Progression;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638930
	 * 		Name   -> Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                                                   (Parm, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UAIEncounterServiceInterface::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset");
		
		UAIEncounterServiceInterface_RegisterLoadedSkillset_Params params {};
		params.Skillset = Skillset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638710
	 * 		Name   -> Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class ULoadoutAsset>                     Loadout                                                    (Parm, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UAIEncounterServiceInterface::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout");
		
		UAIEncounterServiceInterface_RegisterLoadedLoadout_Params params {};
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046384F0
	 * 		Name   -> Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class UAthenaAIFormDataAsset>            Form                                                       (Parm, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UAIEncounterServiceInterface::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm");
		
		UAIEncounterServiceInterface_RegisterLoadedForm_Params params {};
		params.Form = Form;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046382D0
	 * 		Name   -> Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class UAIEncounterSettings>              Encounter                                                  (Parm, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UAIEncounterServiceInterface::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter");
		
		UAIEncounterServiceInterface_RegisterLoadedEncounter_Params params {};
		params.Encounter = Encounter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIEncounterServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIEncounterServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIEncounterServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIClassIdTypeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIClassIdTypeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIClassIdTypeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIColorVariantPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIColorVariantPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIColorVariantPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046380A0
	 * 		Name   -> Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UAICombatEncounterInterface::OnVulnerabilityStateEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered");
		
		UAICombatEncounterInterface_OnVulnerabilityStateEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAICombatEncounterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAICombatEncounterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AICombatEncounterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDeathInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDeathInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDeathInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDebugVisualisationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDebugVisualisationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIDebugVisualisationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIElectricProjectileInterruptedStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIElectricProjectileInterruptedStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIElectricProjectileInterruptedStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIEncounterGenerationRecipe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIEncounterGenerationRecipe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipe");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIEncounterGenerationRecipeRankOrderList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIEncounterGenerationRecipeRankOrderList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipeRankOrderList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIEncounterGenerationRecipeTypeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIEncounterGenerationRecipeTypeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationRecipeTypeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIEncounterGenerationServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIEncounterGenerationServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIEncounterGenerationService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIEncounterGenerationService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIEncounterGenerationService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFormRankProgression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFormRankProgression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIFormRankProgression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFormProgressionTypeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFormProgressionTypeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIFormProgressionTypeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFormTypeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFormTypeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIFormTypeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILoadoutProgressionTypeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILoadoutProgressionTypeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AILoadoutProgressionTypeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILoadoutTypeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILoadoutTypeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AILoadoutTypeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkillsetProgressionTypeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkillsetProgressionTypeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISkillsetProgressionTypeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkillsetTypeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkillsetTypeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISkillsetTypeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPartsCategoryTypeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPartsCategoryTypeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPartsCategoryTypeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638A40
	 * 		Name   -> Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class UAISkillsetRankProgression>        Progression                                                (Parm, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AAIEncounterService::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression");
		
		AAIEncounterService_RegisterLoadedSkillsetProgression_Params params {};
		params.Progression = Progression;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638820
	 * 		Name   -> Function AthenaAI.AIEncounterService.RegisterLoadedSkillset
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                                                   (Parm, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AAIEncounterService::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedSkillset");
		
		AAIEncounterService_RegisterLoadedSkillset_Params params {};
		params.Skillset = Skillset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638600
	 * 		Name   -> Function AthenaAI.AIEncounterService.RegisterLoadedLoadout
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class ULoadoutAsset>                     Loadout                                                    (Parm, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AAIEncounterService::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedLoadout");
		
		AAIEncounterService_RegisterLoadedLoadout_Params params {};
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046383E0
	 * 		Name   -> Function AthenaAI.AIEncounterService.RegisterLoadedForm
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class UAthenaAIFormDataAsset>            Form                                                       (Parm, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AAIEncounterService::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedForm");
		
		AAIEncounterService_RegisterLoadedForm_Params params {};
		params.Form = Form;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046381B0
	 * 		Name   -> Function AthenaAI.AIEncounterService.RegisterLoadedEncounter
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TAssetPtr<class UAIEncounterSettings>              Encounter                                                  (Parm, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AAIEncounterService::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedEncounter");
		
		AAIEncounterService_RegisterLoadedEncounter_Params params {};
		params.Encounter = Encounter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIEncounterService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIEncounterService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIEncounterService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkillsetRankProgression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkillsetRankProgression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISkillsetRankProgression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIEncounterSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIEncounterSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIEncounterSettingsFixed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIEncounterSettingsFixed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettingsFixed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIEncounterSettingsRankProgression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIEncounterSettingsRankProgression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIEncounterSettingsRankProgression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFormItemSpawnRequirement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFormItemSpawnRequirement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIFormItemSpawnRequirement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIIdentifierOwnerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIIdentifierOwnerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIIdentifierOwnerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIInteractableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIInteractableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIInteractableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIInteractableOperatorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIInteractableOperatorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIInteractableOperatorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIItemDropComponentList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIItemDropComponentList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIItemDropComponentList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIItemDropComponentRankProgressionList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIItemDropComponentRankProgressionList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIItemDropComponentRankProgressionList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIItemSpawnDataSourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIItemSpawnDataSourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIItemSpawnDataSourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIItemSpawnDataSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIItemSpawnDataSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIItemSpawnDataSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIItemSpawnRankProgression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIItemSpawnRankProgression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIItemSpawnRankProgression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILoadoutInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILoadoutInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AILoadoutInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILoadoutItemSpawnRequirement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILoadoutItemSpawnRequirement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AILoadoutItemSpawnRequirement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILoadoutRankProgression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILoadoutRankProgression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AILoadoutRankProgression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILoadoutWithNonStorableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILoadoutWithNonStorableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AILoadoutWithNonStorableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639B50
	 * 		Name   -> Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ItemDesc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	class AItemInfo* UAIManagerBlueprintFunctionLibrary::STATIC_SpawnItemFromAI(class APawn* Pawn, class UClass* ItemDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI");
		
		UAIManagerBlueprintFunctionLibrary_SpawnItemFromAI_Params params {};
		params.Pawn = Pawn;
		params.ItemDesc = ItemDesc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637C00
	 * 		Name   -> Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t UAIManagerBlueprintFunctionLibrary::STATIC_GetFrameCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter");
		
		UAIManagerBlueprintFunctionLibrary_GetFrameCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637220
	 * 		Name   -> Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DisplayName                                                (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UAIManagerBlueprintFunctionLibrary::STATIC_AddNameplateToAIWithLocalisedName(class AActor* Actor, const class FText& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName");
		
		UAIManagerBlueprintFunctionLibrary_AddNameplateToAIWithLocalisedName_Params params {};
		params.Actor = Actor;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637150
	 * 		Name   -> Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAIManagerBlueprintFunctionLibrary::STATIC_AddNameplateToAI(class AActor* Actor, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI");
		
		UAIManagerBlueprintFunctionLibrary_AddNameplateToAI_Params params {};
		params.Actor = Actor;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIManagerBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIManagerBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIManagerBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639CE0
	 * 		Name   -> Function AthenaAI.AIManagerServiceInterface.StartDespawnAI
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterDeathType                                DeathType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIManagerServiceInterface::StartDespawnAI(class APawn* AIActor, ECharacterDeathType DeathType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerServiceInterface.StartDespawnAI");
		
		UAIManagerServiceInterface_StartDespawnAI_Params params {};
		params.AIActor = AIActor;
		params.DeathType = DeathType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637C60
	 * 		Name   -> Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UAIManagerServiceInterface::GetNumOfSpawnedPawns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns");
		
		UAIManagerServiceInterface_GetNumOfSpawnedPawns_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIManagerServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIManagerServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIManagerServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAITypeListDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAITypeListDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAITypeListDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnWaveSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnWaveSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnWaveSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnWaveSequenceRankProgression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnWaveSequenceRankProgression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnWaveSequenceRankProgression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIWeightedProbabilityRangeOfRangesAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIWeightedProbabilityRangeOfRangesAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIWeightedProbabilityRangeOfRangesAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIWeightedProbabilityRangeOfRangesRankProgression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIWeightedProbabilityRangeOfRangesRankProgression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIWeightedProbabilityRangeOfRangesRankProgression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPlayerTrackerObservedInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPlayerTrackerObservedInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPlayerTrackerObservedInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPlayerTrackerObserverInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPlayerTrackerObserverInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPlayerTrackerObserverInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnRequestResultLoggerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnRequestResultLoggerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnRequestResultLoggerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAISettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAISettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAISettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnContextId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnContextId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnContextId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizableAIManagerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizableAIManagerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.CustomizableAIManagerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639DD0
	 * 		Name   -> Function AthenaAI.AIManagerService.TickService
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIManagerService::TickService(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerService.TickService");
		
		AAIManagerService_TickService_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639C10
	 * 		Name   -> Function AthenaAI.AIManagerService.StartDespawnAI
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterDeathType                                DeathType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIManagerService::StartDespawnAI(class APawn* AIActor, ECharacterDeathType DeathType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerService.StartDespawnAI");
		
		AAIManagerService_StartDespawnAI_Params params {};
		params.AIActor = AIActor;
		params.DeathType = DeathType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIManagerService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIManagerService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIManagerService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639860
	 * 		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InMaxNumOfSpawnedActors                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugAIManagerServiceInterface::SetMaxNumOfSpawnedActors(int32_t InMaxNumOfSpawnedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors");
		
		UDebugAIManagerServiceInterface_SetMaxNumOfSpawnedActors_Params params {};
		params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639750
	 * 		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InMaxAICostUnitsPerRegion                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugAIManagerServiceInterface::SetMaxAICostUnitsPerRegion(int32_t InMaxAICostUnitsPerRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion");
		
		UDebugAIManagerServiceInterface_SetMaxAICostUnitsPerRegion_Params params {};
		params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639640
	 * 		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InMaxAICostUnitsForWorld                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugAIManagerServiceInterface::SetMaxAICostUnitsForWorld(int32_t InMaxAICostUnitsForWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld");
		
		UDebugAIManagerServiceInterface_SetMaxAICostUnitsForWorld_Params params {};
		params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639410
	 * 		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Ignore                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugAIManagerServiceInterface::SetIgnoreCharacterLimits(bool Ignore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits");
		
		UDebugAIManagerServiceInterface_SetIgnoreCharacterLimits_Params params {};
		params.Ignore = Ignore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639300
	 * 		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDistanceToPlayerToRaiseSpawnPriority                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugAIManagerServiceInterface::SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority");
		
		UDebugAIManagerServiceInterface_SetDistanceToPlayerToRaiseSpawnPriority_Params params {};
		params.InDistanceToPlayerToRaiseSpawnPriority = InDistanceToPlayerToRaiseSpawnPriority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639170
	 * 		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InCharacterWorldDensityCheckTimer                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugAIManagerServiceInterface::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer");
		
		UDebugAIManagerServiceInterface_SetCharacterWorldDensityCheckTimer_Params params {};
		params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639070
	 * 		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InCharacterRegionDensityCheckTimer                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugAIManagerServiceInterface::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer");
		
		UDebugAIManagerServiceInterface_SetCharacterRegionDensityCheckTimer_Params params {};
		params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638F70
	 * 		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InCloseByCharactersRadius                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugAIManagerServiceInterface::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy");
		
		UDebugAIManagerServiceInterface_SetCharacterNetRelevancy_Params params {};
		params.InCloseByCharactersRadius = InCloseByCharactersRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637570
	 * 		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InExclusive                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               InBlockState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDebugAIManagerServiceInterface::BlockAIAbility(class UClass* InExclusive, bool InBlockState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility");
		
		UDebugAIManagerServiceInterface_BlockAIAbility_Params params {};
		params.InExclusive = InExclusive;
		params.InBlockState = InBlockState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugAIManagerServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugAIManagerServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.DebugAIManagerServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046397D0
	 * 		Name   -> Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InMaxNumOfSpawnedActors                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADebugAIManagerService::SetMaxNumOfSpawnedActors(int32_t InMaxNumOfSpawnedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors");
		
		ADebugAIManagerService_SetMaxNumOfSpawnedActors_Params params {};
		params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046396C0
	 * 		Name   -> Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InMaxAICostUnitsPerRegion                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADebugAIManagerService::SetMaxAICostUnitsPerRegion(int32_t InMaxAICostUnitsPerRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion");
		
		ADebugAIManagerService_SetMaxAICostUnitsPerRegion_Params params {};
		params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046395B0
	 * 		Name   -> Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InMaxAICostUnitsForWorld                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADebugAIManagerService::SetMaxAICostUnitsForWorld(int32_t InMaxAICostUnitsForWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld");
		
		ADebugAIManagerService_SetMaxAICostUnitsForWorld_Params params {};
		params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639380
	 * 		Name   -> Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Ignore                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADebugAIManagerService::SetIgnoreCharacterLimits(bool Ignore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits");
		
		ADebugAIManagerService_SetIgnoreCharacterLimits_Params params {};
		params.Ignore = Ignore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04639280
	 * 		Name   -> Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDistanceToPlayerToRaiseSpawnPriority                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADebugAIManagerService::SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority");
		
		ADebugAIManagerService_SetDistanceToPlayerToRaiseSpawnPriority_Params params {};
		params.InDistanceToPlayerToRaiseSpawnPriority = InDistanceToPlayerToRaiseSpawnPriority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046390F0
	 * 		Name   -> Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InCharacterWorldDensityCheckTimer                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADebugAIManagerService::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer");
		
		ADebugAIManagerService_SetCharacterWorldDensityCheckTimer_Params params {};
		params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638FF0
	 * 		Name   -> Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InCharacterRegionDensityCheckTimer                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADebugAIManagerService::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer");
		
		ADebugAIManagerService_SetCharacterRegionDensityCheckTimer_Params params {};
		params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638EF0
	 * 		Name   -> Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InCloseByCharactersRadius                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADebugAIManagerService::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy");
		
		ADebugAIManagerService_SetCharacterNetRelevancy_Params params {};
		params.InCloseByCharactersRadius = InCloseByCharactersRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046374A0
	 * 		Name   -> Function AthenaAI.DebugAIManagerService.BlockAIAbility
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InExclusive                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               InBlockState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADebugAIManagerService::BlockAIAbility(class UClass* InExclusive, bool InBlockState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.BlockAIAbility");
		
		ADebugAIManagerService_BlockAIAbility_Params params {};
		params.InExclusive = InExclusive;
		params.InBlockState = InBlockState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebugAIManagerService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugAIManagerService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.DebugAIManagerService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAINoiseFireInstigator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAINoiseFireInstigator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AINoiseFireInstigator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPartsService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPartsService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPartsService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPartCustomizationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPartCustomizationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPartCustomizationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPartIdListingAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPartIdListingAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPartIdListingAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPartsRetrievalInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPartsRetrievalInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPartsRetrievalInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638DF0
	 * 		Name   -> Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAIPartsCategory*                            AssignedPartsCategory                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PartsIndexToUse                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TeamColorIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIPartsRetrievalComponent::RequestNewAIParts(class UAIPartsCategory* AssignedPartsCategory, int32_t PartsIndexToUse, int32_t TeamColorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts");
		
		UAIPartsRetrievalComponent_RequestNewAIParts_Params params {};
		params.AssignedPartsCategory = AssignedPartsCategory;
		params.PartsIndexToUse = PartsIndexToUse;
		params.TeamColorIndex = TeamColorIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638040
	 * 		Name   -> Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAIPartsRetrievalComponent::OnRep_ReplicatedAIPartsData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData");
		
		UAIPartsRetrievalComponent_OnRep_ReplicatedAIPartsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPartsRetrievalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPartsRetrievalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPartsRetrievalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPawnInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPawnInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPawnInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPawnTurnActiveInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPawnTurnActiveInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPawnTurnActiveInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPerCrewSpawnerSettingsStoryOverrideAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerCrewSpawnerSettingsStoryOverrideAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPerCrewSpawnerSettingsStoryOverrideAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPerCrewSpawnerSettingsStoryOverrideCollectionAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerCrewSpawnerSettingsStoryOverrideCollectionAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPerCrewSpawnerSettingsStoryOverrideCollectionAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIProximityPlayerTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIProximityPlayerTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIProximityPlayerTracker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFilterFirstPlayerEnterPlayerTrackerDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFilterFirstPlayerEnterPlayerTrackerDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.FilterFirstPlayerEnterPlayerTrackerDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIProjectileInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIProjectileInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIProjectileInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIRegionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIRegionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIRegionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIRegionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIRegionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIRegionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIShipInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIShipInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIShipInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkillsetItemSpawnRequirement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkillsetItemSpawnRequirement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISkillsetItemSpawnRequirement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnContextContainerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnContextContainerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnContextContainerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnContextContainerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnContextContainerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnContextContainerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnContextList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnContextList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnContextList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnContextProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnContextProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnContextProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFixedWavesSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFixedWavesSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIFixedWavesSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIIncrementalWaveSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIIncrementalWaveSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIIncrementalWaveSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIInteractableSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIInteractableSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIInteractableSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIOnDemandSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIOnDemandSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIOnDemandSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046380C0
	 * 		Name   -> Function AthenaAI.AIPerPlayerSpawner.PlayerDeath
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIPerPlayerSpawner::PlayerDeath(class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AIPerPlayerSpawner.PlayerDeath");
		
		UAIPerPlayerSpawner_PlayerDeath_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPerPlayerSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerPlayerSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIPerPlayerSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNamedAIDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNamedAIDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.NamedAIDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIBoobyTrapSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIBoobyTrapSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIBoobyTrapSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIProgressiveWavesSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIProgressiveWavesSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIProgressiveWavesSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnerSpawnInteractableAssignmentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnerSpawnInteractableAssignmentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnerSpawnInteractableAssignmentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIEscalatingWaveSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIEscalatingWaveSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIEscalatingWaveSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnerList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnerList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnerList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnOverrideCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnOverrideCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnOverrideCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnCampaignCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnCampaignCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnCampaignCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnComplexCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnComplexCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnComplexCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnAndCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnAndCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnAndCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnOrCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnOrCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnOrCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnMatchesAllContextsCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnMatchesAllContextsCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnMatchesAllContextsCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnMatchesAnyContextCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnMatchesAnyContextCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnMatchesAnyContextCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnStoryCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnStoryCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnStoryCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaticAISpawnCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaticAISpawnCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.StaticAISpawnCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnPointSeedComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnPointSeedComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnPointSeedComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnRegionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnRegionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AISpawnRegionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITargetServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITargetServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AITargetServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AITargetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAITargetActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAITargetActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AITargetActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAITargetService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAITargetService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AITargetService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046377C0
	 * 		Name   -> Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               CheckYaw                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutAimConfig                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UAITargetWeaponInterface::FindAimConfigToHitTarget(const struct FVector& Target, bool CheckYaw, struct FRotator* OutAimConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget");
		
		UAITargetWeaponInterface_FindAimConfigToHitTarget_Params params {};
		params.Target = Target;
		params.CheckYaw = CheckYaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAimConfig != nullptr)
			*OutAimConfig = params.OutAimConfig;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITargetWeaponInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITargetWeaponInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AITargetWeaponInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIWithFormInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIWithFormInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AIWithFormInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637F20
	 * 		Name   -> Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      InActorDying                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAmbientWaterSpawnerManager::OnPlayerDeath(class AActor* InActorDying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath");
		
		AAmbientWaterSpawnerManager_OnPlayerDeath_Params params {};
		params.InActorDying = InActorDying;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmbientWaterSpawnerManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmbientWaterSpawnerManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AmbientWaterSpawnerManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAmmunitionItemClassProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmmunitionItemClassProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AmmunitionItemClassProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAppliedStatusToMultipleAIWithFormsStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAppliedStatusToMultipleAIWithFormsStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AppliedStatusToMultipleAIWithFormsStatCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAquaticAITargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAquaticAITargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AquaticAITargetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurrowAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurrowAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BurrowAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638060
	 * 		Name   -> Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ABurrowCrack::OnRep_StartFadeAndLifeSpan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan");
		
		ABurrowCrack_OnRep_StartFadeAndLifeSpan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PercentLeft                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABurrowCrack::OnLifeSpanPercentLeft(float PercentLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft");
		
		ABurrowCrack_OnLifeSpanPercentLeft_Params params {};
		params.PercentLeft = PercentLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABurrowCrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABurrowCrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BurrowCrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurrowAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurrowAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BurrowAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurrowHealAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurrowHealAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BurrowHealAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurrowHealAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurrowHealAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BurrowHealAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIBuffAbilityInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIBuffAbilityInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIBuffAbilityInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoralShieldAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoralShieldAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.CoralShieldAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElectricShieldAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElectricShieldAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.ElectricShieldAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USporeBreathAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USporeBreathAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.SporeBreathAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIAbilityHandlerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIAbilityHandlerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityHandlerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIAbilityComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIAbilityComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIAbilityHandlerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIAbilityHandlerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIAbilityHandlerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoralShieldAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoralShieldAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.CoralShieldAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElectricShieldAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElectricShieldAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.ElectricShieldAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USporeBreathAIAbilityParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USporeBreathAIAbilityParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.SporeBreathAIAbilityParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurrowAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurrowAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BurrowAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurrowHealAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurrowHealAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BurrowHealAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoralShieldAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoralShieldAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.CoralShieldAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElectricShieldAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElectricShieldAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.ElectricShieldAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USporeBreathAIAbilityType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USporeBreathAIAbilityType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.SporeBreathAIAbilityType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIRangeBasedAmmoDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIRangeBasedAmmoDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIRangeBasedAmmoDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAICharacterStatsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAICharacterStatsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterStatsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnItemDescProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnItemDescProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.SpawnItemDescProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046399B0
	 * 		Name   -> Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InPrioritiseInteractablesBeforeEnemies                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAthenaAICharacterController::SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies");
		
		AAthenaAICharacterController_SetOverridePrioritiseInteractablesBeforeEnemies_Params params {};
		params.InPrioritiseInteractablesBeforeEnemies = InPrioritiseInteractablesBeforeEnemies;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046394A0
	 * 		Name   -> Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InItemCategory                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class FName                                        ParamName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAthenaAICharacterController::SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const class FName& ParamName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam");
		
		AAthenaAICharacterController_SetItemSpecificNamedControllerParam_Params params {};
		params.InItemCategory = InItemCategory;
		params.ParamName = ParamName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046391F0
	 * 		Name   -> Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InDisableTurningForTest                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAthenaAICharacterController::SetDisableTurningForTest(bool InDisableTurningForTest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest");
		
		AAthenaAICharacterController_SetDisableTurningForTest_Params params {};
		params.InDisableTurningForTest = InDisableTurningForTest;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637640
	 * 		Name   -> Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AAthenaAICharacterController::ClearOverridePrioritiseInteractablesBeforeEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies");
		
		AAthenaAICharacterController_ClearOverridePrioritiseInteractablesBeforeEnemies_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAthenaAICharacterController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAthenaAICharacterController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAICharacterController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIControllerNavMeshTogglesInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIControllerNavMeshTogglesInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerNavMeshTogglesInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFaunaAIContollerParamsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFaunaAIContollerParamsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.FaunaAIContollerParamsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIControllerParamsDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIControllerParamsDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIControllerParamsTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIControllerParamsTargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIControllerParamsTargetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIFormComponentContainerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIFormComponentContainerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIFormComponentContainerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIInteractableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIInteractableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIInteractableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637D90
	 * 		Name   -> Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      Sense                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool UAthenaAIPerceptionComponent::IsPerceptionSenseEnabled(class UClass* Sense)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled");
		
		UAthenaAIPerceptionComponent_IsPerceptionSenseEnabled_Params params {};
		params.Sense = Sense;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637D60
	 * 		Name   -> Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAthenaAIPerceptionComponent::IsAnyPerceptionEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled");
		
		UAthenaAIPerceptionComponent_IsAnyPerceptionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046376F0
	 * 		Name   -> Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      Sense                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaAIPerceptionComponent::EnablePerceptionSense(class UClass* Sense, bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense");
		
		UAthenaAIPerceptionComponent_EnablePerceptionSense_Params params {};
		params.Sense = Sense;
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637660
	 * 		Name   -> Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaAIPerceptionComponent::EnableAllPerception(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception");
		
		UAthenaAIPerceptionComponent_EnableAllPerception_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIPerceptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIPerceptionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIPerceptionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAISightTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAISightTargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAISightTargetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaAIWeightedRangesDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaAIWeightedRangesDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.AthenaAIWeightedRangesDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardAIDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardAIDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BlackboardAIDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ActionState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ActionState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ActionState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ActorInWater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ActorInWater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ActorInWater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CurrentAIStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CurrentAIStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CurrentAIStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsActorInExpectedActionState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsActorInExpectedActionState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_IsActorInExpectedActionState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ItemReadyToUse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ItemReadyToUse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ItemReadyToUse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_LeftOfAIPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_LeftOfAIPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_LeftOfAIPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_LineOfSightToTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_LineOfSightToTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_LineOfSightToTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CompareBlackboardClassValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CompareBlackboardClassValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardClassValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CompareBlackboardIntValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CompareBlackboardIntValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardIntValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CompareBlackboardValues.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CompareBlackboardValues::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardValues");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CompareFloatValueBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CompareFloatValueBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareFloatValueBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CompareBlackboardActorSpeed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CompareBlackboardActorSpeed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardActorSpeed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CompareBlackboardFloatValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CompareBlackboardFloatValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareBlackboardFloatValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CompareCurrentHealth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CompareCurrentHealth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_CompareCurrentHealth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_TargetInRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TargetInRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetInRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_TargetInRangeOfPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TargetInRangeOfPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TargetInRangeOfPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_TestRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TestRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestRange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_TestRangeOfSeenActors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TestRangeOfSeenActors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestRangeOfSeenActors");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ConeCheck3D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ConeCheck3D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_ConeCheck3D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_DockedToInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_DockedToInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_DockedToInteractable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_FeatureToggle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_FeatureToggle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_FeatureToggle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsAbilityAvailable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsAbilityAvailable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_IsAbilityAvailable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsLocationInWater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsLocationInWater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_IsLocationInWater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_MultipleRandomDiceRolls.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_MultipleRandomDiceRolls::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_MultipleRandomDiceRolls");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_RandomDiceRoll.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_RandomDiceRoll::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RandomDiceRoll");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_RandomLoop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_RandomLoop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RandomLoop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_RollAgainstPatrolChance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_RollAgainstPatrolChance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_RollAgainstPatrolChance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_TestAIInteractableType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TestAIInteractableType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTDecorator_TestAIInteractableType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_AimAIInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_AimAIInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_AimAIInteractable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_DefaultFocusToPosAtRelativeAngleToObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_DefaultFocusToPosAtRelativeAngleToObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_DefaultFocusToPosAtRelativeAngleToObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_DetermineAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_DetermineAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_DetermineAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_DisableCollisions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_DisableCollisions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_DisableCollisions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_DisableDamageResponses.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_DisableDamageResponses::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_DisableDamageResponses");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_DisableStun.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_DisableStun::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_DisableStun");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_EnableFaceFocusActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_EnableFaceFocusActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_EnableFaceFocusActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_IncrementFloatValueWithTimeSpentInBranch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_IncrementFloatValueWithTimeSpentInBranch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_IncrementFloatValueWithTimeSpentInBranch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_OverrideTurnSpeed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_OverrideTurnSpeed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_OverrideTurnSpeed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_PlayCustomMontageId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_PlayCustomMontageId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_PlayCustomMontageId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_QueryPerceptionForTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_QueryPerceptionForTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_QueryPerceptionForTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_RunEQSQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_RunEQSQuery::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_RunEQSQuery");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_DoesEQSQuerySucceed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_DoesEQSQuerySucceed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_DoesEQSQuerySucceed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_RunEQSQueryOnActorMovement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_RunEQSQueryOnActorMovement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_RunEQSQueryOnActorMovement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetAIAnimationState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetAIAnimationState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_SetAIAnimationState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetAIStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetAIStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_SetAIStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetBoolBlackboardValueToTrueOnCeaseRelevant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetBoolBlackboardValueToTrueOnCeaseRelevant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_SetBoolBlackboardValueToTrueOnCeaseRelevant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetBoolBlackboardValueTrueWhileRelevant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetBoolBlackboardValueTrueWhileRelevant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_SetBoolBlackboardValueTrueWhileRelevant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_SetNameBlackboardValueWhileRelevant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_SetNameBlackboardValueWhileRelevant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_SetNameBlackboardValueWhileRelevant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_TriggerNotifications.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_TriggerNotifications::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_TriggerNotifications");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_UpdateFocusOnBBChange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_UpdateFocusOnBBChange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateFocusOnBBChange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_UpdateTargetForInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_UpdateTargetForInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateTargetForInteractable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_UpdateViewPitchForWieldedProjectileToHitTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_UpdateViewPitchForWieldedProjectileToHitTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTService_UpdateViewPitchForWieldedProjectileToHitTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ApplyStatusComposite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ApplyStatusComposite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_ApplyStatusComposite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AthenaMoveTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AthenaMoveTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaMoveTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveToFailOnDistanceChange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveToFailOnDistanceChange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceChange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveToFailOnDistanceToSeenActors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveToFailOnDistanceToSeenActors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceToSeenActors");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveToFailOnDistanceToTargetChanged.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveToFailOnDistanceToTargetChanged::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToFailOnDistanceToTargetChanged");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveToMovingLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveToMovingLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToMovingLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AthenaWait.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AthenaWait::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaWait");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_AthenaWaitWithFloor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_AthenaWaitWithFloor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_AthenaWaitWithFloor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_BurrowAbilityTriggerEruptAreaFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_BurrowAbilityTriggerEruptAreaFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_BurrowAbilityTriggerEruptAreaFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_BurrowIntoGround.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_BurrowIntoGround::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_BurrowIntoGround");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ClearBlackboardValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ClearBlackboardValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_ClearBlackboardValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ClearPerceptualData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ClearPerceptualData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_ClearPerceptualData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_CopyAIInteractionPointAndFocusToBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_CopyAIInteractionPointAndFocusToBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyAIInteractionPointAndFocusToBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_CopyBlackboardActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_CopyBlackboardActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyBlackboardActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_CopyBlackboardVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_CopyBlackboardVector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_CopyBlackboardVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_DetermineFollowUpAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_DetermineFollowUpAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_DetermineFollowUpAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_ExecuteAIAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_ExecuteAIAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_ExecuteAIAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_GetCurrentHealth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_GetCurrentHealth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_GetCurrentHealth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_IgnoreActorTemporarily.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_IgnoreActorTemporarily::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_IgnoreActorTemporarily");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_IncrementBlackboardFloatValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_IncrementBlackboardFloatValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_IncrementBlackboardFloatValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_IncrementBlackboardIntValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_IncrementBlackboardIntValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_IncrementBlackboardIntValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_InteractWith.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_InteractWith::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_InteractWith");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveToTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveToTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_MoveToTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_NetworkTriggerAnim.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_NetworkTriggerAnim::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_NetworkTriggerAnim");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_NOP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_NOP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_NOP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_PlayCustomMontageId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PlayCustomMontageId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_PlayCustomMontageId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_PlayMontage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PlayMontage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_PlayMontage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RequestDespawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RequestDespawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_RequestDespawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetAIStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetAIStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetAIStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetAIStrategyFromWeightedArray.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetAIStrategyFromWeightedArray::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetAIStrategyFromWeightedArray");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetBlackboardActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetBlackboardActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetBlackboardBoolValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetBlackboardBoolValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardBoolValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetBlackboardClassValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetBlackboardClassValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardClassValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetBlackboardEQSValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetBlackboardEQSValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardEQSValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetBlackboardFloatValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetBlackboardFloatValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetBlackboardFloatValueFromMinMax.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetBlackboardFloatValueFromMinMax::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValueFromMinMax");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetBlackboardFloatValueFromWeightedArray.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetBlackboardFloatValueFromWeightedArray::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardFloatValueFromWeightedArray");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetBlackboardIntValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetBlackboardIntValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardIntValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetBlackboardVectorValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetBlackboardVectorValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetBlackboardVectorValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetFollowUpAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetFollowUpAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetFollowUpAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetInHiddenActionState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetInHiddenActionState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetInHiddenActionState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetIsHeadingOffNavMeshCheck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetIsHeadingOffNavMeshCheck::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetIsHeadingOffNavMeshCheck");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetupAITargetWeaponForNextShot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetupAITargetWeaponForNextShot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetupAITargetWeaponForNextShot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetVelocity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetVelocity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SetVelocity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SpawnActorAndStore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SpawnActorAndStore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_SpawnActorAndStore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_StopMovementImmediately.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_StopMovementImmediately::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_StopMovementImmediately");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_StorePawnLocationInBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_StorePawnLocationInBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_StorePawnLocationInBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_TeleportTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_TeleportTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_TeleportTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_TriggerNotification.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_TriggerNotification::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_TriggerNotification");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_UnwieldCurrentWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_UnwieldCurrentWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BTTask_UnwieldCurrentWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurrowInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurrowInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BurrowInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurrowComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurrowComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BurrowComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04637FA0
	 * 		Name   -> Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoralShieldVFXComponent::OnRep_CurrentCoralShieldRole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole");
		
		UCoralShieldVFXComponent_OnRep_CurrentCoralShieldRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoralShieldVFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoralShieldVFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.CoralShieldVFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomSkeletonAnimationDataList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomSkeletonAnimationDataList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.CustomSkeletonAnimationDataList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_ContextLocationFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_ContextLocationFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_ContextLocationFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_HomePositionFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_HomePositionFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_HomePositionFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_KnockbackPosFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_KnockbackPosFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_KnockbackPosFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_ThrowableTargetPositionFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_ThrowableTargetPositionFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_ThrowableTargetPositionFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_SeenActors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_SeenActors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SeenActors");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_SeenActorsProjectedToGround.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_SeenActorsProjectedToGround::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SeenActorsProjectedToGround");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_SpawnedForActorFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_SpawnedForActorFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_SpawnedForActorFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_TargetActorFromBlackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_TargetActorFromBlackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_TargetActorFromBlackboardPredictedLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_TargetActorFromBlackboardPredictedLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromBlackboardPredictedLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_TargetActorFromParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_TargetActorFromParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryContext_TargetActorFromParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_AIRegionLocations.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_AIRegionLocations::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_AIRegionLocations");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_FromContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_FromContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_FromContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_Line.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_Line::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_Line");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_PointsAtContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_PointsAtContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_PointsAtContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_Sphere.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_Sphere::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_Sphere");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_WaterArc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_WaterArc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterArc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_WaterDonut.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_WaterDonut::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterDonut");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_WaterMultiDeckerRing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_WaterMultiDeckerRing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryGenerator_WaterMultiDeckerRing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_HasLineOfSight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_HasLineOfSight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_HasLineOfSight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_InGameEventExclusionZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_InGameEventExclusionZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_InGameEventExclusionZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_IsAngleInRange2D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_IsAngleInRange2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_IsAngleInRange2D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_WaterHeight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_WaterHeight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.EnvQueryTest_WaterHeight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHealthGemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHealthGemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.HealthGemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsAIOfClassStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsAIOfClassStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.IsAIOfClassStatCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsAIOfFormStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsAIOfFormStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.IsAIOfFormStatCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsAIOfSkillsetStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsAIOfSkillsetStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.IsAIOfSkillsetStatCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsAIUsingFormDataAssetStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsAIUsingFormDataAssetStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.IsAIUsingFormDataAssetStatCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPeriodicAINoiseEventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPeriodicAINoiseEventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PeriodicAINoiseEventComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerProximityObservedSpawnContextProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerProximityObservedSpawnContextProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.PlayerProximityObservedSpawnContextProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleAIRegion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleAIRegion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.SimpleAIRegion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04638CF0
	 * 		Name   -> Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOtherBodyIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASpawnContextProviderZone::RemoveContextsFromTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget");
		
		ASpawnContextProviderZone_RemoveContextsFromTarget_Params params {};
		params.InActor = InActor;
		params.InComponent = InComponent;
		params.InOtherBodyIndex = InOtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04636F80
	 * 		Name   -> Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InOtherBodyIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InFromSweep                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  InSweepResult                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ASpawnContextProviderZone::AddContextsToTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget");
		
		ASpawnContextProviderZone_AddContextsToTarget_Params params {};
		params.InActor = InActor;
		params.InComponent = InComponent;
		params.InOtherBodyIndex = InOtherBodyIndex;
		params.InFromSweep = InFromSweep;
		params.InSweepResult = InSweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpawnContextProviderZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpawnContextProviderZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.SpawnContextProviderZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseSpawnBlockingBehaviourStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseSpawnBlockingBehaviourStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.BaseSpawnBlockingBehaviourStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USirenEncounterSpawnBlockingBehaviourStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USirenEncounterSpawnBlockingBehaviourStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.SirenEncounterSpawnBlockingBehaviourStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseSetBlackboardBoolKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseSetBlackboardBoolKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.StatusResponseSetBlackboardBoolKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseSetBlackboardClassKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseSetBlackboardClassKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.StatusResponseSetBlackboardClassKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseSetBlackboardFloatKey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseSetBlackboardFloatKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.StatusResponseSetBlackboardFloatKey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVulnerabilityDuringAIStrategyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVulnerabilityDuringAIStrategyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.VulnerabilityDuringAIStrategyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterbasedAISupplier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterbasedAISupplier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaAI.WaterbasedAISupplier");
		return ptr;
	}

}


