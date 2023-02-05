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
	 * Function WB_Lobby.WB_Lobby_C.Construct
	 */
	struct UWB_Lobby_C_Construct_Params
	{	};

	/**
	 * Function WB_Lobby.WB_Lobby_C.OnLobbySystemMessage
	 */
	struct UWB_Lobby_C_OnLobbySystemMessage_Params
	{
	public:
		class FText                                                AnnounceText;                                            // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Lobby.WB_Lobby_C.ExecuteUbergraph_WB_Lobby
	 */
	struct UWB_Lobby_C_ExecuteUbergraph_WB_Lobby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_45IG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
