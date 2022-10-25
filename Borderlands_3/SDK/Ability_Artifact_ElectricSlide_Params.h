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
	 * Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.OnActivated
	 */
	struct UAbility_Artifact_ElectricSlide_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StartSlide
	 */
	struct UAbility_Artifact_ElectricSlide_C_StartSlide_Params
	{	};

	/**
	 * Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.StopSlide
	 */
	struct UAbility_Artifact_ElectricSlide_C_StopSlide_Params
	{
	public:
		struct FSlideEndedDetails                                  Details;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.QueryEnemies
	 */
	struct UAbility_Artifact_ElectricSlide_C_QueryEnemies_Params
	{	};

	/**
	 * Function Ability_Artifact_ElectricSlide.Ability_Artifact_ElectricSlide_C.ExecuteUbergraph_Ability_Artifact_ElectricSlide
	 */
	struct UAbility_Artifact_ElectricSlide_C_ExecuteUbergraph_Ability_Artifact_ElectricSlide_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
