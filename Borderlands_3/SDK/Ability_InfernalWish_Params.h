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
	 * Function Ability_InfernalWish.Ability_InfernalWish_C.OnActivated
	 */
	struct UAbility_InfernalWish_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_InfernalWish.Ability_InfernalWish_C.OnDeactivated
	 */
	struct UAbility_InfernalWish_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_InfernalWish.Ability_InfernalWish_C.WeaponFired
	 */
	struct UAbility_InfernalWish_C_WeaponFired_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_InfernalWish.Ability_InfernalWish_C.ExecuteUbergraph_Ability_InfernalWish
	 */
	struct UAbility_InfernalWish_C_ExecuteUbergraph_Ability_InfernalWish_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
