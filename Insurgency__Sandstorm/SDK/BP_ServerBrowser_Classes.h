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
	 * WidgetBlueprintGeneratedClass BP_ServerBrowser.BP_ServerBrowser_C
	 * Size -> 0x071F (FullSize[0x094F] - InheritedSize[0x0230])
	 */
	class UBP_ServerBrowser_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Widget_LoadingSpinner_C*                         BP_Widget_LoadingSpinner;                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     BrowserSwitcher;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnSortByMap;                                            // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnSortByMode;                                           // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnSortByName;                                           // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnSortByPassword;                                       // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnSortByPing;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnSortByRanked;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnSortByRuleType;                                       // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnSortPlayers;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     ListSwitcher;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              OfficialIcon;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PasswordIcon;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PingIcon;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PingSortUpDown;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           ServerList;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ThrobberOverlay;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              XpImage;                                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             RefreshEvent;                                            // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FBlueprintFindSessionResult                         PendingJoinSession;                                      // 0x02D8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnNewStatus;                                             // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              PendingJoinPassword;                                     // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UServerListEntry*>                            OrderedServerList;                                       // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bShouldReverse;                                          // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GDKP[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LastReverseType;                                         // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 ActivePasswordDialog;                                    // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_Widget_ConsentDialog_C*                          ActiveModConsentDialog;                                  // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 ActiveErrorDialog;                                       // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UButton*                                             NewBtnSortedBy;                                          // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FButtonStyle                                        UnSelectedStyle;                                         // 0x03F8(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        SelectedStyle;                                           // 0x0670(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		EServerListSortType                                        CurrentSortOption;                                       // 0x08E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UZY1[0x7];                                   // 0x08E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FServerBrowserPreferences                           SearchFilters;                                           // 0x08F0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance
		class UINSSingleRequestQueryQueue*                         SearchQueue;                                             // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SearchInProgressHandle;                                  // 0x0940(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      TimeoutTime;                                             // 0x0948(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFavoriteSearch;                                         // 0x094C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSearchInProgress;                                       // 0x094D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPendingSearch;                                          // 0x094E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ChangeVisibilityForConsoles();
		void LoadServerBrowserPreferences();
		void HideAllDialogs();
		void HideErrorDialog();
		void JoinModdedServer(bool bNeverAskAgain);
		void HideModdedServerConsentDialog();
		void ShowModdedServerConsentDialog();
		void JoinPendingSession();
		void SortRuleset();
		void CheckTestingBuild(bool* Return_Value);
		void DebugServer();
		void SaveServerBrowserSettings();
		void FindServersWithString(const class FString& SearchForServers);
		void MoveToServerSelection(int32_t Index);
		struct FSlateBrush Get_PingSortUpDown_Brush_1();
		void UpdateSortButtonColors(EServerListSortType SortedBy);
		void ResortServers(EServerListSortType SortType, bool Reverse);
		void ResetState();
		void ClearServerList();
		void OnTypeSearching(const class FString& Type, bool* ShouldReverse);
		void ShouldRowBeFiltered(class UServerListEntry* Server, bool* bShouldFilterOut);
		void RecreateServerListRows();
		void SearchResultToRowObject(const struct FBlueprintFindSessionResult& SearchResult, class UServerListEntry** Obj);
		void JoinPasswordedServer(const class FText& EnteredPassword);
		void HidePasswordInterface();
		void ShowPasswordInterface();
		void OnJoinSessionRequested(const struct FBlueprintFindSessionResult& Session);
		void RefreshServers(bool Force);
		void OnFailure_65A5909A48B0A895C117D2B16F9DAB4A(TArray<struct FBlueprintFindSessionResult> Results);
		void OnSuccess_65A5909A48B0A895C117D2B16F9DAB4A(TArray<struct FBlueprintFindSessionResult> Results);
		void Construct();
		void BndEvt__RefreshButton_K2Node_ComponentBoundEvent_240_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnJoinPassword_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnCancelPassword_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnSortByName_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__BtnSortByMap_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__BtnSortByMode_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__BtnSortByPing_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__BtnSortPlayers_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
		void OnRefresh(bool bForce);
		void BndEvt__PasswordInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__ServerList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
		void BndEvt__ServerList_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
		void BndEvt__BtnSortByModded_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__BtnSortByXP_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__BtnSortByPassword_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__FavoriteList_K2Node_ComponentBoundEvent_13_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
		void OnFavoriteStatusChanged(class UBP_ServerBrowserRow_C* ForRow);
		void BndEvt__BtnSortByCustom_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature();
		void Attempt_To_Search_With_Current_Filters();
		void ExecuteUbergraph_BP_ServerBrowser(int32_t EntryPoint);
		void OnNewStatus__DelegateSignature(const class FText& Text);
		void RefreshEvent__DelegateSignature(bool bForce);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
