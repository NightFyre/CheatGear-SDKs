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
	 * Function PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C.CalculateAbilityState
	 */
	struct UPassiveSkill_Siren_Remnant_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C.OnActivated
	 */
	struct UPassiveSkill_Siren_Remnant_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C.RemnantOnCausedDeath
	 */
	struct UPassiveSkill_Siren_Remnant_C_RemnantOnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C.ResetRemnantGate
	 */
	struct UPassiveSkill_Siren_Remnant_C_ResetRemnantGate_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Remnant.PassiveSkill_Siren_Remnant_C.ExecuteUbergraph_PassiveSkill_Siren_Remnant
	 */
	struct UPassiveSkill_Siren_Remnant_C_ExecuteUbergraph_PassiveSkill_Siren_Remnant_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
