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
	 * WidgetBlueprintGeneratedClass WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C
	 * Size -> 0x0089 (FullSize[0x02B9] - InheritedSize[0x0230])
	 */
	class UWBP_DeployMenu_ClassSelectionPanel_C : public UDeployMenu_ClassSelectionPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScrollBox*                                          ClassScrollBox;                                          // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bPanelInitialized;                                       // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RF2R[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_HDPlayerControllerBase_C*                        HDOwningPlayer;                                          // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle_CheckRestrictions;                           // 0x0250(0x0008) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              KitListingWidgetClass;                                   // 0x0258(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              DesignPreviewKits[0x50];                                 // 0x0260(0x0050) UNKNOWN PROPERTY: SetProperty
		class UHDKit*                                              SelectedClass;                                           // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHDTeam                                                    LastFaction;                                             // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetClassSelectionState(class UHDKit* ClassToUpdate, bool bSelected, bool bMatchDisplayNames, bool* bClassUpdated);
		void InternalUpdateSelectionState(class UDeployMenu_ClassSelectionListing* NewSelection);
		void SelectFirstUnrestrictedClass();
		void InternalDeselectAllClasses();
		void IsValidClassListingIndex(int32_t ChildIndex, bool* bValidIndex);
		void SetClassSelectionStateByIndex(int32_t ChildIndex, bool bSelected);
		void ToggleRestrictionsTimer(bool bEnabled, bool bFireOnceImmediately);
		void InternalCreateClassListingWidget(class UHDKit* Kit, class UWBP_DeployMenu_ClassSelectionListing_C** NewKitListingWidget);
		void InternalPopulateListWithClasses();
		void RepopulateListByFaction(EHDTeam OwningPlayerTeam);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void LateInit_RepPlayerState();
		void CheckRestrictions();
		void Destruct();
		void OnClassSelected(class UWBP_DeployMenu_ClassSelectionListing_C* SelectedClassWidget);
		void OnClassDeselected(class UWBP_DeployMenu_ClassSelectionListing_C* DeselectedClassWidget);
		void ExecuteUbergraph_WBP_DeployMenu_ClassSelectionPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
