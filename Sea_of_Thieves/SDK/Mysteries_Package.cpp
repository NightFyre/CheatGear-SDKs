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
	 * 		Name   -> PredefinedFunction UAbandonedNoteWeightedTextDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteWeightedTextDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mysteries.AbandonedNoteWeightedTextDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C88E90
	 * 		Name   -> Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_TitleText
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAbandonedNoteWeightedTextSourceComponent::OnRep_TitleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_TitleText");
		
		UAbandonedNoteWeightedTextSourceComponent_OnRep_TitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C88DC0
	 * 		Name   -> Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_ClueText
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAbandonedNoteWeightedTextSourceComponent::OnRep_ClueText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mysteries.AbandonedNoteWeightedTextSourceComponent.OnRep_ClueText");
		
		UAbandonedNoteWeightedTextSourceComponent_OnRep_ClueText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbandonedNoteWeightedTextSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbandonedNoteWeightedTextSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mysteries.AbandonedNoteWeightedTextSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOneShotRewardableObjectBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOneShotRewardableObjectBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mysteries.OneShotRewardableObjectBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPopUpNotificationOnItemWieldedComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPopUpNotificationOnItemWieldedComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mysteries.PopUpNotificationOnItemWieldedComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C88ED0
	 * 		Name   -> Function Mysteries.SirenPuzzleContext.Unlock
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       LockId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FGuid                                       CrewId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ASirenPuzzleContext::Unlock(const struct FGuid& LockId, const struct FGuid& CrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mysteries.SirenPuzzleContext.Unlock");
		
		ASirenPuzzleContext_Unlock_Params params {};
		params.LockId = LockId;
		params.CrewId = CrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C88EB0
	 * 		Name   -> Function Mysteries.SirenPuzzleContext.ResetUnlock
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 */
	void ASirenPuzzleContext::ResetUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mysteries.SirenPuzzleContext.ResetUnlock");
		
		ASirenPuzzleContext_ResetUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C88DE0
	 * 		Name   -> Function Mysteries.SirenPuzzleContext.OnRep_LockStates
	 * 		Flags  -> (Final, RequiredAPI, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<unsigned char>                              OldStates                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ASirenPuzzleContext::OnRep_LockStates(TArray<unsigned char> OldStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mysteries.SirenPuzzleContext.OnRep_LockStates");
		
		ASirenPuzzleContext_OnRep_LockStates_Params params {};
		params.OldStates = OldStates;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C88D20
	 * 		Name   -> Function Mysteries.SirenPuzzleContext.DeactivateLock
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       LockId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ASirenPuzzleContext::DeactivateLock(const struct FGuid& LockId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mysteries.SirenPuzzleContext.DeactivateLock");
		
		ASirenPuzzleContext_DeactivateLock_Params params {};
		params.LockId = LockId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03C88C80
	 * 		Name   -> Function Mysteries.SirenPuzzleContext.ActivateLock
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGuid                                       LockId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ASirenPuzzleContext::ActivateLock(const struct FGuid& LockId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mysteries.SirenPuzzleContext.ActivateLock");
		
		ASirenPuzzleContext_ActivateLock_Params params {};
		params.LockId = LockId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASirenPuzzleContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASirenPuzzleContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mysteries.SirenPuzzleContext");
		return ptr;
	}

}


