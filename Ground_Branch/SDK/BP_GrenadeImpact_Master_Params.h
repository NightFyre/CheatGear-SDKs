﻿#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_GrenadeImpact_Master.BP_GrenadeImpact_Master_C.SetPhysicCollisionInfo
	 */
	struct ABP_GrenadeImpact_Master_C_SetPhysicCollisionInfo_Params
	{
	public:
		class AActor*                                              InSourceActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InSourceComponent;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComponent;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InContactPosition;                                       // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InContactNormal;                                         // 0x002C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrenadeImpact_Master.BP_GrenadeImpact_Master_C.ReceiveBeginPlay
	 */
	struct ABP_GrenadeImpact_Master_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GrenadeImpact_Master.BP_GrenadeImpact_Master_C.SetHitResult
	 */
	struct ABP_GrenadeImpact_Master_C_SetHitResult_Params
	{
	public:
		class UObject*                                             InHitResultSource;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          InHitResult;                                             // 0x0008(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_GrenadeImpact_Master.BP_GrenadeImpact_Master_C.SpawnImpactParticleFX
	 */
	struct ABP_GrenadeImpact_Master_C_SpawnImpactParticleFX_Params
	{	};

	/**
	 * Function BP_GrenadeImpact_Master.BP_GrenadeImpact_Master_C.SpawnImpactSound
	 */
	struct ABP_GrenadeImpact_Master_C_SpawnImpactSound_Params
	{	};

	/**
	 * Function BP_GrenadeImpact_Master.BP_GrenadeImpact_Master_C.ReportSenseEvents
	 */
	struct ABP_GrenadeImpact_Master_C_ReportSenseEvents_Params
	{	};

	/**
	 * Function BP_GrenadeImpact_Master.BP_GrenadeImpact_Master_C.K2_OnReset
	 */
	struct ABP_GrenadeImpact_Master_C_K2_OnReset_Params
	{	};

	/**
	 * Function BP_GrenadeImpact_Master.BP_GrenadeImpact_Master_C.ExecuteUbergraph_BP_GrenadeImpact_Master
	 */
	struct ABP_GrenadeImpact_Master_C_ExecuteUbergraph_BP_GrenadeImpact_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
