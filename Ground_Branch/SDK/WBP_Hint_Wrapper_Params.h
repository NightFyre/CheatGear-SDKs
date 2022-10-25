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
	 * Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.Construct
	 */
	struct UWBP_Hint_Wrapper_C_Construct_Params
	{	};

	/**
	 * Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.FadeOut
	 */
	struct UWBP_Hint_Wrapper_C_FadeOut_Params
	{	};

	/**
	 * Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.CleanUp
	 */
	struct UWBP_Hint_Wrapper_C_CleanUp_Params
	{	};

	/**
	 * Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.ExecuteUbergraph_WBP_Hint_Wrapper
	 */
	struct UWBP_Hint_Wrapper_C_ExecuteUbergraph_WBP_Hint_Wrapper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
