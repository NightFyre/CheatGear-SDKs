﻿#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
	 */
	struct UTurnBasedMatchInterface_OnMatchReceivedTurn_Params
	{
	public:
		class FString                                              Match;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bDidBecomeActive;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
	 */
	struct UTurnBasedMatchInterface_OnMatchEnded_Params
	{
	public:
		class FString                                              Match;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
