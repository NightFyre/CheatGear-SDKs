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
	 * Function WBP_Vote.WBP_Vote_C.Parse Mission Option
	 */
	struct UWBP_Vote_C_Parse_Mission_Option_Params
	{
	public:
		class FString                                              OptionString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Parameter;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.GetMapAndOptions
	 */
	struct UWBP_Vote_C_GetMapAndOptions_Params
	{
	public:
		class FString                                              Combined;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.GetVotesNo
	 */
	struct UWBP_Vote_C_GetVotesNo_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.GetVotesYes
	 */
	struct UWBP_Vote_C_GetVotesYes_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.GetVotingTimeLeft
	 */
	struct UWBP_Vote_C_GetVotingTimeLeft_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.Construct
	 */
	struct UWBP_Vote_C_Construct_Params
	{	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.VoteEnded
	 */
	struct UWBP_Vote_C_VoteEnded_Params
	{
	public:
		bool                                                       bPassed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.VoteTimer
	 */
	struct UWBP_Vote_C_VoteTimer_Params
	{	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.SetTimer
	 */
	struct UWBP_Vote_C_SetTimer_Params
	{	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.SetTexts
	 */
	struct UWBP_Vote_C_SetTexts_Params
	{	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.AddTargetPlayerText
	 */
	struct UWBP_Vote_C_AddTargetPlayerText_Params
	{	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.AddReason
	 */
	struct UWBP_Vote_C_AddReason_Params
	{	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.AddMap
	 */
	struct UWBP_Vote_C_AddMap_Params
	{	};

	/**
	 * Function WBP_Vote.WBP_Vote_C.ExecuteUbergraph_WBP_Vote
	 */
	struct UWBP_Vote_C_ExecuteUbergraph_WBP_Vote_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
