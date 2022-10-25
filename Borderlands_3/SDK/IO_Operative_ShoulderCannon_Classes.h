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
	 * BlueprintGeneratedClass IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C
	 * Size -> 0x0208 (FullSize[0x0758] - InheritedSize[0x0550])
	 */
	class AIO_Operative_ShoulderCannon_C : public AInteractiveObject
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0550(0x0008) Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SK_Operative_Cannon_3rd;                                 // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Operative_Cannon_1st;                                 // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxActionComponent*                                 GbxAction;                                               // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		EOperativeShoulderCannon                                   CannonState;                                             // 0x0578(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VNL2[0x7];                                   // 0x0579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOakCharacter_Player*                                PlayerOwner;                                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RequestReload;                                           // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J1YJ[0x7];                                   // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOakActionAbility_ShoulderCannon*                    PlayerActionAbility;                                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       fastDespawn;                                             // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R32U[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        IdleEquipTimer;                                          // 0x05A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UClass*                                              FireAction;                                              // 0x05A8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOakLightProjectileInitializationData               CannonLightProjectileData;                               // 0x05B0(0x0158) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FDataTableValueHandle                               Mod3NovaDamage;                                          // 0x0708(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               Mod5Duration;                                            // 0x0720(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class ABPChar_Operative_C*                                 BPCharOperative;                                         // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               Mod3Radius;                                              // 0x0740(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void OperativeShoulderCannonCreateLightProjectile(bool* res);
		void OperativeShoulderCannonSetState(EOperativeShoulderCannon NewState, bool* res);
		void OperativeFireShoulderCannon(bool* res);
		void OperativeShoulderCannonDigistructFinished(bool DigistructIn, bool* res);
		void TryCannonMod5(class UObject* DamageType, class AActor* DamagedActor, bool* res);
		void TryCannonMod4(bool WarCrit, bool* res);
		void TryCannonMod3(class AActor* DamagedActor, bool WasCritOrDeath, bool* res);
		void CanBePulled(class AActor* Target, bool* res);
		void PlayCannonFeedback();
		void AttachToOwner();
		void GetFireAction(class UClass** res);
		float GetShoulderCannonDamage();
		void OnBeginReload();
		void OnFininshedDespawned();
		void OnDespawning();
		void OnCannonFired();
		void OnCannonCreated();
		void OnRep_CannonState();
		void UserConstructionScript();
		void BeginReloadAnim();
		void EndReload();
		void OperativeShoulderCannonReload(bool Start);
		void OperativeRemoveShoulderCannon(bool Fast);
		void StartIdleAfterFireTimer();
		void IdleToUnequip();
		void TransitionToUnequipState();
		void StartUnequippedIdle();
		void ShoulderCannon_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void BeginCannonFireAnim();
		void ShoulderCannon_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void ReceiveBeginPlay();
		void Audio_PlayFiringSound();
		void ExecuteUbergraph_IO_Operative_ShoulderCannon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
