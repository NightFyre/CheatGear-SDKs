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
	 * Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.GetTeamName
	 */
	struct UWBP_Mission_MatchSummaryPVP_C_GetTeamName_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3U39[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                TeamName;                                                // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.UpdateNormalMatchStats
	 */
	struct UWBP_Mission_MatchSummaryPVP_C_UpdateNormalMatchStats_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.SetTeamRolesVisibility
	 */
	struct UWBP_Mission_MatchSummaryPVP_C_SetTeamRolesVisibility_Params
	{	};

	/**
	 * Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.Construct
	 */
	struct UWBP_Mission_MatchSummaryPVP_C_Construct_Params
	{	};

	/**
	 * Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.BindMatchStats
	 */
	struct UWBP_Mission_MatchSummaryPVP_C_BindMatchStats_Params
	{	};

	/**
	 * Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.OnMatchStatsUpdated
	 */
	struct UWBP_Mission_MatchSummaryPVP_C_OnMatchStatsUpdated_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_MatchSummaryPVP.WBP_Mission_MatchSummaryPVP_C.ExecuteUbergraph_WBP_Mission_MatchSummaryPVP
	 */
	struct UWBP_Mission_MatchSummaryPVP_C_ExecuteUbergraph_WBP_Mission_MatchSummaryPVP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RODE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
