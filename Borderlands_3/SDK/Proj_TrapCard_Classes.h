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
	 * BlueprintGeneratedClass Proj_TrapCard.Proj_TrapCard_C
	 * Size -> 0x00F4 (FullSize[0x07D4] - InheritedSize[0x06E0])
	 */
	class AProj_TrapCard_C : public AOakProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06E0(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            PS_Cryo_FastPop_129;                                     // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakTriggerComponent*                                OakTrigger;                                              // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FSingularityInitializationInfo                      SingularityInfo;                                         // 0x0710(0x00C0) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TriggerDelay;                                            // 0x07D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_TrapCard(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
		void ReceiveBeginPlay();
		void OnExplode();
		void ExecuteUbergraph_Proj_TrapCard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
