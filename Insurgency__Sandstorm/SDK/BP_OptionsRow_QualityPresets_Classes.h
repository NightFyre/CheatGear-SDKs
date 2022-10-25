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
	 * WidgetBlueprintGeneratedClass BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C
	 * Size -> 0x005C (FullSize[0x02F4] - InheritedSize[0x0298])
	 */
	class UBP_OptionsRow_QualityPresets_C : public UBP_OptionsRow_BaseClass_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_OptionsRow_Container_C*                          BP_OptionsRow_Base;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     OptionPresetAuto;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     OptionPresetHigh;                                        // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     OptionPresetLow;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     OptionPresetMedium;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     OptionPresetVeryHigh;                                    // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      OptionsBox;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnQualityPresetChanged;                                  // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBP_INSButton_C*                                     CurrentlySelectedOption;                                 // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentSelectedIndex;                                    // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FindNextOption(bool MovingLeft, class UWidget** OutWidget);
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__OptionPresetLow_K2Node_ComponentBoundEvent_46_OnClick__DelegateSignature();
		void BndEvt__OptionPresetMedium_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature();
		void BndEvt__OptionPresetHigh_K2Node_ComponentBoundEvent_69_OnClick__DelegateSignature();
		void BndEvt__OptionPresetVeryHigh_K2Node_ComponentBoundEvent_80_OnClick__DelegateSignature();
		void BndEvt__OptionPresetAuto_K2Node_ComponentBoundEvent_92_OnClick__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_BP_OptionsRow_QualityPresets(int32_t EntryPoint);
		void OnQualityPresetChanged__DelegateSignature(int32_t Preset);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
