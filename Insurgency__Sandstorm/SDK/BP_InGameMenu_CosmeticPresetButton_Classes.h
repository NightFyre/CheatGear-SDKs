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
	 * WidgetBlueprintGeneratedClass BP_InGameMenu_CosmeticPresetButton.BP_InGameMenu_CosmeticPresetButton_C
	 * Size -> 0x0108 (FullSize[0x0338] - InheritedSize[0x0230])
	 */
	class UBP_InGameMenu_CosmeticPresetButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_2;                                                // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableButtonTextBox;                                   // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PresetButton;                                            // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              selectedmarker;                                          // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_1;                                        // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsHovered;                                              // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MUUQ[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPresetClicked;                                         // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                ButtonText;                                              // 0x0298(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bIsSelected;                                             // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsEditing;                                              // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8J2C[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PresetName;                                              // 0x02B8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnSaveButtonClicked;                                     // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEditButtonClicked;                                     // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRemoveButtonClicked;                                   // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCancelButtonClicked;                                   // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsDefaultButton;                                        // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_1Q41[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDefaultButtonClicked;                                  // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAddNewButtonClicked;                                   // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		ESlateVisibility Get_selectedmarker_Visibility_1();
		void OnHoverChanged();
		ESlateVisibility Get_EditButton_Visibility_1();
		void SetEditing(bool IsEditing);
		ESlateVisibility Get_RemoveButton_Visibility_2();
		ESlateVisibility Get_SaveButton_Visibility_1();
		ESlateVisibility Get_RemoveButton_Visibility_1();
		ESlateVisibility Get_EditableButtonTextBox_Visibility_1();
		ESlateVisibility Get_PresetButton_Visibility_1();
		ESlateVisibility GetVisibility_1();
		ESlateVisibility Get_SaveIconImage_Visibility_1();
		ESlateVisibility Get_EditIcon_Visibility_1();
		ESlateVisibility VisibleIfNotEditing();
		ESlateVisibility VisibleIfEditing();
		struct FSlateBrush GetBackground_1();
		struct FLinearColor GetBackgroundColor();
		void SetSelected(bool bIsSelected);
		ESlateVisibility GetRedBorderVisibility();
		struct FSlateColor GetTextColor();
		void Construct();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature();
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_BP_InGameMenu_CosmeticPresetButton(int32_t EntryPoint);
		void OnAddNewButtonClicked__DelegateSignature();
		void OnDefaultButtonClicked__DelegateSignature();
		void OnCancelButtonClicked__DelegateSignature(const class FText& PresetName);
		void OnRemoveButtonClicked__DelegateSignature(const class FText& PresetName);
		void OnEditButtonClicked__DelegateSignature(const class FText& PresetName);
		void OnSaveButtonClicked__DelegateSignature(const class FText& PresetName, const class FText& PresetDesignation);
		void OnPresetClicked__DelegateSignature(const class FText& PresetName);
		void OnUnhovered__DelegateSignature();
		void OnHovered__DelegateSignature(class UWidget* Ref);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
