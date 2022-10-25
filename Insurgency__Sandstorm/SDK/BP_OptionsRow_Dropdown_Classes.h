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
	 * WidgetBlueprintGeneratedClass BP_OptionsRow_Dropdown.BP_OptionsRow_Dropdown_C
	 * Size -> 0x0108 (FullSize[0x03A0] - InheritedSize[0x0298])
	 */
	class UBP_OptionsRow_Dropdown_C : public UBP_OptionsRow_BaseClass_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_OptionsRow_Container_C*                          BP_OptionsRow_Base;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxText*                                       ComboBox;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x02B0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TMap<class FName, class FText>                             Options;                                                 // 0x02C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, class FText>                             DefaultOptions;                                          // 0x0318(0x0050) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnOptionSelected;                                        // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SkipEvent;                                               // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_344M[0x3];                                   // 0x0379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AssociatedVariable;                                      // 0x037C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Hovered;                                                 // 0x0384(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6MYQ[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0388(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void SetNewTitle(const class FText& NewParam);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		struct FSlateColor GetForegroundColor_1();
		void CreateDefaultOptions();
		void SetDefaultOption(const class FName& ID);
		void SelectOption(const class FName& ID, bool* bExists);
		void GetSelectedOption(class FName* ID, class FText* Text);
		void AddOption(const class FName& ID, const class FText& Text);
		void ClearOptions();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FText& SelectedItem, ESelectInfo SelectionType);
		void ExecuteUbergraph_BP_OptionsRow_Dropdown(int32_t EntryPoint);
		void OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
