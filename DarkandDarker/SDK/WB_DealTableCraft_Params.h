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
	 * Function WB_DealTableCraft.WB_DealTableCraft_C.Construct
	 */
	struct UWB_DealTableCraft_C_Construct_Params
	{	};

	/**
	 * Function WB_DealTableCraft.WB_DealTableCraft_C.ClearDatas
	 */
	struct UWB_DealTableCraft_C_ClearDatas_Params
	{	};

	/**
	 * Function WB_DealTableCraft.WB_DealTableCraft_C.OnFillButtonClicked
	 */
	struct UWB_DealTableCraft_C_OnFillButtonClicked_Params
	{	};

	/**
	 * Function WB_DealTableCraft.WB_DealTableCraft_C.OnDealButtonClicked
	 */
	struct UWB_DealTableCraft_C_OnDealButtonClicked_Params
	{	};

	/**
	 * Function WB_DealTableCraft.WB_DealTableCraft_C.OnRemoveStockCraftData
	 */
	struct UWB_DealTableCraft_C_OnRemoveStockCraftData_Params
	{	};

	/**
	 * Function WB_DealTableCraft.WB_DealTableCraft_C.OnSetStockCraftData
	 */
	struct UWB_DealTableCraft_C_OnSetStockCraftData_Params
	{
	public:
		struct FStockCraftData                                     InStockCraftData;                                        // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_DealTableCraft.WB_DealTableCraft_C.OnSuccessStockCraft
	 */
	struct UWB_DealTableCraft_C_OnSuccessStockCraft_Params
	{	};

	/**
	 * Function WB_DealTableCraft.WB_DealTableCraft_C.OnStockCraftFillItemsResponse
	 */
	struct UWB_DealTableCraft_C_OnStockCraftFillItemsResponse_Params
	{
	public:
		bool                                                       bFillSucceed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FJL0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FStockCraftRequiredData>                     ResultRequiredDataArray;                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_DealTableCraft.WB_DealTableCraft_C.ExecuteUbergraph_WB_DealTableCraft
	 */
	struct UWB_DealTableCraft_C_ExecuteUbergraph_WB_DealTableCraft_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
