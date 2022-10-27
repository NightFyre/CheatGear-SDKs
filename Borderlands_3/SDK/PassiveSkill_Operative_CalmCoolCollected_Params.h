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
	 * Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.OnActivated
	 */
	struct UPassiveSkill_Operative_CalmCoolCollected_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_OnCausedMaxResourceEffect
	 */
	struct UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_OnCausedMaxResourceEffect_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakStatusEffectResourceEffectType                         ResourceEffectType;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ShieldEffect
	 */
	struct UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_ShieldEffect_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_RegenEffect
	 */
	struct UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_RegenEffect_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.RunUpTheScore_ActionSkillEffect
	 */
	struct UPassiveSkill_Operative_CalmCoolCollected_C_RunUpTheScore_ActionSkillEffect_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.Clone_OnFreezeEnemy
	 */
	struct UPassiveSkill_Operative_CalmCoolCollected_C_Clone_OnFreezeEnemy_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_OnActionSkillActivated
	 */
	struct UPassiveSkill_Operative_CalmCoolCollected_C_CCC_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.CCC_Clone_OnCausedMaxResourceEffect
	 */
	struct UPassiveSkill_Operative_CalmCoolCollected_C_CCC_Clone_OnCausedMaxResourceEffect_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOakStatusEffectResourceEffectType                         ResourceEffectType;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_CalmCoolCollected.PassiveSkill_Operative_CalmCoolCollected_C.ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected
	 */
	struct UPassiveSkill_Operative_CalmCoolCollected_C_ExecuteUbergraph_PassiveSkill_Operative_CalmCoolCollected_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OKD0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
