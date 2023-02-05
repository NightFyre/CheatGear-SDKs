#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C
	 * Size -> 0x0008 (FullSize[0x04B8] - InheritedSize[0x04B0])
	 */
	class UWB_Equipment_WeaponSetBase_C : public UEquipmentWeaponSlotSetWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SetSlotColor(const struct FPrimaryAssetId& ItemId, bool bCanEquip);
		void OverrideItemSizeBox(class USizeBox* TargetSizeBox, double InventoryWidth, double InventoryHeight);
		void OnInitialized();
		void OnFinishedItemDataSet(const struct FItemData& InItemData, const struct FGameplayTag& HandType, const struct FGameplayTag& SlotType, const struct FItemInventorySize& InventorySize);
		void OnOverlapItemWidget(const struct FPrimaryAssetId& ItemId, bool bValidSlot, bool bCanEquip);
		void OnLeaveItemWidget();
		void ExecuteUbergraph_WB_Equipment_WeaponSetBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
