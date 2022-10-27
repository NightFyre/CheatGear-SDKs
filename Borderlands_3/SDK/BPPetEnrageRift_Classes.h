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
	 * BlueprintGeneratedClass BPPetEnrageRift.BPPetEnrageRift_C
	 * Size -> 0x0026 (FullSize[0x04DE] - InheritedSize[0x04B8])
	 */
	class ABPPetEnrageRift_C : public APetEnrageRift
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) Transient, DuplicateTransient
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxAction*                                          HulkCE;                                                  // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Mod3Kills;                                               // 0x04D8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bRemoveMod2;                                             // 0x04DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRemoveMod3;                                             // 0x04DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnRep_Mod3Kills();
		void RemoveMod3();
		void OnCausedDeath(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* Details);
		void TrySetupMod3(class UOakActionAbility_HulkOut* ActionAbility);
		void RemoveMod2();
		void TrySetupMod2(class UOakActionAbility_HulkOut* ActionAbility);
		void TrySetupMod1(class UOakActionAbility_HulkOut* ActionAbility);
		void SetupPlayerMods();
		void CreateActionRegisters(TArray<struct FGbxActionRegister>* res);
		void SetPetResourceLocks(bool bLocked);
		void PreparePetPostTeleport();
		void Cleanup();
		void PreparePetPreTeleport();
		void CauseDamageToPet();
		bool TeleportPetToCurrentLocation();
		void UserConstructionScript();
		void OnPetResurrected();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void NotifyPetTeleported();
		void OnShutdownRequested(bool bForced);
		void ExecuteUbergraph_BPPetEnrageRift(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
