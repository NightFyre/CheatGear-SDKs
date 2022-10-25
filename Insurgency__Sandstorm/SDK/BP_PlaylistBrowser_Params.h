#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnAnalogValueChanged
	 */
	struct UBP_PlaylistBrowser_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateHoveredXPBoost
	 */
	struct UBP_PlaylistBrowser_C_UpdateHoveredXPBoost_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnKeyUp
	 */
	struct UBP_PlaylistBrowser_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnFocusReceived
	 */
	struct UBP_PlaylistBrowser_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateFindGameLock
	 */
	struct UBP_PlaylistBrowser_C_UpdateFindGameLock_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.GetSelectedPlaylists
	 */
	struct UBP_PlaylistBrowser_C_GetSelectedPlaylists_Params
	{
	public:
		TArray<class UPlaylist*>                                   Playlists;                                               // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.PersistPlaylistSelection
	 */
	struct UBP_PlaylistBrowser_C_PersistPlaylistSelection_Params
	{
	public:
		class UPlaylist*                                           Playlist;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WBD5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.EventPlaylistHovered
	 */
	struct UBP_PlaylistBrowser_C_EventPlaylistHovered_Params
	{
	public:
		bool                                                       bState;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JD6V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPlaylist*                                           Playlist;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FQueryOpenPoolsResultsEntry                         BackendData;                                             // 0x0010(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateFindGameButton
	 */
	struct UBP_PlaylistBrowser_C_UpdateFindGameButton_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateAbandonedBannerVisibility
	 */
	struct UBP_PlaylistBrowser_C_UpdateAbandonedBannerVisibility_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.UpdateCompPlacementBannerVisibility
	 */
	struct UBP_PlaylistBrowser_C_UpdateCompPlacementBannerVisibility_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnCompRatingUpdated
	 */
	struct UBP_PlaylistBrowser_C_OnCompRatingUpdated_Params
	{
	public:
		struct FCompetitiveRating                                  Rating;                                                  // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_ZVC5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.DetermineUpcomingExpiry
	 */
	struct UBP_PlaylistBrowser_C_DetermineUpcomingExpiry_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.TickPlaylistRefreshLogic
	 */
	struct UBP_PlaylistBrowser_C_TickPlaylistRefreshLogic_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.DetermineUpcomingReveals
	 */
	struct UBP_PlaylistBrowser_C_DetermineUpcomingReveals_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.Get_FindGameButton_Visibility_1
	 */
	struct UBP_PlaylistBrowser_C_Get_FindGameButton_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ISKH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.SetStatusOverlayState
	 */
	struct UBP_PlaylistBrowser_C_SetStatusOverlayState_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WLUP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.GenerateDeadlineText
	 */
	struct UBP_PlaylistBrowser_C_GenerateDeadlineText_Params
	{
	public:
		struct FDateTime                                           Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.FillLeftPanel
	 */
	struct UBP_PlaylistBrowser_C_FillLeftPanel_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnAvailablePlaylistsUpdated
	 */
	struct UBP_PlaylistBrowser_C_OnAvailablePlaylistsUpdated_Params
	{
	public:
		struct FAvailablePlaylists                                 Data;                                                    // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.InternalFeatureSelected
	 */
	struct UBP_PlaylistBrowser_C_InternalFeatureSelected_Params
	{
	public:
		int32_t                                                    Feature;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.HighlightHoveredPlaylist
	 */
	struct UBP_PlaylistBrowser_C_HighlightHoveredPlaylist_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.FillFeatures
	 */
	struct UBP_PlaylistBrowser_C_FillFeatures_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.FillMiddlePanel
	 */
	struct UBP_PlaylistBrowser_C_FillMiddlePanel_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.EventPlaylistSelected
	 */
	struct UBP_PlaylistBrowser_C_EventPlaylistSelected_Params
	{
	public:
		class UPlaylist*                                           Playlist;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FQueryOpenPoolsResultsEntry                         BackendData;                                             // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Selected;                                                // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OpenPlaylistType
	 */
	struct UBP_PlaylistBrowser_C_OpenPlaylistType_Params
	{
	public:
		EPlaylistType                                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YJF2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.Tick
	 */
	struct UBP_PlaylistBrowser_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_PlaylistBrowser_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__BtnRules_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_PlaylistBrowser_C_BndEvt__BtnRules_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnRatingUpdated
	 */
	struct UBP_PlaylistBrowser_C_OnRatingUpdated_Params
	{
	public:
		struct FCompetitiveRating                                  Rating;                                                  // 0x0000(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__FindGameBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UBP_PlaylistBrowser_C_BndEvt__FindGameBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnPartyJoinedDelegate_Event_1
	 */
	struct UBP_PlaylistBrowser_C_OnPartyJoinedDelegate_Event_1_Params
	{
	public:
		struct FINSPartyState                                      State;                                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnPartyLeftDelegate_Event_1
	 */
	struct UBP_PlaylistBrowser_C_OnPartyLeftDelegate_Event_1_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.Construct
	 */
	struct UBP_PlaylistBrowser_C_Construct_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.BndEvt__FindMatchBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBP_PlaylistBrowser_C_BndEvt__FindMatchBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnMemberPromotedDelegate_Event_1
	 */
	struct UBP_PlaylistBrowser_C_OnMemberPromotedDelegate_Event_1_Params
	{	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnUpdateNetworkStatus
	 */
	struct UBP_PlaylistBrowser_C_OnUpdateNetworkStatus_Params
	{
	public:
		bool                                                       bIsConnectedToWorldServices;                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.ExecuteUbergraph_BP_PlaylistBrowser
	 */
	struct UBP_PlaylistBrowser_C_ExecuteUbergraph_BP_PlaylistBrowser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnPlaylistHovered__DelegateSignature
	 */
	struct UBP_PlaylistBrowser_C_OnPlaylistHovered__DelegateSignature_Params
	{
	public:
		class UPlaylist*                                           Playlist;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnFindGameRequested__DelegateSignature
	 */
	struct UBP_PlaylistBrowser_C_OnFindGameRequested__DelegateSignature_Params
	{
	public:
		TArray<class UPlaylist*>                                   Playlist;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlaylistBrowser.BP_PlaylistBrowser_C.OnFeatureSelected__DelegateSignature
	 */
	struct UBP_PlaylistBrowser_C_OnFeatureSelected__DelegateSignature_Params
	{
	public:
		class UPlaylist*                                           Playlist;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
