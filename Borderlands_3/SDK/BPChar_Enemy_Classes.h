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
	 * BlueprintGeneratedClass BPChar_Enemy.BPChar_Enemy_C
	 * Size -> 0x0039 (FullSize[0x2381] - InheritedSize[0x2348])
	 */
	class ABPChar_Enemy_C : public ABPChar_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2348(0x0008) Transient, DuplicateTransient
		class UOakMinimapIconComponent*                            OakMinimapIcon;                                          // 0x2350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBodyWeaponHoldManagerComponent*                     BodyWeaponHoldManager;                                   // 0x2358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakAIWeaponUserComponent*                           AIWeaponUser_1;                                          // 0x2360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIDodgeComponent*                                   AIDodge;                                                 // 0x2368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakHitRegionComponent*                              HitRegion;                                               // 0x2370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIBalanceStateComponent*                            AIBalanceState;                                          // 0x2378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       HasShield;                                               // 0x2380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void Enemy_OnThoughtLockStart();
		void Enemy_OnThoughtLockStop();
		void Player_SpawnTransfusionProjectile(class UClass* DataBlueprint_Override, class UClass* DamageType_Override, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer_Override);
		void ReceiveBeginPlay();
		void Enemy_OnPhaseLockStop();
		void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_ElementalDeathDelegate__DelegateSignature_BPChar_Enemy(EOakElementalType Type);
		void Enemy_OnPhaseLockStart();
		void Radation_DeathExplosion(class AActor* DamageReceiver, class AActor* DamageCauser);
		void Player_HealthDepleted(class AOakCharacter* Character);
		void ExecuteUbergraph_BPChar_Enemy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
