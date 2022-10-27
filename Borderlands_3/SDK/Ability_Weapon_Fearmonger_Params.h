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
	 * Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.OnRegistered
	 */
	struct UAbility_Weapon_Fearmonger_C_OnRegistered_Params
	{	};

	/**
	 * Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.TerrorUpdated
	 */
	struct UAbility_Weapon_Fearmonger_C_TerrorUpdated_Params
	{
	public:
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.ExecuteUbergraph_Ability_Weapon_Fearmonger
	 */
	struct UAbility_Weapon_Fearmonger_C_ExecuteUbergraph_Ability_Weapon_Fearmonger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y3K2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
