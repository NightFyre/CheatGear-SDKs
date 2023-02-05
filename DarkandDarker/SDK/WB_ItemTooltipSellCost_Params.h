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
	 * Function WB_ItemTooltipSellCost.WB_ItemTooltipSellCost_C.PreConstruct
	 */
	struct UWB_ItemTooltipSellCost_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltipSellCost.WB_ItemTooltipSellCost_C.Construct
	 */
	struct UWB_ItemTooltipSellCost_C_Construct_Params
	{	};

	/**
	 * Function WB_ItemTooltipSellCost.WB_ItemTooltipSellCost_C.BeforeSetCostSlot
	 */
	struct UWB_ItemTooltipSellCost_C_BeforeSetCostSlot_Params
	{	};

	/**
	 * Function WB_ItemTooltipSellCost.WB_ItemTooltipSellCost_C.OnSetCostInfoData
	 */
	struct UWB_ItemTooltipSellCost_C_OnSetCostInfoData_Params
	{
	public:
		TArray<struct FMerchantCostInfo>                           InCostInfoArray;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ItemTooltipSellCost.WB_ItemTooltipSellCost_C.OnLoadItemBundleInfoAsset
	 */
	struct UWB_ItemTooltipSellCost_C_OnLoadItemBundleInfoAsset_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltipSellCost.WB_ItemTooltipSellCost_C.OnLoadArtData
	 */
	struct UWB_ItemTooltipSellCost_C_OnLoadArtData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltipSellCost.WB_ItemTooltipSellCost_C.ExecuteUbergraph_WB_ItemTooltipSellCost
	 */
	struct UWB_ItemTooltipSellCost_C_ExecuteUbergraph_WB_ItemTooltipSellCost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
