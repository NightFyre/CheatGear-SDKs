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
	 * Function Ability_HandCannon.Ability_HandCannon_C.OnActivated
	 */
	struct UAbility_HandCannon_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_HandCannon.Ability_HandCannon_C.OnDeactivated
	 */
	struct UAbility_HandCannon_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_HandCannon.Ability_HandCannon_C.OnUnregistered
	 */
	struct UAbility_HandCannon_C_OnUnregistered_Params
	{	};

	/**
	 * Function Ability_HandCannon.Ability_HandCannon_C.OnPaused
	 */
	struct UAbility_HandCannon_C_OnPaused_Params
	{	};

	/**
	 * Function Ability_HandCannon.Ability_HandCannon_C.ExecuteUbergraph_Ability_HandCannon
	 */
	struct UAbility_HandCannon_C_ExecuteUbergraph_Ability_HandCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZ37[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
