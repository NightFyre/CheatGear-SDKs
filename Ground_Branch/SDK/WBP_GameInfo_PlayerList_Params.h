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
	 * Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.FindOrCreatePlayerEntry
	 */
	struct UWBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry_Params
	{
	public:
		class AGBPlayerState*                                      GBPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWBP_GameInfo_Player_C*                              OutPlayerInfo;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.Construct
	 */
	struct UWBP_GameInfo_PlayerList_C_Construct_Params
	{	};

	/**
	 * Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.Update
	 */
	struct UWBP_GameInfo_PlayerList_C_Update_Params
	{	};

	/**
	 * Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.ExecuteUbergraph_WBP_GameInfo_PlayerList
	 */
	struct UWBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
