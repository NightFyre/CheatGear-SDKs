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
	 * Function Ability_Gunner_VanquisherDamage.Ability_Gunner_VanquisherDamage_C.OnActivated
	 */
	struct UAbility_Gunner_VanquisherDamage_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Gunner_VanquisherDamage.Ability_Gunner_VanquisherDamage_C.OnDeactivated
	 */
	struct UAbility_Gunner_VanquisherDamage_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Gunner_VanquisherDamage.Ability_Gunner_VanquisherDamage_C.ExecuteUbergraph_Ability_Gunner_VanquisherDamage
	 */
	struct UAbility_Gunner_VanquisherDamage_C_ExecuteUbergraph_Ability_Gunner_VanquisherDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O7Q5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
