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
	 * WidgetBlueprintGeneratedClass BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C
	 * Size -> 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
	 */
	class UBP_KitSelect_LoadoutListItem_C : public UUserWidget
	{
	public:
		class UBP_KitSelect_AddUpgradeButton_C*                    BP_KitSelect_AddUpgradeButton;                           // 0x0230(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KitSelect_SlotEmptyButton_C*                     BP_KitSelect_SlotEmptyButton;                            // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KitSelect_SlotItemButton_C*                      BP_KitSelect_SlotItemButton;                             // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KitSelect_UpgradeDisplay_C*                      BP_KitSelect_UpgradeDisplay;                             // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     ItemWidgetSwitcher;                                      // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              UpgradeClass;                                            // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateAddUpgradeData(EItemSlot InWeaponSlot, int32_t InParentLoadoutCategoryIndex);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void UpdateUpgradeData(class UClass* InUpgradeClass, EItemSlot InParentItemSlot, int32_t InParentItemSubSlot, int32_t InSupplyCost, bool InIsSupplyCostVisible, class UClass* InItemClass, int32_t InParentLoadoutCategoryIndex);
		void UpdateItemData(int32_t InSupplyCost, EItemSlot InItemSlot, int32_t InSubSlot, class UClass* InItemClass, int32_t InLoadoutCategoryIndex);
		void UpdateEmptyData(class FText* InSlotText, EItemSlot InItemSlot, int32_t InSubSlot, bool bInDisabledSlot, bool bInIsNewGear, int32_t InLoadoutCategoryIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
