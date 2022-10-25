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
	 * WidgetBlueprintGeneratedClass BP_Widget_Scoreboard.BP_Widget_Scoreboard_C
	 * Size -> 0x0118 (FullSize[0x03E0] - InheritedSize[0x02C8])
	 */
	class UBP_Widget_Scoreboard_C : public UWidget_Scoreboard
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Background;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_TacticalMap_Native_C*                     BP_Widget_TacticalMap_Native;                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnBack;                                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnMute;                                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               BtnSelect;                                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             FooterBorder;                                            // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     MuteAllTeamLeftBtn;                                      // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_INSButton_C*                                     MuteAllTeamRightBtn;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_NavigationKeyHint_C*                             NavigateHint;                                            // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_3;                                              // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_116;                                            // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_118;                                            // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_214;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_ScrollingTextWidget_C*                           ServerNameScollText;                                     // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ServerPlayerCount;                                       // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextModeName;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              Spectators[0x10];                                        // 0x0350(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class FText                                                SpectatorListText;                                       // 0x0360(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bHasSpectators;                                          // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZPXV[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LevelNameText;                                           // 0x0380(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                GameModeNameText;                                        // 0x0398(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ServerName;                                              // 0x03B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        PeriodicTickHandle;                                      // 0x03C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasFocusPanelLeft;                                      // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BOOK[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_Widget_Scoreboard_Column_C*                      ActiveTeam;                                              // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void UpdateGamepadSelectButtonVisibility(bool bIsVisible);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		class FText GetFormatText(bool bFirstElement);
		class UWidget* OnCustomNavigation(class UWidget* Widget, const class FName& Key);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void UpdateGameModeText();
		void HighlightPlayerStatus(class AINSPlayerState* Player, bool Status);
		void UpdateScoreboardConfig(const struct FScoreboardConfig& Config);
		void UpdateGameState(class AINSGameState* GameState);
		ESlateVisibility GetRightTeamBottomBorderVisibility();
		ESlateVisibility GetLeftTeamBottomBorderVisibility();
		class FText GetOrderText();
		ESlateVisibility GetSpectatorLabelVisibility();
		void BndEvt__Button_377_K2Node_ComponentBoundEvent_67_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature();
		void BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
		void OnScoreboardShown();
		void DoUpdateGameState(class AINSGameState* GameState);
		void DoUpdateGameModeText();
		void DoBindTacticalMapPawnHowerStatusChanged();
		void Construct();
		void OnScoreboardHidden();
		void BndEvt__MuteAllTeamLeftBtn_K2Node_ComponentBoundEvent_2_OnHover__DelegateSignature();
		void BndEvt__MuteAllTeamRightBtn_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature();
		void ExecuteUbergraph_BP_Widget_Scoreboard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
