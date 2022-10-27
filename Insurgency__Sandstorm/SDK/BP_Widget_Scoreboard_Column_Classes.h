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
	 * WidgetBlueprintGeneratedClass BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C
	 * Size -> 0x0040 (FullSize[0x03A8] - InheritedSize[0x0368])
	 */
	class UBP_Widget_Scoreboard_Column_C : public UWidget_Scoreboard_Column
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FactionBannerColorFadeIn;                                // 0x0370(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBP_Widget_Scoreboard_PlayerRow_C*                   BP_Widget_Scoreboard_PlayerRow_C_1;                      // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FactionBackground;                                       // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_1;                                               // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    RoundsWon;                                               // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Score;                                                   // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_Widget_TacticalMap_Native_C*                     TacticalMap;                                             // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_Widget_Scoreboard_PlayerRow_C*                   LastFocusedRow;                                          // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetRowToFocus(class UBP_Widget_Scoreboard_PlayerRow_C** RowToFocus);
		void OnScoreboardHidden();
		void OnPlayerMenuDialogClosed();
		void GetNextRowToNavigate(bool Down, class UBP_Widget_Scoreboard_PlayerRow_C** RowToFocus);
		class UWidget* DoCreatePlayerRowWidget();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void CheckRowAtIndex(class AINSPlayerState* PlayerState, int32_t Index, bool* bMatches, class UWidget_Scoreboard_PlayerRow** RowWidget);
		struct FSlateBrush GetFactionBannerBrush_PreColored();
		class FText GetWinTextText();
		class FText GetFactionNameText();
		class FText GetTeamScoreText();
		void Destruct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void DoSetTacticalMapToPlayerWidget(class UWidget* InPlayerWidget);
		void OpenMenuForPlayer(class AINSPlayerState* InPlayerState);
		void BndEvt__JoinFaction_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void UpdateSelectButtonOnConsole(bool bIsRowSelectable);
		void ExecuteUbergraph_BP_Widget_Scoreboard_Column(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
