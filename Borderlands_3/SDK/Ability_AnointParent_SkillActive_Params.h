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
	 * Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillCoolingDown
	 */
	struct UAbility_AnointParent_SkillActive_C_AnointOnActionSkillCoolingDown_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointOnActionSkillActivated
	 */
	struct UAbility_AnointParent_SkillActive_C_AnointOnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FXAR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnActivated
	 */
	struct UAbility_AnointParent_SkillActive_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.AnointRemoveEffect
	 */
	struct UAbility_AnointParent_SkillActive_C_AnointRemoveEffect_Params
	{	};

	/**
	 * Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.OnDeactivated
	 */
	struct UAbility_AnointParent_SkillActive_C_OnDeactivated_Params
	{	};

	/**
	 * Function Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C.ExecuteUbergraph_Ability_AnointParent_SkillActive
	 */
	struct UAbility_AnointParent_SkillActive_C_ExecuteUbergraph_Ability_AnointParent_SkillActive_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E25U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
