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
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SetActiveInvalidationBoxState
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_SetActiveInvalidationBoxState_Params
	{
	public:
		bool                                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JYUG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SetSticksTexts
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_SetSticksTexts_Params
	{
	public:
		class UVerticalBox*                                        NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsLeftStick;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextRightStickMiddle
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextRightStickMiddle_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.Get Text Right Stick Up
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_Get_Text_Right_Stick_Up_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextLeftStickMiddle
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextLeftStickMiddle_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextLeftStickUp
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextLeftStickUp_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextRightStickDown
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextRightStickDown_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextLeftStickDown
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextLeftStickDown_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.Call JustifyRight_1
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_Call_JustifyRight_1_Params
	{
	public:
		class UBP_TextWithReplaceableText_C*                       Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.Call JustifyLeft_1
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_Call_JustifyLeft_1_Params
	{
	public:
		class UBP_TextWithReplaceableText_C*                       Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapToLeft
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_SwapToLeft_Params
	{	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapToStandard
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_SwapToStandard_Params
	{	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapJustificationOnTumbsticks
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_SwapJustificationOnTumbsticks_Params
	{
	public:
		bool                                                       IsLeft;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.SwapPanelChildren
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_SwapPanelChildren_Params
	{
	public:
		class UPanelWidget*                                        Widget1;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPanelWidget*                                        Widget2;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetTextColor
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.GetBackgroundBrushColor
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_GetBackgroundBrushColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.BP_TextWithReplaceableText_C_22_Event_1
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_BP_TextWithReplaceableText_C_22_Event_1_Params
	{
	public:
		class UBP_TextWithReplaceableText_C*                       BP_TextWithReplaceableText_C_23;                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.BP_TextWithReplaceableText_C_17_Event_1
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_BP_TextWithReplaceableText_C_17_Event_1_Params
	{
	public:
		class UBP_TextWithReplaceableText_C*                       BP_TextWithReplaceableText_C_18;                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.PreConstruct
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.NewLayoutChange
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_NewLayoutChange_Params
	{
	public:
		bool                                                       RequestLeft;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RequestAlternative;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RequestClassic;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RequestModern;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.OnAnimationFinishedGamepadLayout
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_OnAnimationFinishedGamepadLayout_Params
	{	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.ExecuteUbergraph_BP_OptionsRow_GamepadLayoutDisplay
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_ExecuteUbergraph_BP_OptionsRow_GamepadLayoutDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OptionsRow_GamepadLayoutDisplay.BP_OptionsRow_GamepadLayoutDisplay_C.OnOptionSelected__DelegateSignature
	 */
	struct UBP_OptionsRow_GamepadLayoutDisplay_C_OnOptionSelected__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
