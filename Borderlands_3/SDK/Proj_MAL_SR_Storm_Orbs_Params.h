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
	 * Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.UserConstructionScript
	 */
	struct AProj_MAL_SR_Storm_Orbs_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveBeginPlay
	 */
	struct AProj_MAL_SR_Storm_Orbs_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs
	 */
	struct AProj_MAL_SR_Storm_Orbs_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QAM6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveDestroyed
	 */
	struct AProj_MAL_SR_Storm_Orbs_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.WeaponProjectileExplode
	 */
	struct AProj_MAL_SR_Storm_Orbs_C_WeaponProjectileExplode_Params
	{	};

	/**
	 * Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs
	 */
	struct AProj_MAL_SR_Storm_Orbs_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs_Params
	{
	public:
		class AActor*                                              LeavingActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveHit
	 */
	struct AProj_MAL_SR_Storm_Orbs_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_STX1[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.Bobble
	 */
	struct AProj_MAL_SR_Storm_Orbs_C_Bobble_Params
	{	};

	/**
	 * Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs
	 */
	struct AProj_MAL_SR_Storm_Orbs_C_ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
