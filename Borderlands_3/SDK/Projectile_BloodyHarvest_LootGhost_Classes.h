#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Projectile_BloodyHarvest_LootGhost.Projectile_BloodyHarvest_LootGhost_C
	 * Size -> 0x002C (FullSize[0x0838] - InheritedSize[0x080C])
	 */
	class AProjectile_BloodyHarvest_LootGhost_C : public AProjectile_BloodyHarvest_Ghost_Drone_C
	{
	public:
		unsigned char                                              UnknownData_4K45[0x4];                                   // 0x080C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0810(0x0008) Transient, DuplicateTransient
		int32_t                                                    TimerIteration;                                          // 0x0818(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalMaxLootSprays;                                      // 0x081C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanSprayLoot;                                           // 0x0820(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3YSB[0x7];                                   // 0x0821(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAttributeEffectData>                        BHLootAttributeEffects_2;                                // 0x0828(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void IncrementStats(bool* Out);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void DoEndSpawnPresentation(bool ForceInstantSpawn);
		void SpawnLootBadass();
		void BeginFleeing();
		void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Projectile_BloodyHarvest_LootGhost(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void OnExplode();
		void ExecuteUbergraph_Projectile_BloodyHarvest_LootGhost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
