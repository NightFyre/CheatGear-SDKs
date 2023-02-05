#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnRankRecordData
	 */
	struct UWB_LeaderBoardRankRecord_C_OnRankRecordData_Params
	{
	public:
		struct FRankRecord                                         NewValue;                                                // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FRankRecord                                         OldValue;                                                // 0x0050(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnMineRankRecordData
	 */
	struct UWB_LeaderBoardRankRecord_C_OnMineRankRecordData_Params
	{
	public:
		struct FRankRecord                                         MineValue;                                               // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsMine;                                                  // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.RankDataColorSet
	 */
	struct UWB_LeaderBoardRankRecord_C_RankDataColorSet_Params
	{
	public:
		int32_t                                                    Rank;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnLoadArtData
	 */
	struct UWB_LeaderBoardRankRecord_C_OnLoadArtData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.OnFMsgWidgetStreamingModeNotifyBlueprint
	 */
	struct UWB_LeaderBoardRankRecord_C_OnFMsgWidgetStreamingModeNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetStreamingModeNotify                       InMsg;                                                   // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_LeaderBoardRankRecord.WB_LeaderBoardRankRecord_C.ExecuteUbergraph_WB_LeaderBoardRankRecord
	 */
	struct UWB_LeaderBoardRankRecord_C_ExecuteUbergraph_WB_LeaderBoardRankRecord_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R8CA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
