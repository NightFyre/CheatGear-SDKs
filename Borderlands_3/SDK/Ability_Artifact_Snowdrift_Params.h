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
	 * Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.GbxAsyncRequest_Spawned_BCEC033A4A0EE0839916EBA8DE9C87B1
	 */
	struct UAbility_Artifact_Snowdrift_C_GbxAsyncRequest_Spawned_BCEC033A4A0EE0839916EBA8DE9C87B1_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InstanceIndex;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnActivated
	 */
	struct UAbility_Artifact_Snowdrift_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.StopSliding
	 */
	struct UAbility_Artifact_Snowdrift_C_StopSliding_Params
	{
	public:
		struct FSlideEndedDetails                                  Details;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnAbilityTimerStarted
	 */
	struct UAbility_Artifact_Snowdrift_C_OnAbilityTimerStarted_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.OnAbilityTimerEnded
	 */
	struct UAbility_Artifact_Snowdrift_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_Snowdrift.Ability_Artifact_Snowdrift_C.ExecuteUbergraph_Ability_Artifact_Snowdrift
	 */
	struct UAbility_Artifact_Snowdrift_C_ExecuteUbergraph_Ability_Artifact_Snowdrift_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
