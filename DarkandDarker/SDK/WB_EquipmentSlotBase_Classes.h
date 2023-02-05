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
	 * WidgetBlueprintGeneratedClass WB_EquipmentSlotBase.WB_EquipmentSlotBase_C
	 * Size -> 0x0010 (FullSize[0x0400] - InheritedSize[0x03F0])
	 */
	class UWB_EquipmentSlotBase_C : public UEquipmentSlotWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     ItemWidgetSize;                                          // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OverrideItemSizeBox(class USizeBox* TargetSizeBox, double InventoryWidth, double InventoryHeight);
		void OnRemoveItem(const struct FItemData& InItemData);
		void OnFinishedItemDataSet(const struct FItemData& InItemData, const struct FGameplayTag& HandType, const struct FGameplayTag& SlotType, const struct FItemInventorySize& InventorySize);
		void OnLeaveItemWidget();
		void OnOverlapItemWidget(const struct FPrimaryAssetId& ItemId, bool bValidSlot, bool bCanEquip);
		void ExecuteUbergraph_WB_EquipmentSlotBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
