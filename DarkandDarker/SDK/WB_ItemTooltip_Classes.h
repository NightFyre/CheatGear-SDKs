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
	 * WidgetBlueprintGeneratedClass WB_ItemTooltip.WB_ItemTooltip_C
	 * Size -> 0x0340 (FullSize[0x06C0] - InheritedSize[0x0380])
	 */
	class UWB_ItemTooltip_C : public UItemTooltipWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          ArmorType;                                               // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          HandType;                                                // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBox_AbilityListStatDline;                               // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBox_MainStatDline;                                      // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Item_Description_Line;                               // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_NameColorLine;                                       // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Item_Description;                                        // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           ItemAbilityList;                                         // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemName;                                                // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemNameBG_Rarity;                                       // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ItemRequirement;                                         // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ItemRequirementWidgetHolder;                             // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           ItemStatMainList;                                        // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           ItemStatSubList;                                         // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SlotType;                                                // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher_Category;                                       // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          UtilityType;                                             // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ItemTooltipSellCost_C*                           WB_ItemTooltipSellCost;                                  // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          WeaponType;                                              // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FItemData                                           ItemData;                                                // 0x0420(0x0090) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDesignDataItem                                     DesignDataItem;                                          // 0x04B0(0x0170) Edit, BlueprintVisible, DisableEditOnInstance
		class UArtDataItem*                                        ArtDataItem;                                             // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bMainEffect;                                             // 0x0628(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YBOK[0x7];                                   // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWB_ItemTooltipRequirementGroup_C*                   RequirementGroupWidget;                                  // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRequirementsSet;                                        // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LI0I[0x3];                                   // 0x0639(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemDataProperty                                   ItemDataProperty;                                        // 0x063C(0x0014) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDesignDataItemPropertyType                         ItemPropertyType;                                        // 0x0650(0x0044) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_9TX3[0x4];                                   // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WeaponTypeTooltipText;                                   // 0x0698(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                DescText;                                                // 0x06A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void FindItemDataGameplayEffect(TArray<struct FItemDataGameplayEffect>* ItemDataGameplayEffectArray, const struct FPrimaryAssetId& EffectId, struct FItemDataGameplayEffect* FoundItemDataGameplayEffect);
		void Completed_E5EDA09445BB690707F6069D183BA8BC(class UObject* Loaded);
		void OnItemData(const struct FItemData& NewItemData, const struct FItemData& OldItemData);
		void OnLoadArtData(class UObject* InObjectLoaded);
		void UpdateItemTooltipWeapon();
		void UpdateItemTooltipArmor();
		void UpdateItemTooltipUtility();
		void UpdateItemTooltip();
		void UpdateItemTooltipStatProperty();
		void UpdateItemTooltipStatAbility();
		void UpdateItemTooltipDesc();
		void UpdateItemTooltipMics();
		void OnUpdateItemRequirementsFulfilledStatus(bool bFulfilled, TArray<EItemRequirementType> UnmetRequirementsArray);
		void UpdateItemTooltipRequirements();
		void OnLoadDescData(class UObject* InObjectLoaded);
		void UpdateItemTooltipAccessory();
		void OnSetCostInfoData(TArray<struct FMerchantCostInfo> InCostInfoArray, bool bActive);
		void OnRefreshItemName();
		void UpdateItemTooltipStatPropertyDescData(const class FText& TypeText, const class FText& ValueText);
		void ExecuteUbergraph_WB_ItemTooltip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
