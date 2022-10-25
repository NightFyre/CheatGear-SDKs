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
	 * WidgetBlueprintGeneratedClass BP_KitSelect_SlotEmptyButton.BP_KitSelect_SlotEmptyButton_C
	 * Size -> 0x0100 (FullSize[0x0330] - InheritedSize[0x0230])
	 */
	class UBP_KitSelect_SlotEmptyButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Background;                                              // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_1;                                                // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_HighlightsNotification_C*                        HighlightsNotification;                                  // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LeftTextWidget;                                          // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WeaponIcon;                                              // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                SlotText;                                                // 0x0260(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnItemSlotSelected;                                      // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EItemSlot                                                  ItemSlot;                                                // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_NJ4L[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubSlot;                                                 // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bIsWeapon;                                               // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bHovered;                                                // 0x0291(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PF7N[0x2];                                   // 0x0292(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ButtonBgColor;                                           // 0x0294(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonBgHoverColor;                                      // 0x02A4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgColor;                                           // 0x02B4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgHoverColor;                                      // 0x02C4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDisabledSlot;                                           // 0x02D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_1QRT[0x3];                                   // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ButtonBgDisabledColor;                                   // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgDisabledColor;                                   // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnEmptySlotHovered;                                      // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        ButtonBgDisabledHoverColor;                              // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsNewGear;                                              // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_RJNF[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LoadoutCategoryIndex;                                    // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonFgDisabledHoverColor;                              // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateSlotEmptyData(class FText* InSlotText, EItemSlot InItemSlot, int32_t InSubSlot, bool bInDisabledSlot, bool bInIsNewGear, int32_t InLoadoutCategoryIndex);
		void Get_NotificationIcon_Visibility();
		void CallHoveredEvent(bool bNewHovered);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		class FText Get_LeftTextWidget_Text_1();
		struct FSlateColor Get_ButtonBg_ColorAndOpacity();
		struct FSlateColor Get_ButtonFg_ColorAndOpacity();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_BP_KitSelect_SlotEmptyButton(int32_t EntryPoint);
		void OnEmptySlotHovered__DelegateSignature(EItemSlot ItemSlot, int32_t ItemSubslot, bool bDisabled, bool bHovered);
		void OnItemSlotSelected__DelegateSignature(EItemSlot Slot, int32_t SubSlot, int32_t LoadoutCategoryIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
