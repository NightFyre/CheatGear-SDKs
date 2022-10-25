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
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.ShowNotification
	 */
	struct UBP_MenuOptionRow_C_ShowNotification_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.OnFocusReceived
	 */
	struct UBP_MenuOptionRow_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.SetFontSize
	 */
	struct UBP_MenuOptionRow_C_SetFontSize_Params
	{	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.Select
	 */
	struct UBP_MenuOptionRow_C_Select_Params
	{	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.SetHovered
	 */
	struct UBP_MenuOptionRow_C_SetHovered_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.Get_SelectionBackground_Background_1
	 */
	struct UBP_MenuOptionRow_C_Get_SelectionBackground_Background_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.Get_SectionText_ShadowColorAndOpacity_1
	 */
	struct UBP_MenuOptionRow_C_Get_SectionText_ShadowColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.GetTextColor
	 */
	struct UBP_MenuOptionRow_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.OnMouseEnter
	 */
	struct UBP_MenuOptionRow_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.OnMouseLeave
	 */
	struct UBP_MenuOptionRow_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.OnAddedToFocusPath
	 */
	struct UBP_MenuOptionRow_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.OnRemovedFromFocusPath
	 */
	struct UBP_MenuOptionRow_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MenuOptionRow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.PreConstruct
	 */
	struct UBP_MenuOptionRow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.ExecuteUbergraph_BP_MenuOptionRow
	 */
	struct UBP_MenuOptionRow_C_ExecuteUbergraph_BP_MenuOptionRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.OnMenuOptionFocused__DelegateSignature
	 */
	struct UBP_MenuOptionRow_C_OnMenuOptionFocused__DelegateSignature_Params
	{
	public:
		class UWidget*                                             MenuOption;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.OnUnhovered__DelegateSignature
	 */
	struct UBP_MenuOptionRow_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.OnHovered__DelegateSignature
	 */
	struct UBP_MenuOptionRow_C_OnHovered__DelegateSignature_Params
	{
	public:
		class FText                                                HoverText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MenuOptionRow.BP_MenuOptionRow_C.OnPressed__DelegateSignature
	 */
	struct UBP_MenuOptionRow_C_OnPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
