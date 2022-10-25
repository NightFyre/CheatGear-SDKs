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
	 * Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.CreateWebSphere
	 */
	struct UAction_PhaseTrance_Web_C_CreateWebSphere_Params
	{
	public:
		class AOakCharacter*                                       GraspTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SOQH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.AnimNotify_CreateGraspingSphere
	 */
	struct UAction_PhaseTrance_Web_C_AnimNotify_CreateGraspingSphere_Params
	{	};

	/**
	 * Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.HandleGraspTargetFound
	 */
	struct UAction_PhaseTrance_Web_C_HandleGraspTargetFound_Params
	{
	public:
		class AOakCharacter*                                       GraspTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_PhaseTrance_Web.Action_PhaseTrance_Web_C.ExecuteUbergraph_Action_PhaseTrance_Web
	 */
	struct UAction_PhaseTrance_Web_C_ExecuteUbergraph_Action_PhaseTrance_Web_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NVZ5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
