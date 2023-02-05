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
	 * Function Lobby_P.Lobby_P_C.ReceiveBeginPlay
	 */
	struct ALobby_P_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Lobby_P.Lobby_P_C.ExecuteUbergraph_Lobby_P
	 */
	struct ALobby_P_C_ExecuteUbergraph_Lobby_P_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
