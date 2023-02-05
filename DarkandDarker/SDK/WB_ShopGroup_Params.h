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
	 * Function WB_ShopGroup.WB_ShopGroup_C.Construct
	 */
	struct UWB_ShopGroup_C_Construct_Params
	{	};

	/**
	 * Function WB_ShopGroup.WB_ShopGroup_C.OnGroupVisibilityChanged
	 */
	struct UWB_ShopGroup_C_OnGroupVisibilityChanged_Params
	{
	public:
		ESlateVisibility                                           Invisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ShopGroup.WB_ShopGroup_C.Destruct
	 */
	struct UWB_ShopGroup_C_Destruct_Params
	{	};

	/**
	 * Function WB_ShopGroup.WB_ShopGroup_C.ExecuteUbergraph_WB_ShopGroup
	 */
	struct UWB_ShopGroup_C_ExecuteUbergraph_WB_ShopGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif