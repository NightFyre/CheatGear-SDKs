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
	 * BlueprintGeneratedClass BPI_AIShieldHandling.BPI_AIShieldHandling_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_AIShieldHandling_C : public UInterface
	{
	public:
		void AIShield_SetNewShieldClass(class UClass* NewShieldClass);
		void AIShield_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewShield, bool SpawnIfDoesntExist);
		void AIShield_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const class FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist);
		void AIShield_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const class FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist);
		void AIShield_Drop(bool RequestNewShield);
		void AIShield_Spawn();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
