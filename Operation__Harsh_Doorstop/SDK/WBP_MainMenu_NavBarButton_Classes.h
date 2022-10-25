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
	 * WidgetBlueprintGeneratedClass WBP_MainMenu_NavBarButton.WBP_MainMenu_NavBarButton_C
	 * Size -> 0x0138 (FullSize[0x0368] - InheritedSize[0x0230])
	 */
	class UWBP_MainMenu_NavBarButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             NavBarBtn;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NavBarText;                                              // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bHasAssociatedOptionMenu;                                // 0x0248(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_NQJW[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              OptionMenuClass;                                         // 0x0250(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                BtnText;                                                 // 0x0258(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn
		class FScriptMulticastDelegate                             ButtonClicked;                                           // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bActive;                                                 // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EGFY[0x3];                                   // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             TextPadding;                                             // 0x0284(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bDisabledInDemoBuilds;                                   // 0x0294(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bHiddenInDemoBuilds;                                     // 0x0295(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_RFPQ[0x2];                                   // 0x0296(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         TextColor;                                               // 0x0298(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColorActive;                                         // 0x02C0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bUseBtnTint;                                             // 0x02E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BK4N[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         BtnTint;                                                 // 0x02F0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColorPressed;                                        // 0x0318(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColorHovered;                                        // 0x0340(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateAppearance();
		void SetActive(bool bNewActive);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void OnInitialized();
		void ExecuteUbergraph_WBP_MainMenu_NavBarButton(int32_t EntryPoint);
		void ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
