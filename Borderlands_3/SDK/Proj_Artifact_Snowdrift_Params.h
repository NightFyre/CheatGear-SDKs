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
	 * Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.UserConstructionScript
	 */
	struct AProj_Artifact_Snowdrift_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ReceiveBeginPlay
	 */
	struct AProj_Artifact_Snowdrift_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnHitDamagableObject
	 */
	struct AProj_Artifact_Snowdrift_C_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnExplode
	 */
	struct AProj_Artifact_Snowdrift_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall
	 */
	struct AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift
	 */
	struct AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift
	 */
	struct AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ExecuteUbergraph_Proj_Artifact_Snowdrift
	 */
	struct AProj_Artifact_Snowdrift_C_ExecuteUbergraph_Proj_Artifact_Snowdrift_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K9XK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
