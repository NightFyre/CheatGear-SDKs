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
	 * WidgetBlueprintGeneratedClass BP_ProfileAppearance_CosmeticSlot.BP_ProfileAppearance_CosmeticSlot_C
	 * Size -> 0x00A9 (FullSize[0x02D9] - InheritedSize[0x0230])
	 */
	class UBP_ProfileAppearance_CosmeticSlot_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             CosmeticSlotButton;                                      // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            NewItemSizeBox;                                          // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            OuterBox;                                                // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_2;                                             // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                SlotText;                                                // 0x0270(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ECharacterAppearanceSlot                                   AppearanceSlot;                                          // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bHovered;                                                // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U5QI[0x6];                                   // 0x029A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SlotAvailabilityText;                                    // 0x02A0(0x0018) Edit, BlueprintVisible
		int32_t                                                    AppearanceSubSlot;                                       // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bIsSubSlotButton;                                        // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_IRNE[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CosmeticCountValue;                                      // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CosmeticTotalValue;                                      // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnHover;                                                 // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bFocused;                                                // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Set_Icon_Texture();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		ESlateVisibility Get_NewItemSizeBox_Visibility_1();
		ESlateVisibility Get_OuterBox_Visibility_1();
		struct FSlateColor GetTextColor();
		struct FLinearColor GetBackgroundColor();
		ESlateVisibility GetVisibility_1();
		struct FSlateBrush GetBackground_1();
		void SetSlotAvailabilityText();
		void SetSlotText();
		void Construct();
		void BndEvt__CosmeticButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__CosmeticSlotButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature();
		void ExecuteUbergraph_BP_ProfileAppearance_CosmeticSlot(int32_t EntryPoint);
		void OnHover__DelegateSignature(class UUserWidget* SelfRef);
		void OnPressed__DelegateSignature(ECharacterAppearanceSlot Slot, int32_t SubSlot, bool bIsSubSlotButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
