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
	 * Function Proj_BladesOfTerror.Proj_BladesOfTerror_C.UserConstructionScript
	 */
	struct AProj_BladesOfTerror_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_BladesOfTerror.Proj_BladesOfTerror_C.ReceiveBeginPlay
	 */
	struct AProj_BladesOfTerror_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_BladesOfTerror.Proj_BladesOfTerror_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror
	 */
	struct AProj_BladesOfTerror_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror_Params
	{	};

	/**
	 * Function Proj_BladesOfTerror.Proj_BladesOfTerror_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror
	 */
	struct AProj_BladesOfTerror_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror_Params
	{	};

	/**
	 * Function Proj_BladesOfTerror.Proj_BladesOfTerror_C.OnHitEnemy
	 */
	struct AProj_BladesOfTerror_C_OnHitEnemy_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_BladesOfTerror.Proj_BladesOfTerror_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_BladesOfTerror
	 */
	struct AProj_BladesOfTerror_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_BladesOfTerror_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_BladesOfTerror.Proj_BladesOfTerror_C.OnExplode
	 */
	struct AProj_BladesOfTerror_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_BladesOfTerror.Proj_BladesOfTerror_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_3_ProjectileHomingComponentEvent__DelegateSignature_Proj_BladesOfTerror
	 */
	struct AProj_BladesOfTerror_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_3_ProjectileHomingComponentEvent__DelegateSignature_Proj_BladesOfTerror_Params
	{	};

	/**
	 * Function Proj_BladesOfTerror.Proj_BladesOfTerror_C.ExecuteUbergraph_Proj_BladesOfTerror
	 */
	struct AProj_BladesOfTerror_C_ExecuteUbergraph_Proj_BladesOfTerror_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_55EQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
