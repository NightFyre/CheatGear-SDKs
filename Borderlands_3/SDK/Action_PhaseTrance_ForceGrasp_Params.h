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
	 * Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.CreateSlamSphere
	 */
	struct UAction_PhaseTrance_ForceGrasp_C_CreateSlamSphere_Params
	{
	public:
		class AOakCharacter*                                       GraspTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_75TY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.TriggerActionSkillUseDialogue
	 */
	struct UAction_PhaseTrance_ForceGrasp_C_TriggerActionSkillUseDialogue_Params
	{	};

	/**
	 * Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.AnimNotify_CreateGraspingSphere
	 */
	struct UAction_PhaseTrance_ForceGrasp_C_AnimNotify_CreateGraspingSphere_Params
	{	};

	/**
	 * Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.HandleGraspTargetFound
	 */
	struct UAction_PhaseTrance_ForceGrasp_C_HandleGraspTargetFound_Params
	{
	public:
		class AOakCharacter*                                       GraspTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_ForceGrasp.Action_PhaseTrance_ForceGrasp_C.ExecuteUbergraph_Action_PhaseTrance_ForceGrasp
	 */
	struct UAction_PhaseTrance_ForceGrasp_C_ExecuteUbergraph_Action_PhaseTrance_ForceGrasp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N6CJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
