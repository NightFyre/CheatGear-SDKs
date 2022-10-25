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
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Set_Enabled
	 */
	struct UBP_ClassSelect_ClassButton_C_Set_Enabled_Params
	{	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Get_UnlockProgressBar_Visibility_1
	 */
	struct UBP_ClassSelect_ClassButton_C_Get_UnlockProgressBar_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Get_ClassUnlockText_Text_1
	 */
	struct UBP_ClassSelect_ClassButton_C_Get_ClassUnlockText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Get_TeamInfo_Visibility_1
	 */
	struct UBP_ClassSelect_ClassButton_C_Get_TeamInfo_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Get_ClassUnlockPercent_1
	 */
	struct UBP_ClassSelect_ClassButton_C_Get_ClassUnlockPercent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UVTO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Get_ClassLocked_Visibility_1
	 */
	struct UBP_ClassSelect_ClassButton_C_Get_ClassLocked_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.SetClassLockedIcon
	 */
	struct UBP_ClassSelect_ClassButton_C_SetClassLockedIcon_Params
	{	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Get_NotificationIcon_Visibility_1
	 */
	struct UBP_ClassSelect_ClassButton_C_Get_NotificationIcon_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.GetClassIcon
	 */
	struct UBP_ClassSelect_ClassButton_C_GetClassIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.OnSelected
	 */
	struct UBP_ClassSelect_ClassButton_C_OnSelected_Params
	{	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.OnKeyDown
	 */
	struct UBP_ClassSelect_ClassButton_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.OnFocusReceived
	 */
	struct UBP_ClassSelect_ClassButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Get_ButtonFg_ColorAndOpacity
	 */
	struct UBP_ClassSelect_ClassButton_C_Get_ButtonFg_ColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Get_RightTextWidget_Text_1
	 */
	struct UBP_ClassSelect_ClassButton_C_Get_RightTextWidget_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Get_LeftSelectHighlight_Visibility_1
	 */
	struct UBP_ClassSelect_ClassButton_C_Get_LeftSelectHighlight_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Get_ButtonBg_ColorAndOpacity
	 */
	struct UBP_ClassSelect_ClassButton_C_Get_ButtonBg_ColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.Construct
	 */
	struct UBP_ClassSelect_ClassButton_C_Construct_Params
	{	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_ClassSelect_ClassButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.OnFocusLost
	 */
	struct UBP_ClassSelect_ClassButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.OnMouseLeave
	 */
	struct UBP_ClassSelect_ClassButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.OnMouseEnter
	 */
	struct UBP_ClassSelect_ClassButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.ExecuteUbergraph_BP_ClassSelect_ClassButton
	 */
	struct UBP_ClassSelect_ClassButton_C_ExecuteUbergraph_BP_ClassSelect_ClassButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.OnHovered__DelegateSignature
	 */
	struct UBP_ClassSelect_ClassButton_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UPlayerClass*                                        PlayerClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClassSlot;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoverValue;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FBFE[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerClassLimit                                   PlayerClassLimit;                                        // 0x0010(0x0210)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ClassSelect_ClassButton.BP_ClassSelect_ClassButton_C.OnClicked__DelegateSignature
	 */
	struct UBP_ClassSelect_ClassButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UPlayerClass*                                        PlayerClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClassSlot;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
