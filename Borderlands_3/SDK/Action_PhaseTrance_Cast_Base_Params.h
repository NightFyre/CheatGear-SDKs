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
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.CacheSummonMeshes
	 */
	struct UAction_PhaseTrance_Cast_Base_C_CacheSummonMeshes_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.FirePhaseCastProjectile
	 */
	struct UAction_PhaseTrance_Cast_Base_C_FirePhaseCastProjectile_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ResetCastMesh
	 */
	struct UAction_PhaseTrance_Cast_Base_C_ResetCastMesh_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.StartCastSummonAnimation
	 */
	struct UAction_PhaseTrance_Cast_Base_C_StartCastSummonAnimation_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastFeedback
	 */
	struct UAction_PhaseTrance_Cast_Base_C_AN_PerformCastFeedback_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_CreateCastProjectile
	 */
	struct UAction_PhaseTrance_Cast_Base_C_AN_CreateCastProjectile_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnBegin
	 */
	struct UAction_PhaseTrance_Cast_Base_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillReactDialogue
	 */
	struct UAction_PhaseTrance_Cast_Base_C_TriggerActionSkillReactDialogue_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.TriggerActionSkillUseDialogue
	 */
	struct UAction_PhaseTrance_Cast_Base_C_TriggerActionSkillUseDialogue_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.OnServerEnd
	 */
	struct UAction_PhaseTrance_Cast_Base_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CD4R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part1
	 */
	struct UAction_PhaseTrance_Cast_Base_C_AN_PerformCastCS_Part1_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.AN_PerformCastCS_Part2
	 */
	struct UAction_PhaseTrance_Cast_Base_C_AN_PerformCastCS_Part2_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.PlayPhaseTranceHandEffects
	 */
	struct UAction_PhaseTrance_Cast_Base_C_PlayPhaseTranceHandEffects_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Cast_Base.Action_PhaseTrance_Cast_Base_C.ExecuteUbergraph_Action_PhaseTrance_Cast_Base
	 */
	struct UAction_PhaseTrance_Cast_Base_C_ExecuteUbergraph_Action_PhaseTrance_Cast_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HO0J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
