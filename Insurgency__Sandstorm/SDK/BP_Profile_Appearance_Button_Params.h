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
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.OnKeyDown
	 */
	struct UBP_Profile_Appearance_Button_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.GetSelected
	 */
	struct UBP_Profile_Appearance_Button_C_GetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.OnFocusReceived
	 */
	struct UBP_Profile_Appearance_Button_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.GetVisibility_1
	 */
	struct UBP_Profile_Appearance_Button_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.Get_BtnRefresh_Visibility_1
	 */
	struct UBP_Profile_Appearance_Button_C_Get_BtnRefresh_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.GetBackgroundColor
	 */
	struct UBP_Profile_Appearance_Button_C_GetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.SetSelected
	 */
	struct UBP_Profile_Appearance_Button_C_SetSelected_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.GetRedBorderVisibility
	 */
	struct UBP_Profile_Appearance_Button_C_GetRedBorderVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.GetTextColor
	 */
	struct UBP_Profile_Appearance_Button_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.GetIconBrush
	 */
	struct UBP_Profile_Appearance_Button_C_GetIconBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.GetShowIconIfSet
	 */
	struct UBP_Profile_Appearance_Button_C_GetShowIconIfSet_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.PreConstruct
	 */
	struct UBP_Profile_Appearance_Button_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.Construct
	 */
	struct UBP_Profile_Appearance_Button_C_Construct_Params
	{	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Profile_Appearance_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_70_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_Profile_Appearance_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_70_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_83_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_Profile_Appearance_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_83_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.BndEvt__BtnRefresh_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_Profile_Appearance_Button_C_BndEvt__BtnRefresh_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.OnMouseEnter
	 */
	struct UBP_Profile_Appearance_Button_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.OnMouseLeave
	 */
	struct UBP_Profile_Appearance_Button_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.OnFocusLost
	 */
	struct UBP_Profile_Appearance_Button_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.OnRemovedFromFocusPath
	 */
	struct UBP_Profile_Appearance_Button_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.OnAddedToFocusPath
	 */
	struct UBP_Profile_Appearance_Button_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.ExecuteUbergraph_BP_Profile_Appearance_Button
	 */
	struct UBP_Profile_Appearance_Button_C_ExecuteUbergraph_BP_Profile_Appearance_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZGTD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.OnRefreshClicked__DelegateSignature
	 */
	struct UBP_Profile_Appearance_Button_C_OnRefreshClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.OnClicked__DelegateSignature
	 */
	struct UBP_Profile_Appearance_Button_C_OnClicked__DelegateSignature_Params
	{
	public:
		class FString                                              Parameter;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.OnUnhovered__DelegateSignature
	 */
	struct UBP_Profile_Appearance_Button_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Profile_Appearance_Button.BP_Profile_Appearance_Button_C.OnHovered__DelegateSignature
	 */
	struct UBP_Profile_Appearance_Button_C_OnHovered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
