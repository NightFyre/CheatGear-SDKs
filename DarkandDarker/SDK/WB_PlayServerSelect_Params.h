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
	 * Function WB_PlayServerSelect.WB_PlayServerSelect_C.Construct
	 */
	struct UWB_PlayServerSelect_C_Construct_Params
	{	};

	/**
	 * Function WB_PlayServerSelect.WB_PlayServerSelect_C.OnClickedServerSelectBtn
	 */
	struct UWB_PlayServerSelect_C_OnClickedServerSelectBtn_Params
	{	};

	/**
	 * Function WB_PlayServerSelect.WB_PlayServerSelect_C.OnClickedServerSelect
	 */
	struct UWB_PlayServerSelect_C_OnClickedServerSelect_Params
	{	};

	/**
	 * Function WB_PlayServerSelect.WB_PlayServerSelect_C.OnDisableRegionList
	 */
	struct UWB_PlayServerSelect_C_OnDisableRegionList_Params
	{	};

	/**
	 * Function WB_PlayServerSelect.WB_PlayServerSelect_C.ExecuteUbergraph_WB_PlayServerSelect
	 */
	struct UWB_PlayServerSelect_C_ExecuteUbergraph_WB_PlayServerSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
