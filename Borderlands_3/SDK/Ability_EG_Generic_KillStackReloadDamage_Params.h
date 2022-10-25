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
	 * Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.OnActivated
	 */
	struct UAbility_EG_Generic_KillStackReloadDamage_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.CausedDeath
	 */
	struct UAbility_EG_Generic_KillStackReloadDamage_C_CausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_EG_Generic_KillStackReloadDamage.Ability_EG_Generic_KillStackReloadDamage_C.ExecuteUbergraph_Ability_EG_Generic_KillStackReloadDamage
	 */
	struct UAbility_EG_Generic_KillStackReloadDamage_C_ExecuteUbergraph_Ability_EG_Generic_KillStackReloadDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
