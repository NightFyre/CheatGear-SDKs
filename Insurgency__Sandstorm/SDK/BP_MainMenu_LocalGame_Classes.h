#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_MainMenu_LocalGame.BP_MainMenu_LocalGame_C
	 * Size -> 0x0150 (FullSize[0x03D8] - InheritedSize[0x0288])
	 */
	class UBP_MainMenu_LocalGame_C : public UMainMenuPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BackButton;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelectGamepad;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_12;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LocalGame_LightingSelection_C*                   LightingSelection;                                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MapImage;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LocalGame_MapSelection_C*                        MapSelection;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_1;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ScenarioImage;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LocalGame_ScenarioSelection_C*                   ScenarioSelection;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_LocalGame_StartGameButton_C*                     StartGame;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_3;                                             // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_6;                                             // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TimeOfDayImage;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TimeOfDayText;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              SelectedMapName;                                         // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                SelectedLocalizedMapName;                                // 0x0310(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              SelectedScenarioName;                                    // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                LocalGameBreadcrumbTop;                                  // 0x0338(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LocalGameBreadcrumbBottom;                               // 0x0350(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnNavigateBack;                                          // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bInitialMapSet;                                          // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KHGK[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ScenarioInfoHeader;                                      // 0x0380(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                SelectedScenarioText;                                    // 0x0398(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              GameModeOverride;                                        // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              LightingOverride;                                        // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UBP_GenericDialog_C*                                 WaitingDialogWidget;                                     // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DetermineScenarioOnMapChosen(class UBP_LocalGame_ScenarioSelection_C* ScenarioSelection, const class FText& PrevScenarioName, class UWidget** ScenarioOutput);
		void OnClosedRestrictionDialog();
		void Display_Map_Download_Waiting_Dialog();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnLightingChanged(const class FString& LightingSting, const class FText& LightingText);
		void CheckForInitialSelectedMap(bool* bFoundMap, class FString* MapName);
		void SetGamemodeImage(const class FString& ScenarioText);
		void SetMapImage(const class FString& MapName, const class FString& Lighting);
		void On_New_Scenario_Chosen(const class FString& SelectedScenarioFileName, const class FString& SelectedGamemodeName, const class FText& SelectedScenarioText);
		void OnNewMapChosen(const class FString& MapName);
		bool Get_StartGame_bIsEnabled_1();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		void GetBreadcrumbData(class FText* Top, class FText* Bottom);
		void OnPageSelected(EnumMainMenuPage NewPage);
		void OnMapChosen(const class FString& MapName);
		void OnScenarioChosen(const class FString& ScenarioName, const class FString& GameModeName, const class FText& ScenarioPrintText);
		void BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void BndEvt__LightingSelection_K2Node_ComponentBoundEvent_1_OnLightingChosen__DelegateSignature(const class FString& LightingNameString, const class FText& LightingNameText);
		void OnPanelOpened();
		void Construct();
		void ExecuteUbergraph_BP_MainMenu_LocalGame(int32_t EntryPoint);
		void OnNavigateBack__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
