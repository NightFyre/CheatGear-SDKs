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
	 * BlueprintGeneratedClass BPBeastmasterComponent.BPBeastmasterComponent_C
	 * Size -> 0x00C0 (FullSize[0x04D0] - InheritedSize[0x0410])
	 */
	class UBPBeastmasterComponent_C : public UBeastmasterCharacterComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) Transient, DuplicateTransient
		struct FEnvQueryParams                                     PetSpawnLocationEQS;                                     // 0x0418(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		bool ValidateCurrentPetAugment(class UOakPlayerCharacterAugmentData_Pet* PetAugment);
		float GetPetCooldownRefundPercent(EPetRespawnCooldownRefundType RefundType);
		struct FVector GetFallbackPetSpawnLocation();
		void CheckForSpawnCollisions(const struct FVector& SpawnLocation, bool* bCollisionsDetected);
		void GetPetSpawnClass(class UOakPlayerCharacterAugmentData_Pet* InAugment, class UClass** res);
		class AOakCharacter* SpawnNewPet(class UOakPlayerCharacterAugmentData_Pet* PetAugment, const struct FVector& SpawnLocation);
		void OnReleasedPet(bool bForced, EPetReleaseReason ReleaseReason);
		void ReceiveBeginPlay();
		void TryOrderPetAttack();
		void ExecuteUbergraph_BPBeastmasterComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
