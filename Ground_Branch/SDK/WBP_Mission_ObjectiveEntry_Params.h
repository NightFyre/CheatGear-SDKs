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
	 * Function WBP_Mission_ObjectiveEntry.WBP_Mission_ObjectiveEntry_C.Get_TextBlock_Completion_ColorAndOpacity_1
	 */
	struct UWBP_Mission_ObjectiveEntry_C_Get_TextBlock_Completion_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Mission_ObjectiveEntry.WBP_Mission_ObjectiveEntry_C.Construct
	 */
	struct UWBP_Mission_ObjectiveEntry_C_Construct_Params
	{	};

	/**
	 * Function WBP_Mission_ObjectiveEntry.WBP_Mission_ObjectiveEntry_C.ExecuteUbergraph_WBP_Mission_ObjectiveEntry
	 */
	struct UWBP_Mission_ObjectiveEntry_C_ExecuteUbergraph_WBP_Mission_ObjectiveEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
