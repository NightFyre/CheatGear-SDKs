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
	 * BlueprintGeneratedClass AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C
	 * Size -> 0x0018 (FullSize[0x03C8] - InheritedSize[0x03B0])
	 */
	class UAIExplosiveSpawningComponent_C : public UAIHeldActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) Transient, DuplicateTransient
		class AActor*                                              MyExplosive;                                             // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               MyPawn;                                                  // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AIExplosive_Spawn();
		void AIExplosive_Prime();
		void AIExplosive_Detonate(bool KillSelfOnDetonate, bool RequestNewExplosive, class AActor* InstigatorOverride);
		void AIExplosive_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const class FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesn_tExist);
		void AIExplosive_Drop(bool RequestNewExplosive, class AActor* InstigatorOverride);
		void AIExplosive_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const class FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesntExist);
		void AIExplosive_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewExplosive, bool SpawnIfDoesntExist);
		void AIExplosive_SetNewExplosiveClass(class UClass* NewExplosiveClass);
		void ExecuteUbergraph_AIExplosiveSpawningComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
