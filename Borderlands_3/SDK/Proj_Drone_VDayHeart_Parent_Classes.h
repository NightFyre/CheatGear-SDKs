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
	 * BlueprintGeneratedClass Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C
	 * Size -> 0x0091 (FullSize[0x07C1] - InheritedSize[0x0730])
	 */
	class AProj_Drone_VDayHeart_Parent_C : public AOakDroneProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0730(0x0008) Transient, DuplicateTransient
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDrunkenRandomMovementComponent*                     DrunkenRandomMovement;                                   // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Sphere1;                                                 // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AActor*                                              HeartOwnerKiller;                                        // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionData*                                      HeartExplosion;                                          // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanBeginCleanup;                                        // 0x0760(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V4UL[0x7];                                   // 0x0761(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              HeartDamageType;                                         // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGbxAttributeData*                                   HeartDamage;                                             // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAttributeInitializationData                        HeartRadius;                                             // 0x0778(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		Enum_VDay_HeartTypes                                       HeartType;                                               // 0x07B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9VCF[0x7];                                   // 0x07B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         Audio_Loop;                                              // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              OwnerDeathType;                                          // 0x07C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_OwnerDeathType();
		void OnHealthDepletedHeart(class AActor* DamageCauser);
		void SetHeartVelocity();
		void HandleStatIncrementDialog(class AActor* Actor);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
		void OnDeath_HeartOwner(class AActor* DamageReceiver, class AActor* DamageCauser);
		void OnHitWorld(const struct FHitResult& Hit);
		void BeginCleanup();
		void Destroyed_HeartOwner(class AActor* DestroyedActor);
		void OwnerDiedByHostile();
		void OnHitDamagableObject(const struct FHitResult& Hit);
		void ExecuteUbergraph_Proj_Drone_VDayHeart_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
