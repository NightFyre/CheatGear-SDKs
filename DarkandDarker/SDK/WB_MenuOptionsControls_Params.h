#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnOptionWidgetHovered
	 */
	struct UWB_MenuOptionsControls_C_OnOptionWidgetHovered_Params
	{
	public:
		class UWidgetSwitcher*                                     BtnSwitcher;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.InitOptionWidgetBinding
	 */
	struct UWB_MenuOptionsControls_C_InitOptionWidgetBinding_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.Construct
	 */
	struct UWB_MenuOptionsControls_C_Construct_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnGameUserSettingControls
	 */
	struct UWB_MenuOptionsControls_C_OnGameUserSettingControls_Params
	{
	public:
		struct FGameUserSettingControls                            NewValue;                                                // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameUserSettingControls                            OldValue;                                                // 0x0028(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.UpdateCultureButton
	 */
	struct UWB_MenuOptionsControls_C_UpdateCultureButton_Params
	{
	public:
		class FString                                              culture;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ApplyButton_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWB_MenuOptionsControls_C_BndEvt__WB_MenuOptionsControls_ResetButton_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnMouseSenitivityHovered
	 */
	struct UWB_MenuOptionsControls_C_OnMouseSenitivityHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnInvertMouseHorizontalAxisHovered
	 */
	struct UWB_MenuOptionsControls_C_OnInvertMouseHorizontalAxisHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnInvertMouseVerticalHovered
	 */
	struct UWB_MenuOptionsControls_C_OnInvertMouseVerticalHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnIgnoreInvitationHovered
	 */
	struct UWB_MenuOptionsControls_C_OnIgnoreInvitationHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnStreamingModeHovered
	 */
	struct UWB_MenuOptionsControls_C_OnStreamingModeHovered_Params
	{	};

	/**
	 * Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.ExecuteUbergraph_WB_MenuOptionsControls
	 */
	struct UWB_MenuOptionsControls_C_ExecuteUbergraph_WB_MenuOptionsControls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
