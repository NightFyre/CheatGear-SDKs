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
	 * BlueprintGeneratedClass AIMeleeSpawningComponent.AIMeleeSpawningComponent_C
	 * Size -> 0x0018 (FullSize[0x03C8] - InheritedSize[0x03B0])
	 */
	class UAIMeleeSpawningComponent_C : public UAIHeldActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) Transient, DuplicateTransient
		class AActor*                                              MyMeleeWeapon;                                           // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               MyPawn;                                                  // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AIMelee_GetElementalTypeFromMeleeWeapon(EOakElementalType* MeleeWeaponElement);
		void AIMelee_Drop(bool RequestNewMeleeWeapon);
		void AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const class FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
		void AIMelee_Spawn();
		void AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const class FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
		void AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
		void AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass);
		void OnHeldActorNativeDrop(class AActor* Actor);
		void ExecuteUbergraph_AIMeleeSpawningComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
