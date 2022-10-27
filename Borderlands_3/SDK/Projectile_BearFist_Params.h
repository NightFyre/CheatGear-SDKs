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
	 * Function Projectile_BearFist.Projectile_BearFist_C.CreateBearFistLightBeam
	 */
	struct AProjectile_BearFist_C_CreateBearFistLightBeam_Params
	{
	public:
		class UClass*                                              LightBeamData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.PullEnemyToIronBear
	 */
	struct AProjectile_BearFist_C_PullEnemyToIronBear_Params
	{	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.GetIronBearArmAction
	 */
	struct AProjectile_BearFist_C_GetIronBearArmAction_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewAction;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.UserConstructionScript
	 */
	struct AProjectile_BearFist_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.ReceiveBeginPlay
	 */
	struct AProjectile_BearFist_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.OnExplode
	 */
	struct AProjectile_BearFist_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.OnHitWorld
	 */
	struct AProjectile_BearFist_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.OnHitDamagableObject
	 */
	struct AProjectile_BearFist_C_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.DoProjectilePreCleanup
	 */
	struct AProjectile_BearFist_C_DoProjectilePreCleanup_Params
	{	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.DoProjectilePostCleanup
	 */
	struct AProjectile_BearFist_C_DoProjectilePostCleanup_Params
	{	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.AttachNewChain
	 */
	struct AProjectile_BearFist_C_AttachNewChain_Params
	{	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_BearFist
	 */
	struct AProjectile_BearFist_C_BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_BearFist_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NVQ2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_BearFist.Projectile_BearFist_C.ExecuteUbergraph_Projectile_BearFist
	 */
	struct AProjectile_BearFist_C_ExecuteUbergraph_Projectile_BearFist_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4EPZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
