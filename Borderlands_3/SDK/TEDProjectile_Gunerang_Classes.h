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
	 * BlueprintGeneratedClass TEDProjectile_Gunerang.TEDProjectile_Gunerang_C
	 * Size -> 0x00D9 (FullSize[0x09A5] - InheritedSize[0x08CC])
	 */
	class ATEDProjectile_Gunerang_C : public ATEDProjectile_Base_C
	{
	public:
		unsigned char                                              UnknownData_NHEN[0x4];                                   // 0x08CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08D0(0x0008) Transient, DuplicateTransient
		class UDrunkenWaveMovementComponent*                       DrunkenWaveMovement;                                     // 0x08D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProjectileHomingComponent*                          ProjectileHoming;                                        // 0x08E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FEnvQueryParams                                     EQS;                                                     // 0x08E8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      ReturnDelay;                                             // 0x09A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Bangarang;                                               // 0x09A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReturnToSender();
		void FindNewFriends();
		void OnBounce(const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
		void BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang();
		void OnBehaviorInitialized(class UClass* BehaviorClass);
		void OnExplode();
		void ExecuteUbergraph_TEDProjectile_Gunerang(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
