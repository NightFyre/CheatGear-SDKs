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
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileDetonate
	 */
	struct ATEDProjectile_Base_C_AIProjectileDetonate_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.DialogueTargetSearch
	 */
	struct ATEDProjectile_Base_C_DialogueTargetSearch_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.DialogueThrown
	 */
	struct ATEDProjectile_Base_C_DialogueThrown_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.SetExplosionRadius
	 */
	struct ATEDProjectile_Base_C_SetExplosionRadius_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_CanBeStolen
	 */
	struct ATEDProjectile_Base_C_AIProjectile_CanBeStolen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileArm
	 */
	struct ATEDProjectile_Base_C_AIProjectileArm_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectileDisarm
	 */
	struct ATEDProjectile_Base_C_AIProjectileDisarm_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.CalculateExplosionDamage
	 */
	struct ATEDProjectile_Base_C_CalculateExplosionDamage_Params
	{
	public:
		float                                                      DamagePerShot;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BulletsPerShot;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.RemoveAmmo
	 */
	struct ATEDProjectile_Base_C_RemoveAmmo_Params
	{
	public:
		int32_t                                                    ThrowType;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.SpawnRotationandOffset
	 */
	struct ATEDProjectile_Base_C_SpawnRotationandOffset_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Normal;                                                  // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N5II[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0030(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.InitCombo
	 */
	struct ATEDProjectile_Base_C_InitCombo_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerFXandAudio
	 */
	struct ATEDProjectile_Base_C_StabilizerFXandAudio_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerBoostBouncy
	 */
	struct ATEDProjectile_Base_C_StabilizerBoostBouncy_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.StabilizerBoost
	 */
	struct ATEDProjectile_Base_C_StabilizerBoost_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.InitHoming
	 */
	struct ATEDProjectile_Base_C_InitHoming_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.InitRotation
	 */
	struct ATEDProjectile_Base_C_InitRotation_Params
	{
	public:
		int32_t                                                    ThrowStyle;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.InitStabilizer
	 */
	struct ATEDProjectile_Base_C_InitStabilizer_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.FuelOut
	 */
	struct ATEDProjectile_Base_C_FuelOut_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.UserConstructionScript
	 */
	struct ATEDProjectile_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.ReceiveBeginPlay
	 */
	struct ATEDProjectile_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base
	 */
	struct ATEDProjectile_Base_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0090(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.OnBehaviorInitialized
	 */
	struct ATEDProjectile_Base_C_OnBehaviorInitialized_Params
	{
	public:
		class UClass*                                              BehaviorClass;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.ReceiveHit
	 */
	struct ATEDProjectile_Base_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y3CF[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.HomingThrust
	 */
	struct ATEDProjectile_Base_C_HomingThrust_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_Arm
	 */
	struct ATEDProjectile_Base_C_AIProjectile_Arm_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.EnableDrunk
	 */
	struct ATEDProjectile_Base_C_EnableDrunk_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.AIProjectile_Disarm
	 */
	struct ATEDProjectile_Base_C_AIProjectile_Disarm_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.FuseExpired
	 */
	struct ATEDProjectile_Base_C_FuseExpired_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.OnHitWorld
	 */
	struct ATEDProjectile_Base_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.OnBeginExplode
	 */
	struct ATEDProjectile_Base_C_OnBeginExplode_Params
	{	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Base
	 */
	struct ATEDProjectile_Base_C_BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Base_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function TEDProjectile_Base.TEDProjectile_Base_C.ExecuteUbergraph_TEDProjectile_Base
	 */
	struct ATEDProjectile_Base_C_ExecuteUbergraph_TEDProjectile_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CLXG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
