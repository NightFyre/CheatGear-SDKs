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
	 * BlueprintGeneratedClass Passive_Gunner_MatchedSet.Passive_Gunner_MatchedSet_C
	 * Size -> 0x00B8 (FullSize[0x0268] - InheritedSize[0x01B0])
	 */
	class UPassive_Gunner_MatchedSet_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		float                                                      EquippedGearMultiplier;                                  // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WLBW[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Gunner_MatchedSet; // 0x01C0(0x0028)
		TArray<class UInventorySlotData*>                          InventorySlotsToIterate;                                 // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UManufacturerData*                                   RightHandGunManufacturer;                                // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class UInventorySlotData*, Enum_Gunner_MatchedSet_InentorySlots> InventorySlotsToEnum;                                    // 0x0200(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      GrenadeModifier;                                         // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShieldModifier;                                          // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weapon1Modifier;                                         // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weapon2Modifier;                                         // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weapon3Modifier;                                         // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weapon4Modifier;                                         // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		EGbxAbilityState CalculateAbilityState();
		void SetGearModifierPerInventorySlot(class UInventorySlotData* SlotToUse, bool NewModifyValue);
		void CalculateTotalGearModifierBonus();
		void GetIsNewRightHandWeapon(class AActor* ModifiedEquipment, bool* ItIs);
		void CleanupGearBonus();
		void SetRightHandManufacturer();
		void GetItemManufacturer(class AActor* GearToTest, class UManufacturerData** Manufacturer);
		void TryToModifyIndividualGearBonus(class UInventorySlotData* NewSlot, bool Add);
		void MatchedSet_EquippedItem(class AActor* EquippedActor, class UInventorySlotData* SlotData);
		void MatchedSet_UnequippedItem(class AActor* UnequippedActor, class UInventorySlotData* SlotData);
		void DetermineTotalGearBonus();
		void HandleNewEquippedItem(class AActor* NewModifiedActor, class UInventorySlotData* NewSlotData, bool Add);
		void OnActivated();
		void OnResumed();
		void OnPaused();
		void MatchedSet_OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
		void OnForcedRefresh();
		void ExecuteUbergraph_Passive_Gunner_MatchedSet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
