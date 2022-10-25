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
	 * Function Ability_Boogeyman.Ability_Boogeyman_C.OnActivated
	 */
	struct UAbility_Boogeyman_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_Boogeyman.Ability_Boogeyman_C.WeaponFired
	 */
	struct UAbility_Boogeyman_C_WeaponFired_Params
	{	};

	/**
	 * Function Ability_Boogeyman.Ability_Boogeyman_C.OnCausedDeath_Event
	 */
	struct UAbility_Boogeyman_C_OnCausedDeath_Event_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Boogeyman.Ability_Boogeyman_C.ExecuteUbergraph_Ability_Boogeyman
	 */
	struct UAbility_Boogeyman_C_ExecuteUbergraph_Ability_Boogeyman_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
