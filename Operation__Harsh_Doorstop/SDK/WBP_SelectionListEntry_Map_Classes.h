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
	 * WidgetBlueprintGeneratedClass WBP_SelectionListEntry_Map.WBP_SelectionListEntry_Map_C
	 * Size -> 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
	 */
	class UWBP_SelectionListEntry_Map_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_CreateGameSelectionListEntry_C*                 SelectionEntry;                                          // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FFMapInfo                                           MapInfo;                                                 // 0x0240(0x0048) Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void BP_OnEntryReleased();
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BndEvt__SelectionItem_K2Node_ComponentBoundEvent_0_OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void ExecuteUbergraph_WBP_SelectionListEntry_Map(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
