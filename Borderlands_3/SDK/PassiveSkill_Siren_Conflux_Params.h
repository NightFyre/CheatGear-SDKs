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
	 * Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.RemoveElement
	 */
	struct UPassiveSkill_Siren_Conflux_C_RemoveElement_Params
	{
	public:
		class UObject*                                             StatusEffect;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              DamageType;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.OnActivated
	 */
	struct UPassiveSkill_Siren_Conflux_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedElementalEffect
	 */
	struct UPassiveSkill_Siren_Conflux_C_DamageConfettiOnCausedElementalEffect_Params
	{
	public:
		class AActor*                                              Causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatusEffectSpec                                   Spec;                                                    // 0x0008(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.DamageConfettiOnCausedMaxResourceEffect
	 */
	struct UPassiveSkill_Siren_Conflux_C_DamageConfettiOnCausedMaxResourceEffect_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakStatusEffectResourceEffectType                         ResourceEffectType;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ReopenGate
	 */
	struct UPassiveSkill_Siren_Conflux_C_ReopenGate_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Conflux.PassiveSkill_Siren_Conflux_C.ExecuteUbergraph_PassiveSkill_Siren_Conflux
	 */
	struct UPassiveSkill_Siren_Conflux_C_ExecuteUbergraph_PassiveSkill_Siren_Conflux_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
