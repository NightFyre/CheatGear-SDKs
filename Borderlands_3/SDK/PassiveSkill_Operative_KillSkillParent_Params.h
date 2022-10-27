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
	 * Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OnActivated
	 */
	struct UPassiveSkill_Operative_KillSkillParent_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OperativeKillSkillOnKilledEnemy
	 */
	struct UPassiveSkill_Operative_KillSkillParent_C_OperativeKillSkillOnKilledEnemy_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OperativeTriggerKillSkillEffect
	 */
	struct UPassiveSkill_Operative_KillSkillParent_C_OperativeTriggerKillSkillEffect_Params
	{
	public:
		struct FVector                                             KillLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9XUT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledEnemy;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.OnSeeingRedActivated
	 */
	struct UPassiveSkill_Operative_KillSkillParent_C_OnSeeingRedActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_KillSkillParent.PassiveSkill_Operative_KillSkillParent_C.ExecuteUbergraph_PassiveSkill_Operative_KillSkillParent
	 */
	struct UPassiveSkill_Operative_KillSkillParent_C_ExecuteUbergraph_PassiveSkill_Operative_KillSkillParent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TY55[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
