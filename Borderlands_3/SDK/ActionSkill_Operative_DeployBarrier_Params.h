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
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.IsHoldingBarrier
	 */
	struct UActionSkill_Operative_DeployBarrier_C_IsHoldingBarrier_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.RefillBarrierHealth
	 */
	struct UActionSkill_Operative_DeployBarrier_C_RefillBarrierHealth_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GiveBarrierHealth
	 */
	struct UActionSkill_Operative_DeployBarrier_C_GiveBarrierHealth_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      New_Health;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierReference
	 */
	struct UActionSkill_Operative_DeployBarrier_C_GetBarrierReference_Params
	{
	public:
		class AActor*                                              Barrier;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetBarrierHealthPercent
	 */
	struct UActionSkill_Operative_DeployBarrier_C_GetBarrierHealthPercent_Params
	{
	public:
		float                                                      HealthPercent;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ShouldStopAbilityOnPawnSlotComponentAttach
	 */
	struct UActionSkill_Operative_DeployBarrier_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.SpawnNewBarrier
	 */
	struct UActionSkill_Operative_DeployBarrier_C_SpawnNewBarrier_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class AOperativeBarrier*                                   ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.GetCooldownRestartPercent
	 */
	struct UActionSkill_Operative_DeployBarrier_C_GetCooldownRestartPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.StartHoldingBarrier
	 */
	struct UActionSkill_Operative_DeployBarrier_C_StartHoldingBarrier_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstable
	 */
	struct UActionSkill_Operative_DeployBarrier_C_ActivateHighlyUnstable_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ActivateHighlyUnstableFromCarry
	 */
	struct UActionSkill_Operative_DeployBarrier_C_ActivateHighlyUnstableFromCarry_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStartActionAbility
	 */
	struct UActionSkill_Operative_DeployBarrier_C_OnStartActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierInHand
	 */
	struct UActionSkill_Operative_DeployBarrier_C_DeployNewBarrierInHand_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.TryDropPickup
	 */
	struct UActionSkill_Operative_DeployBarrier_C_TryDropPickup_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.DeployNewBarrierAroundPlayer
	 */
	struct UActionSkill_Operative_DeployBarrier_C_DeployNewBarrierAroundPlayer_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.OnStopActionAbility
	 */
	struct UActionSkill_Operative_DeployBarrier_C_OnStopActionAbility_Params
	{	};

	/**
	 * Function ActionSkill_Operative_DeployBarrier.ActionSkill_Operative_DeployBarrier_C.ExecuteUbergraph_ActionSkill_Operative_DeployBarrier
	 */
	struct UActionSkill_Operative_DeployBarrier_C_ExecuteUbergraph_ActionSkill_Operative_DeployBarrier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FDTK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
