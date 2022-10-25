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
	 * BlueprintGeneratedClass Passive_Gunner_DLCSkill_6.Passive_Gunner_DLCSkill_5_C
	 * Size -> 0x0058 (FullSize[0x0208] - InheritedSize[0x01B0])
	 */
	class UPassive_Gunner_DLCSkill_5_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		TArray<class UInventorySlotData*>                          InventorySlotsToIterate;                                 // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CorrosiveEquipped;                                       // 0x01C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CryoEquipped;                                            // 0x01CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FireEquipped;                                            // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RadiationEquipped;                                       // 0x01D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ShockEquipped;                                           // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfStacks;                                          // 0x01DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Gunner_DLCSkill_6; // 0x01E0(0x0028)

	public:
		void GetNumberOfBonuses();
		void CleanupVariables();
		void GetItemDamageType(class AActor* InvSlot);
		void OnActivated();
		void OnResumed();
		void DetermineTotalMatchingElements();
		void ApplyBonuses();
		void RemoveBonuses();
		void OpenGate();
		void DLCSkill5_OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
		void AddBonusStack();
		void DLCSkill5_UpdateMatchingElements();
		void DLC5_OnGrenadeSlotChanged(class AActor* EquippedActor, class UInventorySlotData* SlotData);
		void DLCSkill5_IronBearExitedAndPlayerReady(class AOakCharacter_IronBear* IronBear);
		void DLCSkill5_OnDownStateStart();
		void ExecuteUbergraph_Passive_Gunner_DLCSkill_6(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
