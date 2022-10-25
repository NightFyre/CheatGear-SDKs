#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_WeaponSelection.BP_WeaponSelection_C
	 * Size -> 0x00A0 (FullSize[0x02D0] - InheritedSize[0x0230])
	 */
	class UBP_WeaponSelection_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_FadeIn;                                             // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_FadeOut;                                            // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBP_WeaponSelectionRow_C*                            BP_WeaponSelectionRow;                                   // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_WeaponSelectionRow_C*                            BP_WeaponSelectionRow_84;                                // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_WeaponSelectionRow_C*                            BP_WeaponSelectionRow_95;                                // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_WeaponSelectionRow_C*                            BP_WeaponSelectionRow_161;                               // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_WeaponSelectionRow_C*                            BP_WeaponSelectionRow_162;                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Container;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        RootCanvas;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class AItemEquipable*>                              CachedInventory;                                         // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bInventoryDiffers;                                       // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BSGV[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemEquipable*                                      FirstItemInSlot;                                         // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bStillHasItems;                                          // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W0J5[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemEquipable*                                      PreviousItem;                                            // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeTime;                                                // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UZRH[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemEquipable*                                      LastSelectedItem;                                        // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle_PlayFadeOut;                                 // 0x02C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AINSPlayerController*                                InsController;                                           // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayFadeOut();
		void UpdateSelectedWeapon();
		void RebuildItemList();
		void BumpFadeTimer(float Seconds);
		void CreateRowForItem(class AItemEquipable* Item, EItemSlot Slot, int32_t Index);
		void Construct();
		void OnWeaponChanged(class AItemEquipable* NewItem, class AItemEquipable* PreviousItem);
		void InventoryHasBeenChanged(class AINSSoldier* Soldier, class AItemBase* Item);
		void BindInventoryEvents();
		void InventoryChanged();
		void ExecuteUbergraph_BP_WeaponSelection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
