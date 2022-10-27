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
	 * 		Name   -> PredefinedFunction UEmissaryActionRewardBoostComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryActionRewardBoostComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryActionRewardBoostComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F4D40
	 * 		Name   -> Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmissaryActiveTableVisualiserComponent::OnControllerEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay");
		
		UEmissaryActiveTableVisualiserComponent_OnControllerEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryActiveTableVisualiserComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryActiveTableVisualiserComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryActiveTableVisualiserComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryEntitlementCategory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryEntitlementCategory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryEntitlementCategory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryEntitlementDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryEntitlementDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryEntitlementDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryFlotsamDuplicationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryFlotsamDuplicationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamDuplicationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmissaryFlotsamItemInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmissaryFlotsamItemInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamItemInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryFlotsamItemSpawnComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryFlotsamItemSpawnComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryFlotsamTooltipCustomizerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryFlotsamTooltipCustomizerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryLevelSettingsAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryLevelSettingsAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryLevelSettingsAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmissaryLevelService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmissaryLevelService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryLevelService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryMaxRankQuestProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryMaxRankQuestProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryMaxRankQuestProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F4E70
	 * 		Name   -> Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UEmissaryParticipantComponent::OnRep_EmissaryLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel");
		
		UEmissaryParticipantComponent_OnRep_EmissaryLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F4DC0
	 * 		Name   -> Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class FName                                        PreviousId                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmissaryParticipantComponent::OnRep_AffiliatedCompany(const class FName& PreviousId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany");
		
		UEmissaryParticipantComponent_OnRep_AffiliatedCompany_Params params {};
		params.PreviousId = PreviousId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryParticipantComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryParticipantComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryParticipantComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryRepresentationMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryRepresentationMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryRepresentationMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryRewardCampaignSettingsAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryRewardCampaignSettingsAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryRewardCampaignSettingsAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryRewardSettingsAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryRewardSettingsAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryRewardSettingsAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F4E50
	 * 		Name   -> Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UEmissaryShipAffiliationTrackerComponent::OnRep_EmissaryCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount");
		
		UEmissaryShipAffiliationTrackerComponent_OnRep_EmissaryCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryShipAffiliationTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryShipAffiliationTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F4E90
	 * 		Name   -> Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UEmissaryVoyageInlineVoteConsumerBase::OnRep_Votes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes");
		
		UEmissaryVoyageInlineVoteConsumerBase_OnRep_Votes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryVoyageInlineVoteConsumerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryVoyageInlineVoteConsumerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartEmissaryVoyageInlineVoteConsumer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartEmissaryVoyageInlineVoteConsumer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStopEmissaryVoyageInlineVoteConsumer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStopEmissaryVoyageInlineVoteConsumer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissaryVoyageVoteValidatorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissaryVoyageVoteValidatorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.EmissaryVoyageVoteValidatorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartEmissaryVoyageInlineVoteValidator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartEmissaryVoyageInlineVoteValidator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStopEmissaryVoyageInlineVoteValidator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStopEmissaryVoyageInlineVoteValidator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsAnEmissaryStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsAnEmissaryStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.IsAnEmissaryStatCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsEmissaryStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsEmissaryStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmissaryLevel.IsEmissaryStatCondition");
		return ptr;
	}

}


