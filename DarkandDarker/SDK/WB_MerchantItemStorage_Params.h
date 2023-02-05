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
	 * Function WB_MerchantItemStorage.WB_MerchantItemStorage_C.OnActiveSellBackService
	 */
	struct UWB_MerchantItemStorage_C_OnActiveSellBackService_Params
	{
	public:
		class UWB_ItemTooltip_C*                                   ItemTooltip;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bActive;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemStorage.WB_MerchantItemStorage_C.Construct
	 */
	struct UWB_MerchantItemStorage_C_Construct_Params
	{	};

	/**
	 * Function WB_MerchantItemStorage.WB_MerchantItemStorage_C.ExecuteUbergraph_WB_MerchantItemStorage
	 */
	struct UWB_MerchantItemStorage_C_ExecuteUbergraph_WB_MerchantItemStorage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
