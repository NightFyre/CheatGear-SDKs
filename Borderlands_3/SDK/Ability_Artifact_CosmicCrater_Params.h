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
	 * Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.Ammo Return
	 */
	struct UAbility_Artifact_CosmicCrater_C_Ammo_Return_Params
	{
	public:
		class AOakCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.OnActivated
	 */
	struct UAbility_Artifact_CosmicCrater_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.SlamEnd
	 */
	struct UAbility_Artifact_CosmicCrater_C_SlamEnd_Params
	{
	public:
		struct FGroundSlamEndedDetails                             Details;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_CosmicCrater.Ability_Artifact_CosmicCrater_C.ExecuteUbergraph_Ability_Artifact_CosmicCrater
	 */
	struct UAbility_Artifact_CosmicCrater_C_ExecuteUbergraph_Ability_Artifact_CosmicCrater_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
