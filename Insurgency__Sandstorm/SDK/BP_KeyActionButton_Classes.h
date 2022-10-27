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
	 * WidgetBlueprintGeneratedClass BP_KeyActionButton.BP_KeyActionButton_C
	 * Size -> 0x0598 (FullSize[0x07C8] - InheritedSize[0x0230])
	 */
	class UBP_KeyActionButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon;                                        // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 BP_KeyActionIcon_2;                                      // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     ButtonSwitcher;                                          // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_1;                                         // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_2;                                         // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             KeyActionButtonWithHover;                                // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             KeyActionButtonWithoutHover;                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_2;                                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0280(0x0018) Edit, BlueprintVisible
		struct FKey                                                Key;                                                     // 0x0298(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                Action;                                                  // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasAction;                                              // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasKey;                                                 // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPlayHoverSound;                                         // 0x02CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bPlaySelectSound;                                        // 0x02CB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bInvertHover;                                            // 0x02CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MAZ5[0x3];                                   // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        InitialButtonStyle;                                      // 0x02D0(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bHideForGamepads;                                        // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bHideForKeyboardMouse;                                   // 0x0549(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bAllowButtonPress;                                       // 0x054A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bReverseKeyText;                                         // 0x054B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VDND[0x4];                                   // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        PressedButtonStyle;                                      // 0x0550(0x0278) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetInitialButtonStyle();
		void setPressedButtonStyle();
		void UpdateButtonOrder();
		void RefreshText();
		void SetText(class FText* newText);
		void EmulateClick();
		void SetAllowButtonPressEnabled(bool bEnabled);
		void GetKeyActionIcon(class UBP_KeyActionIcon_C** KeyActionIcon);
		void SetButtonType();
		void BindControllerDelegates();
		void SetIsUsingController(bool bUsingController, EeInputIconType IconType);
		void Update();
		void SetInvertHover(bool bInvert);
		struct FSlateColor GetColorAndOpacity_1();
		void Construct();
		void BndEvt__Button_151_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_151_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
		void OnRebuildButton();
		void ExecuteUbergraph_BP_KeyActionButton(int32_t EntryPoint);
		void OnPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
