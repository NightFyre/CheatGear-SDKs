﻿#pragma once

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
	 * Function WB_MerchantItemDealTableBuy.WB_MerchantItemDealTableBuy_C.Construct
	 */
	struct UWB_MerchantItemDealTableBuy_C_Construct_Params
	{	};

	/**
	 * Function WB_MerchantItemDealTableBuy.WB_MerchantItemDealTableBuy_C.OnLoadSoundData
	 */
	struct UWB_MerchantItemDealTableBuy_C_OnLoadSoundData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemDealTableBuy.WB_MerchantItemDealTableBuy_C.ExecuteUbergraph_WB_MerchantItemDealTableBuy
	 */
	struct UWB_MerchantItemDealTableBuy_C_ExecuteUbergraph_WB_MerchantItemDealTableBuy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MY7D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif