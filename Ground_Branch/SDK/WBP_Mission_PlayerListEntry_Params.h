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
	 * Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.Construct
	 */
	struct UWBP_Mission_PlayerListEntry_C_Construct_Params
	{	};

	/**
	 * Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.OnReplicatedPlayerStatsUpdated_Event_1
	 */
	struct UWBP_Mission_PlayerListEntry_C_OnReplicatedPlayerStatsUpdated_Event_1_Params
	{
	public:
		class AGBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.UpdateStatus
	 */
	struct UWBP_Mission_PlayerListEntry_C_UpdateStatus_Params
	{
	public:
		class FString                                              StatusKey;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.ExecuteUbergraph_WBP_Mission_PlayerListEntry
	 */
	struct UWBP_Mission_PlayerListEntry_C_ExecuteUbergraph_WBP_Mission_PlayerListEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Mission_PlayerListEntry.WBP_Mission_PlayerListEntry_C.OnUpdate__DelegateSignature
	 */
	struct UWBP_Mission_PlayerListEntry_C_OnUpdate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
