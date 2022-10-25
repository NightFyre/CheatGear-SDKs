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
	 * WidgetBlueprintGeneratedClass BP_OptionsRow_Checkbox.BP_OptionsRow_Checkbox_C
	 * Size -> 0x0042 (FullSize[0x02DA] - InheritedSize[0x0298])
	 */
	class UBP_OptionsRow_Checkbox_C : public UBP_OptionsRow_BaseClass_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_OptionsRow_Container_C*                          BP_OptionsRow_Base;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           CheckBoxValue;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x02B0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnOptionSelected;                                        // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bDefaultState;                                           // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAppliedDefaultState;                                    // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void IsChecked(bool* Value);
		void SetInitialValue(bool Value);
		void SetValue(bool Val);
		void Construct();
		void BndEvt__ComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__CheckBox_94_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_OptionsRow_Checkbox(int32_t EntryPoint);
		void OnOptionSelected__DelegateSignature(bool State);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
