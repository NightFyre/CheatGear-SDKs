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
	 * Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.OnActivated
	 */
	struct UPassiveSkill_Siren_Avatar_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnActionSkillReady
	 */
	struct UPassiveSkill_Siren_Avatar_C_Avatar_OnActionSkillReady_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnActionSkillActivating
	 */
	struct UPassiveSkill_Siren_Avatar_C_Avatar_OnActionSkillActivating_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.PhaseTranceActivated
	 */
	struct UPassiveSkill_Siren_Avatar_C_PhaseTranceActivated_Params
	{
	public:
		EPhaseTranceAttackFamilyType                               FamilyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPhasetranceAttackAction                                   PhaseTranceAction;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.Avatar_OnCausedDeath
	 */
	struct UPassiveSkill_Siren_Avatar_C_Avatar_OnCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PassiveSkill_Siren_Avatar.PassiveSkill_Siren_Avatar_C.ExecuteUbergraph_PassiveSkill_Siren_Avatar
	 */
	struct UPassiveSkill_Siren_Avatar_C_ExecuteUbergraph_PassiveSkill_Siren_Avatar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
