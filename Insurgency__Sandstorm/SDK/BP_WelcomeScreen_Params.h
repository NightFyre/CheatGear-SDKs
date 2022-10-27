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
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.IsInteractable
	 */
	struct UBP_WelcomeScreen_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.FadeLegalText
	 */
	struct UBP_WelcomeScreen_C_FadeLegalText_Params
	{	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.Get_LoginButton_bIsEnabled_1
	 */
	struct UBP_WelcomeScreen_C_Get_LoginButton_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.Get_PressEnterText_ColorAndOpacity_1
	 */
	struct UBP_WelcomeScreen_C_Get_PressEnterText_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.Get_PressEnterText_Visibility_1
	 */
	struct UBP_WelcomeScreen_C_Get_PressEnterText_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.OnKeyDown
	 */
	struct UBP_WelcomeScreen_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.OnFocusReceived
	 */
	struct UBP_WelcomeScreen_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.OnMouseButtonDown
	 */
	struct UBP_WelcomeScreen_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.Tick
	 */
	struct UBP_WelcomeScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.BndEvt__LoginButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_WelcomeScreen_C_BndEvt__LoginButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.Construct
	 */
	struct UBP_WelcomeScreen_C_Construct_Params
	{	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.BndEvt__BP_MenuOptionRow_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
	 */
	struct UBP_WelcomeScreen_C_BndEvt__BP_MenuOptionRow_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_WelcomeScreen.BP_WelcomeScreen_C.ExecuteUbergraph_BP_WelcomeScreen
	 */
	struct UBP_WelcomeScreen_C_ExecuteUbergraph_BP_WelcomeScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
