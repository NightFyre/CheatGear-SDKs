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
	 * 		Name   -> PredefinedFunction UCaptaincyTutorialDesc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaptaincyTutorialDesc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.CaptaincyTutorialDesc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04010590
	 * 		Name   -> Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FText                                        VoyageName                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool UCompanyTutorialVoyageProgress::IsSameVoyage(const class FText& VoyageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage");
		
		UCompanyTutorialVoyageProgress_IsSameVoyage_Params params {};
		params.VoyageName = VoyageName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04010330
	 * 		Name   -> Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      VoyageProposalDescClass                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UClass*                                      TaleRankDescClass                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UCompanyTutorialVoyageProgress::AssignVoyage(class UClass* VoyageProposalDescClass, class UClass* TaleRankDescClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage");
		
		UCompanyTutorialVoyageProgress_AssignVoyage_Params params {};
		params.VoyageProposalDescClass = VoyageProposalDescClass;
		params.TaleRankDescClass = TaleRankDescClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompanyTutorialVoyageProgress.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompanyTutorialVoyageProgress::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.CompanyTutorialVoyageProgress");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextualTutorialComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextualTutorialComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.ContextualTutorialComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasTutorialStarterBegunNPCDialogConditional.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasTutorialStarterBegunNPCDialogConditional::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.HasTutorialStarterBegunNPCDialogConditional");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnboardingStatusInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnboardingStatusInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.OnboardingStatusInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer");
		
		UTutorial2019Component_ReceiveTutorial2019BeginPlayOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient");
		
		UTutorial2019Component_ReceiveTutorial2019BeginPlayOnClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04010650
	 * 		Name   -> Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               OldIsEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTutorial2019Component::OnRep_IsEnabledByServer(bool OldIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer");
		
		UTutorial2019Component_OnRep_IsEnabledByServer_Params params {};
		params.OldIsEnabled = OldIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTutorial2019Component::ForceDisableComponent_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint");
		
		UTutorial2019Component_ForceDisableComponent_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040103F0
	 * 		Name   -> Function Tutorial.Tutorial2019Component.BeginOnServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTutorial2019Component::BeginOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.BeginOnServer");
		
		UTutorial2019Component_BeginOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorial2019Component.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorial2019Component::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.Tutorial2019Component");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorial2019ContextualDelegatingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorial2019ContextualDelegatingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.Tutorial2019ContextualDelegatingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040104C0
	 * 		Name   -> Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      CharacterToTeleport                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTeleportLocation UTutorial2019FunctionLibrary::STATIC_GetNearestOnboardingSpawnPoint(class AActor* CharacterToTeleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint");
		
		UTutorial2019FunctionLibrary_GetNearestOnboardingSpawnPoint_Params params {};
		params.CharacterToTeleport = CharacterToTeleport;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorial2019FunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorial2019FunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.Tutorial2019FunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04010410
	 * 		Name   -> Function Tutorial.TutorialHelpersBlueprintLibrary.FirePromptCompleted
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      AccessKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialHelpersBlueprintLibrary::STATIC_FirePromptCompleted(class UClass* AccessKey, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.TutorialHelpersBlueprintLibrary.FirePromptCompleted");
		
		UTutorialHelpersBlueprintLibrary_FirePromptCompleted_Params params {};
		params.AccessKey = AccessKey;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialHelpersBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialHelpersBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.TutorialHelpersBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialManagerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialManagerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.TutorialManagerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04010700
	 * 		Name   -> Function Tutorial.TutorialManager.OnRep_TutorialType
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTutorialManager::OnRep_TutorialType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.TutorialManager.OnRep_TutorialType");
		
		UTutorialManager_OnRep_TutorialType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040106E0
	 * 		Name   -> Function Tutorial.TutorialManager.OnRep_SelectedTutorialClass
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTutorialManager::OnRep_SelectedTutorialClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.TutorialManager.OnRep_SelectedTutorialClass");
		
		UTutorialManager_OnRep_SelectedTutorialClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.TutorialManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialStarter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialStarter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.TutorialStarter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBeachNPCSpawnFlowStarter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBeachNPCSpawnFlowStarter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.BeachNPCSpawnFlowStarter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaptaincyStarter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaptaincyStarter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.CaptaincyStarter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04010560
	 * 		Name   -> Function Tutorial.CompanyOnboardingStarter.HasPrerequisites
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	bool UCompanyOnboardingStarter::HasPrerequisites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyOnboardingStarter.HasPrerequisites");
		
		UCompanyOnboardingStarter_HasPrerequisites_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompanyOnboardingStarter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompanyOnboardingStarter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.CompanyOnboardingStarter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaidenVoyageStarter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaidenVoyageStarter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tutorial.MaidenVoyageStarter");
		return ptr;
	}

}


