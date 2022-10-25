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
	 * 		Name   -> PredefinedFunction UClueSiteData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueSiteData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueSiteData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueSiteType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueSiteType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueSiteType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandClueCreator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandClueCreator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.LandClueCreator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeaClueCreator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeaClueCreator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.SeaClueCreator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueChoiceSelectionStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueChoiceSelectionStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueChoiceSelectionStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFixedClueChoiceSelectionStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedClueChoiceSelectionStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.FixedClueChoiceSelectionStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URandomClueChoiceSelectionStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URandomClueChoiceSelectionStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.RandomClueChoiceSelectionStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013FF830
	 * 		Name   -> Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo
	 * 		Flags  -> (Native, Public)
	 */
	void UClueDestinationDescriptor::OnRep_DestinationInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo");
		
		UClueDestinationDescriptor_OnRep_DestinationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueDestinationDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueDestinationDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDestinationDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueDescriptor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueDescriptor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDescriptor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013FF490
	 * 		Name   -> Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UClueConnectionConfig*                       ConnectionConfiguration                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Difficulty                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              AllowedClueTypes                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
	 * 		class UTaleQuestSelectorService*                   SelectorService                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SourceLocation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FClueSite                                   TargetSite                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class UClueDescriptor* UClueConnectionBlueprintFunctionLibrary::STATIC_CreateCluePointingToSite(class UClueConnectionConfig* ConnectionConfiguration, int32_t Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, const struct FClueSite& TargetSite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite");
		
		UClueConnectionBlueprintFunctionLibrary_CreateCluePointingToSite_Params params {};
		params.ConnectionConfiguration = ConnectionConfiguration;
		params.Difficulty = Difficulty;
		params.AllowedClueTypes = AllowedClueTypes;
		params.SelectorService = SelectorService;
		params.SourceLocation = SourceLocation;
		params.TargetSite = TargetSite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueConnectionBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueConnectionBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueDescriptorGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueDescriptorGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDescriptorGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueDestinationGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueDestinationGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDestinationGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueConnectionConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueConnectionConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueConnectionConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueDescriptorContainerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueDescriptorContainerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDescriptorContainerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueDescriptorContainerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueDescriptorContainerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDescriptorContainerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueFactoryConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueFactoryConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueFactoryConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013FF740
	 * 		Name   -> Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Participant                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClueDescriptor*                             Clue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ClueSite                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UClueLifetimeBlueprintFunctionLibrary::STATIC_GiveClueToParticipant(class AActor* Participant, class UClueDescriptor* Clue, class UClass* ClueSite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant");
		
		UClueLifetimeBlueprintFunctionLibrary_GiveClueToParticipant_Params params {};
		params.Participant = Participant;
		params.Clue = Clue;
		params.ClueSite = ClueSite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueLifetimeBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueLifetimeBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClueSiteLootRestrictionsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClueSiteLootRestrictionsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueSiteLootRestrictionsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebrisForVoyageRankDescAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebrisForVoyageRankDescAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.DebrisForVoyageRankDescAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_SeaClueSpawnLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_SeaClueSpawnLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.EnvQueryTest_SeaClueSpawnLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULootForVoyageRankDescAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootForVoyageRankDescAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.LootForVoyageRankDescAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCLootSpawnInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCLootSpawnInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.NPCLootSpawnInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCLootSpawnComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCLootSpawnComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.NPCLootSpawnComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeaClueSiteTypesDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeaClueSiteTypesDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.SeaClueSiteTypesDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestChooseLandOrSeaStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestChooseLandOrSeaStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013FF6A0
	 * 		Name   -> Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FClueSite> UTaleQuestClueSiteService::GetClueSites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites");
		
		UTaleQuestClueSiteService_GetClueSites_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestClueSiteService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestClueSiteService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestClueSiteService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestClueSiteServiceDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestClueSiteServiceDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestClueSiteServiceDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestChooseLandOrSeaStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestChooseLandOrSeaStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGenerateCluePointingToSiteStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGenerateCluePointingToSiteStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGenerateCluePointingToSiteStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGenerateCluePointingToSiteStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGenerateClueSiteAtSeaLocationStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGenerateClueSiteAtSeaLocationStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGenerateClueSiteAtSeaLocationStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGenerateClueSiteAtSeaLocationStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGenerateClueSiteOnIslandStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGenerateClueSiteOnIslandStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGenerateClueSiteOnIslandStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGenerateClueSiteOnIslandStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGenerateDebrisTypeForVoyageRankStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGenerateDebrisTypeForVoyageRankStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateDebrisTypeForVoyageRankStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGenerateDebrisTypeForVoyageRankStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGenerateDebrisTypeForVoyageRankStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateDebrisTypeForVoyageRankStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGenerateLootDescForVoyageRankStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGenerateLootDescForVoyageRankStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestGenerateLootDescForVoyageRankStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestGenerateLootDescForVoyageRankStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestIsClueOfTypeStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestIsClueOfTypeStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestIsClueOfTypeStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestIsClueOfTypeStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSelectClueSiteForLootStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSelectClueSiteForLootStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestSelectClueSiteForLootStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSelectClueSiteForLootStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSelectClueSiteForLootStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestSelectClueSiteForLootStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSpawnDebrisAtClueSiteStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSpawnDebrisAtClueSiteStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestSpawnDebrisAtClueSiteStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSpawnDebrisAtClueSiteStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSpawnDebrisAtClueSiteStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestSpawnDebrisAtClueSiteStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSpawnLootItemInClueSiteStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSpawnLootItemInClueSiteStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestSpawnLootItemInClueSiteStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestSpawnLootItemInClueSiteStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStoreClueOnActorStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStoreClueOnActorStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestStoreClueOnActorStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestStoreClueOnActorStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeightedDebrisDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeightedDebrisDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostShipmentsClueFramework.WeightedDebrisDataAsset");
		return ptr;
	}

}


