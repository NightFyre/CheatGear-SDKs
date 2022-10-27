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
	 * Function BP_AudioSettings.BP_AudioSettings_C.ChangeDescriptionOnPS4
	 */
	struct UBP_AudioSettings_C_ChangeDescriptionOnPS4_Params
	{	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.ScrollToFocusedWidget
	 */
	struct UBP_AudioSettings_C_ScrollToFocusedWidget_Params
	{	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.ShowHoveredInfo
	 */
	struct UBP_AudioSettings_C_ShowHoveredInfo_Params
	{
	public:
		class FText                                                HoveredTitle;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                HoveredDescription;                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.OnFocusReceived
	 */
	struct UBP_AudioSettings_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.Get_OptionBackgroundVolMultiplier_Visibility_1
	 */
	struct UBP_AudioSettings_C_Get_OptionBackgroundVolMultiplier_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.Get_BtnSaveChanges_bIsEnabled_1
	 */
	struct UBP_AudioSettings_C_Get_BtnSaveChanges_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M36D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.PopulateOptions
	 */
	struct UBP_AudioSettings_C_PopulateOptions_Params
	{	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.OnTabSelected
	 */
	struct UBP_AudioSettings_C_OnTabSelected_Params
	{	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.Construct
	 */
	struct UBP_AudioSettings_C_Construct_Params
	{	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.OnGameUserSettingsUINeedsUpdate_Event_1
	 */
	struct UBP_AudioSettings_C_OnGameUserSettingsUINeedsUpdate_Event_1_Params
	{	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.Update Audio Settings
	 */
	struct UBP_AudioSettings_C_Update_Audio_Settings_Params
	{	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.BlueprintResetToDefaults
	 */
	struct UBP_AudioSettings_C_BlueprintResetToDefaults_Params
	{	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.BlueprintApplyChanges
	 */
	struct UBP_AudioSettings_C_BlueprintApplyChanges_Params
	{	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.OnOptionHovered
	 */
	struct UBP_AudioSettings_C_OnOptionHovered_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.OnOptionModified
	 */
	struct UBP_AudioSettings_C_OnOptionModified_Params
	{
	public:
		class UBP_OptionsRow_BaseClass_C*                          OptionWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.BlueprintRefreshSettings
	 */
	struct UBP_AudioSettings_C_BlueprintRefreshSettings_Params
	{	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.OnSliderValueChanged
	 */
	struct UBP_AudioSettings_C_OnSliderValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AudioSettings.BP_AudioSettings_C.ExecuteUbergraph_BP_AudioSettings
	 */
	struct UBP_AudioSettings_C_ExecuteUbergraph_BP_AudioSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SA9B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
