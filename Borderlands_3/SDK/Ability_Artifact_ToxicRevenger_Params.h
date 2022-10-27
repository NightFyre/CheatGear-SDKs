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
	 * Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.OnActivated
	 */
	struct UAbility_Artifact_ToxicRevenger_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.OnDeactivated
	 */
	struct UAbility_Artifact_ToxicRevenger_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.SlamEnd
	 */
	struct UAbility_Artifact_ToxicRevenger_C_SlamEnd_Params
	{
	public:
		struct FGroundSlamEndedDetails                             Details;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Artifact_ToxicRevenger.Ability_Artifact_ToxicRevenger_C.ExecuteUbergraph_Ability_Artifact_ToxicRevenger
	 */
	struct UAbility_Artifact_ToxicRevenger_C_ExecuteUbergraph_Ability_Artifact_ToxicRevenger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PDQQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
