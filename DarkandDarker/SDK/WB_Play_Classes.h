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
	 * WidgetBlueprintGeneratedClass WB_Play.WB_Play_C
	 * Size -> 0x00D0 (FullSize[0x0488] - InheritedSize[0x03B8])
	 */
	class UWB_Play_C : public UPlayWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWB_CommonBtn_S_C*                                   Btn_CharacterSelect;                                     // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_S_C*                                   Btn_Fopdoodles;                                          // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_S_C*                                   Btn_Refresh;                                             // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_S_C*                                   Btn_Userlist;                                            // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_BtnDungeonList_C*                                DungeonListButton;                                       // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_S_C*                                   ExitPartyButton;                                         // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Page_Play;                                               // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_CommonBtn_XL_C*                                  StartButton;                                             // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ServerList_NoLeader;                           // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBox_ExitParty;                                          // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_Btn_MatchmakinCancel_C*                          WB_Btn_MatchmakingCancel;                                // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_DungeonSelect_C*                                 WB_DungeonSelect;                                        // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_InvitePartyBtn_C*                                WB_InvitePartyBtnLeft;                                   // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_InvitePartyBtn_C*                                WB_InvitePartyBtnRight;                                  // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_PartyChat_C*                                     WB_PartyChat;                                            // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_PlayServerSelect_C*                              WB_PlayServerSelect;                                     // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_PlayUserInfo_C*                                  WB_PlayUserInfo_Left;                                    // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_PlayUserInfo_C*                                  WB_PlayUserInfo_Mine;                                    // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_PlayUserInfo_C*                                  WB_PlayUserInfo_Right;                                   // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcherRegion;                                    // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              ReconnectMessage;                                        // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                SelectedRegionName;                                      // 0x0470(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnMessageReceived_A9522D7648A81F17F12033A0337376D5(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_BBA6BDBB4434843E796801800CDD6B5F(class UMsgBaseNode* ProxyObject);
		void Finished_9175F4674726A0764F00C1A53D041A9A();
		void Finished_0A38112344FC1BF0D020FFBC0CBB8BCE();
		void Construct();
		void OnPopupSWidgetInvitePartyRequest(class UPopupDataBase* PopupData, const class FString& ReturnAccountId);
		void OnPlayPartyUserInfoData(const struct FPlayPartyUserInfoData& NewValue, const struct FPlayPartyUserInfoData& OldValue);
		void OnUpdatePlayPartyUserInfo(const struct FPlayPartyUserInfo& PlayPartyUserInfo);
		void OnPlayPartyUserInfo(const struct FPlayPartyUserInfo& PlayPartyUserInfo);
		void InvitePartyOnClicked_Left();
		void invitePartyOnClicked_Right();
		void StartButtonClicked();
		void ExitPartyButtonClicked();
		void CharacterSelectMove();
		void OnPlayPartyReadyStateChanged(bool bMine, bool bLeader, bool bReady);
		void OnRegionDataSet(int32_t RegionIndex, bool IsPartyLeader);
		void EventFMsgWidgetSelectRegionButtonNotify(const struct FMsgWidgetSelectRegionButtonNotify& Msg);
		void FopdoodlesButtonClicked();
		void OnUpdateLobbyCharacterData(const struct FLobbyCharacterInfo& LobbyInfo);
		void OnPartyLocationSet(const struct FPlayPartyUserInfo& PartyUser, int32_t MetaLocationIndex, bool IsReady);
		void OnPartyCheckAndRegionButtonUpdate(int32_t RegionIndex);
		void DungeonListBtnClick();
		void OnClickedDungeonListBtn();
		void OnClickedDungeonSelectOK();
		void ClickDungeonSelectOKBtn();
		void OnUpdateDungeonSelectBtn(EGameDifficultyType GameDifficultyType, bool bLeader);
		void UpdateDungeonListButton(EGameDifficultyType GameDifficultyType, bool Leader);
		void OnDungeonSelectListPopupOpen(EGameDifficultyType GameDifficultyType, int32_t EntranceFeeGold);
		void OnMatchStart(bool InbCanCancel, float InMatchCancelDelayTimeSec);
		void OnMatchCancel();
		void OnChangedMatchingState(bool IsInMatching);
		void ExecuteUbergraph_WB_Play(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
