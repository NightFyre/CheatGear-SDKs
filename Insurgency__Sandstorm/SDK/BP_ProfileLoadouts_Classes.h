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
	 * WidgetBlueprintGeneratedClass BP_ProfileLoadouts.BP_ProfileLoadouts_C
	 * Size -> 0x00F9 (FullSize[0x0339] - InheritedSize[0x0240])
	 */
	class UBP_ProfileLoadouts_C : public UOptionsMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelectGamepad;                                        // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ClassHeader;                                             // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ClassHeadingText;                                        // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ClassInfoTooltipPanel;                                   // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ClassSelectionButtonContainer;                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        FactionButtonContainer;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          FactionHeader;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          FactionHeader_2;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             FooterBorder;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            FooterTexture;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        GametypeButtonContainer;                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_179;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            KADSizeBox;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InGameMenu_KitSelect_C*                          KitSelectUI;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     LoadoutPanelSwitcher;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_7;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_139;                                            // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        TimeButtonContainer;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TooltipClassDescriptionText;                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TooltipClassIcon;                                        // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ToolTipClassLockInfoText;                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TooltipClassNameText;                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SelectedFactionId;                                       // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedGameTypeId;                                      // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlayerClass*                                        NextClassToUnlock;                                       // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNightModeSelected;                                      // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QXGV[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLoadoutPanelSwitched;                                  // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPressedBackButton;                                     // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsSelected;                                              // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnNavToFuctionDown(class UWidget** CurrentPosition);
		void GetMenuSection(struct FMenuSquadLayoutSection* MenuSection);
		void OnXPUpdated(int64_t InXP);
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		bool IsCompetitiveSection(const struct FMenuSquadLayoutSection& Layout_section);
		void OnTimeButtonClicked(const class FString& Parameter);
		void SetWeaponPreviewRotation();
		void RegisterWeaponPreview();
		void GetPlayerExperience(int32_t* PlayerExperience);
		void IsClassRestricted(const struct FPlayerClassLimit& Class_Slot, bool* Result);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void CanNavigateBack(bool* CanNavigate);
		void PressBackButton();
		void ResetPreviewMeshes();
		void SelectLoadoutCamera(bool bCharacter);
		void OnTabSelected();
		void HoveredPlayerClass(class UPlayerClass* PlayerClass, int32_t Slot, bool bHoverState, const struct FPlayerClassLimit& PlayerClassLimit);
		void SaveLoadout();
		void SelectPlayerClass(class UPlayerClass* PlayerClass, int32_t ClassSlot);
		void UpdateSelectedGametypeButton();
		void UpdateSelectedFactionButton();
		void SetupPlayerClasses(struct FMenuSquadLayoutSection* MenuSection);
		void SelectGametype(int32_t GameTypeId);
		void SelectFaction(int32_t ButtonId);
		void OnGametypeButtonPressed(const class FString& Parameter);
		void OnFactionButtonPressed(const class FString& Parameter);
		void RefreshData();
		void Construct();
		void OnRefreshMenuSquadLayouts();
		void BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_0_OnLoadoutConfirmed__DelegateSignature();
		void BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_1_OnSetWeaponCamera__DelegateSignature();
		void BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_2_OnSetSoldierCamera__DelegateSignature();
		void BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_3_OnCharacterRotated__DelegateSignature(const struct FRotator& NewRotation);
		void BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_4_OnItemSlotSelectedDelegate__DelegateSignature(EItemSlot ItemSlot, int32_t SubSlot, bool bSoldierCamera);
		void BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_5_OnWeaponRotated__DelegateSignature(const struct FRotator& NewRotation);
		void OnLoadoutCanceled();
		void OnLightScenarioSelected();
		void BndEvt__KitSelectUI_K2Node_ComponentBoundEvent_6_OnNavigateBack__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature();
		void ExecuteUbergraph_BP_ProfileLoadouts(int32_t EntryPoint);
		void OnPressedBackButton__DelegateSignature();
		void OnLoadoutPanelSwitched__DelegateSignature(int32_t NewPanelIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
