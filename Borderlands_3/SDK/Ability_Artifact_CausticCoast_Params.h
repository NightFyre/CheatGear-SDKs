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
	 * Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.OnActivated
	 */
	struct UAbility_Artifact_CausticCoast_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StartSlide
	 */
	struct UAbility_Artifact_CausticCoast_C_StartSlide_Params
	{	};

	/**
	 * Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.FireCorrosiveProjectile
	 */
	struct UAbility_Artifact_CausticCoast_C_FireCorrosiveProjectile_Params
	{	};

	/**
	 * Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.StoppedSliding
	 */
	struct UAbility_Artifact_CausticCoast_C_StoppedSliding_Params
	{
	public:
		struct FSlideEndedDetails                                  Details;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_CausticCoast.Ability_Artifact_CausticCoast_C.ExecuteUbergraph_Ability_Artifact_CausticCoast
	 */
	struct UAbility_Artifact_CausticCoast_C_ExecuteUbergraph_Ability_Artifact_CausticCoast_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
