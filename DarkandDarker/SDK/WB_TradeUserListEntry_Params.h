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
	 * Function WB_TradeUserListEntry.WB_TradeUserListEntry_C.OnMouseButtonDown
	 */
	struct UWB_TradeUserListEntry_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_TradeUserListEntry.WB_TradeUserListEntry_C.BndEvt__WB_TradeUserListEntry_Btn_Common_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_TradeUserListEntry_C_BndEvt__WB_TradeUserListEntry_Btn_Common_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TradeUserListEntry.WB_TradeUserListEntry_C.BndEvt__WB_TradeUserListEntry_Btn_Common_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_TradeUserListEntry_C_BndEvt__WB_TradeUserListEntry_Btn_Common_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_TradeUserListEntry.WB_TradeUserListEntry_C.ExecuteUbergraph_WB_TradeUserListEntry
	 */
	struct UWB_TradeUserListEntry_C_ExecuteUbergraph_WB_TradeUserListEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
