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
	 * Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.UserConstructionScript
	 */
	struct AProjectile_TED_SG_Sludge_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnHitWorld
	 */
	struct AProjectile_TED_SG_Sludge_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ReceiveHit
	 */
	struct AProjectile_TED_SG_Sludge_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EU66[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.GoToTarget
	 */
	struct AProjectile_TED_SG_Sludge_C_GoToTarget_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ReceiveBeginPlay
	 */
	struct AProjectile_TED_SG_Sludge_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnExplode
	 */
	struct AProjectile_TED_SG_Sludge_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge
	 */
	struct AProjectile_TED_SG_Sludge_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge_Params
	{	};

	/**
	 * Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_1_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge
	 */
	struct AProjectile_TED_SG_Sludge_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_1_ProjectileHomingComponentEvent__DelegateSignature_Projectile_TED_SG_Sludge_Params
	{	};

	/**
	 * Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.OnHitEnemy
	 */
	struct AProjectile_TED_SG_Sludge_C_OnHitEnemy_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_TED_SG_Sludge.Projectile_TED_SG_Sludge_C.ExecuteUbergraph_Projectile_TED_SG_Sludge
	 */
	struct AProjectile_TED_SG_Sludge_C_ExecuteUbergraph_Projectile_TED_SG_Sludge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
