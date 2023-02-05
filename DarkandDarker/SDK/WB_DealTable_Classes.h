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
	 * WidgetBlueprintGeneratedClass WB_DealTable.WB_DealTable_C
	 * Size -> 0x0030 (FullSize[0x0348] - InheritedSize[0x0318])
	 */
	class UWB_DealTable_C : public UMerchantDealTableWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     Switcher_ServiceCategory;                                // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_DealTableBuy_C*                                  WB_DealTableBuy;                                         // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_DealTableCraft_C*                                WB_DealTableCraft;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_DealTableMerchant_C*                             WB_DealTableMerchant;                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_DealTableSell_C*                                 WB_DealTableSell;                                        // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnSetMerchantFaction(int32_t InFaction);
		void OnSetMerchantName(const class FText& Name);
		void OnSetMerchantPortrait(class UTexture2D* Portrait);
		void OnSetMerchantRemainTime(const struct FTimespan& RemainTime);
		void OnSetMerchantScript(const class FText& InScript);
		void OnMerchantServiceActiveNotify(EWidgetMerchantServiceType ActiveService);
		void ExecuteUbergraph_WB_DealTable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
