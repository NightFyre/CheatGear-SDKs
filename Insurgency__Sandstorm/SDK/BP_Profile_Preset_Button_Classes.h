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
	 * WidgetBlueprintGeneratedClass BP_Profile_Preset_Button.BP_Profile_Preset_Button_C
	 * Size -> 0x0170 (FullSize[0x03A0] - InheritedSize[0x0230])
	 */
	class UBP_Profile_Preset_Button_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_2;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_7;                                                // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CancelButton;                                            // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableButtonTextBox;                                   // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             EditButton;                                              // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EditIconImage;                                           // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PresetButton;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RemoveButton;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SaveButton;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              selectedmarker;                                          // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_7;                                               // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_1;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsHovered;                                              // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RD4D[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPresetClicked;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                ButtonText;                                              // 0x02D0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bIsSelected;                                             // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsEditing;                                              // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O6KH[0x6];                                   // 0x02EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PresetName;                                              // 0x02F0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnSaveButtonClicked;                                     // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEditButtonClicked;                                     // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRemoveButtonClicked;                                   // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCancelButtonClicked;                                   // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsDefaultButton;                                        // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_W522[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDefaultButtonClicked;                                  // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAddNewButtonClicked;                                   // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        bgColor_Equipped;                                        // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BGColor;                                                 // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        bgColor_Hovered;                                         // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		struct FLinearColor Get_Border_6_BrushColor_1();
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
		void BndEvt__EditIcon_K2Node_ComponentBoundEvent_149_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PresetButton_K2Node_ComponentBoundEvent_308_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PresetButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_457_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__SaveButton_K2Node_ComponentBoundEvent_451_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CancelButton_K2Node_ComponentBoundEvent_477_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_707_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1208_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1233_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__EditButton_K2Node_ComponentBoundEvent_1792_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CancelButton_K2Node_ComponentBoundEvent_1817_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SaveButton_K2Node_ComponentBoundEvent_1841_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__EditButton_K2Node_ComponentBoundEvent_1871_OnButtonHoverEvent__DelegateSignature();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void BndEvt__EditableButtonTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void Construct();
		void BndEvt__PresetButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__EditButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__EditButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__PresetButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature();
		void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature();
		void ExecuteUbergraph_BP_Profile_Preset_Button(int32_t EntryPoint);
		void OnAddNewButtonClicked__DelegateSignature();
		void OnDefaultButtonClicked__DelegateSignature();
		void OnCancelButtonClicked__DelegateSignature(const class FText& PresetName);
		void OnRemoveButtonClicked__DelegateSignature(const class FText& PresetName);
		void OnEditButtonClicked__DelegateSignature(const class FText& PresetName);
		void OnSaveButtonClicked__DelegateSignature(const class FText& PresetName, const class FText& PresetDesignation);
		void OnPresetClicked__DelegateSignature(const class FText& PresetName);
		void OnUnhovered__DelegateSignature();
		void OnHovered__DelegateSignature(class UWidget* ItemRef);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
