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
	 * Function WBP_EngineMessage.WBP_EngineMessage_C.GetSuffixVis
	 */
	struct UWBP_EngineMessage_C_GetSuffixVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_EngineMessage.WBP_EngineMessage_C.GetPrefixVis
	 */
	struct UWBP_EngineMessage_C_GetPrefixVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_EngineMessage.WBP_EngineMessage_C.Construct
	 */
	struct UWBP_EngineMessage_C_Construct_Params
	{	};

	/**
	 * Function WBP_EngineMessage.WBP_EngineMessage_C.SetMessageColour
	 */
	struct UWBP_EngineMessage_C_SetMessageColour_Params
	{	};

	/**
	 * Function WBP_EngineMessage.WBP_EngineMessage_C.OnAnimationFinished_Event_1
	 */
	struct UWBP_EngineMessage_C_OnAnimationFinished_Event_1_Params
	{	};

	/**
	 * Function WBP_EngineMessage.WBP_EngineMessage_C.ExecuteUbergraph_WBP_EngineMessage
	 */
	struct UWBP_EngineMessage_C_ExecuteUbergraph_WBP_EngineMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RKAF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
