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
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnRep_MyHomingTarget
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnRep_MyHomingTarget_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnRep_EnableMainEmitter
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnRep_EnableMainEmitter_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnOrbDetaching
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnOrbDetaching_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.ReachedMaxHitCount
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_ReachedMaxHitCount_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0A81[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.IncreaseHitCount
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_IncreaseHitCount_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.StopActionSkillOnMaxHits
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_StopActionSkillOnMaxHits_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.UpdateCurrentDamage
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_UpdateCurrentDamage_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.StopFistFX
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_StopFistFX_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.StartFistFX
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_StartFistFX_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OrbDamageRadius
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OrbDamageRadius_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.SetImpactExplosionData
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_SetImpactExplosionData_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.DamageScalar
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_DamageScalar_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.GetOrbAreaDamageType
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_GetOrbAreaDamageType_Params
	{
	public:
		class UClass*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.ToggleDamageArea
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_ToggleDamageArea_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_18MY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnOrbStateDespawning
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnOrbStateDespawning_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnOrbStateReturning
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnOrbStateReturning_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnOrbStateSending
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnOrbStateSending_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnOrbStateIdle
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnOrbStateIdle_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnRep_OrbState
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnRep_OrbState_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnRep_OrbElement
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnRep_OrbElement_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.UserConstructionScript
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.SirenDLCProjectile_SetOrbState_Event
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_SirenDLCProjectile_SetOrbState_Event_Params
	{
	public:
		ESirenDLCProjectileState                                   NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.RequestRecallOrb
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_RequestRecallOrb_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.SetOrbState
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_SetOrbState_Params
	{
	public:
		ESirenDLCProjectileState                                   NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.SetOrbMovement
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_SetOrbMovement_Params
	{
	public:
		class AActor*                                              New_Homing_Target;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             New_Homing_Location;                                     // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReachDistance;                                           // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_Potato
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_Potato_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SF50[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnPhasetranceEnded
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnPhasetranceEnded_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnExplode
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnExplode_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.DealExplodeDamage
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_DealExplodeDamage_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.OnOrbStateSpawning
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_OnOrbStateSpawning_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.ReceiveDestroyed
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_764A[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Base
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Base_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.FinishedSpawningOrb
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_FinishedSpawningOrb_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.RemoveSpawnEmitter
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_RemoveSpawnEmitter_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Proj_Mayhem2_ItFollows
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Proj_Mayhem2_ItFollows_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.SetHomingTargetBinds
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_SetHomingTargetBinds_Params
	{
	public:
		class AActor*                                              HomingTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.HomingTargetDied
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_HomingTargetDied_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.RemoveHomingTargetBinds
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_RemoveHomingTargetBinds_Params
	{
	public:
		class AActor*                                              HomingTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.ReceiveBeginPlay
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Base
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Proj_Siren_DLCSkill_WalkingPotato_Base.Proj_Siren_DLCSkill_WalkingPotato_Base_C.SirenDLCProjectile_SetOrbState__DelegateSignature
	 */
	struct AProj_Siren_DLCSkill_WalkingPotato_Base_C_SirenDLCProjectile_SetOrbState__DelegateSignature_Params
	{
	public:
		ESirenDLCProjectileState                                   NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
