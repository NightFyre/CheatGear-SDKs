#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C
	 * Size -> 0x0024 (FullSize[0x0274] - InheritedSize[0x0250])
	 */
	class UWBP_DeployMenu_SquadSelectionPanel_C : public UDeployMenu_SquadSelectionWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScrollBox*                                          PlatoonsList;                                            // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    NumFakePlatoonItems;                                     // 0x0260(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             PlatoonItemPadding;                                      // 0x0264(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void RemovePlatoonItemWidgetFromList(class UPlatoonListEntry* RemovedPlatoonData, int32_t RemoveIdx);
		void AddNewPlatoonItemWidget(class UPlatoonListEntry* PlatoonData);
		void GeneratePlatoon(class UPlatoonListEntry* PlatoonData);
		void DeconstructPlatoon(class UPlatoonListEntry* RemovedPlatoonData, int32_t RemovedPlatoonIdx);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_DeployMenu_SquadSelectionPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
