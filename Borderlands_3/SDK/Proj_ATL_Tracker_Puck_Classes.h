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
	 * BlueprintGeneratedClass Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C
	 * Size -> 0x00D8 (FullSize[0x0AB0] - InheritedSize[0x09D8])
	 */
	class AProj_ATL_Tracker_Puck_C : public AProj_ATL_TrackerMaster_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D8(0x0008) Transient, DuplicateTransient
		class UProjectileHomingComponent*                          ProjectileHoming;                                        // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FEnvQueryParams                                     HomingQuery;                                             // 0x09E8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    ChildCount;                                              // 0x0AA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      TargetDelay;                                             // 0x0AA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ChildClassType;                                          // 0x0AA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void FindHomingTarget_Event();
		void Retry_Homing();
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void SingleTargetTag();
		void TargetStuck();
		void OnLastBounce(const struct FHitResult& ImpactResult);
		void BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Proj_ATL_Tracker_Puck(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void AttachedActorDeath();
		void OnHitWorld(const struct FHitResult& Hit);
		void OnExplode();
		void Fallback();
		void ExecuteUbergraph_Proj_ATL_Tracker_Puck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
