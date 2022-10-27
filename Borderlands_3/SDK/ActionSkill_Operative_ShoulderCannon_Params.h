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
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_StartShoulderCannonMod3Timer_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZKYS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_IsShouldCannonModSlotted_Params
	{
	public:
		EShoulderCannonMods                                        Mod;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.GetCannonRef
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_GetCannonRef_Params
	{
	public:
		class AActor*                                              Ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ShouldAbortActivation
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_ShouldAbortActivation_Params
	{
	public:
		unsigned char                                              OutAbortCode;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.TrySpawnCannon
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_TrySpawnCannon_Params
	{
	public:
		class AInteractiveObject*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P56E[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.IsActionSkillValid
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_IsActionSkillValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnPaused
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_OnPaused_Params
	{	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnResumed
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_OnResumed_Params
	{	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnChargeCountChanged
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_OnChargeCountChanged_Params
	{
	public:
		int32_t                                                    OldCharge;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnActivated
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_OnActivated_Params
	{	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.SpawnShoulderCannon
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_SpawnShoulderCannon_Params
	{	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnStartActionAbility
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_OnStartActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnDeactivated
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_OnDeactivated_Params
	{	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnRegistered
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_OnRegistered_Params
	{	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.OnUnregistered
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_OnUnregistered_Params
	{	};

	/**
	 * Function ActionSkill_Operative_ShoulderCannon.ActionSkill_Operative_ShoulderCannon_C.ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon
	 */
	struct UActionSkill_Operative_ShoulderCannon_C_ExecuteUbergraph_ActionSkill_Operative_ShoulderCannon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9FFO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
