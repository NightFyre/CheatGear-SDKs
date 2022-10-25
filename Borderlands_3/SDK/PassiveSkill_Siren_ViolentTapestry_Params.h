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
	 * Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.CalculateAbilityState
	 */
	struct UPassiveSkill_Siren_ViolentTapestry_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.OnActivated
	 */
	struct UPassiveSkill_Siren_ViolentTapestry_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedElementalEffect
	 */
	struct UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestry_OnCausedElementalEffect_Params
	{
	public:
		class AActor*                                              Causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatusEffectSpec                                   Spec;                                                    // 0x0008(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestry_OnCausedMaxResourceEffect
	 */
	struct UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestry_OnCausedMaxResourceEffect_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakStatusEffectResourceEffectType                         ResourceEffectType;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ViolentTapestryTriggerRushStacks
	 */
	struct UPassiveSkill_Siren_ViolentTapestry_C_ViolentTapestryTriggerRushStacks_Params
	{
	public:
		int32_t                                                    RushStacks;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_ViolentTapestry.PassiveSkill_Siren_ViolentTapestry_C.ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry
	 */
	struct UPassiveSkill_Siren_ViolentTapestry_C_ExecuteUbergraph_PassiveSkill_Siren_ViolentTapestry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
