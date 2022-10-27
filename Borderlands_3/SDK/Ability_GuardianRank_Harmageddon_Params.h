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
	 * Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.OnActivated
	 */
	struct UAbility_GuardianRank_Harmageddon_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.ApplyDebuffOnCausedElementalEffect
	 */
	struct UAbility_GuardianRank_Harmageddon_C_ApplyDebuffOnCausedElementalEffect_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatusEffectSpec                                   Spec;                                                    // 0x0008(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.ExecuteUbergraph_Ability_GuardianRank_Harmageddon
	 */
	struct UAbility_GuardianRank_Harmageddon_C_ExecuteUbergraph_Ability_GuardianRank_Harmageddon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K2SL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
