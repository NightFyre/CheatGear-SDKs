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
	 * Function BP_SlaughterGameState.BP_SlaughterGameState_C.UserConstructionScript
	 */
	struct ABP_SlaughterGameState_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SlaughterGameState.BP_SlaughterGameState_C.ReceiveBeginPlay
	 */
	struct ABP_SlaughterGameState_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnAllPlayersDied_Event_1
	 */
	struct ABP_SlaughterGameState_C_OnAllPlayersDied_Event_1_Params
	{	};

	/**
	 * Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewRound_Event_1
	 */
	struct ABP_SlaughterGameState_C_OnNewRound_Event_1_Params
	{
	public:
		int32_t                                                    RoundNumber;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewWave_Event_1
	 */
	struct ABP_SlaughterGameState_C_OnNewWave_Event_1_Params
	{
	public:
		bool                                                       bBossWave;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EH7D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CountdownDuration;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnPlayerDied_Event_1
	 */
	struct ABP_SlaughterGameState_C_OnPlayerDied_Event_1_Params
	{
	public:
		class AOakPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnRoundComplete_Event_1
	 */
	struct ABP_SlaughterGameState_C_OnRoundComplete_Event_1_Params
	{
	public:
		int32_t                                                    RoundNumber;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SlaughterGameState.BP_SlaughterGameState_C.ExecuteUbergraph_BP_SlaughterGameState
	 */
	struct ABP_SlaughterGameState_C_ExecuteUbergraph_BP_SlaughterGameState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_10GM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
