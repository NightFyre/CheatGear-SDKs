#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.UpdateValue
	 */
	struct UWBP_InGameMap_TimeOfDay_C_UpdateValue_Params
	{	};

	/**
	 * Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.Construct
	 */
	struct UWBP_InGameMap_TimeOfDay_C_Construct_Params
	{	};

	/**
	 * Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.OnInitialTimeOfDayChanged_Event_1
	 */
	struct UWBP_InGameMap_TimeOfDay_C_OnInitialTimeOfDayChanged_Event_1_Params
	{
	public:
		class AGBSky*                                              SkyActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.CheckWorldTimeUpdated
	 */
	struct UWBP_InGameMap_TimeOfDay_C_CheckWorldTimeUpdated_Params
	{	};

	/**
	 * Function WBP_InGameMap_TimeOfDay.WBP_InGameMap_TimeOfDay_C.ExecuteUbergraph_WBP_InGameMap_TimeOfDay
	 */
	struct UWBP_InGameMap_TimeOfDay_C_ExecuteUbergraph_WBP_InGameMap_TimeOfDay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NC4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
