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
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.ChangeVisibilityForConsoles
	 */
	struct UBP_ServerBrowser_C_ChangeVisibilityForConsoles_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.LoadServerBrowserPreferences
	 */
	struct UBP_ServerBrowser_C_LoadServerBrowserPreferences_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.HideAllDialogs
	 */
	struct UBP_ServerBrowser_C_HideAllDialogs_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.HideErrorDialog
	 */
	struct UBP_ServerBrowser_C_HideErrorDialog_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.JoinModdedServer
	 */
	struct UBP_ServerBrowser_C_JoinModdedServer_Params
	{
	public:
		bool                                                       bNeverAskAgain;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.HideModdedServerConsentDialog
	 */
	struct UBP_ServerBrowser_C_HideModdedServerConsentDialog_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.ShowModdedServerConsentDialog
	 */
	struct UBP_ServerBrowser_C_ShowModdedServerConsentDialog_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.JoinPendingSession
	 */
	struct UBP_ServerBrowser_C_JoinPendingSession_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.SortRuleset
	 */
	struct UBP_ServerBrowser_C_SortRuleset_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.CheckTestingBuild
	 */
	struct UBP_ServerBrowser_C_CheckTestingBuild_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.DebugServer
	 */
	struct UBP_ServerBrowser_C_DebugServer_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.SaveServerBrowserSettings
	 */
	struct UBP_ServerBrowser_C_SaveServerBrowserSettings_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.FindServersWithString
	 */
	struct UBP_ServerBrowser_C_FindServersWithString_Params
	{
	public:
		class FString                                              SearchForServers;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.MoveToServerSelection
	 */
	struct UBP_ServerBrowser_C_MoveToServerSelection_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.Get_PingSortUpDown_Brush_1
	 */
	struct UBP_ServerBrowser_C_Get_PingSortUpDown_Brush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.UpdateSortButtonColors
	 */
	struct UBP_ServerBrowser_C_UpdateSortButtonColors_Params
	{
	public:
		EServerListSortType                                        SortedBy;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T02O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.ResortServers
	 */
	struct UBP_ServerBrowser_C_ResortServers_Params
	{
	public:
		EServerListSortType                                        SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reverse;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9AGG[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.ResetState
	 */
	struct UBP_ServerBrowser_C_ResetState_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.ClearServerList
	 */
	struct UBP_ServerBrowser_C_ClearServerList_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.OnTypeSearching
	 */
	struct UBP_ServerBrowser_C_OnTypeSearching_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ShouldReverse;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.ShouldRowBeFiltered
	 */
	struct UBP_ServerBrowser_C_ShouldRowBeFiltered_Params
	{
	public:
		class UServerListEntry*                                    Server;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShouldFilterOut;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EXKC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.RecreateServerListRows
	 */
	struct UBP_ServerBrowser_C_RecreateServerListRows_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.SearchResultToRowObject
	 */
	struct UBP_ServerBrowser_C_SearchResultToRowObject_Params
	{
	public:
		struct FBlueprintFindSessionResult                         SearchResult;                                            // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UServerListEntry*                                    Obj;                                                     // 0x00B8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.JoinPasswordedServer
	 */
	struct UBP_ServerBrowser_C_JoinPasswordedServer_Params
	{
	public:
		class FText                                                EnteredPassword;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.HidePasswordInterface
	 */
	struct UBP_ServerBrowser_C_HidePasswordInterface_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.ShowPasswordInterface
	 */
	struct UBP_ServerBrowser_C_ShowPasswordInterface_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.OnJoinSessionRequested
	 */
	struct UBP_ServerBrowser_C_OnJoinSessionRequested_Params
	{
	public:
		struct FBlueprintFindSessionResult                         Session;                                                 // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.RefreshServers
	 */
	struct UBP_ServerBrowser_C_RefreshServers_Params
	{
	public:
		bool                                                       Force;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.OnFailure_65A5909A48B0A895C117D2B16F9DAB4A
	 */
	struct UBP_ServerBrowser_C_OnFailure_65A5909A48B0A895C117D2B16F9DAB4A_Params
	{
	public:
		TArray<struct FBlueprintFindSessionResult>                 Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.OnSuccess_65A5909A48B0A895C117D2B16F9DAB4A
	 */
	struct UBP_ServerBrowser_C_OnSuccess_65A5909A48B0A895C117D2B16F9DAB4A_Params
	{
	public:
		TArray<struct FBlueprintFindSessionResult>                 Results;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.Construct
	 */
	struct UBP_ServerBrowser_C_Construct_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnJoinPassword_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__BtnJoinPassword_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnCancelPassword_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__BtnCancelPassword_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByName_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__BtnSortByName_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByMap_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__BtnSortByMap_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByMode_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__BtnSortByMode_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByPing_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__BtnSortByPing_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortPlayers_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__BtnSortPlayers_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.OnRefresh
	 */
	struct UBP_ServerBrowser_C_OnRefresh_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__PasswordInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__PasswordInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__ServerList_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__ServerList_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByModded_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__BtnSortByModded_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByXP_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__BtnSortByXP_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByPassword_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__BtnSortByPassword_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__FavoriteList_K2Node_ComponentBoundEvent_13_OnListEntryGeneratedDynamic__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__FavoriteList_K2Node_ComponentBoundEvent_13_OnListEntryGeneratedDynamic__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.OnFavoriteStatusChanged
	 */
	struct UBP_ServerBrowser_C_OnFavoriteStatusChanged_Params
	{
	public:
		class UBP_ServerBrowserRow_C*                              ForRow;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.BndEvt__BtnSortByCustom_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_BndEvt__BtnSortByCustom_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.Attempt To Search With Current Filters
	 */
	struct UBP_ServerBrowser_C_Attempt_To_Search_With_Current_Filters_Params
	{	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.ExecuteUbergraph_BP_ServerBrowser
	 */
	struct UBP_ServerBrowser_C_ExecuteUbergraph_BP_ServerBrowser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.OnNewStatus__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_OnNewStatus__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ServerBrowser.BP_ServerBrowser_C.RefreshEvent__DelegateSignature
	 */
	struct UBP_ServerBrowser_C_RefreshEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
