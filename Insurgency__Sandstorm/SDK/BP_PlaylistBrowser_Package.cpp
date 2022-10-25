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
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnAnalogValueChanged
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_PlaylistBrowser_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnAnalogValueChanged");
		
		UBP_PlaylistBrowser_C_OnAnalogValueChanged_Params params {};
		params.MyGeometry = MyGeometry;
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateHoveredXPBoost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::UpdateHoveredXPBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateHoveredXPBoost");
		
		UBP_PlaylistBrowser_C_UpdateHoveredXPBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_PlaylistBrowser_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnKeyUp");
		
		UBP_PlaylistBrowser_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_PlaylistBrowser_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnFocusReceived");
		
		UBP_PlaylistBrowser_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateFindGameLock
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::UpdateFindGameLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateFindGameLock");
		
		UBP_PlaylistBrowser_C_UpdateFindGameLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.GetSelectedPlaylists
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UPlaylist*>                           Playlists                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_PlaylistBrowser_C::GetSelectedPlaylists(TArray<class UPlaylist*>* Playlists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.GetSelectedPlaylists");
		
		UBP_PlaylistBrowser_C_GetSelectedPlaylists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Playlists != nullptr)
			*Playlists = params.Playlists;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.PersistPlaylistSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlaylist*                                   Playlist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlaylistBrowser_C::PersistPlaylistSelection(class UPlaylist* Playlist, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.PersistPlaylistSelection");
		
		UBP_PlaylistBrowser_C_PersistPlaylistSelection_Params params {};
		params.Playlist = Playlist;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.EventPlaylistHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPlaylist*                                   Playlist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FQueryOpenPoolsResultsEntry                 BackendData                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_PlaylistBrowser_C::EventPlaylistHovered(bool bState, class UPlaylist* Playlist, const struct FQueryOpenPoolsResultsEntry& BackendData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.EventPlaylistHovered");
		
		UBP_PlaylistBrowser_C_EventPlaylistHovered_Params params {};
		params.bState = bState;
		params.Playlist = Playlist;
		params.BackendData = BackendData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateFindGameButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::UpdateFindGameButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateFindGameButton");
		
		UBP_PlaylistBrowser_C_UpdateFindGameButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateAbandonedBannerVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::UpdateAbandonedBannerVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateAbandonedBannerVisibility");
		
		UBP_PlaylistBrowser_C_UpdateAbandonedBannerVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateCompPlacementBannerVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::UpdateCompPlacementBannerVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateCompPlacementBannerVisibility");
		
		UBP_PlaylistBrowser_C_UpdateCompPlacementBannerVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnCompRatingUpdated
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompetitiveRating                          Rating                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_PlaylistBrowser_C::OnCompRatingUpdated(const struct FCompetitiveRating& Rating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnCompRatingUpdated");
		
		UBP_PlaylistBrowser_C_OnCompRatingUpdated_Params params {};
		params.Rating = Rating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.DetermineUpcomingExpiry
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::DetermineUpcomingExpiry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.DetermineUpcomingExpiry");
		
		UBP_PlaylistBrowser_C_DetermineUpcomingExpiry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.TickPlaylistRefreshLogic
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::TickPlaylistRefreshLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.TickPlaylistRefreshLogic");
		
		UBP_PlaylistBrowser_C_TickPlaylistRefreshLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.DetermineUpcomingReveals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::DetermineUpcomingReveals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.DetermineUpcomingReveals");
		
		UBP_PlaylistBrowser_C_DetermineUpcomingReveals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.Get_FindGameButton_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_PlaylistBrowser_C::Get_FindGameButton_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.Get_FindGameButton_Visibility_1");
		
		UBP_PlaylistBrowser_C_Get_FindGameButton_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.SetStatusOverlayState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_PlaylistBrowser_C::SetStatusOverlayState(bool Visible, const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.SetStatusOverlayState");
		
		UBP_PlaylistBrowser_C_SetStatusOverlayState_Params params {};
		params.Visible = Visible;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.GenerateDeadlineText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FDateTime                                   Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBP_PlaylistBrowser_C::GenerateDeadlineText(const struct FDateTime& Time, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.GenerateDeadlineText");
		
		UBP_PlaylistBrowser_C_GenerateDeadlineText_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.FillLeftPanel
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::FillLeftPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.FillLeftPanel");
		
		UBP_PlaylistBrowser_C_FillLeftPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnAvailablePlaylistsUpdated
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAvailablePlaylists                         Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_PlaylistBrowser_C::OnAvailablePlaylistsUpdated(struct FAvailablePlaylists* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnAvailablePlaylistsUpdated");
		
		UBP_PlaylistBrowser_C_OnAvailablePlaylistsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.InternalFeatureSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Feature                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlaylistBrowser_C::InternalFeatureSelected(int32_t Feature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.InternalFeatureSelected");
		
		UBP_PlaylistBrowser_C_InternalFeatureSelected_Params params {};
		params.Feature = Feature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.HighlightHoveredPlaylist
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::HighlightHoveredPlaylist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.HighlightHoveredPlaylist");
		
		UBP_PlaylistBrowser_C_HighlightHoveredPlaylist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.FillFeatures
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::FillFeatures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.FillFeatures");
		
		UBP_PlaylistBrowser_C_FillFeatures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.FillMiddlePanel
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::FillMiddlePanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.FillMiddlePanel");
		
		UBP_PlaylistBrowser_C_FillMiddlePanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.EventPlaylistSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlaylist*                                   Playlist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FQueryOpenPoolsResultsEntry                 BackendData                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlaylistBrowser_C::EventPlaylistSelected(class UPlaylist* Playlist, const struct FQueryOpenPoolsResultsEntry& BackendData, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.EventPlaylistSelected");
		
		UBP_PlaylistBrowser_C_EventPlaylistSelected_Params params {};
		params.Playlist = Playlist;
		params.BackendData = BackendData;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OpenPlaylistType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPlaylistType                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlaylistBrowser_C::OpenPlaylistType(EPlaylistType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OpenPlaylistType");
		
		UBP_PlaylistBrowser_C_OpenPlaylistType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlaylistBrowser_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.Tick");
		
		UBP_PlaylistBrowser_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_PlaylistBrowser_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__BtnRules_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::BndEvt__BtnRules_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__BtnRules_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBP_PlaylistBrowser_C_BndEvt__BtnRules_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnRatingUpdated
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompetitiveRating                          Rating                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PlaylistBrowser_C::OnRatingUpdated(const struct FCompetitiveRating& Rating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnRatingUpdated");
		
		UBP_PlaylistBrowser_C_OnRatingUpdated_Params params {};
		params.Rating = Rating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__FindGameBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::BndEvt__FindGameBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__FindGameBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UBP_PlaylistBrowser_C_BndEvt__FindGameBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnPartyJoinedDelegate_Event_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FINSPartyState                              State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_PlaylistBrowser_C::OnPartyJoinedDelegate_Event_1(const struct FINSPartyState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnPartyJoinedDelegate_Event_1");
		
		UBP_PlaylistBrowser_C_OnPartyJoinedDelegate_Event_1_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnPartyLeftDelegate_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::OnPartyLeftDelegate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnPartyLeftDelegate_Event_1");
		
		UBP_PlaylistBrowser_C_OnPartyLeftDelegate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.Construct");
		
		UBP_PlaylistBrowser_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__FindMatchBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::BndEvt__FindMatchBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__FindMatchBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBP_PlaylistBrowser_C_BndEvt__FindMatchBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnMemberPromotedDelegate_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PlaylistBrowser_C::OnMemberPromotedDelegate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnMemberPromotedDelegate_Event_1");
		
		UBP_PlaylistBrowser_C_OnMemberPromotedDelegate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnUpdateNetworkStatus
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsConnectedToWorldServices                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlaylistBrowser_C::OnUpdateNetworkStatus(bool bIsConnectedToWorldServices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnUpdateNetworkStatus");
		
		UBP_PlaylistBrowser_C_OnUpdateNetworkStatus_Params params {};
		params.bIsConnectedToWorldServices = bIsConnectedToWorldServices;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.ExecuteUbergraph_BP_PlaylistBrowser
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlaylistBrowser_C::ExecuteUbergraph_BP_PlaylistBrowser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.ExecuteUbergraph_BP_PlaylistBrowser");
		
		UBP_PlaylistBrowser_C_ExecuteUbergraph_BP_PlaylistBrowser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnPlaylistHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlaylist*                                   Playlist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlaylistBrowser_C::OnPlaylistHovered__DelegateSignature(class UPlaylist* Playlist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnPlaylistHovered__DelegateSignature");
		
		UBP_PlaylistBrowser_C_OnPlaylistHovered__DelegateSignature_Params params {};
		params.Playlist = Playlist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnFindGameRequested__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UPlaylist*>                           Playlist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_PlaylistBrowser_C::OnFindGameRequested__DelegateSignature(TArray<class UPlaylist*>* Playlist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnFindGameRequested__DelegateSignature");
		
		UBP_PlaylistBrowser_C_OnFindGameRequested__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Playlist != nullptr)
			*Playlist = params.Playlist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnFeatureSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlaylist*                                   Playlist                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlaylistBrowser_C::OnFeatureSelected__DelegateSignature(class UPlaylist* Playlist, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnFeatureSelected__DelegateSignature");
		
		UBP_PlaylistBrowser_C_OnFeatureSelected__DelegateSignature_Params params {};
		params.Playlist = Playlist;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlaylistBrowser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlaylistBrowser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PlaylistBrowser.BP_PlaylistBrowser_C");
		return ptr;
	}

}


