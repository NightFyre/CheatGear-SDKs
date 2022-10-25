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
	 * Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.AnointTriggerEffect
	 */
	struct UAbility_All_SkillEnd_NextMagBonus_C_AnointTriggerEffect_Params
	{
	public:
		bool                                                       TriggerEffect;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.OnActivated
	 */
	struct UAbility_All_SkillEnd_NextMagBonus_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.BindReloadEvent
	 */
	struct UAbility_All_SkillEnd_NextMagBonus_C_BindReloadEvent_Params
	{	};

	/**
	 * Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.UnbindReloadEvent
	 */
	struct UAbility_All_SkillEnd_NextMagBonus_C_UnbindReloadEvent_Params
	{	};

	/**
	 * Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.AnointRemoveEffect
	 */
	struct UAbility_All_SkillEnd_NextMagBonus_C_AnointRemoveEffect_Params
	{	};

	/**
	 * Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.ReloadedWeapon
	 */
	struct UAbility_All_SkillEnd_NextMagBonus_C_ReloadedWeapon_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCompleted;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C.ExecuteUbergraph_Ability_All_SkillEnd_NextMagBonus
	 */
	struct UAbility_All_SkillEnd_NextMagBonus_C_ExecuteUbergraph_Ability_All_SkillEnd_NextMagBonus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3LQY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
