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
	 * Function Ability_Oldridian.Ability_Oldridian_C.OnActivated
	 */
	struct UAbility_Oldridian_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Oldridian.Ability_Oldridian_C.OnDeactivated
	 */
	struct UAbility_Oldridian_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_Oldridian.Ability_Oldridian_C.OnUnregistered
	 */
	struct UAbility_Oldridian_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_Oldridian.Ability_Oldridian_C.OnPaused
	 */
	struct UAbility_Oldridian_C_OnPaused_Params
	{	};

	/**
	 * Function Ability_Oldridian.Ability_Oldridian_C.Reload_ShotMod
	 */
	struct UAbility_Oldridian_C_Reload_ShotMod_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Oldridian.Ability_Oldridian_C.RemoveShotModifiers
	 */
	struct UAbility_Oldridian_C_RemoveShotModifiers_Params
	{	};

	/**
	 * Function Ability_Oldridian.Ability_Oldridian_C.ExecuteUbergraph_Ability_Oldridian
	 */
	struct UAbility_Oldridian_C_ExecuteUbergraph_Ability_Oldridian_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QLM8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
