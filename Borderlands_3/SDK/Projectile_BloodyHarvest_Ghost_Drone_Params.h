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
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TryFindNextValidTarget
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_TryFindNextValidTarget_Params
	{
	public:
		class AOakCharacter*                                       Source_Player;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AOakCharacter*                                       NewTarget;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StartFiring
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_StartFiring_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.StopFiring
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_StopFiring_Params
	{
	public:
		bool                                                       NoReload;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.FireWeapon
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_FireWeapon_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.IncrementStats
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_IncrementStats_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KK11[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TrySecondWindBadass
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_TrySecondWindBadass_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SpawnLootBadass
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_SpawnLootBadass_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SetDroneMovementTypeWithTargets
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_SetDroneMovementTypeWithTargets_Params
	{
	public:
		EOakDroneMovementMode                                      NewMovementMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoSpawnInPresentation
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_DoSpawnInPresentation_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoStartSpawnPresentation
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_DoStartSpawnPresentation_Params
	{
	public:
		bool                                                       ForceInstantSpawn;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.InitGhostBadass
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_InitGhostBadass_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.UserConstructionScript
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.DoEndSpawnPresentation
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_DoEndSpawnPresentation_Params
	{
	public:
		bool                                                       ForceInstantSpawn;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ReceiveBeginPlay
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitDamagableObject
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnHitWorld
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.OnExplode
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Bind
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_TargetOnDied_Bind_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.SkullTarget_OnDied
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_SkullTarget_OnDied_Params
	{
	public:
		class AActor*                                              DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.TargetOnDied_Unbind
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_TargetOnDied_Unbind_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginBadassChargeAndDie
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_BeginBadassChargeAndDie_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BeginReloading
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_BeginReloading_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RW51[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.CheckPerceivableByAI
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_CheckPerceivableByAI_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ResetShooting
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_ResetShooting_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C.ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone
	 */
	struct AProjectile_BloodyHarvest_Ghost_Drone_C_ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
