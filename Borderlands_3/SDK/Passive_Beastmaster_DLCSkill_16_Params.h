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
	 * Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.OnActivated
	 */
	struct UPassive_Beastmaster_DLCSkill_15_C_OnActivated_Params
	{	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.DLCSkill15_UsedAttackCommand
	 */
	struct UPassive_Beastmaster_DLCSkill_15_C_DLCSkill15_UsedAttackCommand_Params
	{
	public:
		EOakActionAbilityPetEvolutionType                          PetEvolution;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakActionAbilityPetType                                   PetType;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_16
	 */
	struct UPassive_Beastmaster_DLCSkill_15_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_16_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
