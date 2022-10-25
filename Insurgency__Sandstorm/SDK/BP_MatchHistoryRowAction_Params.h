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
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.OnFocusReceived
	 */
	struct UBP_MatchHistoryRowAction_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.GetBrushColor_1
	 */
	struct UBP_MatchHistoryRowAction_C_GetBrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.Get_ButtonText_ColorAndOpacity_1
	 */
	struct UBP_MatchHistoryRowAction_C_Get_ButtonText_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.PreConstruct
	 */
	struct UBP_MatchHistoryRowAction_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MatchHistoryRowAction_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_MatchHistoryRowAction_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.OnRemovedFromFocusPath
	 */
	struct UBP_MatchHistoryRowAction_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.OnAddedToFocusPath
	 */
	struct UBP_MatchHistoryRowAction_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.OnMouseEnter
	 */
	struct UBP_MatchHistoryRowAction_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.OnMouseLeave
	 */
	struct UBP_MatchHistoryRowAction_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.ExecuteUbergraph_BP_MatchHistoryRowAction
	 */
	struct UBP_MatchHistoryRowAction_C_ExecuteUbergraph_BP_MatchHistoryRowAction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MatchHistoryRowAction.BP_MatchHistoryRowAction_C.OnSelected__DelegateSignature
	 */
	struct UBP_MatchHistoryRowAction_C_OnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
