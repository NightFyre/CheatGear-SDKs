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
	 * Function Ability_Redeye.Ability_Redeye_C.OnActivated
	 */
	struct UAbility_Redeye_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Redeye.Ability_Redeye_C.WeaponFired
	 */
	struct UAbility_Redeye_C_WeaponFired_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_Redeye.Ability_Redeye_C.OnCausedDeath
	 */
	struct UAbility_Redeye_C_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Redeye.Ability_Redeye_C.UpdateWeapon
	 */
	struct UAbility_Redeye_C_UpdateWeapon_Params
	{	};

	/**
	 * Function Ability_Redeye.Ability_Redeye_C.ExecuteUbergraph_Ability_Redeye
	 */
	struct UAbility_Redeye_C_ExecuteUbergraph_Ability_Redeye_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
