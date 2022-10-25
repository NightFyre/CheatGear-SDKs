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
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.CheckShouldCollapseWidget
	 */
	struct UBP_ClassSelect_TeamButton_C_CheckShouldCollapseWidget_Params
	{	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.UpdateEnabledState
	 */
	struct UBP_ClassSelect_TeamButton_C_UpdateEnabledState_Params
	{	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.Get_LeftTextDescriptionWidget_Visibility_1
	 */
	struct UBP_ClassSelect_TeamButton_C_Get_LeftTextDescriptionWidget_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.OnSelected
	 */
	struct UBP_ClassSelect_TeamButton_C_OnSelected_Params
	{	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.OnKeyDown
	 */
	struct UBP_ClassSelect_TeamButton_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.OnFocusReceived
	 */
	struct UBP_ClassSelect_TeamButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.Get_ButtonFg_ColorAndOpacity
	 */
	struct UBP_ClassSelect_TeamButton_C_Get_ButtonFg_ColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.Get_LeftSelectHighlight_Visibility_1
	 */
	struct UBP_ClassSelect_TeamButton_C_Get_LeftSelectHighlight_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.Get_ButtonBg_ColorAndOpacity
	 */
	struct UBP_ClassSelect_TeamButton_C_Get_ButtonBg_ColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.PreConstruct
	 */
	struct UBP_ClassSelect_TeamButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.Construct
	 */
	struct UBP_ClassSelect_TeamButton_C_Construct_Params
	{	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ClassSelect_TeamButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.OnFocusLost
	 */
	struct UBP_ClassSelect_TeamButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.OnMouseEnter
	 */
	struct UBP_ClassSelect_TeamButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.OnMouseLeave
	 */
	struct UBP_ClassSelect_TeamButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.ExecuteUbergraph_BP_ClassSelect_TeamButton
	 */
	struct UBP_ClassSelect_TeamButton_C_ExecuteUbergraph_BP_ClassSelect_TeamButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ClassSelect_TeamButton.BP_ClassSelect_TeamButton_C.OnClicked__DelegateSignature
	 */
	struct UBP_ClassSelect_TeamButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		unsigned char                                              FactionId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
