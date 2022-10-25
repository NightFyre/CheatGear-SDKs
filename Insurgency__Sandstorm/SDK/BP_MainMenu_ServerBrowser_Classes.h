#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BP_MainMenu_ServerBrowser.BP_MainMenu_ServerBrowser_C
	 * Size -> 0x01B8 (FullSize[0x0440] - InheritedSize[0x0288])
	 */
	class UBP_MainMenu_ServerBrowser_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowStatusMessage;                                       // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_MenuTabs_C*                                      BP_MenuTabs;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelectGamepad;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ToggleOption_C*                                  CustomRulesFilter;                                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ToggleOption_C*                                  DefaultRulesFilter;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     DirectConnextToIpBtn;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ToggleOption_C*                                  FilterCoop;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_CheckBox_C*                               FilterFriendlyFire;                                      // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_WidgetGameModeFilter_C*                          FilterGamemode;                                          // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_CheckBox_C*                               FilterKillFeed;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ToggleOption_C*                                  FilterModded;                                            // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ToggleOption_C*                                  FilterMutated;                                           // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_CheckBox_C*                               FilterPasswordedServers;                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ToggleOption_C*                                  FilterShowFull;                                          // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ToggleOption_C*                                  FilterVersus;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_CheckBox_C*                               FilterXPGain;                                            // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_4;                                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_111;                                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_ThreeWaySelection_C*                      LightingSelection;                                       // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ServerBrowser_Slider_C*                          MaxPlayersFilter;                                        // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ServerBrowser_Slider_C*                          MinPlayersFilter;                                        // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PanelMain;                                               // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RefreshButton;                                           // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             RefreshButtonBorder;                                     // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 RefreshKeyActionIcon;                                    // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     ResetFiltersBtn;                                         // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_1;                                              // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_TextFilter_C*                             SearchForServerTextBox;                                  // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SearchStatusText;                                        // 0x0398(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ServerBrowser_C*                                 ServerBrowser;                                           // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                SearchStatus;                                            // 0x03B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       TempFilterShowFull;                                      // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9NN4[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_GenericDialog_C*                                 DirectConnectPrompt;                                     // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PendingDirectConnectIp;                                  // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FTimerHandle                                        DelayedRecreateServerListRowsTimer;                      // 0x03F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FServerBrowserPreferences                           CachedServerBrowserPreferences;                          // 0x03F8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnCancelJoin();
		ESlateVisibility GetVisibilityCollapsedOnConsole();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void CheckBoxStateToServerFilter(ECheckBoxState CheckBoxState, EServerBrowserFilterSelection* OutFilter);
		void ServerFilterToCheckBoxState(EServerBrowserFilterSelection InFilter, ECheckBoxState* OutState);
		void AttemptToJoinIP(const class FText& IpAddress);
		void CreateModalForDirectConnectIP();
		void ResetFilters();
		void SetServerBrowserPreferences();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnDirectConnectPasswordEntered();
		void DirectConnectToIP(const class FString& IpPort);
		bool IsDirectConnectButtonEnabled();
		void GetDirectConnectIpString(const class FText& IpAsText, bool* Valid, class FString* IpPort);
		void HideDirectConnectPassword();
		void ShowDirectConnectPassword(const class FString& ServerIpPort);
		void UpdateServerBrowserFilters();
		void UpdateFilterButtonState(bool bSkipEvents);
		void UpdateBreadcrumbs();
		void UpdateStatusMessage(const class FText& NewStatus);
		void RefreshServers(bool Force);
		void OnPanelOpened();
		void BndEvt__RefreshButton_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ServerBrowser_K2Node_ComponentBoundEvent_261_OnNewStatus__DelegateSignature(const class FText& Text);
		void BndEvt__FilterShowFull_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature(const class FName& Key, bool Toggled);
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
		void BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature(int32_t Index);
		void BndEvt__FilterCoop_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature(const class FName& Key, bool Toggled);
		void BndEvt__FilterVersus_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature(const class FName& Key, bool Toggled);
		void Construct();
		void BndEvt__MinPlayersFilter_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature(int32_t NewValue);
		void BndEvt__MaxPlayersFilter_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(int32_t NewValue);
		void BndEvt__BP_INSButton_K2Node_ComponentBoundEvent_15_OnClick__DelegateSignature();
		void Delayed_Recreat_Server_List_Rows();
		void BndEvt__RefreshButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RefreshButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__DirectConnextToIpBtn_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature();
		void BndEvt__DefaultRulesFilter_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature(const class FName& Key, bool Toggled);
		void BndEvt__CustomRulesFilter_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature(const class FName& Key, bool Toggled);
		void BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_8_OnTextCommit__DelegateSignature(const class FText& newText, ETextCommit CommitMethod);
		void BndEvt__SearchForServerTextBox_K2Node_ComponentBoundEvent_21_OnStoppedTyping__DelegateSignature(const class FText& newText);
		void OnServerNameSearchChanged(const class FText& NewFilter);
		void OnFiltersUpdated();
		void BndEvt__FilterPasswordedServers_K2Node_ComponentBoundEvent_24_OnToggle__DelegateSignature(const class FString& Key, ECheckBoxState Toggled);
		void BndEvt__FilterXPGain_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature(const class FString& Key, ECheckBoxState Toggled);
		void BndEvt__FilterMutated_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature(const class FName& Key, bool Toggled);
		void BndEvt__FilterModded_K2Node_ComponentBoundEvent_17_OnToggle__DelegateSignature(const class FName& Key, bool Toggled);
		void BndEvt__LightingSelection_K2Node_ComponentBoundEvent_5_OnStateChange__DelegateSignature(int32_t NewState);
		void OnModdingTermsConsent();
		void OnModdingTermsCanceled();
		void BndEvt__FilterGamemode_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(const class FText& SelectedItem, ESelectInfo SelectionType);
		void ExecuteUbergraph_BP_MainMenu_ServerBrowser(int32_t EntryPoint);
		void OnNavigateBack__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
