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
	 * Function WBP_UseItemMenu.WBP_UseItemMenu_C.Open
	 */
	struct UWBP_UseItemMenu_C_Open_Params
	{
	public:
		TArray<class AGBItem*>                                     Array;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_UseItemMenu.WBP_UseItemMenu_C.Close
	 */
	struct UWBP_UseItemMenu_C_Close_Params
	{	};

	/**
	 * Function WBP_UseItemMenu.WBP_UseItemMenu_C.ForceClosed
	 */
	struct UWBP_UseItemMenu_C_ForceClosed_Params
	{	};

	/**
	 * Function WBP_UseItemMenu.WBP_UseItemMenu_C.ExecuteUbergraph_WBP_UseItemMenu
	 */
	struct UWBP_UseItemMenu_C_ExecuteUbergraph_WBP_UseItemMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
