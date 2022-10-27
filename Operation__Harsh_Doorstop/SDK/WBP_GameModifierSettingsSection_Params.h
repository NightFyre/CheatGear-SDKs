#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.InternalRecursiveSetContentIsEnabled
	 */
	struct UWBP_GameModifierSettingsSection_C_InternalRecursiveSetContentIsEnabled_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9XZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.IsActive
	 */
	struct UWBP_GameModifierSettingsSection_C_IsActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.IsExpanded
	 */
	struct UWBP_GameModifierSettingsSection_C_IsExpanded_Params
	{
	public:
		bool                                                       bExpanded;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.GetTitleText
	 */
	struct UWBP_GameModifierSettingsSection_C_GetTitleText_Params
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.SetIsActive
	 */
	struct UWBP_GameModifierSettingsSection_C_SetIsActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.SetExpansionState
	 */
	struct UWBP_GameModifierSettingsSection_C_SetExpansionState_Params
	{
	public:
		bool                                                       bExpanded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CPRA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.SetTitleText
	 */
	struct UWBP_GameModifierSettingsSection_C_SetTitleText_Params
	{
	public:
		class FText                                                InTitleText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.PreConstruct
	 */
	struct UWBP_GameModifierSettingsSection_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.BndEvt__SectionExpansionToggleBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_GameModifierSettingsSection_C_BndEvt__SectionExpansionToggleBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.BndEvt__SectionActiveToggleChkBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_GameModifierSettingsSection_C_BndEvt__SectionActiveToggleChkBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GameModifierSettingsSection.WBP_GameModifierSettingsSection_C.ExecuteUbergraph_WBP_GameModifierSettingsSection
	 */
	struct UWBP_GameModifierSettingsSection_C_ExecuteUbergraph_WBP_GameModifierSettingsSection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
