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
	 * Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedAllPlotMissions
	 */
	struct UChallenge_VaultReward_TrueGuardian_C_CompletedAllPlotMissions_Params
	{	};

	/**
	 * Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.SetBinds
	 */
	struct UChallenge_VaultReward_TrueGuardian_C_SetBinds_Params
	{
	public:
		class UChallengesComponent*                                ChallengeComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedChallenge
	 */
	struct UChallenge_VaultReward_TrueGuardian_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.OnInitChallengeInstance
	 */
	struct UChallenge_VaultReward_TrueGuardian_C_OnInitChallengeInstance_Params
	{
	public:
		class UChallengesComponent*                                OwningChallenges;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       AssociatedCharacter;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.ExecuteUbergraph_Challenge_VaultReward_TrueGuardian
	 */
	struct UChallenge_VaultReward_TrueGuardian_C_ExecuteUbergraph_Challenge_VaultReward_TrueGuardian_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ADE6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
