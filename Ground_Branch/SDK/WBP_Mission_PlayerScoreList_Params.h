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
	 * Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.GetTotalTeamBoxVis
	 */
	struct UWBP_Mission_PlayerScoreList_C_GetTotalTeamBoxVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.Construct
	 */
	struct UWBP_Mission_PlayerScoreList_C_Construct_Params
	{	};

	/**
	 * Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.BindPlayerScores
	 */
	struct UWBP_Mission_PlayerScoreList_C_BindPlayerScores_Params
	{	};

	/**
	 * Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.OnPlayerScoresUpdated
	 */
	struct UWBP_Mission_PlayerScoreList_C_OnPlayerScoresUpdated_Params
	{
	public:
		class AGBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_PlayerScoreList.WBP_Mission_PlayerScoreList_C.ExecuteUbergraph_WBP_Mission_PlayerScoreList
	 */
	struct UWBP_Mission_PlayerScoreList_C_ExecuteUbergraph_WBP_Mission_PlayerScoreList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YDZN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
