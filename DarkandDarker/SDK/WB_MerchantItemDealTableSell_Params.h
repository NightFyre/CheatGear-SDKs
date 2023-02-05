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
	 * Function WB_MerchantItemDealTableSell.WB_MerchantItemDealTableSell_C.OnActiveSellBackService
	 */
	struct UWB_MerchantItemDealTableSell_C_OnActiveSellBackService_Params
	{
	public:
		class UWB_ItemTooltip_C*                                   ItemTooltip;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bActive;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemDealTableSell.WB_MerchantItemDealTableSell_C.Construct
	 */
	struct UWB_MerchantItemDealTableSell_C_Construct_Params
	{	};

	/**
	 * Function WB_MerchantItemDealTableSell.WB_MerchantItemDealTableSell_C.OnLoadSoundData
	 */
	struct UWB_MerchantItemDealTableSell_C_OnLoadSoundData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemDealTableSell.WB_MerchantItemDealTableSell_C.Destruct
	 */
	struct UWB_MerchantItemDealTableSell_C_Destruct_Params
	{	};

	/**
	 * Function WB_MerchantItemDealTableSell.WB_MerchantItemDealTableSell_C.ExecuteUbergraph_WB_MerchantItemDealTableSell
	 */
	struct UWB_MerchantItemDealTableSell_C_ExecuteUbergraph_WB_MerchantItemDealTableSell_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6MNR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
