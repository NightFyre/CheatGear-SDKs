#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WB_Play.WB_Play_C.OnMessageReceived_A9522D7648A81F17F12033A0337376D5
	 */
	struct UWB_Play_C_OnMessageReceived_A9522D7648A81F17F12033A0337376D5_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.OnMessageReceived_BBA6BDBB4434843E796801800CDD6B5F
	 */
	struct UWB_Play_C_OnMessageReceived_BBA6BDBB4434843E796801800CDD6B5F_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.Finished_9175F4674726A0764F00C1A53D041A9A
	 */
	struct UWB_Play_C_Finished_9175F4674726A0764F00C1A53D041A9A_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.Finished_0A38112344FC1BF0D020FFBC0CBB8BCE
	 */
	struct UWB_Play_C_Finished_0A38112344FC1BF0D020FFBC0CBB8BCE_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.Construct
	 */
	struct UWB_Play_C_Construct_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.OnPopupSWidgetInvitePartyRequest
	 */
	struct UWB_Play_C_OnPopupSWidgetInvitePartyRequest_Params
	{
	public:
		class UPopupDataBase*                                      PopupData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnAccountId;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.OnPlayPartyUserInfoData
	 */
	struct UWB_Play_C_OnPlayPartyUserInfoData_Params
	{
	public:
		struct FPlayPartyUserInfoData                              NewValue;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPlayPartyUserInfoData                              OldValue;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Play.WB_Play_C.OnUpdatePlayPartyUserInfo
	 */
	struct UWB_Play_C_OnUpdatePlayPartyUserInfo_Params
	{
	public:
		struct FPlayPartyUserInfo                                  PlayPartyUserInfo;                                       // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.OnPlayPartyUserInfo
	 */
	struct UWB_Play_C_OnPlayPartyUserInfo_Params
	{
	public:
		struct FPlayPartyUserInfo                                  PlayPartyUserInfo;                                       // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.InvitePartyOnClicked_Left
	 */
	struct UWB_Play_C_InvitePartyOnClicked_Left_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.invitePartyOnClicked_Right
	 */
	struct UWB_Play_C_invitePartyOnClicked_Right_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.StartButtonClicked
	 */
	struct UWB_Play_C_StartButtonClicked_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.ExitPartyButtonClicked
	 */
	struct UWB_Play_C_ExitPartyButtonClicked_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.CharacterSelectMove
	 */
	struct UWB_Play_C_CharacterSelectMove_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.OnPlayPartyReadyStateChanged
	 */
	struct UWB_Play_C_OnPlayPartyReadyStateChanged_Params
	{
	public:
		bool                                                       bMine;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLeader;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReady;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.OnRegionDataSet
	 */
	struct UWB_Play_C_OnRegionDataSet_Params
	{
	public:
		int32_t                                                    RegionIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPartyLeader;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.EventFMsgWidgetSelectRegionButtonNotify
	 */
	struct UWB_Play_C_EventFMsgWidgetSelectRegionButtonNotify_Params
	{
	public:
		struct FMsgWidgetSelectRegionButtonNotify                  Msg;                                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_Play.WB_Play_C.FopdoodlesButtonClicked
	 */
	struct UWB_Play_C_FopdoodlesButtonClicked_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.OnUpdateLobbyCharacterData
	 */
	struct UWB_Play_C_OnUpdateLobbyCharacterData_Params
	{
	public:
		struct FLobbyCharacterInfo                                 LobbyInfo;                                               // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_Play.WB_Play_C.OnPartyLocationSet
	 */
	struct UWB_Play_C_OnPartyLocationSet_Params
	{
	public:
		struct FPlayPartyUserInfo                                  PartyUser;                                               // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		int32_t                                                    MetaLocationIndex;                                       // 0x0078(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsReady;                                                 // 0x007C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.OnPartyCheckAndRegionButtonUpdate
	 */
	struct UWB_Play_C_OnPartyCheckAndRegionButtonUpdate_Params
	{
	public:
		int32_t                                                    RegionIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.DungeonListBtnClick
	 */
	struct UWB_Play_C_DungeonListBtnClick_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.OnClickedDungeonListBtn
	 */
	struct UWB_Play_C_OnClickedDungeonListBtn_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.OnClickedDungeonSelectOK
	 */
	struct UWB_Play_C_OnClickedDungeonSelectOK_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.ClickDungeonSelectOKBtn
	 */
	struct UWB_Play_C_ClickDungeonSelectOKBtn_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.OnUpdateDungeonSelectBtn
	 */
	struct UWB_Play_C_OnUpdateDungeonSelectBtn_Params
	{
	public:
		EGameDifficultyType                                        GameDifficultyType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLeader;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.UpdateDungeonListButton
	 */
	struct UWB_Play_C_UpdateDungeonListButton_Params
	{
	public:
		EGameDifficultyType                                        GameDifficultyType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Leader;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.OnDungeonSelectListPopupOpen
	 */
	struct UWB_Play_C_OnDungeonSelectListPopupOpen_Params
	{
	public:
		EGameDifficultyType                                        GameDifficultyType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_13YG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    EntranceFeeGold;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.OnMatchStart
	 */
	struct UWB_Play_C_OnMatchStart_Params
	{
	public:
		bool                                                       InbCanCancel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3924[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InMatchCancelDelayTimeSec;                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.OnMatchCancel
	 */
	struct UWB_Play_C_OnMatchCancel_Params
	{	};

	/**
	 * Function WB_Play.WB_Play_C.OnChangedMatchingState
	 */
	struct UWB_Play_C_OnChangedMatchingState_Params
	{
	public:
		bool                                                       IsInMatching;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Play.WB_Play_C.ExecuteUbergraph_WB_Play
	 */
	struct UWB_Play_C_ExecuteUbergraph_WB_Play_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_12LX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
