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
	 * Function WB_MerchantCostItemSlot.WB_MerchantCostItemSlot_C.UpdateSetCount
	 */
	struct UWB_MerchantCostItemSlot_C_UpdateSetCount_Params
	{
	public:
		int32_t                                                    InSetCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_22M9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_MerchantCostItemSlot.WB_MerchantCostItemSlot_C.OnRemoveItem
	 */
	struct UWB_MerchantCostItemSlot_C_OnRemoveItem_Params
	{	};

	/**
	 * Function WB_MerchantCostItemSlot.WB_MerchantCostItemSlot_C.OnSetItem
	 */
	struct UWB_MerchantCostItemSlot_C_OnSetItem_Params
	{
	public:
		class UItemWidget*                                         ItemWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemCount;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L8L3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
