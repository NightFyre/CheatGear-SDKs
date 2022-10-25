#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_DialogBox_Button.WBP_DialogBox_Button_C
	 * Size -> 0x0110 (FullSize[0x0340] - InheritedSize[0x0230])
	 */
	class UWBP_DialogBox_Button_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             DlgBtn;                                                  // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DlgText;                                                 // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                BtnText;                                                 // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             ButtonClicked;                                           // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bActive;                                                 // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R0FA[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         TextColor;                                               // 0x0278(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColorActive;                                         // 0x02A0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         BtnTint;                                                 // 0x02C8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColorPressed;                                        // 0x02F0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColorHovered;                                        // 0x0318(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateAppearance();
		void SetActive(bool bNewActive);
		void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_DialogBox_Button(int32_t EntryPoint);
		void ButtonClicked__DelegateSignature(class UWBP_DialogBox_Button_C* ClickedBtn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
