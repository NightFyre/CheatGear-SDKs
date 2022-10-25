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
	 * Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.SetTeamRole
	 */
	struct UWBP_Mission_MatchSummaryPVE_C_SetTeamRole_Params
	{
	public:
		class FName                                                TeamRole;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.GetTotalTeamBoxVis
	 */
	struct UWBP_Mission_MatchSummaryPVE_C_GetTotalTeamBoxVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.Construct
	 */
	struct UWBP_Mission_MatchSummaryPVE_C_Construct_Params
	{	};

	/**
	 * Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.BindMatchStats
	 */
	struct UWBP_Mission_MatchSummaryPVE_C_BindMatchStats_Params
	{	};

	/**
	 * Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.OnMatchStatsUpdated
	 */
	struct UWBP_Mission_MatchSummaryPVE_C_OnMatchStatsUpdated_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C.ExecuteUbergraph_WBP_Mission_MatchSummaryPVE
	 */
	struct UWBP_Mission_MatchSummaryPVE_C_ExecuteUbergraph_WBP_Mission_MatchSummaryPVE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
