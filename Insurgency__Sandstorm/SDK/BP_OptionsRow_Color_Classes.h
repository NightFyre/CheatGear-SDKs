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
	 * WidgetBlueprintGeneratedClass BP_OptionsRow_Color.BP_OptionsRow_Color_C
	 * Size -> 0x0160 (FullSize[0x03F8] - InheritedSize[0x0298])
	 */
	class UBP_OptionsRow_Color_C : public UBP_OptionsRow_BaseClass_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_OptionsRow_Color_Slider_C*                       BlueSlider;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_1;                                                // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_2;                                                // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Color_Slider_C*                       GreenSlider;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OptionName;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Color_Slider_C*                       RedSlider;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOptionSelected;                                        // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bDefaultState;                                           // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAppliedDefaultState;                                    // 0x02F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHovered;                                                // 0x02F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KZE4[0x1];                                   // 0x02F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BackgroundColor;                                         // 0x02F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HoveredBackgroundColor;                                  // 0x0304(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TextColor;                                               // 0x0314(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HoveredTextColor;                                        // 0x0324(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XM7S[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         CurrentSelectedColor;                                    // 0x0338(0x0028) Edit, BlueprintVisible
		bool                                                       bHasInitialValue;                                        // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2XN1[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnValueCommitted;                                        // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                OptionTitle;                                             // 0x0388(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		float                                                      CurrentRValue;                                           // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentGValue;                                           // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentBValue;                                           // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2WIL[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                OptionDescription;                                       // 0x03B0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bSelected;                                               // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U9K0[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_OptionsRow_Color_Slider_C*                       CurrentlySelectedSlider;                                 // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HighlitedBrushColor;                                     // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SelectedBrushColor;                                      // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void MoveOptions(bool GoLeft);
		void UpdateSelectedOption(bool Decrement);
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		void UpdateNavigation();
		void UpdateSelectedStatus();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void GetValue(struct FLinearColor* OutColor);
		void SetValue(const struct FLinearColor& InputColor);
		void UpdateCurrentColor(int32_t R, int32_t G, int32_t B);
		void SetInitialValue(const struct FLinearColor& InputColor);
		struct FSlateColor GetTextColor();
		struct FLinearColor GetBackgroundBrushColor();
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void PreConstruct(bool IsDesignTime);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void Construct();
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void BndEvt__RedSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float InValue);
		void BndEvt__RedSlider_K2Node_ComponentBoundEvent_7_OnValueCommited__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__GreenSlider_K2Node_ComponentBoundEvent_8_OnValueCommited__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__GreenSlider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float InValue);
		void BndEvt__BlueSlider_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature(float InValue);
		void BndEvt__BlueSlider_K2Node_ComponentBoundEvent_11_OnValueCommited__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void ExecuteUbergraph_BP_OptionsRow_Color(int32_t EntryPoint);
		void OnValueChanged__DelegateSignature(const struct FSlateColor& NewColor);
		void OnValueCommitted__DelegateSignature(const struct FSlateColor& NewColor, ETextCommit CommitMethod);
		void OnOptionSelected__DelegateSignature(bool State);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
