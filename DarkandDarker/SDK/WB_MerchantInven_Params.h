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
	 * Function WB_MerchantInven.WB_MerchantInven_C.OnMerchantServiceActiveNotify
	 */
	struct UWB_MerchantInven_C_OnMerchantServiceActiveNotify_Params
	{
	public:
		EWidgetMerchantServiceType                                 ActiveService;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantInven.WB_MerchantInven_C.ExecuteUbergraph_WB_MerchantInven
	 */
	struct UWB_MerchantInven_C_ExecuteUbergraph_WB_MerchantInven_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
