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
	 * WidgetBlueprintGeneratedClass BP_KitSelect_UpgradeButton.BP_KitSelect_UpgradeButton_C
	 * Size -> 0x0139 (FullSize[0x04A1] - InheritedSize[0x0368])
	 */
	class UBP_KitSelect_UpgradeButton_C : public UKitSelect_UpgradeButton
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ScrollingTextWidget_C*                           BP_ScrollingTextWidget;                                  // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CloseX;                                                  // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            HighlightsBox;                                           // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_HighlightsNotification_C*                        HighlightsNotification;                                  // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SupplyIcon;                                              // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             UpgradeSelectButton;                                     // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             UpgradeUnequipButton;                                    // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectClicked;                                         // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnequipClicked;                                        // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBP_InGameMenu_KitSelect_C*                          KitSelect;                                               // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectHover;                                           // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnequipHover;                                          // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bSelectHovered;                                          // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R922[0x3];                                   // 0x03F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ButtonBgColor_1;                                         // 0x03F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonBgSelectedColor_1;                                 // 0x0404(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonBgHoverColor_1;                                    // 0x0414(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgColor_1;                                         // 0x0424(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgSelectedColor_1;                                 // 0x0434(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgHoverColor_1;                                    // 0x0444(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonBgUnPurchaseableHoverColor_1;                      // 0x0454(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonBgUnPurchasableColor_1;                            // 0x0464(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgUnPurchasableColor_1;                            // 0x0474(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InventoryIndex;                                          // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bInUse;                                                  // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUpgradeListItem;                                        // 0x0489(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PYP0[0x6];                                   // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUpgradeListItemClicked;                                // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bAesthetic;                                              // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Refresh_Colors_OLD();
		void Update_Visual_Components();
		void Update_Upgrade_Data_OLD(class UClass* InUpgradeClass, EItemSlot InParentItemSlot, int32_t InSupplyCost, bool bInSupplyCostVisible, bool bInSelected, bool bInPurchasable, bool bInIsNewGear);
		void UpdateNotificationVisibility();
		ESlateVisibility Get_SupplyCostWidget_Visibility_1();
		void HandleGamepadRemove();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		ESlateVisibility Get_LeftTabSwitcher_Visibility_1();
		void RefreshLeftTab();
		ESlateVisibility GetUnequpOptionVisibility();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		class FText GetLeftTextWidgetText();
		class FText GetSupplyCostWidgetText();
		struct FSlateColor GetButtonFgColor();
		ESlateVisibility GetLeftSelectHighlightVisibility();
		struct FSlateColor Get_Button_Bg_Color();
		void BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature();
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__UpgradeSelectButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature();
		void Construct();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
		void SetScrollingText();
		void SetColorScrollingTextWidget(const struct FLinearColor& FgColor);
		void ExecuteUbergraph_BP_KitSelect_UpgradeButton(int32_t EntryPoint);
		void OnUpgradeListItemClicked__DelegateSignature();
		void OnUnequipHover__DelegateSignature(class UClass* UpgradeClass, bool HoverValue);
		void OnSelectHover__DelegateSignature(class UClass* UpgradeClass, bool HoverValue, bool IsSelected);
		void OnUnequipClicked__DelegateSignature(class UClass* Class, EItemSlot ParentSlot);
		void OnSelectClicked__DelegateSignature(class UClass* Class, bool bIsSelected);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
