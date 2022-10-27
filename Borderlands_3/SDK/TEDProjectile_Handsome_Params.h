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
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SetExplosionRadius
	 */
	struct ATEDProjectile_Handsome_C_SetExplosionRadius_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_CanBeStolen
	 */
	struct ATEDProjectile_Handsome_C_AIProjectile_CanBeStolen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileArm
	 */
	struct ATEDProjectile_Handsome_C_AIProjectileArm_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectileDisarm
	 */
	struct ATEDProjectile_Handsome_C_AIProjectileDisarm_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.CalculateExplosionDamage
	 */
	struct ATEDProjectile_Handsome_C_CalculateExplosionDamage_Params
	{
	public:
		float                                                      DamagePerShot;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BulletsPerShot;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.RemoveAmmo
	 */
	struct ATEDProjectile_Handsome_C_RemoveAmmo_Params
	{
	public:
		int32_t                                                    ThrowType;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.SpawnRotationandOffset
	 */
	struct ATEDProjectile_Handsome_C_SpawnRotationandOffset_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Normal;                                                  // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K42W[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0030(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitCombo
	 */
	struct ATEDProjectile_Handsome_C_InitCombo_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerFXandAudio
	 */
	struct ATEDProjectile_Handsome_C_StabilizerFXandAudio_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoostBouncy
	 */
	struct ATEDProjectile_Handsome_C_StabilizerBoostBouncy_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.StabilizerBoost
	 */
	struct ATEDProjectile_Handsome_C_StabilizerBoost_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitHoming
	 */
	struct ATEDProjectile_Handsome_C_InitHoming_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitRotation
	 */
	struct ATEDProjectile_Handsome_C_InitRotation_Params
	{
	public:
		int32_t                                                    ThrowStyle;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.InitStabilizer
	 */
	struct ATEDProjectile_Handsome_C_InitStabilizer_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.UserConstructionScript
	 */
	struct ATEDProjectile_Handsome_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnBehaviorInitialized
	 */
	struct ATEDProjectile_Handsome_C_OnBehaviorInitialized_Params
	{
	public:
		class UClass*                                              BehaviorClass;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.HomingThrust
	 */
	struct ATEDProjectile_Handsome_C_HomingThrust_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base
	 */
	struct ATEDProjectile_Handsome_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0090(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Arm
	 */
	struct ATEDProjectile_Handsome_C_AIProjectile_Arm_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ReceiveBeginPlay
	 */
	struct ATEDProjectile_Handsome_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.EnableDrunk
	 */
	struct ATEDProjectile_Handsome_C_EnableDrunk_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.AIProjectile_Disarm
	 */
	struct ATEDProjectile_Handsome_C_AIProjectile_Disarm_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.FuseExpired
	 */
	struct ATEDProjectile_Handsome_C_FuseExpired_Params
	{	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.OnHitWorld
	 */
	struct ATEDProjectile_Handsome_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome
	 */
	struct ATEDProjectile_Handsome_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function TEDProjectile_Handsome.TEDProjectile_Handsome_C.ExecuteUbergraph_TEDProjectile_Handsome
	 */
	struct ATEDProjectile_Handsome_C_ExecuteUbergraph_TEDProjectile_Handsome_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UYK4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
