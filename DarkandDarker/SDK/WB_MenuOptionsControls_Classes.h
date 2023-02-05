#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_MenuOptionsControls.WB_MenuOptionsControls_C
	 * Size -> 0x0080 (FullSize[0x03F0] - InheritedSize[0x0370])
	 */
	class UWB_MenuOptionsControls_C : public UGameMenuOptionsControlsWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Btn_Language;                                            // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_ApplyPress;                                          // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_English;                                             // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Korean;                                              // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_ResetPress;                                          // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher_Language;                                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Apply;                                               // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_English;                                             // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Korean;                                              // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Reset;                                               // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_MenuOptionSlot_Slider_C*                         MouseSenitivity;                                         // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionToggleSwitchSlot_C*                    InvertMouseHorizontalAxis;                               // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionToggleSwitchSlot_C*                    InvertMouseVerticalAxis;                                 // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionToggleSwitchSlot_C*                    IgnoreInvitaion;                                         // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_MenuOptionToggleSwitchSlot_C*                    StreamingMode;                                           // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnOptionWidgetHovered(class UWidgetSwitcher* BtnSwitcher);
		void InitOptionWidgetBinding();
		void Construct();
		void OnGameUserSettingControls(const struct FGameUserSettingControls& NewValue, const struct FGameUserSettingControls& OldValue);
		void BndEvt__WB_MenuOptionsControls_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
		void UpdateCultureButton(const class FString& culture);
		void BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature();
		void OnMouseSenitivityHovered();
		void OnInvertMouseHorizontalAxisHovered();
		void OnInvertMouseVerticalHovered();
		void OnIgnoreInvitationHovered();
		void OnStreamingModeHovered();
		void ExecuteUbergraph_WB_MenuOptionsControls(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
