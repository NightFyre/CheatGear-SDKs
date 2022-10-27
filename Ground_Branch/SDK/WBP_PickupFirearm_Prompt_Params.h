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
	 * Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.GetVisibility_1
	 */
	struct UWBP_PickupFirearm_Prompt_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HJFO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.Construct
	 */
	struct UWBP_PickupFirearm_Prompt_C_Construct_Params
	{	};

	/**
	 * Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.Tick
	 */
	struct UWBP_PickupFirearm_Prompt_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PickupFirearm_Prompt.WBP_PickupFirearm_Prompt_C.ExecuteUbergraph_WBP_PickupFirearm_Prompt
	 */
	struct UWBP_PickupFirearm_Prompt_C_ExecuteUbergraph_WBP_PickupFirearm_Prompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IKBK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
