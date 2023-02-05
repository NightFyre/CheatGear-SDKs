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
	 * Function WB_MerchantInvenTabBot.WB_MerchantInvenTabBot_C.Construct
	 */
	struct UWB_MerchantInvenTabBot_C_Construct_Params
	{	};

	/**
	 * Function WB_MerchantInvenTabBot.WB_MerchantInvenTabBot_C.OnActiveServiceChanged
	 */
	struct UWB_MerchantInvenTabBot_C_OnActiveServiceChanged_Params
	{
	public:
		EWidgetMerchantServiceType                                 InServiceType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantInvenTabBot.WB_MerchantInvenTabBot_C.ExecuteUbergraph_WB_MerchantInvenTabBot
	 */
	struct UWB_MerchantInvenTabBot_C_ExecuteUbergraph_WB_MerchantInvenTabBot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZQMR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
