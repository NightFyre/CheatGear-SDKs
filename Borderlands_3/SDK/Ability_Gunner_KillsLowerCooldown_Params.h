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
	 * Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.AnointTriggerEffect
	 */
	struct UAbility_Gunner_KillsLowerCooldown_C_AnointTriggerEffect_Params
	{
	public:
		bool                                                       TriggerEffect;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.KilledEnemy
	 */
	struct UAbility_Gunner_KillsLowerCooldown_C_KilledEnemy_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.AnointRemoveEffect
	 */
	struct UAbility_Gunner_KillsLowerCooldown_C_AnointRemoveEffect_Params
	{	};

	/**
	 * Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.BindKillEffect
	 */
	struct UAbility_Gunner_KillsLowerCooldown_C_BindKillEffect_Params
	{	};

	/**
	 * Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.ExecuteUbergraph_Ability_Gunner_KillsLowerCooldown
	 */
	struct UAbility_Gunner_KillsLowerCooldown_C_ExecuteUbergraph_Ability_Gunner_KillsLowerCooldown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IXPY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
