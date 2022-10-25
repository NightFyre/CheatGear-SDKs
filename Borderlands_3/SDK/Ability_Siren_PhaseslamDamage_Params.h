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
	 * Function Ability_Siren_PhaseslamDamage.Ability_Siren_PhaseslamDamage_C.OnActivated
	 */
	struct UAbility_Siren_PhaseslamDamage_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Siren_PhaseslamDamage.Ability_Siren_PhaseslamDamage_C.OnDeactivated
	 */
	struct UAbility_Siren_PhaseslamDamage_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Siren_PhaseslamDamage.Ability_Siren_PhaseslamDamage_C.ExecuteUbergraph_Ability_Siren_PhaseslamDamage
	 */
	struct UAbility_Siren_PhaseslamDamage_C_ExecuteUbergraph_Ability_Siren_PhaseslamDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KZ0N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
