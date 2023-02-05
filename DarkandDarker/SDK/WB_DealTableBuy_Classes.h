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
	 * WidgetBlueprintGeneratedClass WB_DealTableBuy.WB_DealTableBuy_C
	 * Size -> 0x0058 (FullSize[0x0408] - InheritedSize[0x03B0])
	 */
	class UWB_DealTableBuy_C : public UDealTableBuyWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBox_CostItems;                                 // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_BuyDesc;                                            // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_BuyDesc_2;                                          // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_BuyDesc_01;                                         // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_M_C*                                   WB_CommonBtn_M;                                          // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_MS_C*                                  WB_CommonBtn_MS;                                         // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_MerchantGoleItemSlot_C*                          WB_MerchantGoleItemSlot;                                 // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWB_MerchantCostItemSlot_C*>                  MerchantCostItemSlotArray;                               // 0x03F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              CostItemWidget;                                          // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Construct();
		void BeforeSetStockBuySellData();
		void OnRemoveStockBuyData();
		void OnSetStockBuyData(const struct FStockBuyData& InStockBuyBata);
		void OnFillButtonClicked();
		void OnDealButtonClicked();
		void OnStockBuyFillItemsResponse(bool bFillSucceed, TArray<struct FStockBuyRequiredData> ResultRequiredDataArray);
		void OnSuccessStockBuy();
		void OnLoadSoundData(class UObject* InObjectLoaded);
		void ExecuteUbergraph_WB_DealTableBuy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
