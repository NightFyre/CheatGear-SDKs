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
	 * Function WB_MerchantList.WB_MerchantList_C.OnAddMerchantListSlotWidget
	 */
	struct UWB_MerchantList_C_OnAddMerchantListSlotWidget_Params
	{
	public:
		class UUserWidget*                                         AddedSlotWidget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantList.WB_MerchantList_C.OnRemoveAllMerchantListSlotWidget
	 */
	struct UWB_MerchantList_C_OnRemoveAllMerchantListSlotWidget_Params
	{	};

	/**
	 * Function WB_MerchantList.WB_MerchantList_C.ExecuteUbergraph_WB_MerchantList
	 */
	struct UWB_MerchantList_C_ExecuteUbergraph_WB_MerchantList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
