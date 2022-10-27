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
	 * Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.OnActivated
	 */
	struct UAbility_ButcherAmmoRegen_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.WeaponFired
	 */
	struct UAbility_ButcherAmmoRegen_C_WeaponFired_Params
	{	};

	/**
	 * Function Ability_ButcherAmmoRegen.Ability_ButcherAmmoRegen_C.ExecuteUbergraph_Ability_ButcherAmmoRegen
	 */
	struct UAbility_ButcherAmmoRegen_C_ExecuteUbergraph_Ability_ButcherAmmoRegen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C57O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
