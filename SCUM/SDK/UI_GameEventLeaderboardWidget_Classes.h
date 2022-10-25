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
	 * WidgetBlueprintGeneratedClass UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C
	 * Size -> 0x0034 (FullSize[0x02DC] - InheritedSize[0x02A8])
	 */
	class UUI_GameEventLeaderboardWidget_C : public UGameEventLeaderboardWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCircularThrobber*                                   CircularThrobber_Ranking;                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCircularThrobber*                                   CircularThrobber_TopPlayers;                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        PlayerRanking;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        TopPlayers;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_GameEventLeaderboardRow_C*                       UI_GameEventLeaderboardRow_C_1;                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    MaxStats;                                                // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTopShownCount(int32_t Count);
		void AssignRowColor(class UUI_GameEventLeaderboardRow_C* row, int32_t Rank);
		void UpdateTopList();
		void RefreshData(EEventsRankingStatsOrderByField orderByField, ESortOrder sortOrder);
		void UpdateRankingList(int32_t Rank);
		void UpdateList(TArray<struct FEventsRankingStatsItem>* EventsRankingStatsItems, class UVerticalBox* TargetWidget);
		void Construct();
		void Destruct();
		void UpdateTopPlayers();
		void UpdatePlayerRanking();
		void ExecuteUbergraph_UI_GameEventLeaderboardWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
