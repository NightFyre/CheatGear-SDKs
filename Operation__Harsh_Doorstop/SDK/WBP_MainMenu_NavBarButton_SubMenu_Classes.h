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
	 * WidgetBlueprintGeneratedClass WBP_MainMenu_NavBarButton_SubMenu.WBP_MainMenu_NavBarButton_SubMenu_C
	 * Size -> 0x03C8 (FullSize[0x05F8] - InheritedSize[0x0230])
	 */
	class UWBP_MainMenu_NavBarButton_SubMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button;                                                  // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ButtonText;                                              // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                BtnText;                                                 // 0x0248(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             ButtonClicked;                                           // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ButtonPressed;                                           // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ButtonReleased;                                          // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ButtonHovered;                                           // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ButtonUnhovered;                                         // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateColor                                         TextColorNormal;                                         // 0x02B0(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                         TextColorPressed;                                        // 0x02D8(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                         TextColorHovered;                                        // 0x0300(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FButtonStyle                                        BtnStyle;                                                // 0x0328(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateFontInfo                                      TextFont;                                                // 0x05A0(0x0050) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bUppercaseText;                                          // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_OSWA[0x3];                                   // 0x05F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubMenuIndex;                                            // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSubMenuIndex(int32_t* SubMenuIndex);
		void SetSubMenuIndex(int32_t NewSubMenuIndex);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_WBP_MainMenu_NavBarButton_SubMenu(int32_t EntryPoint);
		void ButtonUnhovered__DelegateSignature();
		void ButtonHovered__DelegateSignature();
		void ButtonReleased__DelegateSignature();
		void ButtonPressed__DelegateSignature();
		void ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_SubMenu_C* ClickedBtn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
