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
	 * Function PassiveSkill_Operative_WantVsNeed.PassiveSkill_Operative_WantVsNeed_C.OperativeTriggerKillSkillEffect
	 */
	struct UPassiveSkill_Operative_WantVsNeed_C_OperativeTriggerKillSkillEffect_Params
	{
	public:
		struct FVector                                             KillLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BR2R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledEnemy;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_WantVsNeed.PassiveSkill_Operative_WantVsNeed_C.OnActivated
	 */
	struct UPassiveSkill_Operative_WantVsNeed_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Operative_WantVsNeed.PassiveSkill_Operative_WantVsNeed_C.ExecuteUbergraph_PassiveSkill_Operative_WantVsNeed
	 */
	struct UPassiveSkill_Operative_WantVsNeed_C_ExecuteUbergraph_PassiveSkill_Operative_WantVsNeed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NAC1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
