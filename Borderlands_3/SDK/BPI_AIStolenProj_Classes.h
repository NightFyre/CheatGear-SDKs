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
	 * BlueprintGeneratedClass BPI_AIStolenProj.BPI_AIStolenProj_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_AIStolenProj_C : public UInterface
	{
	public:
		void AIStolenProj_AttemptDetonate(bool* Success);
		void AIStolenProj_GetElementalTypeFromStolenProjectile(EOakElementalType* StolenProjectileElement);
		void AIStolenProj_AttemptLerpToSocket(const class FName& SocketToLerpTo, float LerpDuration, bool* Success);
		void AIStolenProj_AttemptReturnTo(Enum_AIThrowAtStyle ReturnTo, const class FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success);
		void AIStolenProj_AttemptAttach(const class FName& SocketName, bool* Success);
		void AIStolenProj_AttemptDestroy(bool* Success);
		void AIStolenProj_AttemptDisarm(bool* Success);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
