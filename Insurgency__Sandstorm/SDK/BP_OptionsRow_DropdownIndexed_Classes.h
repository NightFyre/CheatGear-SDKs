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
	 * WidgetBlueprintGeneratedClass BP_OptionsRow_DropdownIndexed.BP_OptionsRow_DropdownIndexed_C
	 * Size -> 0x0080 (FullSize[0x0318] - InheritedSize[0x0298])
	 */
	class UBP_OptionsRow_DropdownIndexed_C : public UBP_OptionsRow_BaseClass_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_OptionsRow_Container_C*                          BP_OptionsRow_Base;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxText*                                       ComboBox;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x02B0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class FText>                                        Options;                                                 // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FText>                                        DefaultOptions;                                          // 0x02D8(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOptionSelected;                                        // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SkipEvent;                                               // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Hovered;                                                 // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5QY4[0x6];                                   // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0300(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		struct FSlateColor GetForegroundColor_1();
		void CreateDefaultOptions();
		void SetDefaultOption(int32_t ID);
		void SelectOption(int32_t ID, bool* bExists);
		void GetSelectedOption(int32_t* ID, class FText* Text);
		void AddOption(const class FText& Text, int32_t* Index);
		void ClearOptions();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FText& SelectedItem, ESelectInfo SelectionType);
		void ExecuteUbergraph_BP_OptionsRow_DropdownIndexed(int32_t EntryPoint);
		void OnOptionSelected__DelegateSignature(int32_t ID, const class FText& Text, ESelectInfo SelectInfo);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
