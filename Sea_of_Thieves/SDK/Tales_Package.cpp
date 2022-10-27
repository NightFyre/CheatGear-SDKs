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
	 * 		Name   -> PredefinedFunction UTaleQuestStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleMigrationAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleMigrationAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleMigrationAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestFramedStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestFramedStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestFramedStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestFramedStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestFramedStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestFramedStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContendedResourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContendedResourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.ContendedResourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_TaleContextBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_TaleContextBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.EnvQueryContext_TaleContextBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIslandTypeWeightsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIslandTypeWeightsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.IslandTypeWeightsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73A40
	 * 		Name   -> Function Tales.TaleQuestStepInterface.Signal
	 * 		Flags  -> (Native, Public)
	 */
	void UTaleQuestStepInterface::Signal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestStepInterface.Signal");
		
		UTaleQuestStepInterface_Signal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStepInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStepInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestStepInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplineFootprintPathComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplineFootprintPathComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SplineFootprintPathComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartTallTaleConditionalStatTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartTallTaleConditionalStatTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.StartTallTaleConditionalStatTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestArrayEntrySelectionStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestArrayEntrySelectionStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestArrayEntrySelectionStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFixedArrayEntrySelectionStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedArrayEntrySelectionStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.FixedArrayEntrySelectionStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URandomArrayEntrySelectionStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URandomArrayEntrySelectionStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.RandomArrayEntrySelectionStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequentialArrayEntrySelectionStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequentialArrayEntrySelectionStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SequentialArrayEntrySelectionStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestCargoRunContract.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestCargoRunContract::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestCargoRunContract");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A725F0
	 * 		Name   -> Function Tales.TaleQuestCargoRunContractsService.GetContract
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       Guid                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UTaleQuestCargoRunContract* UTaleQuestCargoRunContractsService::GetContract(const struct FGuid& Guid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestCargoRunContractsService.GetContract");
		
		UTaleQuestCargoRunContractsService_GetContract_Params params {};
		params.Guid = Guid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A717C0
	 * 		Name   -> Function Tales.TaleQuestCargoRunContractsService.AddContract
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UClass*>                              InItems                                                    (Parm, ZeroConstructor, UObjectWrapper)
	 * 		class AActor*                                      InCollectFromNPC                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InDeliverToNPC                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTimeLimitInMinutes                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FGuid UTaleQuestCargoRunContractsService::AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int32_t InTimeLimitInMinutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestCargoRunContractsService.AddContract");
		
		UTaleQuestCargoRunContractsService_AddContract_Params params {};
		params.InItems = InItems;
		params.InCollectFromNPC = InCollectFromNPC;
		params.InDeliverToNPC = InDeliverToNPC;
		params.InTimeLimitInMinutes = InTimeLimitInMinutes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestCargoRunContractsService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestCargoRunContractsService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestCargoRunContractsService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestCompoundStepInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestCompoundStepInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestCompoundStepInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestIndexedFrame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestIndexedFrame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestIndexedFrame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMerchantContract.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMerchantContract::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestMerchantContract");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72690
	 * 		Name   -> Function Tales.TaleQuestMerchantContractsService.GetContract
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       Guid                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UTaleQuestMerchantContract* UTaleQuestMerchantContractsService::GetContract(const struct FGuid& Guid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMerchantContractsService.GetContract");
		
		UTaleQuestMerchantContractsService_GetContract_Params params {};
		params.Guid = Guid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A71980
	 * 		Name   -> Function Tales.TaleQuestMerchantContractsService.AddContract
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FTaleQuestDeliveryRequest>           Requests                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class FName                                        InDeliveryDestination                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InTimeLimit                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FGuid UTaleQuestMerchantContractsService::AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const class FName& InDeliveryDestination, float InTimeLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMerchantContractsService.AddContract");
		
		UTaleQuestMerchantContractsService_AddContract_Params params {};
		params.Requests = Requests;
		params.InDeliveryDestination = InDeliveryDestination;
		params.InTimeLimit = InTimeLimit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMerchantContractsService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMerchantContractsService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestMerchantContractsService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestImportFrame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestImportFrame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestImportFrame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73900
	 * 		Name   -> Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestSelectorServiceBlueprintFunctionLibrary::STATIC_SetDebugVoyageSeed(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed");
		
		UTaleQuestSelectorServiceBlueprintFunctionLibrary_SetDebugVoyageSeed_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73800
	 * 		Name   -> Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTaleQuestSelectorServiceBlueprintFunctionLibrary::STATIC_ResetVoyageDebugSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed");
		
		UTaleQuestSelectorServiceBlueprintFunctionLibrary_ResetVoyageDebugSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSelectorServiceBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSelectorServiceBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A74160
	 * 		Name   -> Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCutsceneResponseCoordinator*                Coordinator                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCutsceneResponsesTaleService::TrackResponseCoordinator(class UCutsceneResponseCoordinator* Coordinator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator");
		
		UCutsceneResponsesTaleService_TrackResponseCoordinator_Params params {};
		params.Coordinator = Coordinator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73C20
	 * 		Name   -> Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ResponseSheetClass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	class UCutsceneResponseSheet* UCutsceneResponsesTaleService::StartCutsceneResponseSheet(class AActor* TargetActor, class UClass* ResponseSheetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet");
		
		UCutsceneResponsesTaleService_StartCutsceneResponseSheet_Params params {};
		params.TargetActor = TargetActor;
		params.ResponseSheetClass = ResponseSheetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A71DF0
	 * 		Name   -> Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UCutsceneResponsesTaleService::ClearAllActiveResponseSheets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets");
		
		UCutsceneResponsesTaleService_ClearAllActiveResponseSheets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A71B20
	 * 		Name   -> Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCutsceneResponsesTaleService::AddResponseSheetRelevantActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor");
		
		UCutsceneResponsesTaleService_AddResponseSheetRelevantActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCutsceneResponsesTaleService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCutsceneResponsesTaleService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.CutsceneResponsesTaleService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventExclusionZoneTaleService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventExclusionZoneTaleService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.GameEventExclusionZoneTaleService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URewardGenTaleQuestService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardGenTaleQuestService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.RewardGenTaleQuestService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestActorService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestActorService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestActorService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestCheckpointService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestCheckpointService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestCheckpointService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestEQSService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestEQSService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestEQSService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73760
	 * 		Name   -> Function Tales.TaleQuestInteractionPreventionService.PreventInteractionWithTargetActor
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestInteractionPreventionService::PreventInteractionWithTargetActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestInteractionPreventionService.PreventInteractionWithTargetActor");
		
		UTaleQuestInteractionPreventionService_PreventInteractionWithTargetActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A71FF0
	 * 		Name   -> Function Tales.TaleQuestInteractionPreventionService.EnableInteractionWithTargetActor
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestInteractionPreventionService::EnableInteractionWithTargetActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestInteractionPreventionService.EnableInteractionWithTargetActor");
		
		UTaleQuestInteractionPreventionService_EnableInteractionWithTargetActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestInteractionPreventionService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestInteractionPreventionService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestInteractionPreventionService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72C10
	 * 		Name   -> Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Minimum                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Maximum                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UTaleQuestSelectorService::GetRandomIntegerInRange(int32_t Minimum, int32_t Maximum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange");
		
		UTaleQuestSelectorService_GetRandomIntegerInRange_Params params {};
		params.Minimum = Minimum;
		params.Maximum = Maximum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72B40
	 * 		Name   -> Function Tales.TaleQuestSelectorService.GetRandomFloatInRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Minimum                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Maximum                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UTaleQuestSelectorService::GetRandomFloatInRange(float Minimum, float Maximum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestSelectorService.GetRandomFloatInRange");
		
		UTaleQuestSelectorService_GetRandomFloatInRange_Params params {};
		params.Minimum = Minimum;
		params.Maximum = Maximum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSelectorService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSelectorService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestSelectorService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73E80
	 * 		Name   -> Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToEnable
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestToggleInteractionDescriptionService::TargetActorInteractionToEnable(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToEnable");
		
		UTaleQuestToggleInteractionDescriptionService_TargetActorInteractionToEnable_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73E00
	 * 		Name   -> Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToDisable
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestToggleInteractionDescriptionService::TargetActorInteractionToDisable(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToDisable");
		
		UTaleQuestToggleInteractionDescriptionService_TargetActorInteractionToDisable_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestToggleInteractionDescriptionService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestToggleInteractionDescriptionService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestToggleInteractionDescriptionService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleResourceBrokerService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleResourceBrokerService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleResourceBrokerService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCutsceneResponsesTaleServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCutsceneResponsesTaleServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.CutsceneResponsesTaleServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameEventExclusionZoneTaleServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventExclusionZoneTaleServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.GameEventExclusionZoneTaleServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URewardGenTaleQuestServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardGenTaleQuestServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.RewardGenTaleQuestServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestActorServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestActorServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestActorServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestCargoRunContractsServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestCargoRunContractsServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestCargoRunContractsServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestEQSServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestEQSServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestEQSServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestInteractionPreventionServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestInteractionPreventionServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestInteractionPreventionServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMerchantContractsServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMerchantContractsServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestMerchantContractsServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSelectorServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSelectorServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestSelectorServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestToggleInteractionDescriptionServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestToggleInteractionDescriptionServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestToggleInteractionDescriptionServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorRadiusTrackerStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorRadiusTrackerStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.ActorRadiusTrackerStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddGameEventExclusionZoneStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddGameEventExclusionZoneStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.AddGameEventExclusionZoneStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCallObjectFunctionStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCallObjectFunctionStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.CallObjectFunctionStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugTaleAddInstancedLevelStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugTaleAddInstancedLevelStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.DebugTaleAddInstancedLevelStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugTaleAddInstancedLevelStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugTaleAddInstancedLevelStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.DebugTaleAddInstancedLevelStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestroySpawnedActorStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestroySpawnedActorStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.DestroySpawnedActorStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoEQSQueryStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoEQSQueryStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.DoEQSQueryStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnableInteractionWithActorStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnableInteractionWithActorStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.EnableInteractionWithActorStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindItemInCollectorsChestStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindItemInCollectorsChestStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.FindItemInCollectorsChestStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindNamedPointStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindNamedPointStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.FindNamedPointStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindNamedPointAsVectorStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindNamedPointAsVectorStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.FindNamedPointAsVectorStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindNamedPointAsTransformStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindNamedPointAsTransformStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.FindNamedPointAsTransformStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForceCannonLoadStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForceCannonLoadStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.ForceCannonLoadStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenerateDigLocationInRadiusStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenerateDigLocationInRadiusStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.GenerateDigLocationInRadiusStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetActorOfInterestStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetActorOfInterestStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.GetActorOfInterestStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetVoyageDifficultyFromRankStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetVoyageDifficultyFromRankStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.GetVoyageDifficultyFromRankStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInvokeDamageStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInvokeDamageStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.InvokeDamageStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkEQSContextWithVariableStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkEQSContextWithVariableStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.LinkEQSContextWithVariableStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadSequencerAnimationStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadSequencerAnimationStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.LoadSequencerAnimationStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOverrideManagedActorStateStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverrideManagedActorStateStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.OverrideManagedActorStateStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticipantRadiusTrackerStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticipantRadiusTrackerStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.ParticipantRadiusTrackerStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaySequencerAnimationOnCutsceneActorStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaySequencerAnimationOnCutsceneActorStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationOnCutsceneActorStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaySequencerAnimationStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaySequencerAnimationStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreventInteractionWithActorStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreventInteractionWithActorStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.PreventInteractionWithActorStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProvokeHitReactionStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProvokeHitReactionStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.ProvokeHitReactionStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveGameEventExclusionZoneStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveGameEventExclusionZoneStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.RemoveGameEventExclusionZoneStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectNamedPointStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectNamedPointStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SelectNamedPointStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetEQSNamedContextStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetEQSNamedContextStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SetEQSNamedContextStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnLayerStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnLayerStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SpawnLayerStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnPhasedActorWithTransformStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnPhasedActorWithTransformStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SpawnPhasedActorWithTransformStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnPhasedItemStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnPhasedItemStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SpawnPhasedItemStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartSuppressingCutsceneResponsesStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartSuppressingCutsceneResponsesStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.StartSuppressingCutsceneResponsesStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStopSuppressingCutsceneResponsesStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStopSuppressingCutsceneResponsesStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.StopSuppressingCutsceneResponsesStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddToArrayStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddToArrayStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddToArrayStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestArrayAppendStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestArrayAppendStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestArrayAppendStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestArrayContainsStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestArrayContainsStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestArrayContainsStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestArrayUnionStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestArrayUnionStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestArrayUnionStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAwaitEventStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAwaitEventStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAwaitEventStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestChooseIslandFromWeightsStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestChooseIslandFromWeightsStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestChooseIslandFromWeightsStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestClearTaleProposalsStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestClearTaleProposalsStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestClearTaleProposalsStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestCrewTaskStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestCrewTaskStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestCrewTaskStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestDisableInteractionStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestDisableInteractionStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestDisableInteractionStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestEmissaryCompanyActionRewardBoostStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestEmissaryCompanyActionRewardBoostStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestEnableInteractionStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestEnableInteractionStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestEnableInteractionStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestFireEventStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestFireEventStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestFireEventStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestForEachStepBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestForEachStepBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestForEachStepBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestForEachAnyStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestForEachAnyStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestForEachAnyStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestForEachSequential.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestForEachSequential::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestForEachSequential");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestForEachUnionStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestForEachUnionStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestForEachUnionStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetCollectionItemCountStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetCollectionItemCountStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestGetCollectionItemCountStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetParticipatingCrewsInRadiusStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetParticipatingCrewsInRadiusStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestGetParticipatingCrewsInRadiusStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetParticipatingCrewsStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetParticipatingCrewsStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestGetParticipatingCrewsStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGrantRewardStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGrantRewardStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestGrantRewardStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestPermanentPromptStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestPermanentPromptStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestPermanentPromptStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestPersistentForEachCrewTaskStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestPersistentForEachCrewTaskStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestPersistentForEachCrewTaskStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSelectEntryFromArrayStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSelectEntryFromArrayStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestSelectEntryFromArrayStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestShipDiveStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestShipDiveStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestShipDiveStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestShipSurfaceStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestShipSurfaceStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestShipSurfaceStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStartCameraFadeStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStartCameraFadeStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestStartCameraFadeStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStructStepBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStructStepBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestStructStepBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestBreakStructStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestBreakStructStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestBreakStructStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMakeStructStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMakeStructStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestMakeStructStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestToggleAmbientMigrationForServerStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestToggleAmbientMigrationForServerStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestToggleAmbientMigrationForServerStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestUpdateCheckpointStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestUpdateCheckpointStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestUpdateCheckpointStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestWaitForHandInStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestWaitForHandInStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestWaitForHandInStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrackResponseCoordinatorStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrackResponseCoordinatorStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TrackResponseCoordinatorStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualiseLoggerEQSResultsTaleStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualiseLoggerEQSResultsTaleStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.VisualiseLoggerEQSResultsTaleStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForActorOfInterestToUnregisterStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForActorOfInterestToUnregisterStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.WaitForActorOfInterestToUnregisterStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForHealthToReachFractionStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForHealthToReachFractionStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.WaitForHealthToReachFractionStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForItemPickupStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForItemPickupStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.WaitForItemPickupStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorRadiusTrackerStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorRadiusTrackerStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.ActorRadiusTrackerStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddGameEventExclusionZoneStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddGameEventExclusionZoneStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.AddGameEventExclusionZoneStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCallObjectFunctionStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCallObjectFunctionStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.CallObjectFunctionStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestroySpawnedActorStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestroySpawnedActorStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.DestroySpawnedActorStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoEQSQueryStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoEQSQueryStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.DoEQSQueryStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnableInteractionWithActorStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnableInteractionWithActorStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.EnableInteractionWithActorStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindItemInCollectorsChestStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindItemInCollectorsChestStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.FindItemInCollectorsChestStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindNamedPointStepDescBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindNamedPointStepDescBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.FindNamedPointStepDescBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindNamedPointStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindNamedPointStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.FindNamedPointStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindNamedPointAsVectorStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindNamedPointAsVectorStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.FindNamedPointAsVectorStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindNamedPointAsTransformStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindNamedPointAsTransformStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.FindNamedPointAsTransformStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForceCannonLoadStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForceCannonLoadStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.ForceCannonLoadStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenerateDigLocationInRadiusStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenerateDigLocationInRadiusStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.GenerateDigLocationInRadiusStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetActorOfInterestStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetActorOfInterestStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.GetActorOfInterestStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInvokeDamageDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInvokeDamageDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.InvokeDamageDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkEQSContextWithVariableStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkEQSContextWithVariableStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.LinkEQSContextWithVariableStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadSequencerAnimationStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadSequencerAnimationStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.LoadSequencerAnimationStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOverrideManagedActorStateStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverrideManagedActorStateStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.OverrideManagedActorStateStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticipantRadiusTrackerStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticipantRadiusTrackerStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.ParticipantRadiusTrackerStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitUntilAllParticipantsEnterRadiusStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitUntilAllParticipantsEnterRadiusStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.WaitUntilAllParticipantsEnterRadiusStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitUntilAllParticipantsLeaveRadiusStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitUntilAllParticipantsLeaveRadiusStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.WaitUntilAllParticipantsLeaveRadiusStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitUntilAnyParticipantEntersRadiusStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitUntilAnyParticipantEntersRadiusStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.WaitUntilAnyParticipantEntersRadiusStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaySequencerAnimationOnCutsceneActorStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaySequencerAnimationOnCutsceneActorStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationOnCutsceneActorStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaySequencerAnimationStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaySequencerAnimationStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.PlaySequencerAnimationStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreventInteractionWithActorStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreventInteractionWithActorStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.PreventInteractionWithActorStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProvokeHitReactionDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProvokeHitReactionDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.ProvokeHitReactionDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveGameEventExclusionZoneStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveGameEventExclusionZoneStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.RemoveGameEventExclusionZoneStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72A30
	 * 		Name   -> Function Tales.SelectNamedPointStepDesc.GetNamedPointsGroups
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> USelectNamedPointStepDesc::GetNamedPointsGroups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.SelectNamedPointStepDesc.GetNamedPointsGroups");
		
		USelectNamedPointStepDesc_GetNamedPointsGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectNamedPointStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectNamedPointStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SelectNamedPointStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetEQSNamedContextStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetEQSNamedContextStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SetEQSNamedContextStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnLayerStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnLayerStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SpawnLayerStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnPhasedActorWithTransformStepBaseDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnPhasedActorWithTransformStepBaseDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SpawnPhasedActorWithTransformStepBaseDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnPhasedActorAtLocationStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnPhasedActorAtLocationStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SpawnPhasedActorAtLocationStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnPhasedItemStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnPhasedItemStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.SpawnPhasedItemStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartSuppressingCutsceneResponsesStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartSuppressingCutsceneResponsesStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.StartSuppressingCutsceneResponsesStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStopSuppressingCutsceneResponsesStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStopSuppressingCutsceneResponsesStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.StopSuppressingCutsceneResponsesStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestArrayItemStepBaseDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestArrayItemStepBaseDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestArrayItemStepBaseDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddToArrayStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddToArrayStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddToArrayStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestArrayContainsStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestArrayContainsStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestArrayContainsStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestArrayOperationStepBaseDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestArrayOperationStepBaseDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestArrayOperationStepBaseDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestArrayAppendStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestArrayAppendStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestArrayAppendStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestArrayUnionStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestArrayUnionStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestArrayUnionStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestChooseIslandFromWeightsStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestChooseIslandFromWeightsStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestChooseIslandFromWeightsStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestClearTaleProposalsStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestClearTaleProposalsStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestClearTaleProposalsStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestDisableInteractionStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestDisableInteractionStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestDisableInteractionStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestEmissaryCompanyActionRewardBoostStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestEmissaryCompanyActionRewardBoostStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestEmissaryCompanyActionRewardBoostStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestEnableInteractionStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestEnableInteractionStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestEnableInteractionStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestEventStepDescBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestEventStepDescBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestEventStepDescBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAwaitEventStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAwaitEventStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAwaitEventStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestFireEventStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestFireEventStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestFireEventStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UValueProviderStepInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UValueProviderStepInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.ValueProviderStepInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestForEachStepDescBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestForEachStepDescBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestForEachStepDescBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestForEachAnyStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestForEachAnyStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestForEachAnyStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestForEachSequentialDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestForEachSequentialDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestForEachSequentialDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestForEachUnionStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestForEachUnionStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestForEachUnionStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetCollectionItemCountStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetCollectionItemCountStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestGetCollectionItemCountStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetParticipatingCrewsInRadiusStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetParticipatingCrewsInRadiusStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestGetParticipatingCrewsInRadiusStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGetParticipatingCrewsStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGetParticipatingCrewsStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestGetParticipatingCrewsStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGrantRewardStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGrantRewardStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestGrantRewardStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestPermanentPromptStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestPermanentPromptStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestPermanentPromptStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestRunnableStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestRunnableStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestRunnableStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestFunctionStepLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestFunctionStepLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestFunctionStepLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73A60
	 * 		Name   -> Function Tales.TaleQuestActorFunctionLibrary.SpawnActor
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UClass*                                      What                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FTransform                                  Where                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               TrackActor                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AutomaticallyGatherForMigration                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class AActor* UTaleQuestActorFunctionLibrary::SpawnActor(class UClass* What, const struct FTransform& Where, bool TrackActor, bool AutomaticallyGatherForMigration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestActorFunctionLibrary.SpawnActor");
		
		UTaleQuestActorFunctionLibrary_SpawnActor_Params params {};
		params.What = What;
		params.Where = Where;
		params.TrackActor = TrackActor;
		params.AutomaticallyGatherForMigration = AutomaticallyGatherForMigration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73820
	 * 		Name   -> Function Tales.TaleQuestActorFunctionLibrary.ResolveActor
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TAssetPtr<class AActor>                            ActorReference                                             (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	 */
	class AActor* UTaleQuestActorFunctionLibrary::ResolveActor(TAssetPtr<class AActor> ActorReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestActorFunctionLibrary.ResolveActor");
		
		UTaleQuestActorFunctionLibrary_ResolveActor_Params params {};
		params.ActorReference = ActorReference;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72790
	 * 		Name   -> Function Tales.TaleQuestActorFunctionLibrary.GetInterface
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InterfaceClass                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UTaleQuestActorFunctionLibrary::STATIC_GetInterface(class AActor* Actor, class UClass* InterfaceClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestActorFunctionLibrary.GetInterface");
		
		UTaleQuestActorFunctionLibrary_GetInterface_Params params {};
		params.Actor = Actor;
		params.InterfaceClass = InterfaceClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72530
	 * 		Name   -> Function Tales.TaleQuestActorFunctionLibrary.GetActorTransform
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform UTaleQuestActorFunctionLibrary::STATIC_GetActorTransform(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestActorFunctionLibrary.GetActorTransform");
		
		UTaleQuestActorFunctionLibrary_GetActorTransform_Params params {};
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
	 * 		Name   -> PredefinedFunction UTaleQuestActorFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestActorFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestActorFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A733D0
	 * 		Name   -> Function Tales.TaleQuestAnimationStepFunctionLibrary.MakePosseableSequence
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		class AActor*                                      ActorToPossess                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      TrackNameToPossess                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	struct FPossessableSequence UTaleQuestAnimationStepFunctionLibrary::STATIC_MakePosseableSequence(class AActor* ActorToPossess, const class FString& TrackNameToPossess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestAnimationStepFunctionLibrary.MakePosseableSequence");
		
		UTaleQuestAnimationStepFunctionLibrary_MakePosseableSequence_Params params {};
		params.ActorToPossess = ActorToPossess;
		params.TrackNameToPossess = TrackNameToPossess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAnimationStepFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAnimationStepFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAnimationStepFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73D40
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.Subtract_Int
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		int32_t                                            Left                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UTaleQuestIntMathsFunctionLibrary::STATIC_Subtract_Int(int32_t Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.Subtract_Int");
		
		UTaleQuestIntMathsFunctionLibrary_Subtract_Int_Params params {};
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A736A0
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.NotEquals
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		int32_t                                            Left                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UTaleQuestIntMathsFunctionLibrary::STATIC_NotEquals(int32_t Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.NotEquals");
		
		UTaleQuestIntMathsFunctionLibrary_NotEquals_Params params {};
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A735E0
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.Multiply_Int
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		int32_t                                            Left                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UTaleQuestIntMathsFunctionLibrary::STATIC_Multiply_Int(int32_t Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.Multiply_Int");
		
		UTaleQuestIntMathsFunctionLibrary_Multiply_Int_Params params {};
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73510
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.Modulus_Int
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		int32_t                                            Left                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UTaleQuestIntMathsFunctionLibrary::STATIC_Modulus_Int(int32_t Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.Modulus_Int");
		
		UTaleQuestIntMathsFunctionLibrary_Modulus_Int_Params params {};
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73310
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.LessThanOrEqual
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		int32_t                                            Left                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UTaleQuestIntMathsFunctionLibrary::STATIC_LessThanOrEqual(int32_t Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.LessThanOrEqual");
		
		UTaleQuestIntMathsFunctionLibrary_LessThanOrEqual_Params params {};
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73250
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.LessThan
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		int32_t                                            Left                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UTaleQuestIntMathsFunctionLibrary::STATIC_LessThan(int32_t Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.LessThan");
		
		UTaleQuestIntMathsFunctionLibrary_LessThan_Params params {};
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72FF0
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.Increment_Int
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestIntMathsFunctionLibrary::STATIC_Increment_Int(int32_t* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.Increment_Int");
		
		UTaleQuestIntMathsFunctionLibrary_Increment_Int_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72F30
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThanOrEqual
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		int32_t                                            Left                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UTaleQuestIntMathsFunctionLibrary::STATIC_GreaterThanOrEqual(int32_t Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThanOrEqual");
		
		UTaleQuestIntMathsFunctionLibrary_GreaterThanOrEqual_Params params {};
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72E70
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThan
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		int32_t                                            Left                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UTaleQuestIntMathsFunctionLibrary::STATIC_GreaterThan(int32_t Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThan");
		
		UTaleQuestIntMathsFunctionLibrary_GreaterThan_Params params {};
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72070
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.Equals
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		int32_t                                            Left                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UTaleQuestIntMathsFunctionLibrary::STATIC_Equals(int32_t Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.Equals");
		
		UTaleQuestIntMathsFunctionLibrary_Equals_Params params {};
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A71E90
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.Divide_Int
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		int32_t                                            Left                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UTaleQuestIntMathsFunctionLibrary::STATIC_Divide_Int(int32_t Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.Divide_Int");
		
		UTaleQuestIntMathsFunctionLibrary_Divide_Int_Params params {};
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A71E10
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.Decrement_Int
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestIntMathsFunctionLibrary::STATIC_Decrement_Int(int32_t* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.Decrement_Int");
		
		UTaleQuestIntMathsFunctionLibrary_Decrement_Int_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A71CA0
	 * 		Name   -> Function Tales.TaleQuestIntMathsFunctionLibrary.Add_Int
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		int32_t                                            Left                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Right                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UTaleQuestIntMathsFunctionLibrary::STATIC_Add_Int(int32_t Left, int32_t Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestIntMathsFunctionLibrary.Add_Int");
		
		UTaleQuestIntMathsFunctionLibrary_Add_Int_Params params {};
		params.Left = Left;
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestIntMathsFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestIntMathsFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestIntMathsFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72870
	 * 		Name   -> Function Tales.TaleQuestNamedPointsFunctionLibrary.GetNamedPointsFromGroup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		TAssetPtr<class AActor>                            PointsContainer                                            (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	 * 		class FName                                        GroupName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESpaceType                                         ReturnSpace                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOrientedPoint>                      Points                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void UTaleQuestNamedPointsFunctionLibrary::STATIC_GetNamedPointsFromGroup(TAssetPtr<class AActor> PointsContainer, const class FName& GroupName, ESpaceType ReturnSpace, TArray<struct FOrientedPoint>* Points)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestNamedPointsFunctionLibrary.GetNamedPointsFromGroup");
		
		UTaleQuestNamedPointsFunctionLibrary_GetNamedPointsFromGroup_Params params {};
		params.PointsContainer = PointsContainer;
		params.GroupName = GroupName;
		params.ReturnSpace = ReturnSpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Points != nullptr)
			*Points = params.Points;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestNamedPointsFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestNamedPointsFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestNamedPointsFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A721B0
	 * 		Name   -> Function Tales.TaleQuestNPCHideFunctionLibrary.FadeOut
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestNPCHideFunctionLibrary::FadeOut(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestNPCHideFunctionLibrary.FadeOut");
		
		UTaleQuestNPCHideFunctionLibrary_FadeOut_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72130
	 * 		Name   -> Function Tales.TaleQuestNPCHideFunctionLibrary.FadeIn
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestNPCHideFunctionLibrary::FadeIn(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestNPCHideFunctionLibrary.FadeIn");
		
		UTaleQuestNPCHideFunctionLibrary_FadeIn_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestNPCHideFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestNPCHideFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestNPCHideFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A741E0
	 * 		Name   -> Function Tales.TaleQuestStoryFunctionLibrary.WaitForStory
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        StoryName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldBeActive                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTaleQuestStoryFunctionLibrary::WaitForStory(const class FName& StoryName, bool ShouldBeActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestStoryFunctionLibrary.WaitForStory");
		
		UTaleQuestStoryFunctionLibrary_WaitForStory_Params params {};
		params.StoryName = StoryName;
		params.ShouldBeActive = ShouldBeActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73070
	 * 		Name   -> Function Tales.TaleQuestStoryFunctionLibrary.IsStoryActive
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		class FName                                        StoryName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UTaleQuestStoryFunctionLibrary::IsStoryActive(const class FName& StoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestStoryFunctionLibrary.IsStoryActive");
		
		UTaleQuestStoryFunctionLibrary_IsStoryActive_Params params {};
		params.StoryName = StoryName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStoryFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStoryFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestStoryFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A71D60
	 * 		Name   -> Function Tales.TaleQuestStoryBranchFunctionLibrary.BranchOnStory
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        StoryName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestStoryBranchFunctionLibrary::BranchOnStory(const class FName& StoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestStoryBranchFunctionLibrary.BranchOnStory");
		
		UTaleQuestStoryBranchFunctionLibrary_BranchOnStory_Params params {};
		params.StoryName = StoryName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStoryBranchFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStoryBranchFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestStoryBranchFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73FE0
	 * 		Name   -> Function Tales.TaleQuestTransformMathsFunctionLibrary.ToWorld_Transform
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FTransform                                  RootTransform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  RelativeTransform                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FTransform UTaleQuestTransformMathsFunctionLibrary::STATIC_ToWorld_Transform(const struct FTransform& RootTransform, const struct FTransform& RelativeTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestTransformMathsFunctionLibrary.ToWorld_Transform");
		
		UTaleQuestTransformMathsFunctionLibrary_ToWorld_Transform_Params params {};
		params.RootTransform = RootTransform;
		params.RelativeTransform = RelativeTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestTransformMathsFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestTransformMathsFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestTransformMathsFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72460
	 * 		Name   -> Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     InTranslation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FTransform UTaleQuestTransfromConversionFunctionLibrary::STATIC_FromVector(const struct FVector& InTranslation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromVector");
		
		UTaleQuestTransfromConversionFunctionLibrary_FromVector_Params params {};
		params.InTranslation = InTranslation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A722E0
	 * 		Name   -> Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromOrientedPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FOrientedPoint                              InOrientedPoint                                            (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FTransform UTaleQuestTransfromConversionFunctionLibrary::STATIC_FromOrientedPoint(const struct FOrientedPoint& InOrientedPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromOrientedPoint");
		
		UTaleQuestTransfromConversionFunctionLibrary_FromOrientedPoint_Params params {};
		params.InOrientedPoint = InOrientedPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestTransfromConversionFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestTransfromConversionFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestTransfromConversionFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73110
	 * 		Name   -> Function Tales.TaleQuestUObjectFunctionLibrary.IsValid
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UTaleQuestUObjectFunctionLibrary::STATIC_IsValid(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestUObjectFunctionLibrary.IsValid");
		
		UTaleQuestUObjectFunctionLibrary_IsValid_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestUObjectFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestUObjectFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestUObjectFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A72230
	 * 		Name   -> Function Tales.TaleQuestUtilityFunctionLibrary.FailTale
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FText                                        FailureMessage                                             (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UTaleQuestUtilityFunctionLibrary::FailTale(const class FText& FailureMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestUtilityFunctionLibrary.FailTale");
		
		UTaleQuestUtilityFunctionLibrary_FailTale_Params params {};
		params.FailureMessage = FailureMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestUtilityFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestUtilityFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestUtilityFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A73970
	 * 		Name   -> Function Tales.TaleQuestWaterVolumeFunctionLibrary.SetExactWaterLevel
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AWaterVolume*                                WaterVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WaterLevel                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestWaterVolumeFunctionLibrary::SetExactWaterLevel(class AWaterVolume* WaterVolume, float WaterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestWaterVolumeFunctionLibrary.SetExactWaterLevel");
		
		UTaleQuestWaterVolumeFunctionLibrary_SetExactWaterLevel_Params params {};
		params.WaterVolume = WaterVolume;
		params.WaterLevel = WaterLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A731C0
	 * 		Name   -> Function Tales.TaleQuestWaterVolumeFunctionLibrary.IsWaterVolumeFull
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AWaterVolume*                                WaterVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UTaleQuestWaterVolumeFunctionLibrary::IsWaterVolumeFull(class AWaterVolume* WaterVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestWaterVolumeFunctionLibrary.IsWaterVolumeFull");
		
		UTaleQuestWaterVolumeFunctionLibrary_IsWaterVolumeFull_Params params {};
		params.WaterVolume = WaterVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A71F70
	 * 		Name   -> Function Tales.TaleQuestWaterVolumeFunctionLibrary.EmptyWaterVolume
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AWaterVolume*                                WaterVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestWaterVolumeFunctionLibrary::EmptyWaterVolume(class AWaterVolume* WaterVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestWaterVolumeFunctionLibrary.EmptyWaterVolume");
		
		UTaleQuestWaterVolumeFunctionLibrary_EmptyWaterVolume_Params params {};
		params.WaterVolume = WaterVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A71BA0
	 * 		Name   -> Function Tales.TaleQuestWaterVolumeFunctionLibrary.AddWaterAmount
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AWaterVolume*                                WaterVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AmountToAdd                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LerpRate                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestWaterVolumeFunctionLibrary::AddWaterAmount(class AWaterVolume* WaterVolume, float AmountToAdd, float LerpRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestWaterVolumeFunctionLibrary.AddWaterAmount");
		
		UTaleQuestWaterVolumeFunctionLibrary_AddWaterAmount_Params params {};
		params.WaterVolume = WaterVolume;
		params.AmountToAdd = AmountToAdd;
		params.LerpRate = LerpRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestWaterVolumeFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestWaterVolumeFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestWaterVolumeFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSelectEntryFromArrayStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSelectEntryFromArrayStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestSelectEntryFromArrayStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestShipDiveStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestShipDiveStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestShipDiveStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestShipSurfaceStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestShipSurfaceStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestShipSurfaceStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStartCameraFadeStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStartCameraFadeStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestStartCameraFadeStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStructStepDescBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStructStepDescBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestStructStepDescBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestBreakStructStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestBreakStructStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestBreakStructStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMakeStructStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMakeStructStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestMakeStructStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestTaskStepDescBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestTaskStepDescBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestTaskStepDescBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestCrewTaskStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestCrewTaskStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestCrewTaskStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestPersistentForEachCrewTaskStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestPersistentForEachCrewTaskStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestPersistentForEachCrewTaskStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestToggleAmbientMigrationForServerStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestToggleAmbientMigrationForServerStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestToggleAmbientMigrationForServerStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestUpdateCheckpointStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestUpdateCheckpointStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestUpdateCheckpointStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestWaitForHandInStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestWaitForHandInStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestWaitForHandInStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrackResponseCoordinatorStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrackResponseCoordinatorStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TrackResponseCoordinatorStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualiseLoggerEQSResultsTaleStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualiseLoggerEQSResultsTaleStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.VisualiseLoggerEQSResultsTaleStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForActorOfInterestToUnregisterStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForActorOfInterestToUnregisterStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.WaitForActorOfInterestToUnregisterStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForHealthToReachFractionStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForHealthToReachFractionStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.WaitForHealthToReachFractionStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaitForItemPickupStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaitForItemPickupStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.WaitForItemPickupStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSelectShipwreckLocationFromValidCandidatesStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSelectShipwreckLocationFromValidCandidatesStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveFlameOfFateTypeStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveFlameOfFateTypeStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.RemoveFlameOfFateTypeStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestFlameOfFateService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestFlameOfFateService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestFlameOfFateService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestFlameOfFateServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestFlameOfFateServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestFlameOfFateServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddBountyMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddBountyMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddBountyMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddBountyMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddBountyMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddBountyMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddCargoRunMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddCargoRunMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddCargoRunMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddChecklistMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddChecklistMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddChecklistMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddCircleMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddCircleMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddCircleMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddMerchantMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddMerchantMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddMerchantMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddRiddleMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddRiddleMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddXMarksMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddXMarksMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddXMarksMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAdvanceRiddleMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAdvanceRiddleMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAdvanceRiddleMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042656D0
	 * 		Name   -> Function Tales.TaleQuestMapService.UpdateMerchantMap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MapID                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTaleQuestDeliverableItem                   Deliverable                                                (Parm)
	 */
	void UTaleQuestMapService::UpdateMerchantMap(const class FName& MapID, int32_t Index, const struct FTaleQuestDeliverableItem& Deliverable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMapService.UpdateMerchantMap");
		
		UTaleQuestMapService_UpdateMerchantMap_Params params {};
		params.MapID = MapID;
		params.Index = Index;
		params.Deliverable = Deliverable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04265530
	 * 		Name   -> Function Tales.TaleQuestMapService.AdvanceRiddleMap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MapID                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestMapService::AdvanceRiddleMap(const class FName& MapID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMapService.AdvanceRiddleMap");
		
		UTaleQuestMapService_AdvanceRiddleMap_Params params {};
		params.MapID = MapID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMapService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMapService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestMapService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestMapServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestMapServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestMapServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddCargoRunMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddCargoRunMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddCargoRunMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddChecklistMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddChecklistMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddChecklistMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddCircleMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddCircleMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddCircleMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddMerchantMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddMerchantMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddMerchantMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddRiddleMapBaseStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddRiddleMapBaseStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapBaseStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddRiddleMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddRiddleMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddRiddleMapUsingVariableStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddRiddleMapUsingVariableStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddRiddleMapUsingVariableStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAddXMarksMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAddXMarksMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAddXMarksMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestAdvanceRiddleMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestAdvanceRiddleMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestAdvanceRiddleMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestRemoveMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestRemoveMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestRemoveMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestRemoveMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestRemoveMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestRemoveMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestUpdateMerchantMapStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestUpdateMerchantMapStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestUpdateMerchantMapStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestUpdateMerchantMapStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestUpdateMerchantMapStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestUpdateMerchantMapStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestWaitForChecklistMapCompletionStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestWaitForChecklistMapCompletionStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tales.TaleQuestWaitForChecklistMapCompletionStepDesc");
		return ptr;
	}

}


