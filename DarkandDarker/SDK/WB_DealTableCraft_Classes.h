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
	 * WidgetBlueprintGeneratedClass WB_DealTableCraft.WB_DealTableCraft_C
	 * Size -> 0x0040 (FullSize[0x03F0] - InheritedSize[0x03B0])
	 */
	class UWB_DealTableCraft_C : public UDealTableCraftWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBox_CostItems;                                 // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_M_C*                                   WB_CommonBtn_M;                                          // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_MS_C*                                  WB_CommonBtn_MS;                                         // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_MerchantGoleItemSlot_C*                          WB_MerchantGoleItemSlot;                                 // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWB_MerchantCostItemSlot_C*>                  MerchantCostItemSlotArray;                               // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              CostItemWidget;                                          // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Construct();
		void ClearDatas();
		void OnFillButtonClicked();
		void OnDealButtonClicked();
		void OnRemoveStockCraftData();
		void OnSetStockCraftData(const struct FStockCraftData& InStockCraftData);
		void OnSuccessStockCraft();
		void OnStockCraftFillItemsResponse(bool bFillSucceed, TArray<struct FStockCraftRequiredData> ResultRequiredDataArray);
		void ExecuteUbergraph_WB_DealTableCraft(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
