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
	 * Function WBP_Mission_Objectives.WBP_Mission_Objectives_C.Construct
	 */
	struct UWBP_Mission_Objectives_C_Construct_Params
	{	};

	/**
	 * Function WBP_Mission_Objectives.WBP_Mission_Objectives_C.ExecuteUbergraph_WBP_Mission_Objectives
	 */
	struct UWBP_Mission_Objectives_C_ExecuteUbergraph_WBP_Mission_Objectives_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CWA1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
