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
	 * WidgetBlueprintGeneratedClass WB_ItemTooltipSellCost.WB_ItemTooltipSellCost_C
	 * Size -> 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
	 */
	class UWB_ItemTooltipSellCost_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBox_Cost;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWB_ItemTooltipSellCostSlot_C*>               CostSlotArray;                                           // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BeforeSetCostSlot();
		void OnSetCostInfoData(TArray<struct FMerchantCostInfo> InCostInfoArray);
		void OnLoadItemBundleInfoAsset(class UObject* InObjectLoaded);
		void OnLoadArtData(class UObject* InObjectLoaded);
		void ExecuteUbergraph_WB_ItemTooltipSellCost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
