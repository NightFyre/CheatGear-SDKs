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
	 * Function WB_Guide.WB_Guide_C.Construct
	 */
	struct UWB_Guide_C_Construct_Params
	{	};

	/**
	 * Function WB_Guide.WB_Guide_C.OnCloseClicked
	 */
	struct UWB_Guide_C_OnCloseClicked_Params
	{	};

	/**
	 * Function WB_Guide.WB_Guide_C.OnLeftClicked
	 */
	struct UWB_Guide_C_OnLeftClicked_Params
	{	};

	/**
	 * Function WB_Guide.WB_Guide_C.OnRightClicked
	 */
	struct UWB_Guide_C_OnRightClicked_Params
	{	};

	/**
	 * Function WB_Guide.WB_Guide_C.ExecuteUbergraph_WB_Guide
	 */
	struct UWB_Guide_C_ExecuteUbergraph_WB_Guide_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
