#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_LeaderBoard.WB_LeaderBoard_C
	 * Size -> 0x0070 (FullSize[0x03C8] - InheritedSize[0x0358])
	 */
	class UWB_LeaderBoard_C : public ULeaderBoardWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWB_CommonBtn_Arrow_C*                               Btn_Arrow_L;                                             // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_Arrow_C*                               Btn_Arrow_R;                                             // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CurrentPage;                                             // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     LeaderBoardPageSwitcher;                                 // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MaxPage;                                                 // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LeaderBoardCategoryInfoBtn_C*                    WB_Adventure_Btn;                                        // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LeaderBoardCategoryInfoBtn_C*                    WB_BossKill_Btn;                                         // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LeaderBoardCategoryInfoBtn_C*                    WB_BossKill_Btn_2;                                       // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LeaderBoardCategoryInfoBtn_C*                    WB_EscapeArtist_Btn;                                     // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabWingLeft_S_C*                                 WB_TabWingLeft_S;                                        // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_TabWingRight_S_C*                                WB_TabWingRight_S;                                       // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LeaderBoardCategoryInfoBtn_C*                    WB_TreasureCollector_Btn;                                // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_LeaderBoardCategoryInfoBtn_C*                    WB_WantedMurderer_Btn;                                   // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnMessageReceived_8CF243AE4B7269E97EC98CB78CA9EB80(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_2B8D5F9E4C152B406C5B50A6E08AF369(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_FF5209314845EF68D3EBD19D2EB34241(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_5846ED3946E365E0BE4192A1A25F16AC(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_8313D31E490DA706B72F6FBB61E26295(class UMsgBaseNode* ProxyObject);
		void Construct();
		void ClickedAdventureBtn();
		void ClickedEscapeArtistBtn();
		void ClickedTreasureCollectorBtn();
		void ClickedWantedMurdererBtn();
		void OnClickedAdventureBtn();
		void OnClickedEscapeArtistBtn();
		void OnClickedTreasureCollectorBtn();
		void OnClickedWantedMurdererBtn();
		void ClickedBossKillBtn();
		void OnClickedBosKillBtn();
		void ClickedArrowLeftBtn();
		void OnClickedArrowLeftBtn();
		void ClickedArrowRightBtn();
		void OnClickedArrowRightBtn();
		void ExecuteUbergraph_WB_LeaderBoard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
