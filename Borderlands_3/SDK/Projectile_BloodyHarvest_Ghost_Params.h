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
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.TryFindNextValidTarget
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_TryFindNextValidTarget_Params
	{
	public:
		class AOakCharacter*                                       SourcePlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AOakCharacter*                                       NewTarget;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.CauseDamageGhost
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_CauseDamageGhost_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.TrySecondWind
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_TrySecondWind_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.SpawnLoot
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_SpawnLoot_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoStartSpawnPresentation
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_DoStartSpawnPresentation_Params
	{
	public:
		bool                                                       ForceInstantSpawn;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.InitGhost
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_InitGhost_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoSpawnInPresentation
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_DoSpawnInPresentation_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.UserConstructionScript
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.ReceiveBeginPlay
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.SetPlayerTargets
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_SetPlayerTargets_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnExplode
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnHitDamagableObject
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.OnHitWorld
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.DoEndSpawnPresentation
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_DoEndSpawnPresentation_Params
	{
	public:
		bool                                                       ForceInstantSpawn;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YDW6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.CheckPerceivableByAI
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_CheckPerceivableByAI_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C.ExecuteUbergraph_Projectile_BloodyHarvest_Ghost
	 */
	struct AProjectile_BloodyHarvest_Ghost_C_ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
