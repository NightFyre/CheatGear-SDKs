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
	 * WidgetBlueprintGeneratedClass BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C
	 * Size -> 0x0364 (FullSize[0x05EC] - InheritedSize[0x0288])
	 */
	class UBP_InGameMenu_ClassSelect_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ScrollingTextWidget_C*                           BP_ScrollingTextWidget;                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelectGamepad;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnToggleTacticalMap;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ClassIcon;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_GametypeInfoButton_C*                            ClassInfoNotification;                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ClassInfoPanel;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ClassList;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ClassSelectBox;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        GameModeRuleList;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_HoverInfo_C*                                     HoverClassInfo;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            KADSizeBox;                                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           MapOverviewContainer;                                    // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_TacticalMap_Native_C*                     MapOverviewWidget;                                       // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MutatorContainer;                                        // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MutatorListBox;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_1;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          TeamList;                                                // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_104;                                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_CheckPointMode;                                // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ClassDesc;                                     // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ClassName;                                     // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ToolTipClassLockInfoText;                                // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClassSelectionConfirm;                                 // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              CurrentTeamId;                                           // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MIHF[0x3];                                   // 0x0359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWidgetTransform                                    CurrentClassInfoTransform;                               // 0x035C(0x001C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       bModeRulesInitialized;                                   // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bMapOverviewInitialized;                                 // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ODNN[0x2];                                   // 0x037A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentClassSlot;                                        // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlayerClass*                                        CurrentClass;                                            // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlayerClass*                                        PendingClass;                                            // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EIngameMenuEntryState                                      MenuEntryState;                                          // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowingHints;                                            // 0x03A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTacticalMapVisible;                                     // 0x03A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7RW1[0x5];                                   // 0x03A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerClassLimit                                   CurrentClassLimit;                                       // 0x03A8(0x0210) Edit, BlueprintVisible, DisableEditOnInstance
		class UPlayerClass*                                        NextClassToUnlock;                                       // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTeamChanged;                                           // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnToggleTacticalMap;                                     // 0x05D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UINSGameInstance*                                    GameInstance;                                            // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastFocusedClassSlot;                                    // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateTacticalMap();
		void ToggleTacticalMap();
		void CreateClassButton(const struct FPlayerClassLimit& ClassLimit, class UPlayerClass* PlayerClass, class ATeamInfo* Team, int32_t SlotNumber, class UBP_ClassSelect_ClassButton_C** ClassButton);
		void GetPlayerExperience(int32_t* PlayerExperience);
		ESlateVisibility Get_ToolTipClassLockInfoText_Visibility();
		void IsClassRestricted(const struct FPlayerClassLimit& ClassLimit, bool* Result);
		void HideHints();
		void ToggleHints();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void PopulateMutatorList();
		void UpdateTeamSelection();
		void CheckForPlayerStateReplication();
		void BindPlayerControllerDelegates();
		void SetIsUsingGamepad(bool bUsingController, EeInputIconType IconType);
		void LoadMapOverview(bool* Loaded);
		ESlateVisibility GetTeamIconVisibility();
		void CheckForGameStateReplication();
		void RefreshCurrentClassInfo(class UPlayerClass* Class, int32_t Slot, const struct FPlayerClassLimit& ClassLimit);
		void PopulateGameRuleList(bool* Completed);
		void RestoreKeyboardListFocus(class UPanelWidget* VerticalBox, int32_t Index);
		void GetFocusedListIndex(class UPanelWidget* Panel, int32_t* Index);
		void OnNavigateFromConfirm(class UWidget** WidgetToFocus);
		void OnNavigateToConfirm(class UWidget* Widget);
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		void GetFirstButton(class UWidget** Widget);
		bool Get_ConfirmButton_bIsEnabled_1();
		void PopulateClasses();
		void PopulateTeams();
		void Construct();
		void OnTeamButtonPressed(unsigned char TeamId);
		void OnPlayerTeamChanged(unsigned char FactionId, class ATeamInfo* FactionInfo);
		void OnClassButtonPressed(class UPlayerClass* Class, int32_t ClassSlot);
		void OnPlayerClassChanged(class UPlayerClass* NewClass);
		void OnPanelOpened();
		void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void OnClassButtonHoverChanged(class UPlayerClass* Class, int32_t ClassSlot, bool HoverValue, const struct FPlayerClassLimit& PlayerClassLimit);
		void OnRefreshTeams();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature(EConfirmableEvent ButtonEvent);
		void BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_3_OnUnHover__DelegateSignature(EConfirmableEvent ButtonEvent);
		void OnPanelClosed();
		void BndEvt__BtnToggleTacticalMap_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature();
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void CustomEvent_1();
		void ExecuteUbergraph_BP_InGameMenu_ClassSelect(int32_t EntryPoint);
		void OnToggleTacticalMap__DelegateSignature(bool bVisible);
		void OnTeamChanged__DelegateSignature();
		void OnNavigateBack__DelegateSignature();
		void OnClassSelectionConfirm__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
