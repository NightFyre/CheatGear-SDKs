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
	 * Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.OnRankRecordMineData
	 */
	struct UWB_LeaderBoardRankRecordMine_C_OnRankRecordMineData_Params
	{
	public:
		struct FRankRecord                                         NewValue;                                                // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FRankRecord                                         OldValue;                                                // 0x0050(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.OnLoadArtData
	 */
	struct UWB_LeaderBoardRankRecordMine_C_OnLoadArtData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.OnFMsgWidgetStreamingModeNotifyBlueprint
	 */
	struct UWB_LeaderBoardRankRecordMine_C_OnFMsgWidgetStreamingModeNotifyBlueprint_Params
	{
	public:
		struct FMsgWidgetStreamingModeNotify                       InMsg;                                                   // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_LeaderBoardRankRecordMine.WB_LeaderBoardRankRecordMine_C.ExecuteUbergraph_WB_LeaderBoardRankRecordMine
	 */
	struct UWB_LeaderBoardRankRecordMine_C_ExecuteUbergraph_WB_LeaderBoardRankRecordMine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S4GN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
