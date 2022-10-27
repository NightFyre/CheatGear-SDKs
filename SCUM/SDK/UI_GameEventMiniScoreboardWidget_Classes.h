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
	 * WidgetBlueprintGeneratedClass UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C
	 * Size -> 0x0058 (FullSize[0x0308] - InheritedSize[0x02B0])
	 */
	class UUI_GameEventMiniScoreboardWidget_C : public UGameEventScoreboardWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          EmptyMsg;                                                // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Header;                                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   Info;                                                    // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          Rows;                                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWidget*>                                     List;                                                    // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class FText>                                        TeamNames;                                               // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FGameEventTeamColours>                       TeamColors;                                              // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateWinCounters();
		void UpdateTeamScores();
		void InitInfo();
		ESlateVisibility EmptyMessage();
		void OnUpdate();
		void InitializeScoreboard();
		void ExecuteUbergraph_UI_GameEventMiniScoreboardWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
