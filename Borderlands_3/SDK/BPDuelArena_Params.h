#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function BPDuelArena.BPDuelArena_C.UserConstructionScript
	 */
	struct ABPDuelArena_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPDuelArena.BPDuelArena_C.K2_InitDuelArena
	 */
	struct ABPDuelArena_C_K2_InitDuelArena_Params
	{	};

	/**
	 * Function BPDuelArena.BPDuelArena_C.ReceiveTick
	 */
	struct ABPDuelArena_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPDuelArena.BPDuelArena_C.ReceiveEndPlay
	 */
	struct ABPDuelArena_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPDuelArena.BPDuelArena_C.ExecuteUbergraph_BPDuelArena
	 */
	struct ABPDuelArena_C_ExecuteUbergraph_BPDuelArena_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
