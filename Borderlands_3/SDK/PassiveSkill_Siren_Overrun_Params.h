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
	 * Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.GetFallbackBlitzLocation
	 */
	struct UPassiveSkill_Siren_Overrun_C_GetFallbackBlitzLocation_Params
	{
	public:
		struct FVector                                             res;                                                     // 0x0000(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZXXG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.OnBlitzStarted
	 */
	struct UPassiveSkill_Siren_Overrun_C_OnBlitzStarted_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.ResetOverrunCooldown
	 */
	struct UPassiveSkill_Siren_Overrun_C_ResetOverrunCooldown_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.CalculateAbilityState
	 */
	struct UPassiveSkill_Siren_Overrun_C_CalculateAbilityState_Params
	{
	public:
		EGbxAbilityState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.BlitzCausedDeath
	 */
	struct UPassiveSkill_Siren_Overrun_C_BlitzCausedDeath_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.OnActivated
	 */
	struct UPassiveSkill_Siren_Overrun_C_OnActivated_Params
	{	};

	/**
	 * Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.BlitzOnPerformMelee
	 */
	struct UPassiveSkill_Siren_Overrun_C_BlitzOnPerformMelee_Params
	{
	public:
		class UPlayerMeleeData*                                    MeleeData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QMEJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              MeleeTarget;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveSkill_Siren_Overrun.PassiveSkill_Siren_Overrun_C.ExecuteUbergraph_PassiveSkill_Siren_Overrun
	 */
	struct UPassiveSkill_Siren_Overrun_C_ExecuteUbergraph_PassiveSkill_Siren_Overrun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A0A7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
