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
	 * WidgetBlueprintGeneratedClass UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C
	 * Size -> 0x0070 (FullSize[0x0320] - InheritedSize[0x02B0])
	 */
	class UUI_GameEventScoreboardWidget_C : public UGameEventScoreboardWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             RoundInfo;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   TeamGrid;                                                // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_GameEventParticipantInfoCardWidget_C*            UI_GameEventParitcipantInfoCardWidget;                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWidget*>                                     List;                                                    // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UUI_GameEventTeamHeaderWidget_C*                     TeamHeaderWidgetClass_1;                                 // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UUI_GameEventTeamInfoWidget_C*>               TeamWidgets;                                             // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class FText>                                        TeamNames;                                               // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FGameEventTeamColours>                       TeamColors;                                              // 0x0310(0x0010) Edit, BlueprintVisible

	public:
		ESlateVisibility GetTogglePromptVisibility();
		void ArrangeTeams();
		void UpdateWinCounters(class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget, int32_t TeamIndex);
		void UpdateTeamScore(class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget, int32_t TeamIndex);
		void InitTeamInfoWidgets();
		void UpdateInfoCard();
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void Construct();
		void OnUpdate();
		void InitializeScoreboard();
		void ExecuteUbergraph_UI_GameEventScoreboardWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
