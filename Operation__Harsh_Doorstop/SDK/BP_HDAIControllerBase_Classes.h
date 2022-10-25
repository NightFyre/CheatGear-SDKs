#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BP_HDAIControllerBase.BP_HDAIControllerBase_C
	 * Size -> 0x0030 (FullSize[0x0388] - InheritedSize[0x0358])
	 */
	class ABP_HDAIControllerBase_C : public AHDAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAIPerceptionComponent*                              PerceptionComp;                                          // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHDGOAPComponent*                                    GOAPComp;                                                // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SavedMaxConeOfFireAngleDegrees;                          // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SavedMinConeOfFireAngleDegrees;                          // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSavedInfiniteAmmo;                                      // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSavedInfiniteClipAmmo;                                  // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2PQV[0x6];                                   // 0x037A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          DefaultFactionVocalProfiles;                             // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupVocalProfile();
		void ResetWeaponBase(class ABP_HDWeaponBase_C* Weapon);
		void SetupWeaponBase(class ABP_HDWeaponBase_C* Weapon);
		void ClearWeaponSavedValues();
		void ResetRecoilHandler(class ABP_HDWeaponBase_C* Weapon);
		void SetupRecoilHandler(class ABP_HDWeaponBase_C* Weapon);
		void CharacterCleanup(class ABP_HDPlayerCharacterBase_C* Character);
		void UnbindEventsFromCharacter(class ABP_HDPlayerCharacterBase_C* Character);
		void BindEventsToCharacter(class ABP_HDPlayerCharacterBase_C* Character);
		void WarnOfNoRecoilHandler(class ABP_HDWeaponBase_C* EquippedWeapon);
		class UHDKit* GetFactionSpecifiedSquadMemberKit();
		class UHDKit* GetFactionSpecifiedSquadLeaderKit();
		void OnOwnerPawnDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void OnOwnerPawnEquippedItemChange(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void ReceivePossess(class APawn* PossessedPawn);
		void SuppressionEvent(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		void HitDamageEvent(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup);
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void ExecuteUbergraph_BP_HDAIControllerBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
