/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.Create Map Downloading Dialog
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::Create_Map_Downloading_Dialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.Create Map Downloading Dialog");
		
		UBP_PlayMenu_C_Create_Map_Downloading_Dialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnLicenseConfirmed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::OnLicenseConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnLicenseConfirmed");
		
		UBP_PlayMenu_C_OnLicenseConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.UpdateLicenseWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::UpdateLicenseWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.UpdateLicenseWidget");
		
		UBP_PlayMenu_C_UpdateLicenseWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.HideCompetetiveOnConsole
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::HideCompetetiveOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.HideCompetetiveOnConsole");
		
		UBP_PlayMenu_C_HideCompetetiveOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.DisplayWaitingDialog
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::DisplayWaitingDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.DisplayWaitingDialog");
		
		UBP_PlayMenu_C_DisplayWaitingDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnClosedAccountRestrictionDialog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::OnClosedAccountRestrictionDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnClosedAccountRestrictionDialog");
		
		UBP_PlayMenu_C_OnClosedAccountRestrictionDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.DisplayAccountRestrictionDialog
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUserPrivilegeResult                               PrivilegeResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_C::DisplayAccountRestrictionDialog(EUserPrivilegeResult PrivilegeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.DisplayAccountRestrictionDialog");
		
		UBP_PlayMenu_C_DisplayAccountRestrictionDialog_Params params {};
		params.PrivilegeResult = PrivilegeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.GetCollapsedVisibilityOnConsole
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_PlayMenu_C::GetCollapsedVisibilityOnConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.GetCollapsedVisibilityOnConsole");
		
		UBP_PlayMenu_C_GetCollapsedVisibilityOnConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_PlayMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnKeyUp");
		
		UBP_PlayMenu_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnMatchRegionsConfirmed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::OnMatchRegionsConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnMatchRegionsConfirmed");
		
		UBP_PlayMenu_C_OnMatchRegionsConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.SkipTrainingAndAdvance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::SkipTrainingAndAdvance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.SkipTrainingAndAdvance");
		
		UBP_PlayMenu_C_SkipTrainingAndAdvance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.SwitchToTraining
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::SwitchToTraining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.SwitchToTraining");
		
		UBP_PlayMenu_C_SwitchToTraining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OpenModalPromptTutorial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::OpenModalPromptTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OpenModalPromptTutorial");
		
		UBP_PlayMenu_C_OpenModalPromptTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BeginMatchmakingInPlaylists
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UPlaylist*>                           InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               bSkipTutorial                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayMenu_C::BeginMatchmakingInPlaylists(TArray<class UPlaylist*>* InputPin, bool bSkipTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BeginMatchmakingInPlaylists");
		
		UBP_PlayMenu_C_BeginMatchmakingInPlaylists_Params params {};
		params.bSkipTutorial = bSkipTutorial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputPin != nullptr)
			*InputPin = params.InputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.HasActiveModal
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               HasModal                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayMenu_C::HasActiveModal(bool* HasModal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.HasActiveModal");
		
		UBP_PlayMenu_C_HasActiveModal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasModal != nullptr)
			*HasModal = params.HasModal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OpenModalRegionSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bContinueButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayMenu_C::OpenModalRegionSelection(bool bContinueButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OpenModalRegionSelection");
		
		UBP_PlayMenu_C_OpenModalRegionSelection_Params params {};
		params.bContinueButton = bContinueButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_PlayMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnFocusReceived");
		
		UBP_PlayMenu_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.CloseModal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::CloseModal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.CloseModal");
		
		UBP_PlayMenu_C_CloseModal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OpenModalPlaylistFeatures
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlaylist*                                   Playlist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_C::OpenModalPlaylistFeatures(class UPlaylist* Playlist, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OpenModalPlaylistFeatures");
		
		UBP_PlayMenu_C_OpenModalPlaylistFeatures_Params params {};
		params.Playlist = Playlist;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnPlaylistBrowserHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlaylist*                                   Playlist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_C::OnPlaylistBrowserHovered(class UPlaylist* Playlist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnPlaylistBrowserHovered");
		
		UBP_PlayMenu_C_OnPlaylistBrowserHovered_Params params {};
		params.Playlist = Playlist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.ClosePlaylistBrowser
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::ClosePlaylistBrowser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.ClosePlaylistBrowser");
		
		UBP_PlayMenu_C_ClosePlaylistBrowser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OpenPlaylistType
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPlaylistType                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_C::OpenPlaylistType(EPlaylistType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OpenPlaylistType");
		
		UBP_PlayMenu_C_OpenPlaylistType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.UpdateRegionPreferences
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::UpdateRegionPreferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.UpdateRegionPreferences");
		
		UBP_PlayMenu_C_UpdateRegionPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.GetRegionText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UBP_PlayMenu_C::GetRegionText(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.GetRegionText");
		
		UBP_PlayMenu_C_GetRegionText_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.Get_RegionList_Text
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_PlayMenu_C::Get_RegionList_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.Get_RegionList_Text");
		
		UBP_PlayMenu_C_Get_RegionList_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.UpdateBreadcrumbs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::UpdateBreadcrumbs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.UpdateBreadcrumbs");
		
		UBP_PlayMenu_C_UpdateBreadcrumbs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.GetInitialFocusTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_C::GetInitialFocusTarget(class UWidget** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.GetInitialFocusTarget");
		
		UBP_PlayMenu_C_GetInitialFocusTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.Get_PlayerName_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_PlayMenu_C::Get_PlayerName_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.Get_PlayerName_Text_1");
		
		UBP_PlayMenu_C_Get_PlayerName_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_6_OnFeatureSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPlaylist*                                   Playlist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_C::BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_6_OnFeatureSelected__DelegateSignature(class UPlaylist* Playlist, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_6_OnFeatureSelected__DelegateSignature");
		
		UBP_PlayMenu_C_BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_6_OnFeatureSelected__DelegateSignature_Params params {};
		params.Playlist = Playlist;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__ScenarioPreferences_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PlayMenu_C::BndEvt__ScenarioPreferences_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__ScenarioPreferences_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature");
		
		UBP_PlayMenu_C_BndEvt__ScenarioPreferences_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__RegionConfigButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PlayMenu_C::BndEvt__RegionConfigButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__RegionConfigButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UBP_PlayMenu_C_BndEvt__RegionConfigButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_9_OnFindGameRequested__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UPlaylist*>                           Playlist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_C::BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_9_OnFindGameRequested__DelegateSignature(TArray<class UPlaylist*>* Playlist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_9_OnFindGameRequested__DelegateSignature");
		
		UBP_PlayMenu_C_BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_9_OnFindGameRequested__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Playlist != nullptr)
			*Playlist = params.Playlist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_10_OnPlaylistHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPlaylist*                                   Playlist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_C::BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_10_OnPlaylistHovered__DelegateSignature(class UPlaylist* Playlist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_10_OnPlaylistHovered__DelegateSignature");
		
		UBP_PlayMenu_C_BndEvt__PlaylistBrowser_K2Node_ComponentBoundEvent_10_OnPlaylistHovered__DelegateSignature_Params params {};
		params.Playlist = Playlist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnPanelClosed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::OnPanelClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnPanelClosed");
		
		UBP_PlayMenu_C_OnPanelClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.DisplayRestrictionDialog
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EUserPrivilegeResult                               PrivilageRestriction                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_C::DisplayRestrictionDialog(EUserPrivilegeResult PrivilageRestriction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.DisplayRestrictionDialog");
		
		UBP_PlayMenu_C_DisplayRestrictionDialog_Params params {};
		params.PrivilageRestriction = PrivilageRestriction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.EventOnPlatformConnectionStatusChangedDelegate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bConnected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayMenu_C::EventOnPlatformConnectionStatusChangedDelegate(bool bConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.EventOnPlatformConnectionStatusChangedDelegate");
		
		UBP_PlayMenu_C_EventOnPlatformConnectionStatusChangedDelegate_Params params {};
		params.bConnected = bConnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__ColumnVersus_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PlayMenu_C::BndEvt__ColumnVersus_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__ColumnVersus_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");
		
		UBP_PlayMenu_C_BndEvt__ColumnVersus_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__BtnRegionPrefGamepad_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PlayMenu_C::BndEvt__BtnRegionPrefGamepad_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__BtnRegionPrefGamepad_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");
		
		UBP_PlayMenu_C_BndEvt__BtnRegionPrefGamepad_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__ColumnCoop_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PlayMenu_C::BndEvt__ColumnCoop_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__ColumnCoop_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
		
		UBP_PlayMenu_C_BndEvt__ColumnCoop_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.UpdateLicenseAgreementDialogBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::UpdateLicenseAgreementDialogBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.UpdateLicenseAgreementDialogBP");
		
		UBP_PlayMenu_C_UpdateLicenseAgreementDialogBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnPanelOpened
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::OnPanelOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnPanelOpened");
		
		UBP_PlayMenu_C_OnPanelOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PlayMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UBP_PlayMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.CheckUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLocalReady                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayMenu_C::CheckUpdate(bool bActive, bool bLocalReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.CheckUpdate");
		
		UBP_PlayMenu_C_CheckUpdate_Params params {};
		params.bActive = bActive;
		params.bLocalReady = bLocalReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__BP_MP_PlaylistTypeColumn_C_2_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PlayMenu_C::BndEvt__BP_MP_PlaylistTypeColumn_C_2_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BndEvt__BP_MP_PlaylistTypeColumn_C_2_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_PlayMenu_C_BndEvt__BP_MP_PlaylistTypeColumn_C_2_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.Construct");
		
		UBP_PlayMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.ExecuteUbergraph_BP_PlayMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_C::ExecuteUbergraph_BP_PlayMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.ExecuteUbergraph_BP_PlayMenu");
		
		UBP_PlayMenu_C_ExecuteUbergraph_BP_PlayMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnModalPopupClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::OnModalPopupClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnModalPopupClosed__DelegateSignature");
		
		UBP_PlayMenu_C_OnModalPopupClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnModalPopupOpened__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::OnModalPopupOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnModalPopupOpened__DelegateSignature");
		
		UBP_PlayMenu_C_OnModalPopupOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnMenuPageSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EnumMainMenuPage                                   PageName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayMenu_C::OnMenuPageSelected__DelegateSignature(EnumMainMenuPage PageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnMenuPageSelected__DelegateSignature");
		
		UBP_PlayMenu_C_OnMenuPageSelected__DelegateSignature_Params params {};
		params.PageName = PageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnCustomGameCreate__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::OnCustomGameCreate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnCustomGameCreate__DelegateSignature");
		
		UBP_PlayMenu_C_OnCustomGameCreate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.BreadcrumbsUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::BreadcrumbsUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.BreadcrumbsUpdated__DelegateSignature");
		
		UBP_PlayMenu_C_BreadcrumbsUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnNavigateBack__DelegateSignature");
		
		UBP_PlayMenu_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlayMenu.BP_PlayMenu_C.OnOpenServerBrowser__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlayMenu_C::OnOpenServerBrowser__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayMenu.BP_PlayMenu_C.OnOpenServerBrowser__DelegateSignature");
		
		UBP_PlayMenu_C_OnOpenServerBrowser__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PlayMenu.BP_PlayMenu_C");
		return ptr;
	}

}


