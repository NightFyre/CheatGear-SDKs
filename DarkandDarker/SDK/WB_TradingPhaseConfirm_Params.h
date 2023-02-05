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
	 * Function WB_TradingPhaseConfirm.WB_TradingPhaseConfirm_C.Get Trade Fee Text
	 */
	struct UWB_TradingPhaseConfirm_C_GetTradeFeeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_TradingPhaseConfirm.WB_TradingPhaseConfirm_C.BndEvt__WB_TradingPhaseConfirm_TradeBoxLocal_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 */
	struct UWB_TradingPhaseConfirm_C_BndEvt__WB_TradingPhaseConfirm_TradeBoxLocal_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bState;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_TradingPhaseConfirm.WB_TradingPhaseConfirm_C.ExecuteUbergraph_WB_TradingPhaseConfirm
	 */
	struct UWB_TradingPhaseConfirm_C_ExecuteUbergraph_WB_TradingPhaseConfirm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
