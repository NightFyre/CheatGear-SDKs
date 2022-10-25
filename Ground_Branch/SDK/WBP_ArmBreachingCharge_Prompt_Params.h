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
	 * Function WBP_ArmBreachingCharge_Prompt.WBP_ArmBreachingCharge_Prompt_C.Construct
	 */
	struct UWBP_ArmBreachingCharge_Prompt_C_Construct_Params
	{	};

	/**
	 * Function WBP_ArmBreachingCharge_Prompt.WBP_ArmBreachingCharge_Prompt_C.Tick
	 */
	struct UWBP_ArmBreachingCharge_Prompt_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ArmBreachingCharge_Prompt.WBP_ArmBreachingCharge_Prompt_C.ExecuteUbergraph_WBP_ArmBreachingCharge_Prompt
	 */
	struct UWBP_ArmBreachingCharge_Prompt_C_ExecuteUbergraph_WBP_ArmBreachingCharge_Prompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
