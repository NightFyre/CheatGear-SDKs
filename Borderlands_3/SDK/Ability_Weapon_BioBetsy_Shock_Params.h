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
	 * Function Ability_Weapon_BioBetsy_Shock.Ability_Weapon_BioBetsy_Shock_C.OnRegistered
	 */
	struct UAbility_Weapon_BioBetsy_Shock_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_Weapon_BioBetsy_Shock.Ability_Weapon_BioBetsy_Shock_C.OnDeactivated
	 */
	struct UAbility_Weapon_BioBetsy_Shock_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Weapon_BioBetsy_Shock.Ability_Weapon_BioBetsy_Shock_C.OnPaused
	 */
	struct UAbility_Weapon_BioBetsy_Shock_C_OnPaused_Params
	{	};

	/**
	 * Function Ability_Weapon_BioBetsy_Shock.Ability_Weapon_BioBetsy_Shock_C.OnKilled
	 */
	struct UAbility_Weapon_BioBetsy_Shock_C_OnKilled_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Weapon_BioBetsy_Shock.Ability_Weapon_BioBetsy_Shock_C.Reset
	 */
	struct UAbility_Weapon_BioBetsy_Shock_C_Reset_Params
	{	};

	/**
	 * Function Ability_Weapon_BioBetsy_Shock.Ability_Weapon_BioBetsy_Shock_C.ExecuteUbergraph_Ability_Weapon_BioBetsy_Shock
	 */
	struct UAbility_Weapon_BioBetsy_Shock_C_ExecuteUbergraph_Ability_Weapon_BioBetsy_Shock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
