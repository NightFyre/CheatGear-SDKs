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
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnCancelJoin
	 */
	struct UBP_MainMenu_ServerBrowser_C_OnCancelJoin_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.GetVisibilityCollapsedOnConsole
	 */
	struct UBP_MainMenu_ServerBrowser_C_GetVisibilityCollapsedOnConsole_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnFocusReceived
	 */
	struct UBP_MainMenu_ServerBrowser_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.CheckBoxStateToServerFilter
	 */
	struct UBP_MainMenu_ServerBrowser_C_CheckBoxStateToServerFilter_Params
	{
	public:
		ECheckBoxState                                             CheckBoxState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EServerBrowserFilterSelection                              OutFilter;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ServerFilterToCheckBoxState
	 */
	struct UBP_MainMenu_ServerBrowser_C_ServerFilterToCheckBoxState_Params
	{
	public:
		EServerBrowserFilterSelection                              InFilter;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECheckBoxState                                             OutState;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.AttemptToJoinIP
	 */
	struct UBP_MainMenu_ServerBrowser_C_AttemptToJoinIP_Params
	{
	public:
		class FText                                                IpAddress;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.CreateModalForDirectConnectIP
	 */
	struct UBP_MainMenu_ServerBrowser_C_CreateModalForDirectConnectIP_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ResetFilters
	 */
	struct UBP_MainMenu_ServerBrowser_C_ResetFilters_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.SetServerBrowserPreferences
	 */
	struct UBP_MainMenu_ServerBrowser_C_SetServerBrowserPreferences_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnKeyDown
	 */
	struct UBP_MainMenu_ServerBrowser_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnDirectConnectPasswordEntered
	 */
	struct UBP_MainMenu_ServerBrowser_C_OnDirectConnectPasswordEntered_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.DirectConnectToIP
	 */
	struct UBP_MainMenu_ServerBrowser_C_DirectConnectToIP_Params
	{
	public:
		class FString                                              IpPort;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.IsDirectConnectButtonEnabled
	 */
	struct UBP_MainMenu_ServerBrowser_C_IsDirectConnectButtonEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.GetDirectConnectIpString
	 */
	struct UBP_MainMenu_ServerBrowser_C_GetDirectConnectIpString_Params
	{
	public:
		class FText                                                IpAsText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Valid;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R21W[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              IpPort;                                                  // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.HideDirectConnectPassword
	 */
	struct UBP_MainMenu_ServerBrowser_C_HideDirectConnectPassword_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ShowDirectConnectPassword
	 */
	struct UBP_MainMenu_ServerBrowser_C_ShowDirectConnectPassword_Params
	{
	public:
		class FString                                              ServerIpPort;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateServerBrowserFilters
	 */
	struct UBP_MainMenu_ServerBrowser_C_UpdateServerBrowserFilters_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateFilterButtonState
	 */
	struct UBP_MainMenu_ServerBrowser_C_UpdateFilterButtonState_Params
	{
	public:
		bool                                                       bSkipEvents;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateBreadcrumbs
	 */
	struct UBP_MainMenu_ServerBrowser_C_UpdateBreadcrumbs_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.UpdateStatusMessage
	 */
	struct UBP_MainMenu_ServerBrowser_C_UpdateStatusMessage_Params
	{
	public:
		class FText                                                NewStatus;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.RefreshServers
	 */
	struct UBP_MainMenu_ServerBrowser_C_RefreshServers_Params
	{
	public:
		bool                                                       Force;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnPanelOpened
	 */
	struct UBP_MainMenu_ServerBrowser_C_OnPanelOpened_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_261_OnNewStatus__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_261_OnNewStatus__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterShowFull_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__FilterShowFull_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Toggled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterCoop_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__FilterCoop_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Toggled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterVersus_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__FilterVersus_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Toggled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.Construct
	 */
	struct UBP_MainMenu_ServerBrowser_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__MinPlayersFilter_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__MinPlayersFilter_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__MaxPlayersFilter_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__MaxPlayersFilter_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__BP_INSButton_K2Node_ComponentBoundEvent_15_OnClick__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__BP_INSButton_K2Node_ComponentBoundEvent_15_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.Delayed Recreat Server List Rows
	 */
	struct UBP_MainMenu_ServerBrowser_C_Delayed_Recreat_Server_List_Rows_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__RefreshButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__RefreshButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__DirectConnextToIpBtn_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__DirectConnextToIpBtn_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__DefaultRulesFilter_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__DefaultRulesFilter_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Toggled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__CustomRulesFilter_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__CustomRulesFilter_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Toggled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_8_OnTextCommit__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_8_OnTextCommit__DelegateSignature_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_21_OnStoppedTyping__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_21_OnStoppedTyping__DelegateSignature_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnServerNameSearchChanged
	 */
	struct UBP_MainMenu_ServerBrowser_C_OnServerNameSearchChanged_Params
	{
	public:
		class FText                                                NewFilter;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnFiltersUpdated
	 */
	struct UBP_MainMenu_ServerBrowser_C_OnFiltersUpdated_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterPasswordedServers_K2Node_ComponentBoundEvent_24_OnToggle__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__FilterPasswordedServers_K2Node_ComponentBoundEvent_24_OnToggle__DelegateSignature_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ECheckBoxState                                             Toggled;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterXPGain_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__FilterXPGain_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ECheckBoxState                                             Toggled;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterMutated_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__FilterMutated_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Toggled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterModded_K2Node_ComponentBoundEvent_17_OnToggle__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__FilterModded_K2Node_ComponentBoundEvent_17_OnToggle__DelegateSignature_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Toggled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__LightingSelection_K2Node_ComponentBoundEvent_5_OnStateChange__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__LightingSelection_K2Node_ComponentBoundEvent_5_OnStateChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewState;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnModdingTermsConsent
	 */
	struct UBP_MainMenu_ServerBrowser_C_OnModdingTermsConsent_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnModdingTermsCanceled
	 */
	struct UBP_MainMenu_ServerBrowser_C_OnModdingTermsCanceled_Params
	{	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.BndEvt__FilterGamemode_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_BndEvt__FilterGamemode_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                SelectedItem;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectionType;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.ExecuteUbergraph_BP_MainMenu_ServerBrowser
	 */
	struct UBP_MainMenu_ServerBrowser_C_ExecuteUbergraph_BP_MainMenu_ServerBrowser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O1V9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_ServerBrowser_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
