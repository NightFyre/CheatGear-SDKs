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
	 * BlueprintGeneratedClass BPChar_PetMonkey.BPChar_PetMonkey_C
	 * Size -> 0x003A (FullSize[0x2622] - InheritedSize[0x25E8])
	 */
	class ABPChar_PetMonkey_C : public ABPChar_Pet_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x25E8(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            PS_BeastMaster_PetJabber_ArmGlow_Base;                   // 0x25F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWwiseAudioComponent*                                WwiseAudio_1;                                            // 0x25F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFoleyMainComponent*                                 FoleyMain;                                               // 0x2600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIHeldActorComponent*                               AIHeldActor_Barrel;                                      // 0x2608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRandomStream                                       RandFloatStream;                                         // 0x2610(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class AActor*                                              Ape_Barrel_Held;                                         // 0x2618(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		EOakElementalType                                          Ape_Barrel_Type;                                         // 0x2620(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bApeIngenuityAvailable;                                  // 0x2621(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPetJabberIngenuityBarrel(class AActor** Barrel);
		void ClearBarrelStanceAndBB();
		void OnRep_Ape_Barrel_Held();
		void ReturnJabbermonGunWeapon(class AWeapon** NewWeapon);
		void UserConstructionScript();
		void AlignBarrelClient();
		void AttachBarrelClient();
		void ClientBarrelThrow();
		void PetJabbermon_BarrelAlign(class AActor* NewBarrel);
		void PetJabbermon_BarrelSet(class AActor* NewBarrel);
		void PetJabbermon_BarrelThrow();
		void PetJabbermon_BarrelDrop();
		void CleanupBarrel();
		void OnTakeDamage_PetJabbermonBarrel(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
		void Pet_DownStateStart();
		void PetJabb_CancelBarrelPickup();
		void PetJabbermon_HeldBarrelExplode();
		void OnPetReleased(bool bForced, EPetReleaseReason Reason);
		void BndEvt__AIHeldActor_K2Node_ComponentBoundEvent_0_GbxChildActorSpawnedSignature__DelegateSignature_BPChar_PetMonkey(class AActor* ChildActor);
		void PetJabbermon_ChangeGunVis(bool NewVisibility);
		void OnEnrageBegin();
		void OnEnrageEnd();
		void ExecuteUbergraph_BPChar_PetMonkey(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
