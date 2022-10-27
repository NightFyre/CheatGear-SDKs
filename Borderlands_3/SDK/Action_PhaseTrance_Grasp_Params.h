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
	 * Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.DoDamageToImmuneTarget
	 */
	struct UAction_PhaseTrance_Grasp_C_DoDamageToImmuneTarget_Params
	{
	public:
		class AActor*                                              Enemey;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.AnimNotify_CreateGraspingSphere
	 */
	struct UAction_PhaseTrance_Grasp_C_AnimNotify_CreateGraspingSphere_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.HandleGraspTargetFound
	 */
	struct UAction_PhaseTrance_Grasp_C_HandleGraspTargetFound_Params
	{
	public:
		class AOakCharacter*                                       GraspTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Grasp.Action_PhaseTrance_Grasp_C.ExecuteUbergraph_Action_PhaseTrance_Grasp
	 */
	struct UAction_PhaseTrance_Grasp_C_ExecuteUbergraph_Action_PhaseTrance_Grasp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5VMK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
