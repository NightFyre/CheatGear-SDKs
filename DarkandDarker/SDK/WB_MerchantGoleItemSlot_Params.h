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
	 * Function WB_MerchantGoleItemSlot.WB_MerchantGoleItemSlot_C.GetItem
	 */
	struct UWB_MerchantGoleItemSlot_C_GetItem_Params
	{
	public:
		struct FPrimaryAssetId                                     NewParam;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantGoleItemSlot.WB_MerchantGoleItemSlot_C.OnRemoveItem
	 */
	struct UWB_MerchantGoleItemSlot_C_OnRemoveItem_Params
	{	};

	/**
	 * Function WB_MerchantGoleItemSlot.WB_MerchantGoleItemSlot_C.OnSetItem
	 */
	struct UWB_MerchantGoleItemSlot_C_OnSetItem_Params
	{
	public:
		class UItemWidget*                                         ItemWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemCount;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6HEE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
