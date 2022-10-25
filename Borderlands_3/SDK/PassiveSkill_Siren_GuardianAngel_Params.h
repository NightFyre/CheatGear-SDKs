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
	 * Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.GetNovaDamage
	 */
	struct UPassiveSkill_Siren_GuardianAngel_C_GetNovaDamage_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NYHW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnDownStateStart
	 */
	struct UPassiveSkill_Siren_GuardianAngel_C_OnDownStateStart_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnAbilityTimerEnded
	 */
	struct UPassiveSkill_Siren_GuardianAngel_C_OnAbilityTimerEnded_Params
	{
	public:
		struct FOakAbilityTimerSpec                                Spec;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FOakAbilityTimerResult                              Result;                                                  // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.ActiveGuardianAngel
	 */
	struct UPassiveSkill_Siren_GuardianAngel_C_ActiveGuardianAngel_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.GuardianAngel_OnKilledEnemy
	 */
	struct UPassiveSkill_Siren_GuardianAngel_C_GuardianAngel_OnKilledEnemy_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.OnActivated
	 */
	struct UPassiveSkill_Siren_GuardianAngel_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_GuardianAngel.PassiveSkill_Siren_GuardianAngel_C.ExecuteUbergraph_PassiveSkill_Siren_GuardianAngel
	 */
	struct UPassiveSkill_Siren_GuardianAngel_C_ExecuteUbergraph_PassiveSkill_Siren_GuardianAngel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_156H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
