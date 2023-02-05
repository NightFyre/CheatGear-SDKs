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
	 * WidgetBlueprintGeneratedClass WB_MenuOptionsInput.WB_MenuOptionsInput_C
	 * Size -> 0x0028 (FullSize[0x0330] - InheritedSize[0x0308])
	 */
	class UWB_MenuOptionsInput_C : public UGameMenuOptionsInputWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Img_ApplyPress;                                          // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_ResetPress;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Apply;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Reset;                                               // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature();
		void ExecuteUbergraph_WB_MenuOptionsInput(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
