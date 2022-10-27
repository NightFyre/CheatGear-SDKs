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
	 * Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.IncrementStats
	 */
	struct AProjectile_BloodyHarvest_LootGhost_C_IncrementStats_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V5PF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.UserConstructionScript
	 */
	struct AProjectile_BloodyHarvest_LootGhost_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ReceiveBeginPlay
	 */
	struct AProjectile_BloodyHarvest_LootGhost_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.DoEndSpawnPresentation
	 */
	struct AProjectile_BloodyHarvest_LootGhost_C_DoEndSpawnPresentation_Params
	{
	public:
		bool                                                       ForceInstantSpawn;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.SpawnLootBadass
	 */
	struct AProjectile_BloodyHarvest_LootGhost_C_SpawnLootBadass_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BeginFleeing
	 */
	struct AProjectile_BloodyHarvest_LootGhost_C_BeginFleeing_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost
	 */
	struct AProjectile_BloodyHarvest_LootGhost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QUXS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.OnExplode
	 */
	struct AProjectile_BloodyHarvest_LootGhost_C_OnExplode_Params
	{	};

	/**
	 * Function Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C.ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost
	 */
	struct AProjectile_BloodyHarvest_LootGhost_C_ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
