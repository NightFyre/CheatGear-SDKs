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
	 * Function BP_VideoSettings.BP_VideoSettings_C.HideVideoSettingsOnConsole
	 */
	struct UBP_VideoSettings_C_HideVideoSettingsOnConsole_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.OnChangedOptionVideoFOV
	 */
	struct UBP_VideoSettings_C_OnChangedOptionVideoFOV_Params
	{
	public:
		float                                                      NewVideoFOV;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8EQ0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.ScrollToFocusedWidget
	 */
	struct UBP_VideoSettings_C_ScrollToFocusedWidget_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.OnFocusReceived
	 */
	struct UBP_VideoSettings_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.ApplySpecialOptions
	 */
	struct UBP_VideoSettings_C_ApplySpecialOptions_Params
	{
	public:
		bool                                                       Apply_Original;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.SetWarning
	 */
	struct UBP_VideoSettings_C_SetWarning_Params
	{
	public:
		class FText                                                Body;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Visible;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.DetectHighResolution
	 */
	struct UBP_VideoSettings_C_DetectHighResolution_Params
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Height;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Is_High_Resolution;                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.GetOverrideValue
	 */
	struct UBP_VideoSettings_C_GetOverrideValue_Params
	{
	public:
		class UBP_OptionsRow_Dropdown_C*                           Override_Option_Element;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Value;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Modified;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YYGS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.ResetOverrideOptions
	 */
	struct UBP_VideoSettings_C_ResetOverrideOptions_Params
	{
	public:
		bool                                                       Process_All;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PL8D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.ShowHoveredInfo
	 */
	struct UBP_VideoSettings_C_ShowHoveredInfo_Params
	{
	public:
		class FText                                                HoveredTitle;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                HoveredDescription;                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.ResetAllSpecialOptions
	 */
	struct UBP_VideoSettings_C_ResetAllSpecialOptions_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.MarkSpecialOptionDirty
	 */
	struct UBP_VideoSettings_C_MarkSpecialOptionDirty_Params
	{
	public:
		class FName                                                Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5S0D[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         Widget;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.ResetSpecialOption
	 */
	struct UBP_VideoSettings_C_ResetSpecialOption_Params
	{
	public:
		class FName                                                Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XHD5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         Widget;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Mark_as_Modified;                                        // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AV68[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.HasDirtyOverrideOptions
	 */
	struct UBP_VideoSettings_C_HasDirtyOverrideOptions_Params
	{
	public:
		bool                                                       Is_Dirty;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UCON[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.UpdateWidgetTint
	 */
	struct UBP_VideoSettings_C_UpdateWidgetTint_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Has_Been_Marked_As_Dirty;                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Has_Been_Modified;                                       // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A75T[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.MarkSettingsAsDirty
	 */
	struct UBP_VideoSettings_C_MarkSettingsAsDirty_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.ShowConfirmationDialog
	 */
	struct UBP_VideoSettings_C_ShowConfirmationDialog_Params
	{
	public:
		class UUserWidget*                                         Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.OnCancelChanges
	 */
	struct UBP_VideoSettings_C_OnCancelChanges_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.OnConfirmChanges
	 */
	struct UBP_VideoSettings_C_OnConfirmChanges_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.OnKeyDown
	 */
	struct UBP_VideoSettings_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.OverrideOptionChanged
	 */
	struct UBP_VideoSettings_C_OverrideOptionChanged_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                Select_Info;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1TQY[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5DG8[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.PopulateAdvancedVideoOptions
	 */
	struct UBP_VideoSettings_C_PopulateAdvancedVideoOptions_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.PopulateScalability
	 */
	struct UBP_VideoSettings_C_PopulateScalability_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.Get_BtnSaveChanges_bIsEnabled_1
	 */
	struct UBP_VideoSettings_C_Get_BtnSaveChanges_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZG3Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.PopulateOptions
	 */
	struct UBP_VideoSettings_C_PopulateOptions_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.PopulateResolutions
	 */
	struct UBP_VideoSettings_C_PopulateResolutions_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.OnTabSelected
	 */
	struct UBP_VideoSettings_C_OnTabSelected_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.Construct
	 */
	struct UBP_VideoSettings_C_Construct_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.OnGameUserSettingsUINeedsUpdate_Event_1
	 */
	struct UBP_VideoSettings_C_OnGameUserSettingsUINeedsUpdate_Event_1_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionVideoRes_K2Node_ComponentBoundEvent_770_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionVideoRes_K2Node_ComponentBoundEvent_770_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HCQ0[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsVideoMode_K2Node_ComponentBoundEvent_396_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionsVideoMode_K2Node_ComponentBoundEvent_396_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BBOG[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsVideoVSync_K2Node_ComponentBoundEvent_523_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionsVideoVSync_K2Node_ComponentBoundEvent_523_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionAntiAliasing_K2Node_ComponentBoundEvent_1802_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionAntiAliasing_K2Node_ComponentBoundEvent_1802_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WZML[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionPostProcessing_K2Node_ComponentBoundEvent_1904_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionPostProcessing_K2Node_ComponentBoundEvent_1904_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GDK0[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionShadowQuality_K2Node_ComponentBoundEvent_2028_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionShadowQuality_K2Node_ComponentBoundEvent_2028_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NSDE[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionTextureQuality_K2Node_ComponentBoundEvent_2259_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionTextureQuality_K2Node_ComponentBoundEvent_2259_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UV67[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionEffectsQuality_K2Node_ComponentBoundEvent_2260_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionEffectsQuality_K2Node_ComponentBoundEvent_2260_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OHFF[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__BP_OptionsRow_Dropdown_4_K2Node_ComponentBoundEvent_2286_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__BP_OptionsRow_Dropdown_4_K2Node_ComponentBoundEvent_2286_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7WOQ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BlueprintApplyChanges
	 */
	struct UBP_VideoSettings_C_BlueprintApplyChanges_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BlueprintResetToDefaults
	 */
	struct UBP_VideoSettings_C_BlueprintResetToDefaults_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsFrameRateSmoothing_K2Node_ComponentBoundEvent_16_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionsFrameRateSmoothing_K2Node_ComponentBoundEvent_16_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionQualityPresets_K2Node_ComponentBoundEvent_132_OnQualityPresetChanged__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionQualityPresets_K2Node_ComponentBoundEvent_132_OnQualityPresetChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Preset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsGamma_K2Node_ComponentBoundEvent_0_OnValueCommitted__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionsGamma_K2Node_ComponentBoundEvent_0_OnValueCommitted__DelegateSignature_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.OnAdvancedOptionHovered
	 */
	struct UBP_VideoSettings_C_OnAdvancedOptionHovered_Params
	{
	public:
		class FText                                                HoveredTitle;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                HoveredDescription;                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsFrameLimiter_K2Node_ComponentBoundEvent_28_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionsFrameLimiter_K2Node_ComponentBoundEvent_28_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OHYV[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BlueprintRefreshSettings
	 */
	struct UBP_VideoSettings_C_BlueprintRefreshSettings_Params
	{	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionViewDistanceQuality_K2Node_ComponentBoundEvent_31_OnOptionSelected__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionViewDistanceQuality_K2Node_ComponentBoundEvent_31_OnOptionSelected__DelegateSignature_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESelectInfo                                                SelectInfo;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BC0I[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Console_Variable;                                        // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.BndEvt__OptionsSuperSampling_K2Node_ComponentBoundEvent_36_OnValueCommitted__DelegateSignature
	 */
	struct UBP_VideoSettings_C_BndEvt__OptionsSuperSampling_K2Node_ComponentBoundEvent_36_OnValueCommitted__DelegateSignature_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.OnOptionHovered
	 */
	struct UBP_VideoSettings_C_OnOptionHovered_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.OnSliderValueChanged
	 */
	struct UBP_VideoSettings_C_OnSliderValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VideoSettings.BP_VideoSettings_C.ExecuteUbergraph_BP_VideoSettings
	 */
	struct UBP_VideoSettings_C_ExecuteUbergraph_BP_VideoSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GYUS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
