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
	 * Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.OnActivated
	 */
	struct UAbility_WarlordAmmoRegen_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.WeaponFired
	 */
	struct UAbility_WarlordAmmoRegen_C_WeaponFired_Params
	{	};

	/**
	 * Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.Mode2Fired
	 */
	struct UAbility_WarlordAmmoRegen_C_Mode2Fired_Params
	{	};

	/**
	 * Function Ability_WarlordAmmoRegen.Ability_WarlordAmmoRegen_C.ExecuteUbergraph_Ability_WarlordAmmoRegen
	 */
	struct UAbility_WarlordAmmoRegen_C_ExecuteUbergraph_Ability_WarlordAmmoRegen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HOBA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
