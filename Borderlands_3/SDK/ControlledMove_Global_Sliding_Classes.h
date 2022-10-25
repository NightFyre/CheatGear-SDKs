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
	 * BlueprintGeneratedClass ControlledMove_Global_Sliding.ControlledMove_Global_Sliding_C
	 * Size -> 0x0048 (FullSize[0x08F0] - InheritedSize[0x08A8])
	 */
	class UControlledMove_Global_Sliding_C : public UOakControlledMove
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08A8(0x0008) Transient, DuplicateTransient
		class APlayerController*                                   PlayerController;                                        // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             StartLocation;                                           // 0x08B8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SlideTime;                                               // 0x08C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SlideOffLedgeMaxDuration;                                // 0x08C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A9AL[0x4];                                   // 0x08CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ArtifactSlideDamageType;                                 // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABPChar_Player_C*                                    BPChar_Player;                                           // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SlideDistance;                                           // 0x08E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3HIS[0x4];                                   // 0x08E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DamageScaleCurve;                                        // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnStart(float MoveDuration, class AActor* TargetActor);
		void OnStop(bool bInterrupted);
		void OnHitTargetable(class AActor* HitActor, const struct FVector& HitNormal);
		void OnHitWorld(class AActor* HitActor, const struct FVector& HitNormal);
		void SlideDuration();
		void MovementChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void OnHitDamageable(class AActor* HitActor, const struct FVector& HitNormal);
		void OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator);
		void OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnServerStop(bool bInterrupted);
		void ExecuteUbergraph_ControlledMove_Global_Sliding(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
