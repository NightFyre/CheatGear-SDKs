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
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.OnFocusReceived
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.Get_LeftTextWidget_Text_1
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_Get_LeftTextWidget_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.GetButtonFg_ColorAndOpacity
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_GetButtonFg_ColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.GetColor
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_GetColor_Params
	{
	public:
		bool                                                       Foreground;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WA8C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.Get_LeftSelectHighlight_Visibility_1
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_Get_LeftSelectHighlight_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.Get_ButtonBg_ColorAndOpacity
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_Get_ButtonBg_ColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.PreConstruct
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.OnAddedToFocusPath
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.OnRemovedFromFocusPath
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.OnMouseEnter
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.OnMouseLeave
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.ExecuteUbergraph_BP_KitSelect_WeaponButtonEmpty
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_ExecuteUbergraph_BP_KitSelect_WeaponButtonEmpty_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_WeaponButtonEmpty.BP_KitSelect_WeaponButtonEmpty_C.OnWeaponClicked__DelegateSignature
	 */
	struct UBP_KitSelect_WeaponButtonEmpty_C_OnWeaponClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
