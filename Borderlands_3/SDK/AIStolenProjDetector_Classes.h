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
	 * BlueprintGeneratedClass AIStolenProjDetector.AIStolenProjDetector_C
	 * Size -> 0x0041 (FullSize[0x0861] - InheritedSize[0x0820])
	 */
	class UAIStolenProjDetector_C : public UAIStolenProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0820(0x0008) Transient, DuplicateTransient
		class FScriptMulticastDelegate                             AIStolenProjectileUpdated;                               // 0x0828(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       OvercameChanceToInteract;                                // 0x0838(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A7EI[0x7];                                   // 0x0839(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             AIStolenProjectileReturnFX;                              // 0x0840(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             AIStolenProjectileDestroyFX;                             // 0x0850(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		Enum_AIThrowAtStyle                                        MyReturnStyle;                                           // 0x0860(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AIStolenProj_AttemptDetonate(bool* Success);
		void AIStolenProj_AttemptDisarm(bool* Success);
		void AIStolenProj_AttemptDestroy(bool* Success);
		void AIStolenProj_AttemptAttach(const class FName& SocketName, bool* Success);
		void AIStolenProj_AttemptReturnTo(Enum_AIThrowAtStyle ReturnTo, const class FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success);
		void AIStolenProj_AttemptLerpToSocket(const class FName& SocketToLerpTo, float LerpDuration, bool* Success);
		void AIStolenProj_GetElementalTypeFromStolenProjectile(EOakElementalType* StolenProjectileElement);
		void ReceiveBeginPlay();
		void OnStolenProjectileUpdated_Event_1(class AActor* StolenProjectile);
		void OnStolenProjectileDestroyed_Event_1(class AActor* StolenProjectile);
		void OnStolenProjectileReturned_Event_1(class AActor* StolenProjectile);
		void ExecuteUbergraph_AIStolenProjDetector(int32_t EntryPoint);
		void AIStolenProjectileDestroyFX__DelegateSignature(class AActor* MyStolenProjectile);
		void AIStolenProjectileReturnFX__DelegateSignature(class AActor* MyStolenProjectile);
		void AIStolenProjectileUpdated__DelegateSignature(class AActor* MyStolenProjectile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
