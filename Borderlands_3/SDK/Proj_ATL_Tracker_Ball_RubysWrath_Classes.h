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
	 * BlueprintGeneratedClass Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C
	 * Size -> 0x0048 (FullSize[0x0A20] - InheritedSize[0x09D8])
	 */
	class AProj_ATL_Tracker_Ball_RubysWrath_C : public AProj_ATL_TrackerMaster_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D8(0x0008) Transient, DuplicateTransient
		class UWwiseAudioComponent*                                WwiseAudio_Grenade;                                      // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UOakTriggerComponent*                                OakTrigger;                                              // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    TriggerCollision;                                        // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     FX_MultiTarget_Explode;                                  // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ImpactFuse;                                              // 0x0A00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B30C[0x4];                                   // 0x0A04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWwisePlaybackInstance                              ProjAudio;                                               // 0x0A08(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AOE_FindTarget();
		void UserConstructionScript();
		void OnExplode();
		void ReceiveBeginPlay();
		void OnHitEnemy(const struct FHitResult& Hit);
		void OnHitWorld(const struct FHitResult& Hit);
		void FuseTriggered();
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
		void AttachedActorDeath();
		void ExecuteUbergraph_Proj_ATL_Tracker_Ball_RubysWrath(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
