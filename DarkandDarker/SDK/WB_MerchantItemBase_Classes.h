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
	 * WidgetBlueprintGeneratedClass WB_MerchantItemBase.WB_MerchantItemBase_C
	 * Size -> 0x0071 (FullSize[0x05D9] - InheritedSize[0x0568])
	 */
	class UWB_MerchantItemBase_C : public UMerchantItemWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0568(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Img_Hover;                                               // 0x0570(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Selected;                                            // 0x0578(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemContentsCount;                                       // 0x0580(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemCount;                                               // 0x0588(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_2;                                               // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_ItemCount;                                       // 0x0598(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ItemTooltip_C*                                   ItemTooltip;                                             // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFulfilledRequirements;                                  // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PJ8S[0x3];                                   // 0x05A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RemainCount;                                             // 0x05AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWB_GameTooltipS_C*                                  GameTooltip;                                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bStockSellBackDataValid;                                 // 0x05B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K5R6[0x7];                                   // 0x05B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundData*                                          SoundDataAsset;                                          // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FMerchantCostInfo>                           CostInfoArray;                                           // 0x05C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bSellBackServiceActive;                                  // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UWidget* GetItemToolTipWidget();
		void OnActiveSellBackService(class UWB_ItemTooltip_C* ItemTooltip, bool bActive);
		void PostItemSound(const struct FGameplayTag& SoundTag);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void CreateItemTooltip();
		void OnItemContentsCountUpdated(int32_t ContentsCount);
		void OnSetItemRequirementsFulfilledStatus(bool bFufilled, const struct FPrimaryAssetId& PlayerCharacterId, class UDCAttributeSet* AttributeSet, TArray<struct FPrimaryAssetId> PerkIdArray);
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void Construct();
		void OnItemData(const struct FItemData& NewItemData, const struct FItemData& OldItemData);
		void SetActivateStockSellBackInfo(bool bSellTabOpen);
		void OnStockSellBackDataSet(const struct FStockSellBackData& InStockSellBackData);
		void OnStockBuyDataSet(const struct FStockBuyData& InStockBuyData);
		void OnLoadSoundData(class UObject* InObjectLoaded);
		void UpdateItemContentsCount();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnSelected(bool bSelected);
		void OnStockCraftDataSet(const struct FStockCraftData& InStockCraftData);
		void ExecuteUbergraph_WB_MerchantItemBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
