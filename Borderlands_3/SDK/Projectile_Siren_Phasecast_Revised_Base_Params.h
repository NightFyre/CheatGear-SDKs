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
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.TryToAllure
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_TryToAllure_Params
	{	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleWorldHit
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_HandleWorldHit_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0090)  (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToWorld
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_DoDamageToWorld_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetOverlapComponent
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_GetOverlapComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetTargetedHitDirectionForDamage
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_GetTargetedHitDirectionForDamage_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             res;                                                     // 0x0008(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.CalculateDamage
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_CalculateDamage_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.DoDamageToEnemy
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_DoDamageToEnemy_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.HandleEnemyHit
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_HandleEnemyHit_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0090)  (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.GetImpactEffect
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_GetImpactEffect_Params
	{
	public:
		class UImpactData*                                         res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.PlayImpactEffect
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_PlayImpactEffect_Params
	{
	public:
		struct FHitResult                                          InHitInfo;                                               // 0x0000(0x0090)  (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ConfigureSkeletalMesh
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_ConfigureSkeletalMesh_Params
	{	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.UserConstructionScript
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveBeginPlay
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitWorld
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnHitEnemy
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_OnHitEnemy_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedEnemy
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_OnOverlappedEnemy_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.OnOverlappedNeutral
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_OnOverlappedNeutral_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ReceiveEndPlay
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base
	 */
	struct AProjectile_Siren_Phasecast_Revised_Base_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJZJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
