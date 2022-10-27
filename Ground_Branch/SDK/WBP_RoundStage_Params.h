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
	 * Function WBP_RoundStage.WBP_RoundStage_C.GetFinalText
	 */
	struct UWBP_RoundStage_C_GetFinalText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_RoundStage.WBP_RoundStage_C.GetText
	 */
	struct UWBP_RoundStage_C_GetText_Params
	{
	public:
		class FText                                                OurText;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_RoundStage.WBP_RoundStage_C.GetTimeText
	 */
	struct UWBP_RoundStage_C_GetTimeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_RoundStage.WBP_RoundStage_C.DisplayText
	 */
	struct UWBP_RoundStage_C_DisplayText_Params
	{	};

	/**
	 * Function WBP_RoundStage.WBP_RoundStage_C.Hide
	 */
	struct UWBP_RoundStage_C_Hide_Params
	{	};

	/**
	 * Function WBP_RoundStage.WBP_RoundStage_C.OnAnimationFinished_Event_1
	 */
	struct UWBP_RoundStage_C_OnAnimationFinished_Event_1_Params
	{	};

	/**
	 * Function WBP_RoundStage.WBP_RoundStage_C.Tick
	 */
	struct UWBP_RoundStage_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RoundStage.WBP_RoundStage_C.OnInitialized
	 */
	struct UWBP_RoundStage_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_RoundStage.WBP_RoundStage_C.Construct
	 */
	struct UWBP_RoundStage_C_Construct_Params
	{	};

	/**
	 * Function WBP_RoundStage.WBP_RoundStage_C.ExecuteUbergraph_WBP_RoundStage
	 */
	struct UWBP_RoundStage_C_ExecuteUbergraph_WBP_RoundStage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
