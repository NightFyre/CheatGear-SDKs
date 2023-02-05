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
	 * Function WB_DealTableSell.WB_DealTableSell_C.OnMessageReceived_E2C02A554E1053562145B488A3F64D4E
	 */
	struct UWB_DealTableSell_C_OnMessageReceived_E2C02A554E1053562145B488A3F64D4E_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_DealTableSell.WB_DealTableSell_C.Construct
	 */
	struct UWB_DealTableSell_C_Construct_Params
	{	};

	/**
	 * Function WB_DealTableSell.WB_DealTableSell_C.EventFMsgDealTableTotalSellPriceNotify
	 */
	struct UWB_DealTableSell_C_EventFMsgDealTableTotalSellPriceNotify_Params
	{
	public:
		struct FMsgDealTableTotalSellPriceNotify                   Msg;                                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_DealTableSell.WB_DealTableSell_C.OnDealButtonClicked
	 */
	struct UWB_DealTableSell_C_OnDealButtonClicked_Params
	{	};

	/**
	 * Function WB_DealTableSell.WB_DealTableSell_C.On Load Sound Data
	 */
	struct UWB_DealTableSell_C_OnLoadSoundData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_DealTableSell.WB_DealTableSell_C.ExecuteUbergraph_WB_DealTableSell
	 */
	struct UWB_DealTableSell_C_ExecuteUbergraph_WB_DealTableSell_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
