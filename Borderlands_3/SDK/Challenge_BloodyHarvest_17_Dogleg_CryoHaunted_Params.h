﻿#pragma once

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
	 * Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.OnInitChallengeInstance
	 */
	struct UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_OnInitChallengeInstance_Params
	{
	public:
		class UChallengesComponent*                                OwningChallenges;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       AssociatedCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.CheckKillConditions
	 */
	struct UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_CheckKillConditions_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted
	 */
	struct UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N4KM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
