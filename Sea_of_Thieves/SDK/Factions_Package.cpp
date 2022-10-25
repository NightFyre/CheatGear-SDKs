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
	 * 		Name   -> PredefinedFunction UFactionSettingsAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactionSettingsAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionSettingsAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrewFactionOwnershipInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrewFactionOwnershipInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.CrewFactionOwnershipInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042B3600
	 * 		Name   -> Function Factions.FactionFlipMeshComponent.OnRep_IsFlipping
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UFactionFlipMeshComponent::OnRep_IsFlipping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionFlipMeshComponent.OnRep_IsFlipping");
		
		UFactionFlipMeshComponent_OnRep_IsFlipping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFactionFlipMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactionFlipMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionFlipMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFactionInterationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactionInterationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionInterationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFactionInteractionVoteComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactionInteractionVoteComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionInteractionVoteComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFactionServiceDebugRepActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFactionServiceDebugRepActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionServiceDebugRepActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042B3550
	 * 		Name   -> Function Factions.FactionService.OnRep_FactionAlignedCrews
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FCrewFactionEntry>                   PreviousCrews                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AFactionService::OnRep_FactionAlignedCrews(TArray<struct FCrewFactionEntry> PreviousCrews)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionService.OnRep_FactionAlignedCrews");
		
		AFactionService_OnRep_FactionAlignedCrews_Params params {};
		params.PreviousCrews = PreviousCrews;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFactionService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFactionService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFactionVoteAudioComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactionVoteAudioComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionVoteAudioComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042B3620
	 * 		Name   -> Function Factions.FactionVoteConsumerBase.OnRep_Votes
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFactionVoteConsumerBase::OnRep_Votes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionVoteConsumerBase.OnRep_Votes");
		
		UFactionVoteConsumerBase_OnRep_Votes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFactionVoteConsumerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactionVoteConsumerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionVoteConsumerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartFactionVoyageVoteConsumer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartFactionVoyageVoteConsumer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.StartFactionVoyageVoteConsumer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStopFactionVoyageVoteConsumer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStopFactionVoyageVoteConsumer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.StopFactionVoyageVoteConsumer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFactionVoteInteractionActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFactionVoteInteractionActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionVoteInteractionActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042B3530
	 * 		Name   -> Function Factions.FactionVoteValidatorBase.OnRep_CurrentCompany
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UFactionVoteValidatorBase::OnRep_CurrentCompany()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionVoteValidatorBase.OnRep_CurrentCompany");
		
		UFactionVoteValidatorBase_OnRep_CurrentCompany_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFactionVoteValidatorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactionVoteValidatorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionVoteValidatorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartFactionVoyageVoteValidator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartFactionVoyageVoteValidator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.StartFactionVoyageVoteValidator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStopFactionVoyageVoteValidator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStopFactionVoyageVoteValidator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.StopFactionVoyageVoteValidator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsInFactionStatCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsInFactionStatCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.IsInFactionStatCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042B3510
	 * 		Name   -> Function Factions.ShipFactionCustomisation.OnLeavingFightEndVFX
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UShipFactionCustomisation::OnLeavingFightEndVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.ShipFactionCustomisation.OnLeavingFightEndVFX");
		
		UShipFactionCustomisation_OnLeavingFightEndVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042B34F0
	 * 		Name   -> Function Factions.ShipFactionCustomisation.OnJoiningFightStartVFX
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UShipFactionCustomisation::OnJoiningFightStartVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.ShipFactionCustomisation.OnJoiningFightStartVFX");
		
		UShipFactionCustomisation_OnJoiningFightStartVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipFactionCustomisation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipFactionCustomisation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.ShipFactionCustomisation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipSunkTrackingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipSunkTrackingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.ShipSunkTrackingComponent");
		return ptr;
	}

}


