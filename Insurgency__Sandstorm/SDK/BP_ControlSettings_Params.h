#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.ApplyControllerLayout
	 */
	struct UBP_ControlSettings_C_ApplyControllerLayout_Params
	{
	public:
		class FName                                                Layout_Name;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.HideSettingsOnConsole
	 */
	struct UBP_ControlSettings_C_HideSettingsOnConsole_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.ChangeDescriptionOnPS4
	 */
	struct UBP_ControlSettings_C_ChangeDescriptionOnPS4_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.HideMouseSettingsOnConsole
	 */
	struct UBP_ControlSettings_C_HideMouseSettingsOnConsole_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.PopulateGamepadLayoutSettings
	 */
	struct UBP_ControlSettings_C_PopulateGamepadLayoutSettings_Params
	{
	public:
		class FName                                                Selection;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.ScrollToFocusedWidget
	 */
	struct UBP_ControlSettings_C_ScrollToFocusedWidget_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.OnFocusReceived
	 */
	struct UBP_ControlSettings_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.UpdateOpticSensitivity
	 */
	struct UBP_ControlSettings_C_UpdateOpticSensitivity_Params
	{
	public:
		bool                                                       bGamepad;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EOpticZoomLevel                                            ZoomLevel;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2R52[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Sensitivity;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.ShowHoveredInfo
	 */
	struct UBP_ControlSettings_C_ShowHoveredInfo_Params
	{
	public:
		class FText                                                HoveredTitle;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                HoveredDescription;                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.PopulateGamepadSettings
	 */
	struct UBP_ControlSettings_C_PopulateGamepadSettings_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.PopulateSensitivityModifierSettings
	 */
	struct UBP_ControlSettings_C_PopulateSensitivityModifierSettings_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.PopulateMouseSettings
	 */
	struct UBP_ControlSettings_C_PopulateMouseSettings_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.PopulateMainInputSettings
	 */
	struct UBP_ControlSettings_C_PopulateMainInputSettings_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.PopulateControlSettings
	 */
	struct UBP_ControlSettings_C_PopulateControlSettings_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.Get_BtnSaveChanges_bIsEnabled_1
	 */
	struct UBP_ControlSettings_C_Get_BtnSaveChanges_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AZW8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.PopulateOptions
	 */
	struct UBP_ControlSettings_C_PopulateOptions_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.OnTabSelected
	 */
	struct UBP_ControlSettings_C_OnTabSelected_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.Construct
	 */
	struct UBP_ControlSettings_C_Construct_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.OnGameUserSettingsUINeedsUpdate_Event_1
	 */
	struct UBP_ControlSettings_C_OnGameUserSettingsUINeedsUpdate_Event_1_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.BlueprintResetToDefaults
	 */
	struct UBP_ControlSettings_C_BlueprintResetToDefaults_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.BlueprintRefreshSettings
	 */
	struct UBP_ControlSettings_C_BlueprintRefreshSettings_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.BlueprintApplyChanges
	 */
	struct UBP_ControlSettings_C_BlueprintApplyChanges_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.ApplyMouseSettings
	 */
	struct UBP_ControlSettings_C_ApplyMouseSettings_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.ApplyGamepadSettings
	 */
	struct UBP_ControlSettings_C_ApplyGamepadSettings_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.ApplyGeneralSettings
	 */
	struct UBP_ControlSettings_C_ApplyGeneralSettings_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsGamepadXSensitivity_K2Node_ComponentBoundEvent_58_OnOptionHovered__DelegateSignature
	 */
	struct UBP_ControlSettings_C_BndEvt__OptionsGamepadXSensitivity_K2Node_ComponentBoundEvent_58_OnOptionHovered__DelegateSignature_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_69_OnOptionSelected__DelegateSignature
	 */
	struct UBP_ControlSettings_C_BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_69_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P8R7[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_70_OnOptionHovered__DelegateSignature
	 */
	struct UBP_ControlSettings_C_BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_70_OnOptionHovered__DelegateSignature_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_72_OnOptionUnhovered__DelegateSignature
	 */
	struct UBP_ControlSettings_C_BndEvt__OptionsControllerLayout_K2Node_ComponentBoundEvent_72_OnOptionUnhovered__DelegateSignature_Params
	{
	public:
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.OnOptionHovered
	 */
	struct UBP_ControlSettings_C_OnOptionHovered_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.OnOptionModified
	 */
	struct UBP_ControlSettings_C_OnOptionModified_Params
	{
	public:
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionFreeaimDeadzone_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature
	 */
	struct UBP_ControlSettings_C_BndEvt__OptionFreeaimDeadzone_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.OnSliderValueChanged
	 */
	struct UBP_ControlSettings_C_OnSliderValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.OnProfileBlockLoadedDelegate_Event_1
	 */
	struct UBP_ControlSettings_C_OnProfileBlockLoadedDelegate_Event_1_Params
	{
	public:
		EProfileBlockType                                          Type;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromCloud;                                              // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.OnGamepadLayoutApplied_Event
	 */
	struct UBP_ControlSettings_C_OnGamepadLayoutApplied_Event_Params
	{
	public:
		class FName                                                NewID;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.BndEvt__OptionsGamepadLayout_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature
	 */
	struct UBP_ControlSettings_C_BndEvt__OptionsGamepadLayout_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.Destruct
	 */
	struct UBP_ControlSettings_C_Destruct_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.LoadAndForwardControllerLayout
	 */
	struct UBP_ControlSettings_C_LoadAndForwardControllerLayout_Params
	{	};

	/**
	 * Function BP_ControlSettings.BP_ControlSettings_C.ExecuteUbergraph_BP_ControlSettings
	 */
	struct UBP_ControlSettings_C_ExecuteUbergraph_BP_ControlSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BCGF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
