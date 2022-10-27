#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass UI_GameEventPanelWidget.UI_GameEventPanelWidget_C
	 * Size -> 0x0098 (FullSize[0x0318] - InheritedSize[0x0280])
	 */
	class UUI_GameEventPanelWidget_C : public UGameEventPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_ComboBoxWrapper_C*                               AllEventsComboBox;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ComboBoxWrapper_C*                               CurrentEventsComboBox;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            EventArea;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            LeaderboardSlot;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ComboBoxWrapper_C*                               NextEventsComboBox;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            StatsPanel;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_5;                                           // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class AGameEventBase*>                              CurrentEvents;                                           // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AGameEventBase*>                              NextEvents;                                              // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class FString                                              SelectedCurrent;                                         // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              SelectedNext;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       HighlightedCurrent;                                      // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ONT8[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGameEventBase*>                              AllEvents;                                               // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		ESlateVisibility GetDropdownVisibility();
		void RestoreSelected();
		void UpdateSelection(class UComboBoxString* Dropdown, TArray<class AGameEventBase*>* GameEvents, const class FString& Selected);
		void GetSelectedEvent(class AGameEventBase** gameEvent);
		void GetGameEventOptionString(class AGameEventBase* gameEvent, class FString* OptionString);
		void SelectEvent(int32_t Index, bool Current);
		void AddCurrentEvent(class AGameEventBase* gameEvent);
		void EmptyLists();
		void AddAnnouncedEvent(class AGameEventBase* gameEvent);
		void OnUpdate();
		void Construct();
		void OnOpened();
		void OnClosed();
		void OnEventComboBoxSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
		void ExecuteUbergraph_UI_GameEventPanelWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
