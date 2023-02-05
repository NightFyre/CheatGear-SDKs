/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnMessageReceived_A9522D7648A81F17F12033A0337376D5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnMessageReceived_A9522D7648A81F17F12033A0337376D5(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnMessageReceived_A9522D7648A81F17F12033A0337376D5");
		
		UWB_Play_C_OnMessageReceived_A9522D7648A81F17F12033A0337376D5_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnMessageReceived_BBA6BDBB4434843E796801800CDD6B5F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnMessageReceived_BBA6BDBB4434843E796801800CDD6B5F(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnMessageReceived_BBA6BDBB4434843E796801800CDD6B5F");
		
		UWB_Play_C_OnMessageReceived_BBA6BDBB4434843E796801800CDD6B5F_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.Finished_9175F4674726A0764F00C1A53D041A9A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::Finished_9175F4674726A0764F00C1A53D041A9A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.Finished_9175F4674726A0764F00C1A53D041A9A");
		
		UWB_Play_C_Finished_9175F4674726A0764F00C1A53D041A9A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.Finished_0A38112344FC1BF0D020FFBC0CBB8BCE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::Finished_0A38112344FC1BF0D020FFBC0CBB8BCE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.Finished_0A38112344FC1BF0D020FFBC0CBB8BCE");
		
		UWB_Play_C_Finished_0A38112344FC1BF0D020FFBC0CBB8BCE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_Play_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.Construct");
		
		UWB_Play_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnPopupSWidgetInvitePartyRequest
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UPopupDataBase*                              PopupData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ReturnAccountId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnPopupSWidgetInvitePartyRequest(class UPopupDataBase* PopupData, const class FString& ReturnAccountId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnPopupSWidgetInvitePartyRequest");
		
		UWB_Play_C_OnPopupSWidgetInvitePartyRequest_Params params {};
		params.PopupData = PopupData;
		params.ReturnAccountId = ReturnAccountId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnPlayPartyUserInfoData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayPartyUserInfoData                      NewValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPlayPartyUserInfoData                      OldValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Play_C::OnPlayPartyUserInfoData(const struct FPlayPartyUserInfoData& NewValue, const struct FPlayPartyUserInfoData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnPlayPartyUserInfoData");
		
		UWB_Play_C_OnPlayPartyUserInfoData_Params params {};
		params.NewValue = NewValue;
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnUpdatePlayPartyUserInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayPartyUserInfo                          PlayPartyUserInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnUpdatePlayPartyUserInfo(const struct FPlayPartyUserInfo& PlayPartyUserInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnUpdatePlayPartyUserInfo");
		
		UWB_Play_C_OnUpdatePlayPartyUserInfo_Params params {};
		params.PlayPartyUserInfo = PlayPartyUserInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnPlayPartyUserInfo
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayPartyUserInfo                          PlayPartyUserInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnPlayPartyUserInfo(const struct FPlayPartyUserInfo& PlayPartyUserInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnPlayPartyUserInfo");
		
		UWB_Play_C_OnPlayPartyUserInfo_Params params {};
		params.PlayPartyUserInfo = PlayPartyUserInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.InvitePartyOnClicked_Left
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::InvitePartyOnClicked_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.InvitePartyOnClicked_Left");
		
		UWB_Play_C_InvitePartyOnClicked_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.invitePartyOnClicked_Right
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::invitePartyOnClicked_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.invitePartyOnClicked_Right");
		
		UWB_Play_C_invitePartyOnClicked_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.StartButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::StartButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.StartButtonClicked");
		
		UWB_Play_C_StartButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.ExitPartyButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::ExitPartyButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.ExitPartyButtonClicked");
		
		UWB_Play_C_ExitPartyButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.CharacterSelectMove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::CharacterSelectMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.CharacterSelectMove");
		
		UWB_Play_C_CharacterSelectMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnPlayPartyReadyStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bMine                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLeader                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReady                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnPlayPartyReadyStateChanged(bool bMine, bool bLeader, bool bReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnPlayPartyReadyStateChanged");
		
		UWB_Play_C_OnPlayPartyReadyStateChanged_Params params {};
		params.bMine = bMine;
		params.bLeader = bLeader;
		params.bReady = bReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnRegionDataSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RegionIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPartyLeader                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnRegionDataSet(int32_t RegionIndex, bool IsPartyLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnRegionDataSet");
		
		UWB_Play_C_OnRegionDataSet_Params params {};
		params.RegionIndex = RegionIndex;
		params.IsPartyLeader = IsPartyLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.EventFMsgWidgetSelectRegionButtonNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgWidgetSelectRegionButtonNotify          Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_Play_C::EventFMsgWidgetSelectRegionButtonNotify(const struct FMsgWidgetSelectRegionButtonNotify& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.EventFMsgWidgetSelectRegionButtonNotify");
		
		UWB_Play_C_EventFMsgWidgetSelectRegionButtonNotify_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.FopdoodlesButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::FopdoodlesButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.FopdoodlesButtonClicked");
		
		UWB_Play_C_FopdoodlesButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnUpdateLobbyCharacterData
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FLobbyCharacterInfo                         LobbyInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_Play_C::OnUpdateLobbyCharacterData(const struct FLobbyCharacterInfo& LobbyInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnUpdateLobbyCharacterData");
		
		UWB_Play_C_OnUpdateLobbyCharacterData_Params params {};
		params.LobbyInfo = LobbyInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnPartyLocationSet
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayPartyUserInfo                          PartyUser                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                            MetaLocationIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsReady                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnPartyLocationSet(const struct FPlayPartyUserInfo& PartyUser, int32_t MetaLocationIndex, bool IsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnPartyLocationSet");
		
		UWB_Play_C_OnPartyLocationSet_Params params {};
		params.PartyUser = PartyUser;
		params.MetaLocationIndex = MetaLocationIndex;
		params.IsReady = IsReady;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnPartyCheckAndRegionButtonUpdate
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RegionIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnPartyCheckAndRegionButtonUpdate(int32_t RegionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnPartyCheckAndRegionButtonUpdate");
		
		UWB_Play_C_OnPartyCheckAndRegionButtonUpdate_Params params {};
		params.RegionIndex = RegionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.DungeonListBtnClick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::DungeonListBtnClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.DungeonListBtnClick");
		
		UWB_Play_C_DungeonListBtnClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnClickedDungeonListBtn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::OnClickedDungeonListBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnClickedDungeonListBtn");
		
		UWB_Play_C_OnClickedDungeonListBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnClickedDungeonSelectOK
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::OnClickedDungeonSelectOK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnClickedDungeonSelectOK");
		
		UWB_Play_C_OnClickedDungeonSelectOK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.ClickDungeonSelectOKBtn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_Play_C::ClickDungeonSelectOKBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.ClickDungeonSelectOKBtn");
		
		UWB_Play_C_ClickDungeonSelectOKBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnUpdateDungeonSelectBtn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EGameDifficultyType                                GameDifficultyType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLeader                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnUpdateDungeonSelectBtn(EGameDifficultyType GameDifficultyType, bool bLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnUpdateDungeonSelectBtn");
		
		UWB_Play_C_OnUpdateDungeonSelectBtn_Params params {};
		params.GameDifficultyType = GameDifficultyType;
		params.bLeader = bLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.UpdateDungeonListButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameDifficultyType                                GameDifficultyType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Leader                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::UpdateDungeonListButton(EGameDifficultyType GameDifficultyType, bool Leader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.UpdateDungeonListButton");
		
		UWB_Play_C_UpdateDungeonListButton_Params params {};
		params.GameDifficultyType = GameDifficultyType;
		params.Leader = Leader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnDungeonSelectListPopupOpen
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EGameDifficultyType                                GameDifficultyType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            EntranceFeeGold                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnDungeonSelectListPopupOpen(EGameDifficultyType GameDifficultyType, int32_t EntranceFeeGold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnDungeonSelectListPopupOpen");
		
		UWB_Play_C_OnDungeonSelectListPopupOpen_Params params {};
		params.GameDifficultyType = GameDifficultyType;
		params.EntranceFeeGold = EntranceFeeGold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnMatchStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbCanCancel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InMatchCancelDelayTimeSec                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnMatchStart(bool InbCanCancel, float InMatchCancelDelayTimeSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnMatchStart");
		
		UWB_Play_C_OnMatchStart_Params params {};
		params.InbCanCancel = InbCanCancel;
		params.InMatchCancelDelayTimeSec = InMatchCancelDelayTimeSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnMatchCancel
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWB_Play_C::OnMatchCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnMatchCancel");
		
		UWB_Play_C_OnMatchCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.OnChangedMatchingState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInMatching                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::OnChangedMatchingState(bool IsInMatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.OnChangedMatchingState");
		
		UWB_Play_C_OnChangedMatchingState_Params params {};
		params.IsInMatching = IsInMatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_Play.WB_Play_C.ExecuteUbergraph_WB_Play
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Play_C::ExecuteUbergraph_WB_Play(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Play.WB_Play_C.ExecuteUbergraph_WB_Play");
		
		UWB_Play_C_ExecuteUbergraph_WB_Play_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_Play_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Play_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Play.WB_Play_C");
		return ptr;
	}

}


