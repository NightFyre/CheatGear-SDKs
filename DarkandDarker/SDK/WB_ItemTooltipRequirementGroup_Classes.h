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
	 * WidgetBlueprintGeneratedClass WB_ItemTooltipRequirementGroup.WB_ItemTooltipRequirementGroup_C
	 * Size -> 0x0008 (FullSize[0x0348] - InheritedSize[0x0340])
	 */
	class UWB_ItemTooltipRequirementGroup_C : public UItemTooltipRequirementListWidget
	{
	public:
		class UVerticalBox*                                        ItemRequirementVerticalBox;                              // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnUpdateItemRequirementsFulfilledStatus(bool bFulfilled, TArray<EItemRequirementType> UnmetRequirementArray);
		void SetItemRequirementData(const struct FDesignDataItemRequirement& DesignDataItemRequirement, bool* HasAnyRequirement);
		void AddRequirementWidget(EItemRequirementType RequirementType, class UItemTooltipRequirementWidget* Widget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
