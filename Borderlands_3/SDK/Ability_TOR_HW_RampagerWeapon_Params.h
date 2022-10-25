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
	 * Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.OnRegistered
	 */
	struct UAbility_TOR_HW_RampagerWeapon_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.WeaponFired
	 */
	struct UAbility_TOR_HW_RampagerWeapon_C_WeaponFired_Params
	{	};

	/**
	 * Function Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C.ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon
	 */
	struct UAbility_TOR_HW_RampagerWeapon_C_ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0YX3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
