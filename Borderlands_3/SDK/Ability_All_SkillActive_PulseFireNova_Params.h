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
	 * Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.IsChargeBasedSkill
	 */
	struct UAbility_All_SkillActive_PulseFireNova_C_IsChargeBasedSkill_Params
	{
	public:
		class UObject*                                             ActionSkill;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BGCD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointOnActionSkillActivated
	 */
	struct UAbility_All_SkillActive_PulseFireNova_C_AnointOnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointTriggerEffect
	 */
	struct UAbility_All_SkillActive_PulseFireNova_C_AnointTriggerEffect_Params
	{
	public:
		bool                                                       TriggerEffect;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.TriggerNova
	 */
	struct UAbility_All_SkillActive_PulseFireNova_C_TriggerNova_Params
	{	};

	/**
	 * Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.AnointRemoveEffect
	 */
	struct UAbility_All_SkillActive_PulseFireNova_C_AnointRemoveEffect_Params
	{	};

	/**
	 * Function Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C.ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova
	 */
	struct UAbility_All_SkillActive_PulseFireNova_C_ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
