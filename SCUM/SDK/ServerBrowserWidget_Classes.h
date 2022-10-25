#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass ServerBrowserWidget.ServerBrowserWidget_C
	 * Size -> 0x0199 (FullSize[0x0501] - InheritedSize[0x0368])
	 */
	class UServerBrowserWidget_C : public UServerBrowser
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_TrashMenuButton_C*                               Back;                                                    // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_1;                                                // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   CircularThrobber_53;                                     // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    DirectConnectPasswordTextBox;                            // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    DirectConnectTextBox;                                    // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TrashMenuButton_C*                               FilterButton;                                            // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            FilterCategorySizeBox;                                   // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TextInput_C*                                     HostTextInput;                                           // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_5;                                                 // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_8;                                                 // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_12;                                                // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_351;                                               // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvas;                                              // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MainOverlay;                                             // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MainVerticalBox;                                         // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TextInput_C*                                     MaxPingTextInput;                                        // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TextInput_C*                                     MaxPlayersTextInput;                                     // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TextInput_C*                                     MinPlayersTextInput;                                     // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TrashMenuButton_C*                               PasswordPopupCancelButton;                               // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TrashMenuButton_C*                               PasswordPopupOkButton;                                   // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            PasswordPopupOverlay;                                    // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    PasswordPopupTextBox;                                    // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TrashMenuButton_C*                               Refresh;                                                 // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TrashMenuButton_C*                               RentServerButton;                                        // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    SearchBox;                                               // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UServerInfoWidget_C*                                 ServerInfoWidget_63;                                     // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TrashMenuButton_C*                               ServersButton;                                           // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ServersCategoryOverlay;                                  // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_OptionsSlider_C*                                 ServersCategorySwitch;                                   // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_OptionsSlider_C*                                 ShowFullServersSlider;                                   // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_OptionsSlider_C*                                 ShowPasswordedOnlySlider;                                // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SortByButton_C*                                  SortByFriends;                                           // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SortByButton_C*                                  SortByHost;                                              // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SortByButton_C*                                  SortByMode;                                              // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SortByButton_C*                                  SortByPassword;                                          // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SortByButton_C*                                  SortByPing;                                              // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SortByButton_C*                                  SortByPlayers;                                           // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SortByButton_C*                                  SortByTime;                                              // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SortByButton_C*                                  SortByVersion;                                           // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollBar_C*                                     UI_ScrollBar;                                            // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UServerInfoWidget_C*                                 SelectedServer;                                          // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedServerIndex;                                     // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HighlightedColor;                                        // 0x04C4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        normalColor;                                             // 0x04D4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T6MU[0x4];                                   // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_TrashMenuButton_C*                               _lastButton;                                             // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidget*                                             _lastWidget;                                             // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_ContinueOrNewCharacterDialog_C*                  _continueOrNewCharacterDialog;                           // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _wasRequestingServerList;                                // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ChangeFilter(const class FText& Filter);
		void UpdatePreviewPrisoners(const class FString& ServerIp, int32_t ServerResponsePort);
		void GetCurrentUser(class UUser** User);
		void SaveDirectionConnectionAddress();
		void ChooseServerAndConnect(const class FString& AuthToken);
		void ChooseServer(class FString* Ip, int32_t* ResponsePort);
		void HidePasswordPopup();
		void ShowPasswordPopup();
		void EnterPassword();
		void ConnectToServerInfo(const struct FServerInfo& ServerInfo, const class FString& AuthToken);
		void UpdateSelectedServer();
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SelectServerForConnection(class UServerInfoWidget_C* ServerInfo);
		bool Get_Refresh_bIsEnabled_1();
		ESlateVisibility GetVisibility_1();
		void ToggleCategory(class UWidget* Widget, class UUI_TrashMenuButton_C* Button);
		void Scroll(float Delta);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void Construct();
		void UpdateList();
		void RemoveInfo(int32_t Index);
		void AddNewInfo(const struct FServerInfo& ServerInfo);
		void BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature();
		void BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature();
		void BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature();
		void BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature();
		void OnClickedOnServerInfo(class UServerInfoWidget_C* ServerInfoWidget);
		void OnServerInfoDoubleClicked(class UServerInfoWidget_C* ServerInfoWidget);
		void BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature();
		void BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature();
		void BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature();
		void BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature(int32_t Index, int32_t OldIndex, const class FText& Value);
		void BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature(int32_t Index, int32_t OldIndex, const class FText& Value);
		void OnESC();
		void CancelPassword();
		void GoBack();
		void BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int32_t Index, int32_t OldIndex, const class FText& Value);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature(float Value);
		void OnFavoriteRemoved(const struct FServerInfo& Info);
		void ShowErrorDialog(const class FText& Message);
		void BeginWaitingOnServerResponse();
		void EndWaitingOnServerResponse();
		void BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature();
		void OpenContinueOrNewDialog(const class FString& Ip, int32_t GameplayPort, int32_t ResponsePort, const class FString& AuthToken);
		void OnContinueWithCharacter(const class FString& Ip, int32_t GameplayPort, int32_t ResponsePort, const class FString& AuthToken);
		void OnCreateNewCharacter(const class FString& Ip, int32_t GameplayPort, int32_t ResponsePort, const class FString& AuthToken);
		void OnNewCharacterConfirmed();
		void NewCharacterCanceled();
		void BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type);
		void ClearSorts();
		void BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type);
		void BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type);
		void BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type);
		void BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type);
		void BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__SortByVersion_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, ESortByTypes Type);
		void ExecuteUbergraph_ServerBrowserWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
