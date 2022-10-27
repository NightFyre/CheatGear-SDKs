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
	 * BlueprintGeneratedClass IBPChar_Pet.IBPChar_Pet_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIBPChar_Pet_C : public UInterface
	{
	public:
		void GetPetJabberIngenuityBarrel(class AActor** Barrel);
		void PetSucceededRevive();
		void PetJabbermon_BarrelDrop();
		void PetJabbermon_BarrelThrow();
		void PetJabbermon_BarrelSet(class AActor* NewBarrel);
		void PetJabbermon_BarrelAlign(class AActor* NewBarrel);
		void SetEnraged(bool bIsEnraged);
		void GetPetEvolutionType(EOakActionAbilityPetEvolutionType* EvolutionType);
		void DoAttackCommand(class UObject* EnemyObject);
		void BeginAttackCommand();
		void GetPetType(EOakActionAbilityPetType* PetType);
		void PetJabbermon_FireRocket();
		void PetJabbermon_ChangeLauncherVis(bool NewVisibility);
		void PetJabbermon_ChangeGunVis(bool NewVisibility);
		void PetJabbermon_Poop_Hide();
		void PetJabbermon_Poop_Show();
		void PetJabbermon_ChangeMeleeVis(bool NewWeapVisibility);
		void OnPetReleased(bool bForced, EPetReleaseReason Reason);
		void MatchesPetProfile(class UOakPlayerCharacterAugmentData_Pet* InAugment, bool* res);
		void PetSpawnTrapProjectile();
		void GetBeastmasterOwner(class AOakCharacter_Player** Beastmaster);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
