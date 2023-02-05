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
	 * Function WB_LoadoutGroup.WB_LoadoutGroup_C.OnVisible
	 */
	struct UWB_LoadoutGroup_C_OnVisible_Params
	{	};

	/**
	 * Function WB_LoadoutGroup.WB_LoadoutGroup_C.OnInvisible
	 */
	struct UWB_LoadoutGroup_C_OnInvisible_Params
	{	};

	/**
	 * Function WB_LoadoutGroup.WB_LoadoutGroup_C.Construct
	 */
	struct UWB_LoadoutGroup_C_Construct_Params
	{	};

	/**
	 * Function WB_LoadoutGroup.WB_LoadoutGroup_C.OnVisibilityChanged_Event
	 */
	struct UWB_LoadoutGroup_C_OnVisibilityChanged_Event_Params
	{
	public:
		ESlateVisibility                                           Invisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LoadoutGroup.WB_LoadoutGroup_C.Tick
	 */
	struct UWB_LoadoutGroup_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LoadoutGroup.WB_LoadoutGroup_C.ExecuteUbergraph_WB_LoadoutGroup
	 */
	struct UWB_LoadoutGroup_C_ExecuteUbergraph_WB_LoadoutGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7CH2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
