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
	 * WidgetBlueprintGeneratedClass BP_KitSelect_ItemButton.BP_KitSelect_ItemButton_C
	 * Size -> 0x0121 (FullSize[0x04C9] - InheritedSize[0x03A8])
	 */
	class UBP_KitSelect_ItemButton_C : public UKitSelect_ItemButton
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ScrollingTextWidget_C*                           BP_ScrollingTextWidget;                                  // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CloseX;                                                  // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_HighlightsNotification_C*                        HighlightsNotification;                                  // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SupplyIcon;                                              // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             UpgradeUnequipButton;                                    // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnItemClicked;                                           // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UTexture2D*                                          ItemIconTexture;                                         // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                ItemName;                                                // 0x03F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SupplyCost;                                              // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XR3Z[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemHover;                                             // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ESlateVisibility                                           UnequipButtonVisibility;                                 // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LSYB[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemUnequip;                                           // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        ButtonBgColor_1;                                         // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonBgSelectedColor_1;                                 // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonBgHoverColor_1;                                    // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgColor_1;                                         // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgSelectedColor_1;                                 // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgHoverColor_1;                                    // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonBgCanNotPurchaseColor_1;                           // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgCanNotPurchaseColor_1;                           // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonBgCanNotPurchaseHoverColor_1;                      // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInUse;                                                  // 0x04C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Update_Name();
		void UpdateVisualComponents();
		void Refresh_Colors_OLD();
		void Set_Unequip_Button_Visibility();
		void RefreshData();
		void Update_Item_Data_OLD(class UClass* InItemClass, int32_t InSubSlot, bool bInSelected, bool bInIsNewGear);
		void Set_ImageSizeBox();
		void Get_Notification_Visibility();
		void UpdateFocusable();
		void SetDataFromInventoryComponent(class UPlayerInventoryComponent* InventoryComponent);
		void HandleGamepadRemove();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		struct FSlateBrush Get_Weapon_Icon_Brush();
		class FText Get_Supply_Cost_Widget_Text();
		struct FSlateColor Get_Button_Fg_Color_And_Opacity();
		void GetColor(bool Foreground, struct FLinearColor* Color);
		ESlateVisibility Get_Left_Select_Highlight_Visibility();
		struct FSlateColor Get_Button_Bg_Color_And_Opacity();
		void BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__UpgradeUnequipButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature();
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void SetColorScrollingTextWidget(const struct FLinearColor& FgColor);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_BP_KitSelect_ItemButton(int32_t EntryPoint);
		void OnItemUnequip__DelegateSignature(class UClass* ItemClass, EItemSlot ItemSlot, int32_t ItemSubslot);
		void OnItemHover__DelegateSignature(class UClass* ItemClass, bool HoverValue, EItemSlot ItemSlot, int32_t ItemSubslot);
		void OnItemClicked__DelegateSignature(class UClass* Class, int32_t SubSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
