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
	 * Function WB_LoadingScreenLow.WB_LoadingScreenLow_C.PreConstruct
	 */
	struct UWB_LoadingScreenLow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LoadingScreenLow.WB_LoadingScreenLow_C.Construct
	 */
	struct UWB_LoadingScreenLow_C_Construct_Params
	{	};

	/**
	 * Function WB_LoadingScreenLow.WB_LoadingScreenLow_C.ExecuteUbergraph_WB_LoadingScreenLow
	 */
	struct UWB_LoadingScreenLow_C_ExecuteUbergraph_WB_LoadingScreenLow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HSUD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
