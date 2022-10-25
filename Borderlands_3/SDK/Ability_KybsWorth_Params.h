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
	 * Function Ability_KybsWorth.Ability_KybsWorth_C.OnActivated
	 */
	struct UAbility_KybsWorth_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_KybsWorth.Ability_KybsWorth_C.OnCausedDeath_Event
	 */
	struct UAbility_KybsWorth_C_OnCausedDeath_Event_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Ability_KybsWorth.Ability_KybsWorth_C.ResetSpawn
	 */
	struct UAbility_KybsWorth_C_ResetSpawn_Params
	{	};

	/**
	 * Function Ability_KybsWorth.Ability_KybsWorth_C.ExecuteUbergraph_Ability_KybsWorth
	 */
	struct UAbility_KybsWorth_C_ExecuteUbergraph_Ability_KybsWorth_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2E38[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
