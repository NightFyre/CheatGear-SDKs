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
	 * Function WB_DealTableBuy.WB_DealTableBuy_C.Construct
	 */
	struct UWB_DealTableBuy_C_Construct_Params
	{	};

	/**
	 * Function WB_DealTableBuy.WB_DealTableBuy_C.BeforeSetStockBuySellData
	 */
	struct UWB_DealTableBuy_C_BeforeSetStockBuySellData_Params
	{	};

	/**
	 * Function WB_DealTableBuy.WB_DealTableBuy_C.OnRemoveStockBuyData
	 */
	struct UWB_DealTableBuy_C_OnRemoveStockBuyData_Params
	{	};

	/**
	 * Function WB_DealTableBuy.WB_DealTableBuy_C.OnSetStockBuyData
	 */
	struct UWB_DealTableBuy_C_OnSetStockBuyData_Params
	{
	public:
		struct FStockBuyData                                       InStockBuyBata;                                          // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_DealTableBuy.WB_DealTableBuy_C.OnFillButtonClicked
	 */
	struct UWB_DealTableBuy_C_OnFillButtonClicked_Params
	{	};

	/**
	 * Function WB_DealTableBuy.WB_DealTableBuy_C.OnDealButtonClicked
	 */
	struct UWB_DealTableBuy_C_OnDealButtonClicked_Params
	{	};

	/**
	 * Function WB_DealTableBuy.WB_DealTableBuy_C.OnStockBuyFillItemsResponse
	 */
	struct UWB_DealTableBuy_C_OnStockBuyFillItemsResponse_Params
	{
	public:
		bool                                                       bFillSucceed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y44H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FStockBuyRequiredData>                       ResultRequiredDataArray;                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_DealTableBuy.WB_DealTableBuy_C.OnSuccessStockBuy
	 */
	struct UWB_DealTableBuy_C_OnSuccessStockBuy_Params
	{	};

	/**
	 * Function WB_DealTableBuy.WB_DealTableBuy_C.On Load Sound Data
	 */
	struct UWB_DealTableBuy_C_OnLoadSoundData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_DealTableBuy.WB_DealTableBuy_C.ExecuteUbergraph_WB_DealTableBuy
	 */
	struct UWB_DealTableBuy_C_ExecuteUbergraph_WB_DealTableBuy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
