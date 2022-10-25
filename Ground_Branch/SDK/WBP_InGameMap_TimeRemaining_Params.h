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
	 * Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.GetTimeText
	 */
	struct UWBP_InGameMap_TimeRemaining_C_GetTimeText_Params
	{
	public:
		float                                                      RoundTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FD96[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                TimeText;                                                // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.Construct
	 */
	struct UWBP_InGameMap_TimeRemaining_C_Construct_Params
	{	};

	/**
	 * Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.UpdateValue
	 */
	struct UWBP_InGameMap_TimeRemaining_C_UpdateValue_Params
	{	};

	/**
	 * Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.CheckTimeRemaining
	 */
	struct UWBP_InGameMap_TimeRemaining_C_CheckTimeRemaining_Params
	{	};

	/**
	 * Function WBP_InGameMap_TimeRemaining.WBP_InGameMap_TimeRemaining_C.ExecuteUbergraph_WBP_InGameMap_TimeRemaining
	 */
	struct UWBP_InGameMap_TimeRemaining_C_ExecuteUbergraph_WBP_InGameMap_TimeRemaining_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1I8W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
