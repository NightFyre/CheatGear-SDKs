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
	 * Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.GetManualHUDIconValues
	 */
	struct UPassiveSkill_Operative_PlayingDirty_C_GetManualHUDIconValues_Params
	{
	public:
		int32_t                                                    outStackCount;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      outDuration;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      outTimeRemaining;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.PlayingDirtyOnWeaponUsed
	 */
	struct UPassiveSkill_Operative_PlayingDirty_C_PlayingDirtyOnWeaponUsed_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.OperativeTriggerKillSkillEffect
	 */
	struct UPassiveSkill_Operative_PlayingDirty_C_OperativeTriggerKillSkillEffect_Params
	{
	public:
		struct FVector                                             KillLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M6OY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledEnemy;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty
	 */
	struct UPassiveSkill_Operative_PlayingDirty_C_ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
