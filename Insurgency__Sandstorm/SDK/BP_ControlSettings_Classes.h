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
	 * WidgetBlueprintGeneratedClass BP_ControlSettings.BP_ControlSettings_C
	 * Size -> 0x0250 (FullSize[0x0490] - InheritedSize[0x0240])
	 */
	class UBP_ControlSettings_C : public UOptionsMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Settings_PageBase_C*                             BP_Settings_PageBase;                                    // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsHeading_C*                                GamepadHeading;                                          // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_GamepadLayoutDisplay_C*               GamepadLayoutDisplay;                                    // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsHeading_C*                                MouseHeading;                                            // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionAutoLean;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionFreeaimDeadzone;                                   // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionFreeaimDeadzoneScale;                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionFreeaimDeadzoneSensitivity;                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionGamepadAimSensCurve;                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionInvertYAxisMouse;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionLeftStickDeadZone;                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionManualBipod;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionMouseSmoothing;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionRadialToggle;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionRightStickDeadZone;                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OptionsBox;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Dropdown_C*                           OptionsControllerLayout;                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity1HalfXGamepad;                          // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity1HalfXMouse;                            // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity1XGamepad;                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity1XMouse;                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity2HalfXGamepad;                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity2HalfXMouse;                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity2XGamepad;                              // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity2XMouse;                                // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity3XGamepad;                              // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity3XMouse;                                // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity4XGamepad;                              // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity4XMouse;                                // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity6XGamepad;                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity6XMouse;                                // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity7XGamepad;                              // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivity7XMouse;                                // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivityADSGamepad;                             // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivityFocusGamepad;                           // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivityFocusMouse;                             // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionSensitivityFOVScaleGamepad;                        // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionSensitivityFOVScaleMouse;                          // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivityIronsightMouse;                         // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionSensitivityPreferScopeGamepad;                     // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivityScopeGamepad;                           // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionSensitivityScopeMouse;                             // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionSensitvitiyPreferScopeMouse;                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionsGamepadAccelerationMulitplier;                    // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionsGamepadAccelerationThreshold;                     // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionsGamepadAccelerationTimeToReach;                   // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionsGamepadDampeningEaseIn;                           // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionsGamepadDampeningSize;                             // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionsGamepadDampeningStength;                          // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionsGamepadForceFeedback;                             // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Checkbox_C*                           OptionsGamepadInvertY;                                   // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_GamepadLayout_C*                      OptionsGamepadLayout;                                    // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionsGamepadXSensitivity;                              // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_OptionsRow_Slider_C*                             OptionsGamepadYSensitivity;                              // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESlateVisibility                                           VisibilityVar;                                           // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JQ07[0x7];                                   // 0x0401(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class UControllerLayout*>                ControllerLayout;                                        // 0x0408(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              PlatformName;                                            // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              ControllerLayoutNameTemp;                                // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FActionMapList                                      NewVar_1;                                                // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UBP_OptionsRow_BaseClass_C*                          HoveredItemCache;                                        // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ApplyControllerLayout(const class FName& Layout_Name);
		void HideSettingsOnConsole();
		void ChangeDescriptionOnPS4();
		void HideMouseSettingsOnConsole();
		void PopulateGamepadLayoutSettings(const class FName& Selection);
		void ScrollToFocusedWidget();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void UpdateOpticSensitivity(bool bGamepad, EOpticZoomLevel ZoomLevel, float Sensitivity);
		void ShowHoveredInfo(const class FText& HoveredTitle, const class FText& HoveredDescription);
		void PopulateGamepadSettings();
		void PopulateSensitivityModifierSettings();
		void PopulateMouseSettings();
		void PopulateMainInputSettings();
		void PopulateControlSettings();
		bool Get_BtnSaveChanges_bIsEnabled_1();
		void PopulateOptions();
		void OnTabSelected();
		void Construct();
		void OnGameUserSettingsUINeedsUpdate_Event_1();
		void BlueprintResetToDefaults();
		void BlueprintRefreshSettings();
		void BlueprintApplyChanges();
		void ApplyMouseSettings();
		void ApplyGamepadSettings();
		void ApplyGeneralSettings();
		void BndEvt__OptionsGamepadXSensitivity_K2Node_ComponentBoundEvent_58_OnOptionHovered__DelegateSignature(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_69_OnOptionSelected__DelegateSignature(const class FName& ID, const class FText& Text, ESelectInfo SelectInfo, const class FName& Console_Variable);
		void BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_70_OnOptionHovered__DelegateSignature(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_72_OnOptionUnhovered__DelegateSignature(class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void OnOptionHovered(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void OnOptionModified(class UBP_OptionsRow_BaseClass_C* OptionWidget);
		void BndEvt__OptionFreeaimDeadzone_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature(bool State);
		void OnSliderValueChanged(float Value);
		void OnProfileBlockLoadedDelegate_Event_1(EProfileBlockType Type, bool bFromCloud);
		void OnGamepadLayoutApplied_Event(const class FName& NewID);
		void BndEvt__OptionsGamepadLayout_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature(bool State);
		void Destruct();
		void LoadAndForwardControllerLayout();
		void ExecuteUbergraph_BP_ControlSettings(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
