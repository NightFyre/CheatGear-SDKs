#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.FootIK
	 */
	struct UABP_HDPlayerCharacter_SharedIK_C_FootIK_Params
	{
	public:
		struct FPoseLink                                           InLocoPose;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           FootIK;                                                  // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.HandIK
	 */
	struct UABP_HDPlayerCharacter_SharedIK_C_HandIK_Params
	{
	public:
		struct FPoseLink                                           InLocoPose;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           HandIK;                                                  // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.AnimGraph
	 */
	struct UABP_HDPlayerCharacter_SharedIK_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AnimGraph;                                               // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C.ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK
	 */
	struct UABP_HDPlayerCharacter_SharedIK_C_ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
