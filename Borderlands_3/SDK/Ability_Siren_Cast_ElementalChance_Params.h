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
	 * Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.OnActivated
	 */
	struct UAbility_Siren_Cast_ElementalChance_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.CastUsed
	 */
	struct UAbility_Siren_Cast_ElementalChance_C_CastUsed_Params
	{
	public:
		EPhaseTranceAttackFamilyType                               FamilyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhasetranceAttackAction                                   PhaseTranceAction;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.OnDeactivated
	 */
	struct UAbility_Siren_Cast_ElementalChance_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.ExecuteUbergraph_Ability_Siren_Cast_ElementalChance
	 */
	struct UAbility_Siren_Cast_ElementalChance_C_ExecuteUbergraph_Ability_Siren_Cast_ElementalChance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
