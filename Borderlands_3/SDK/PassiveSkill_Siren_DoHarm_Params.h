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
	 * Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.CalculateAbilityState
	 */
	struct UPassiveSkill_Siren_DoHarm_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.OnActivated
	 */
	struct UPassiveSkill_Siren_DoHarm_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.DoHarmOnKilledEnemy
	 */
	struct UPassiveSkill_Siren_DoHarm_C_DoHarmOnKilledEnemy_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.TriggerRushEffect
	 */
	struct UPassiveSkill_Siren_DoHarm_C_TriggerRushEffect_Params
	{
	public:
		int32_t                                                    RushStacks;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.ExecuteUbergraph_PassiveSkill_Siren_DoHarm
	 */
	struct UPassiveSkill_Siren_DoHarm_C_ExecuteUbergraph_PassiveSkill_Siren_DoHarm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_506W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
