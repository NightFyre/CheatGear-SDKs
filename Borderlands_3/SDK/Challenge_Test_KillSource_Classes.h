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
	 * BlueprintGeneratedClass Challenge_Test_KillSource.Challenge_Test_KillSource_C
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class UChallenge_Test_KillSource_C : public UOakChallenge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		struct FStatusEffectQuery                                  StatusToFind;                                            // 0x0268(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void CheckModifiedShot(class AWeapon* Weapon, const struct FWeaponShotModifierData& Data);
		void CheckDamageDone(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
		void CheckPickUpItem(class AActor* PickedUpActor, int32_t Quantity);
		void CheckDamageTaken(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void SetBinds();
		void CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails);
		void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
		void ExecuteUbergraph_Challenge_Test_KillSource(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
