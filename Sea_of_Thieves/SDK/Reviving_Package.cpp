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
	 * 		Name   -> PredefinedFunction UReviveSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.ReviveSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0372FA70
	 * 		Name   -> Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDeathSelfInteractionComponent::SetGiveUpAvaliable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reviving.DeathSelfInteractionComponent.SetGiveUpAvaliable");
		
		UDeathSelfInteractionComponent_SetGiveUpAvaliable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0372F9D0
	 * 		Name   -> Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDeathSelfInteractionComponent::OnRep_HasGivenUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reviving.DeathSelfInteractionComponent.OnRep_HasGivenUp");
		
		UDeathSelfInteractionComponent_OnRep_HasGivenUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeathSelfInteractionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeathSelfInteractionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.DeathSelfInteractionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPostReviveLocomotionActionStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostReviveLocomotionActionStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.PostReviveLocomotionActionStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevivableStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevivableStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.RevivableStatus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveableActionStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveableActionStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.ReviveableActionStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveableCharacterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveableCharacterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.ReviveableCharacterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveableRepresentationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveableRepresentationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.ReviveableRepresentationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveAudioComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveAudioComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.ReviveAudioComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.ReviveInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0372F9F0
	 * 		Name   -> Function Reviving.ReviveComponent.OnRep_ReviveState
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EReviveState                                       PreviousReviveState                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReviveComponent::OnRep_ReviveState(EReviveState PreviousReviveState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reviving.ReviveComponent.OnRep_ReviveState");
		
		UReviveComponent_OnRep_ReviveState_Params params {};
		params.PreviousReviveState = PreviousReviveState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0372F9B0
	 * 		Name   -> Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UReviveComponent::HandleOwningCharacterEndPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay");
		
		UReviveComponent_HandleOwningCharacterEndPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.ReviveComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveConditionalStatTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveConditionalStatTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.ReviveConditionalStatTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevivedActionStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevivedActionStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.RevivedActionStateId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveDebugComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveDebugComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.ReviveDebugComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReviveEffectsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReviveEffectsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.ReviveEffectsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AReviveGhost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AReviveGhost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.ReviveGhost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevivePlayerActionStateId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevivePlayerActionStateId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Reviving.RevivePlayerActionStateId");
		return ptr;
	}

}


