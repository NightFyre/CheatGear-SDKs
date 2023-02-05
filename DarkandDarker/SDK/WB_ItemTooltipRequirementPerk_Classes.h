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
	 * WidgetBlueprintGeneratedClass WB_ItemTooltipRequirementPerk.WB_ItemTooltipRequirementPerk_C
	 * Size -> 0x0048 (FullSize[0x0380] - InheritedSize[0x0338])
	 */
	class UWB_ItemTooltipRequirementPerk_C : public UWB_ItemTooltipRequirementWidgetBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          ColonText;                                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           RequiredPerkList;                                        // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RequirementNameText;                                     // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FPrimaryAssetId>                             PerkAssetIdArray;                                        // 0x0358(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn
		bool                                                       bFulfilled;                                              // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M426[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UItemTooltipRequirementListEntryWidgetData*>  RequirementListDataArray;                                // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void InitializeList(bool bFulfilled);
		void Construct();
		void OnChangedRequirementStatus(bool bFulfilled);
		void ExecuteUbergraph_WB_ItemTooltipRequirementPerk(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
