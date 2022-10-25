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
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHitTarget
	 */
	struct AProjectile_RakkAttack_Rakk_C_SetHitTarget_Params
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocationWithDelay
	 */
	struct AProjectile_RakkAttack_Rakk_C_SetHomingAndLocationWithDelay_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ChooseTargetFromSet
	 */
	struct AProjectile_RakkAttack_Rakk_C_ChooseTargetFromSet_Params
	{
	public:
		TArray<class AActor*>                                      SetRef;                                                  // 0x0000(0x0010)  (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class AActor*                                              res;                                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.FindNewTarget
	 */
	struct AProjectile_RakkAttack_Rakk_C_FindNewTarget_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReleaseCurrentHomingTarget
	 */
	struct AProjectile_RakkAttack_Rakk_C_ReleaseCurrentHomingTarget_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnRep_bReturningToOwner
	 */
	struct AProjectile_RakkAttack_Rakk_C_OnRep_bReturningToOwner_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoMod1Heal
	 */
	struct AProjectile_RakkAttack_Rakk_C_DoMod1Heal_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.HasHomingTarget
	 */
	struct AProjectile_RakkAttack_Rakk_C_HasHomingTarget_Params
	{
	public:
		bool                                                       bRes;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRakkElement
	 */
	struct AProjectile_RakkAttack_Rakk_C_SetupRakkElement_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupElementalMaterials
	 */
	struct AProjectile_RakkAttack_Rakk_C_SetupElementalMaterials_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UParticleSystem*                                     PassiveParticle;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoPreDestroyCleanup
	 */
	struct AProjectile_RakkAttack_Rakk_C_DoPreDestroyCleanup_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupMod1Transfusion
	 */
	struct AProjectile_RakkAttack_Rakk_C_SetupMod1Transfusion_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.InitAudio
	 */
	struct AProjectile_RakkAttack_Rakk_C_InitAudio_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocation
	 */
	struct AProjectile_RakkAttack_Rakk_C_SetHomingAndLocation_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDamage
	 */
	struct AProjectile_RakkAttack_Rakk_C_DoRakkDamage_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.UserConstructionScript
	 */
	struct AProjectile_RakkAttack_Rakk_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4
	 */
	struct AProjectile_RakkAttack_Rakk_C_OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_A3A042B947729CE01D4C998DA75FCBF4
	 */
	struct AProjectile_RakkAttack_Rakk_C_OnEnd_A3A042B947729CE01D4C998DA75FCBF4_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B7N5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_D54427794086CD24870288B0EF46744B
	 */
	struct AProjectile_RakkAttack_Rakk_C_OnAnimEnd_D54427794086CD24870288B0EF46744B_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_D54427794086CD24870288B0EF46744B
	 */
	struct AProjectile_RakkAttack_Rakk_C_OnEnd_D54427794086CD24870288B0EF46744B_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VEV0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReceiveBeginPlay
	 */
	struct AProjectile_RakkAttack_Rakk_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitDamagableObject
	 */
	struct AProjectile_RakkAttack_Rakk_C_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitWorld
	 */
	struct AProjectile_RakkAttack_Rakk_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnExplode
	 */
	struct AProjectile_RakkAttack_Rakk_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1
	 */
	struct AProjectile_RakkAttack_Rakk_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDestroyCleanup
	 */
	struct AProjectile_RakkAttack_Rakk_C_DoRakkDestroyCleanup_Params
	{
	public:
		bool                                                       WantsNiceCleanup;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRuntimeMods
	 */
	struct AProjectile_RakkAttack_Rakk_C_SetupRuntimeMods_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDigistructIn
	 */
	struct AProjectile_RakkAttack_Rakk_C_DoRakkDigistructIn_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTarget
	 */
	struct AProjectile_RakkAttack_Rakk_C_SetNewHomingTarget_Params
	{
	public:
		class AActor*                                              NewHomingTarget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnDeath_ProjectileHomingTarget
	 */
	struct AProjectile_RakkAttack_Rakk_C_OnDeath_ProjectileHomingTarget_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.StartNewTargetSearch
	 */
	struct AProjectile_RakkAttack_Rakk_C_StartNewTargetSearch_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReturnToOwner
	 */
	struct AProjectile_RakkAttack_Rakk_C_ReturnToOwner_Params
	{	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTargetWithDelay
	 */
	struct AProjectile_RakkAttack_Rakk_C_SetNewHomingTargetWithDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2MN9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              NewHomingTarget;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk
	 */
	struct AProjectile_RakkAttack_Rakk_C_BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YH91[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk
	 */
	struct AProjectile_RakkAttack_Rakk_C_ExecuteUbergraph_Projectile_RakkAttack_Rakk_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
