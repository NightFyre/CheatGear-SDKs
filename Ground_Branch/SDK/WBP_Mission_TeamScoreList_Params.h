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
	 * Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.SetTeamRole
	 */
	struct UWBP_Mission_TeamScoreList_C_SetTeamRole_Params
	{
	public:
		class FName                                                TeamRole;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.GetTotalTeamBoxVis
	 */
	struct UWBP_Mission_TeamScoreList_C_GetTotalTeamBoxVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.Construct
	 */
	struct UWBP_Mission_TeamScoreList_C_Construct_Params
	{	};

	/**
	 * Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.BindTeamScores
	 */
	struct UWBP_Mission_TeamScoreList_C_BindTeamScores_Params
	{	};

	/**
	 * Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.OnTeamScoresUpdated
	 */
	struct UWBP_Mission_TeamScoreList_C_OnTeamScoresUpdated_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_TeamScoreList.WBP_Mission_TeamScoreList_C.ExecuteUbergraph_WBP_Mission_TeamScoreList
	 */
	struct UWBP_Mission_TeamScoreList_C_ExecuteUbergraph_WBP_Mission_TeamScoreList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3SBW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
