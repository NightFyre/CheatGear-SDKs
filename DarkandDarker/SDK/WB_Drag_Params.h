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
	 * Function WB_Drag.WB_Drag_C.OnFinishedSoundDataLoad
	 */
	struct UWB_Drag_C_OnFinishedSoundDataLoad_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Drag.WB_Drag_C.Construct
	 */
	struct UWB_Drag_C_Construct_Params
	{	};

	/**
	 * Function WB_Drag.WB_Drag_C.ExecuteUbergraph_WB_Drag
	 */
	struct UWB_Drag_C_ExecuteUbergraph_WB_Drag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
