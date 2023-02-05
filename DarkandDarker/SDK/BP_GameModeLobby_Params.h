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
	 * Function BP_GameModeLobby.BP_GameModeLobby_C.ReceiveBeginPlay
	 */
	struct ABP_GameModeLobby_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GameModeLobby.BP_GameModeLobby_C.ExecuteUbergraph_BP_GameModeLobby
	 */
	struct ABP_GameModeLobby_C_ExecuteUbergraph_BP_GameModeLobby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PZUP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
