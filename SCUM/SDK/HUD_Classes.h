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
	 * WidgetBlueprintGeneratedClass HUD.HUD_C
	 * Size -> 0x00E0 (FullSize[0x04D8] - InheritedSize[0x03F8])
	 */
	class UHUD_C : public UHudWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCompassWidget_C*                                    _compassWidget;                                          // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              _dummyImage;                                             // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HackImage;                                               // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        KillNotificationsVerticalBox;                            // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULevelUpNotification_C*                              LevelUpNotification_1;                                   // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvasPanel;                                         // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMessageContainer_C*                                 Messages;                                                // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPrisonerLifeIndicatorsSprite_C*                     PrisonerLifeIndicatorsSprite;                            // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResizableWindow_C*                                  ResizableWindowBCUICU;                                   // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResizableWindow_C*                                  ResizableWindowBCUMonitor;                               // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResizableWindow_C*                                  ResizableWindowBCUPerformance;                           // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResizableWindow_C*                                  ResizableWindowChat;                                     // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResizableWindow_C*                                  ResizableWindowRDANutrition;                             // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResizableWindow_C*                                  ResizableWindowSkills;                                   // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TeamInfo_C*                                      TeamInfo;                                                // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CraftingPanel_C*                                 UI_CraftingPanel;                                        // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_InventoryPanelThirdIteration_C*                  UI_InventoryPanelThirdIteration;                         // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_MicInputIndicator_C*                             UI_MicInputIndicator;                                    // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_NotificationPanelWidget_C*                       UI_NotificationPanelWidget;                              // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Skydiving_MainPanel_C*                           UI_Skydiving_MainPanel;                                  // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Version_SteamID_Players;                                 // 0x04A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWarning_C*                                          WarningMessage;                                          // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        WarningsVerticalBox;                                     // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Watermark;                                               // 0x04B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      Threshold;                                               // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _monitorsVisible;                                        // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _isPrisonerLifeComponentValid;                           // 0x04C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _shouldRefreshBCUBodyMonitorSize;                        // 0x04C6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _shouldRefreshRDAMonitorSize;                            // 0x04C7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _shouldRefreshPerformanceMonitorSize;                    // 0x04C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _isValidForInitialization;                               // 0x04C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _isInitialized;                                          // 0x04CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5F52[0x1];                                   // 0x04CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _lastBCULeftPanelDesiredHeight;                          // 0x04CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_NotificationWidget_C*                            UpdateableNotificationWidget;                            // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateElementsVisibility();
		ESlateVisibility GetVisibility_VicinityBackgroundImage();
		class UCompassWidget* GetCompassWidget();
		class UBreathingBarLungsWidget* GetBreathingBarLungsWidget();
		class UPrisonerLifeIndicatorsSprite* GetPrisonerLifeIndicatorsSprite();
		ESlateVisibility GetVisibility_1();
		class UCraftingPanelWidget* GetCraftingPanel();
		bool GetMainCanvasVisibility();
		class FText GetTempDropZoneTimeText();
		class FText GetWatermarkText();
		class FText GetDebugInfoText();
		class UUserWidget* GetBCURightPanel();
		class UUserWidget* GetBCULeftPanel();
		class UInventoryPanelThirdIteration* GetInventoryPanel();
		void CompleteInitialization();
		void StartInitialization();
		void CompleteMonitorsInitialization();
		bool ShouldCompleteInitialization();
		void IsEverythingReadyForInitialization(bool* isEverythingReady);
		bool IsOwningPrisonerWithComponentsValid();
		void GetOwningPrisoner(bool* Success, class APrisoner** Prisoner);
		void IsOwningPlayerPawnValid(bool* isPlayerPawnValid);
		void IsOwningPlayerControllerValid(bool* isPlayerControllerValid);
		void CheckIfReadyForInitialization();
		void AttachHUDMonitors();
		void StartMonitorsInitialization();
		void PrisonerValidation();
		bool ShouldSerializeWidgetLayout(class UWidget* Widget);
		class UPanelWidget* GetTopLevelPanelWidget();
		void ShowWarning(EWarningType Type, bool playSounds);
		void RefreshMonitorSizes();
		void SetPrisonerToMonitorOnChildren();
		void ToggleAllMonitorsVisibility();
		void HideLifeIndicators();
		void ShowLifeIndicators();
		void HideMonitors();
		void ShowMonitors();
		void SetupHUDMonitors();
		void SetPrisonerToMonitor(class APrisoner* Prisoner);
		void SetDefaultPrisonerToMonitor(bool* Success);
		void GetDefaultPrisoner(class APrisoner** Prisoner);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void UpdateCircularProgressBarsPercentages();
		void AddChatLine(const class FString& string, EChatType ChatType);
		void ToggleMonitorsVisibility();
		void AddObjective(class ABP_MissionObjective_C* Objective, bool PlaySound, bool ShowNotification);
		void OnPerformanceMonitorMaximized();
		void OnRDAMonitorMaximized();
		void OnBCUBodyMonitorMaximized();
		void AddMessageToScreen(const class FText& Text, bool beep, const struct FLinearColor& Color);
		void AddTeammateName(const class FString& Name);
		void RemoveTeammateName(const class FString& Name);
		void AddWarning(EWarningType warningType, bool playSounds);
		void OnPrisonerSet();
		void Construct();
		void Shake();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ClearTeammateNames();
		void ObjectiveChanged(class ABP_MissionObjective_C* sender);
		void UpdateAttributesHistory();
		void SetMainCanvasVisibility(bool Visible);
		void SwitchTabMode(int32_t Index);
		void ShowNotification(class UBasicNotificationDescription* Description);
		void ClearNotifications();
		void SetTabEnabled(ETabMode Tab, bool Value);
		void ShowKillFeedNotification(const class FText& prefix, const class FText& characterName, const class FText& suffix, bool ping);
		void OnPrisonerChanged();
		void ShowLevelUpNotification(class USkill* Skill, ESkillLevel skillLevel);
		void ShowTrapsDetectedNotification();
		void StartUpdateableNotification(class UUpdateableNotificationDescription* Description);
		void UpdateUpdateableNotification(const class FString& notificationName, const class FString& Message);
		void AddMessage(EMessageType Type, const class FText& Text, float Duration);
		void SetTabModeTabIsAlerted(int32_t Index, bool Value);
		void AddMessageWithColor(EHUDMessageType Type, const class FText& Text, float Duration, const struct FLinearColor& Color);
		void UpdateHUDElementVisibility();
		void ExecuteUbergraph_HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
