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
	 * Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnActivated
	 */
	struct UAbility_Artifact_MysteriousAmulet_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnDeactivated
	 */
	struct UAbility_Artifact_MysteriousAmulet_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.OnKilledEnemy
	 */
	struct UAbility_Artifact_MysteriousAmulet_C_OnKilledEnemy_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Artifact_MysteriousAmulet.Ability_Artifact_MysteriousAmulet_C.ExecuteUbergraph_Ability_Artifact_MysteriousAmulet
	 */
	struct UAbility_Artifact_MysteriousAmulet_C_ExecuteUbergraph_Ability_Artifact_MysteriousAmulet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LUUE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
