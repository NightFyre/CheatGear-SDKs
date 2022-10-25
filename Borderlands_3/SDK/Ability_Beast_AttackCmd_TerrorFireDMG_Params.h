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
	 * Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnActivated
	 */
	struct UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnDeactivated
	 */
	struct UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.AttackCommandGiven
	 */
	struct UAbility_Beast_AttackCmd_TerrorFireDMG_C_AttackCommandGiven_Params
	{
	public:
		EOakActionAbilityPetEvolutionType                          PetEvolution;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakActionAbilityPetType                                   PetType;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.OnAbilityTimerEnded
	 */
	struct UAbility_Beast_AttackCmd_TerrorFireDMG_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Ability_Beast_AttackCmd_TerrorFireDMG.Ability_Beast_AttackCmd_TerrorFireDMG_C.ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG
	 */
	struct UAbility_Beast_AttackCmd_TerrorFireDMG_C_ExecuteUbergraph_Ability_Beast_AttackCmd_TerrorFireDMG_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QRH2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
