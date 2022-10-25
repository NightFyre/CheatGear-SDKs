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
	 * Function WBP_Hint_Manager.WBP_Hint_Manager_C.AddHint
	 */
	struct UWBP_Hint_Manager_C_AddHint_Params
	{
	public:
		class UUserWidget*                                         HintWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Hint_Manager.WBP_Hint_Manager_C.ClearAll
	 */
	struct UWBP_Hint_Manager_C_ClearAll_Params
	{	};

	/**
	 * Function WBP_Hint_Manager.WBP_Hint_Manager_C.ExecuteUbergraph_WBP_Hint_Manager
	 */
	struct UWBP_Hint_Manager_C_ExecuteUbergraph_WBP_Hint_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7OOE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
