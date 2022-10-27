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
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.GetPhaseFlareSpawnLocation
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_GetPhaseFlareSpawnLocation_Params
	{
	public:
		struct FVector                                             res;                                                     // 0x0000(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z72Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SetPhaseFlareSpawnLocation
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_SetPhaseFlareSpawnLocation_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9XOW[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnRep_SpawnLocation
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_OnRep_SpawnLocation_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.StartSummonAnimation
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_StartSummonAnimation_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.HideArmsMesh
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_HideArmsMesh_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ResetArmsMesh
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_ResetArmsMesh_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.CacheSummonMeshes
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_CacheSummonMeshes_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SummonActionSkillOrb
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_SummonActionSkillOrb_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9C43[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AProj_Siren_DLCSkill_WalkingPotato_Base_C*           Orb;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerBegin
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnServerEnd
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MEV3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.DetachOrb
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_DetachOrb_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_SummonOrb
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_AN_SummonOrb_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_DetachOrb
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_AN_DetachOrb_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.SendOrb
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_SendOrb_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.AN_Remove3pGhostArms
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_AN_Remove3pGhostArms_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.OnBegin
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillUseDialogue
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_TriggerActionSkillUseDialogue_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.TriggerActionSkillReactDialogue
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_TriggerActionSkillReactDialogue_Params
	{	};

	/**
	 * Function Action_Phasetrance_DLCSkill_Base.Action_Phasetrance_DLCSkill_Base_C.ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base
	 */
	struct UAction_Phasetrance_DLCSkill_Base_C_ExecuteUbergraph_Action_Phasetrance_DLCSkill_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KCU1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
