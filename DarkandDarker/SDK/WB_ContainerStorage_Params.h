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
	 * Function WB_ContainerStorage.WB_ContainerStorage_C.Construct
	 */
	struct UWB_ContainerStorage_C_Construct_Params
	{	};

	/**
	 * Function WB_ContainerStorage.WB_ContainerStorage_C.OnInitialized
	 */
	struct UWB_ContainerStorage_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_ContainerStorage.WB_ContainerStorage_C.ExecuteUbergraph_WB_ContainerStorage
	 */
	struct UWB_ContainerStorage_C_ExecuteUbergraph_WB_ContainerStorage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
