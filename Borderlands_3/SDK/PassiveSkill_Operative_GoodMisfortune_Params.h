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
	 * Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.GetDurationReturn
	 */
	struct UPassiveSkill_Operative_GoodMisfortune_C_GetDurationReturn_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxDuration;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      res;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.OnActivated
	 */
	struct UPassiveSkill_Operative_GoodMisfortune_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.GoodMisfortuneSNTRYActivated
	 */
	struct UPassiveSkill_Operative_GoodMisfortune_C_GoodMisfortuneSNTRYActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.OperativeTriggerKillSkillEffect
	 */
	struct UPassiveSkill_Operative_GoodMisfortune_C_OperativeTriggerKillSkillEffect_Params
	{
	public:
		struct FVector                                             KillLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SCAJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledEnemy;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.ExecuteUbergraph_PassiveSkill_Operative_GoodMisfortune
	 */
	struct UPassiveSkill_Operative_GoodMisfortune_C_ExecuteUbergraph_PassiveSkill_Operative_GoodMisfortune_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
