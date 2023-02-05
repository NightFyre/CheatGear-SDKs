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
	 * Function WB_MerchantItemDealTableCraft.WB_MerchantItemDealTableCraft_C.Construct
	 */
	struct UWB_MerchantItemDealTableCraft_C_Construct_Params
	{	};

	/**
	 * Function WB_MerchantItemDealTableCraft.WB_MerchantItemDealTableCraft_C.OnLoadSoundData
	 */
	struct UWB_MerchantItemDealTableCraft_C_OnLoadSoundData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemDealTableCraft.WB_MerchantItemDealTableCraft_C.ExecuteUbergraph_WB_MerchantItemDealTableCraft
	 */
	struct UWB_MerchantItemDealTableCraft_C_ExecuteUbergraph_WB_MerchantItemDealTableCraft_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E1HH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
