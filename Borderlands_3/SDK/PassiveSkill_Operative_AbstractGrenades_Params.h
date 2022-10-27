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
	 * Function PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C.OperativeTriggerKillSkillEffect
	 */
	struct UPassiveSkill_Operative_AbstractGrenades_C_OperativeTriggerKillSkillEffect_Params
	{
	public:
		struct FVector                                             KillLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7SN0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledEnemy;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C.ExecuteUbergraph_PassiveSkill_Operative_AbstractGrenades
	 */
	struct UPassiveSkill_Operative_AbstractGrenades_C_ExecuteUbergraph_PassiveSkill_Operative_AbstractGrenades_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
