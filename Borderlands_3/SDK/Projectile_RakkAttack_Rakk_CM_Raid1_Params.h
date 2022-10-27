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
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnRep_IceRakk
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnRep_IceRakk_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ConfigureFX
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_ConfigureFX_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.DoRakkDamage
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_DoRakkDamage_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.SetRakkHomingTarget
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_SetRakkHomingTarget_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.UserConstructionScript
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.StartHoming
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_StartHoming_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.HomingTarget_OnDeath
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_HomingTarget_OnDeath_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitDamagableObject
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitEnemy
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnHitEnemy_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JG63[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ReceiveBeginPlay
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnExplode
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1
	 */
	struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
