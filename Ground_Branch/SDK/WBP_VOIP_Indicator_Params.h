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
	 * Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.Get_TextBlock_DeadChatNote_Text_1
	 */
	struct UWBP_VOIP_Indicator_C_Get_TextBlock_DeadChatNote_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.GetHearingNoteVis
	 */
	struct UWBP_VOIP_Indicator_C_GetHearingNoteVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.GetRadioVis
	 */
	struct UWBP_VOIP_Indicator_C_GetRadioVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.GetTalkVis
	 */
	struct UWBP_VOIP_Indicator_C_GetTalkVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.Construct
	 */
	struct UWBP_VOIP_Indicator_C_Construct_Params
	{	};

	/**
	 * Function WBP_VOIP_Indicator.WBP_VOIP_Indicator_C.ExecuteUbergraph_WBP_VOIP_Indicator
	 */
	struct UWBP_VOIP_Indicator_C_ExecuteUbergraph_WBP_VOIP_Indicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EKUW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
