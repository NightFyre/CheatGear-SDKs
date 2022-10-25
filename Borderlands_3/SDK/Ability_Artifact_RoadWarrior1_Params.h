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
	 * Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnActivated
	 */
	struct UAbility_Artifact_RoadWarrior1_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StartSlide
	 */
	struct UAbility_Artifact_RoadWarrior1_C_StartSlide_Params
	{	};

	/**
	 * Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.FireProjectile
	 */
	struct UAbility_Artifact_RoadWarrior1_C_FireProjectile_Params
	{	};

	/**
	 * Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.StoppedSliding
	 */
	struct UAbility_Artifact_RoadWarrior1_C_StoppedSliding_Params
	{
	public:
		struct FSlideEndedDetails                                  Details;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.OnDeactivated
	 */
	struct UAbility_Artifact_RoadWarrior1_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Artifact_RoadWarrior1.Ability_Artifact_RoadWarrior1_C.ExecuteUbergraph_Ability_Artifact_RoadWarrior1
	 */
	struct UAbility_Artifact_RoadWarrior1_C_ExecuteUbergraph_Ability_Artifact_RoadWarrior1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
