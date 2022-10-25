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
	 * BlueprintGeneratedClass BPFistOverMatterActor.BPFistOverMatterActor_C
	 * Size -> 0x0094 (FullSize[0x051C] - InheritedSize[0x0488])
	 */
	class ABPFistOverMatterActor_C : public AOwnedActionAbilityActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0488(0x0008) Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FDataTableValueHandle                               Web_Sphere_Radius;                                       // 0x0498(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableValueHandle                               Web_Duration;                                            // 0x04B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class AOakCharacter*                                       InitialTarget;                                           // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UParticleSystemComponent*                            SlamEmitter;                                             // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GroundLocation;                                          // 0x04D8(0x000C) Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WV6O[0x4];                                   // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        LeftTimer;                                               // 0x04E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        RightTimer;                                              // 0x04F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      SlamWaitTime;                                            // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_28BI[0x4];                                   // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPhaseTranceActivationComboData                     ActivationCombo;                                         // 0x0500(0x0018) Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn
		int32_t                                                    NewVar_1;                                                // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_GroundLocation();
		void PerformFeedback();
		void DoSlamDamage(const struct FVector& SlamLocation);
		void GetfindGroundVectorLocations(struct FVector* Start, struct FVector* End);
		float GetMaxTime();
		void UserConstructionScript();
		void GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9(const struct FHitResult& Result);
		void GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9(const struct FHitResult& Result);
		void SpawnSlamEmitter();
		void WebSlamParticleSystemEvent(const class FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
		void StartRightHandTimer();
		void StartLeftHandTimer();
		void ReceiveBeginPlay();
		void FindGroundLocationAsync();
		void BeginWebSlam();
		void EndWebSlam();
		void DoWebSlamLeftDamage();
		void DoWebSlamRightDamage();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BPFistOverMatterActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
