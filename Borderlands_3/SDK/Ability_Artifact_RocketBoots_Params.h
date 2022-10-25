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
	 * Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.OnActivated
	 */
	struct UAbility_Artifact_RocketBoots_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.StartSlide
	 */
	struct UAbility_Artifact_RocketBoots_C_StartSlide_Params
	{	};

	/**
	 * Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.FireRocket
	 */
	struct UAbility_Artifact_RocketBoots_C_FireRocket_Params
	{	};

	/**
	 * Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.StoppedSliding
	 */
	struct UAbility_Artifact_RocketBoots_C_StoppedSliding_Params
	{
	public:
		struct FSlideEndedDetails                                  Details;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.OnDeactivated
	 */
	struct UAbility_Artifact_RocketBoots_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.ExecuteQuery
	 */
	struct UAbility_Artifact_RocketBoots_C_ExecuteQuery_Params
	{	};

	/**
	 * Function Ability_Artifact_RocketBoots.Ability_Artifact_RocketBoots_C.ExecuteUbergraph_Ability_Artifact_RocketBoots
	 */
	struct UAbility_Artifact_RocketBoots_C_ExecuteUbergraph_Ability_Artifact_RocketBoots_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W2BW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
