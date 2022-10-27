/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBBaseGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBBaseGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBBaseGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6A50
	 * 		Name   -> Function Tinkerbox.TBBasePlayerController.TeamTalk
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ATBBasePlayerController::TeamTalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBBasePlayerController.TeamTalk");
		
		ATBBasePlayerController_TeamTalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6A30
	 * 		Name   -> Function Tinkerbox.TBBasePlayerController.Talk
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ATBBasePlayerController::Talk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBBasePlayerController.Talk");
		
		ATBBasePlayerController_Talk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3870
	 * 		Name   -> Function Tinkerbox.TBBasePlayerController.OnShowScoreboardReleased
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBBasePlayerController::OnShowScoreboardReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBBasePlayerController.OnShowScoreboardReleased");
		
		ATBBasePlayerController_OnShowScoreboardReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3850
	 * 		Name   -> Function Tinkerbox.TBBasePlayerController.OnShowScoreboardPressed
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBBasePlayerController::OnShowScoreboardPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBBasePlayerController.OnShowScoreboardPressed");
		
		ATBBasePlayerController_OnShowScoreboardPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3830
	 * 		Name   -> Function Tinkerbox.TBBasePlayerController.OnPauseMenu
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBBasePlayerController::OnPauseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBBasePlayerController.OnPauseMenu");
		
		ATBBasePlayerController_OnPauseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBBasePlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBBasePlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBBasePlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6A90
	 * 		Name   -> Function Tinkerbox.TBGameInstance.UnloadScoreboardMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTBGameInstance::UnloadScoreboardMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.UnloadScoreboardMenu");
		
		UTBGameInstance_UnloadScoreboardMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6A70
	 * 		Name   -> Function Tinkerbox.TBGameInstance.UnloadMainMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTBGameInstance::UnloadMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.UnloadMainMenu");
		
		UTBGameInstance_UnloadMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B37D0
	 * 		Name   -> Function Tinkerbox.TBGameInstance.LoadScoreboardMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTBGameInstance::LoadScoreboardMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.LoadScoreboardMenu");
		
		UTBGameInstance_LoadScoreboardMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3740
	 * 		Name   -> Function Tinkerbox.TBGameInstance.LoadMainMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bExclusive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameInstance::LoadMainMenu(bool bExclusive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.LoadMainMenu");
		
		UTBGameInstance_LoadMainMenu_Params params {};
		params.bExclusive = bExclusive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B32F0
	 * 		Name   -> Function Tinkerbox.TBGameInstance.GoToMainMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTBGameInstance::GoToMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.GoToMainMenu");
		
		UTBGameInstance_GoToMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1E30
	 * 		Name   -> Function Tinkerbox.TBGameInstance.GetGameBuildInfo
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UTBGameInstance::GetGameBuildInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.GetGameBuildInfo");
		
		UTBGameInstance_GetGameBuildInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1AA0
	 * 		Name   -> Function Tinkerbox.TBGameInstance.GetCurrentSessionHostAddressStr
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      OutHostAddrStr                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPreferSteamP2PAddr                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAppendPort                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTBGameInstance::GetCurrentSessionHostAddressStr(class FString* OutHostAddrStr, bool bPreferSteamP2PAddr, bool bAppendPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameInstance.GetCurrentSessionHostAddressStr");
		
		UTBGameInstance_GetCurrentSessionHostAddressStr_Params params {};
		params.bPreferSteamP2PAddr = bPreferSteamP2PAddr;
		params.bAppendPort = bAppendPort;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHostAddrStr != nullptr)
			*OutHostAddrStr = params.OutHostAddrStr;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBGameRulesetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBGameRulesetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBGameRulesetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBBasePlayerCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBBasePlayerCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBBasePlayerCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function Tinkerbox.TBBaseScoreboardMenu.ReceiveScoreboardListRowAdded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UTBScoreboardListingRow*                     NewListEntry                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBBaseScoreboardMenu::ReceiveScoreboardListRowAdded(class UTBScoreboardListingRow* NewListEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBBaseScoreboardMenu.ReceiveScoreboardListRowAdded");
		
		UTBBaseScoreboardMenu_ReceiveScoreboardListRowAdded_Params params {};
		params.NewListEntry = NewListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBBaseScoreboardMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBBaseScoreboardMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBBaseScoreboardMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BBBA0
	 * 		Name   -> Function Tinkerbox.TBScoreboardListingRow.SetVoiceStateIcon
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture2D*                                  NewIcon                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBScoreboardListingRow::SetVoiceStateIcon(class UTexture2D* NewIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBScoreboardListingRow.SetVoiceStateIcon");
		
		UTBScoreboardListingRow_SetVoiceStateIcon_Params params {};
		params.NewIcon = NewIcon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE150
	 * 		Name   -> Function Tinkerbox.TBScoreboardListingRow.RefreshListing
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UTBScoreboardListingRow::RefreshListing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBScoreboardListingRow.RefreshListing");
		
		UTBScoreboardListingRow_RefreshListing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function Tinkerbox.TBScoreboardListingRow.ReceivePlayerVoiceStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EPlayerVoiceState                                  NewVoiceState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBScoreboardListingRow::ReceivePlayerVoiceStateChanged(EPlayerVoiceState NewVoiceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBScoreboardListingRow.ReceivePlayerVoiceStateChanged");
		
		UTBScoreboardListingRow_ReceivePlayerVoiceStateChanged_Params params {};
		params.NewVoiceState = NewVoiceState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAD10
	 * 		Name   -> Function Tinkerbox.TBScoreboardListingRow.OnMutePlayer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTBScoreboardListingRow::OnMutePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBScoreboardListingRow.OnMutePlayer");
		
		UTBScoreboardListingRow_OnMutePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA870
	 * 		Name   -> Function Tinkerbox.TBScoreboardListingRow.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTBBaseScoreboardMenu*                       InParentMenu                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADFBasePlayerState*                          InPlayerState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInRefreshListingOnTick                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBScoreboardListingRow::Init(class UTBBaseScoreboardMenu* InParentMenu, class ADFBasePlayerState* InPlayerState, bool bInRefreshListingOnTick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBScoreboardListingRow.Init");
		
		UTBScoreboardListingRow_Init_Params params {};
		params.InParentMenu = InParentMenu;
		params.InPlayerState = InPlayerState;
		params.bInRefreshListingOnTick = bInRefreshListingOnTick;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA830
	 * 		Name   -> Function Tinkerbox.TBScoreboardListingRow.HasInitialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBScoreboardListingRow::HasInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBScoreboardListingRow.HasInitialized");
		
		UTBScoreboardListingRow_HasInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA520
	 * 		Name   -> Function Tinkerbox.TBScoreboardListingRow.GetIconForVoiceState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EPlayerVoiceState                                  VoiceState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBScoreboardListingRow::GetIconForVoiceState(EPlayerVoiceState VoiceState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBScoreboardListingRow.GetIconForVoiceState");
		
		UTBScoreboardListingRow_GetIconForVoiceState_Params params {};
		params.VoiceState = VoiceState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA440
	 * 		Name   -> Function Tinkerbox.TBScoreboardListingRow.GetCurrentPing
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UTBScoreboardListingRow::GetCurrentPing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBScoreboardListingRow.GetCurrentPing");
		
		UTBScoreboardListingRow_GetCurrentPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBScoreboardListingRow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBScoreboardListingRow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBScoreboardListingRow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBWorldSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBWorldSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBWorldSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2B70
	 * 		Name   -> Function Tinkerbox.TBBlueprintFunctions.GetServerPort
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FServerInfo                                 InServerInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UTBBlueprintFunctions::STATIC_GetServerPort(const struct FServerInfo& InServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBBlueprintFunctions.GetServerPort");
		
		UTBBlueprintFunctions_GetServerPort_Params params {};
		params.InServerInfo = InServerInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2A20
	 * 		Name   -> Function Tinkerbox.TBBlueprintFunctions.GetServerIpPort
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FServerInfo                                 InServerInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UTBBlueprintFunctions::STATIC_GetServerIpPort(const struct FServerInfo& InServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBBlueprintFunctions.GetServerIpPort");
		
		UTBBlueprintFunctions_GetServerIpPort_Params params {};
		params.InServerInfo = InServerInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B28D0
	 * 		Name   -> Function Tinkerbox.TBBlueprintFunctions.GetServerIp
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FServerInfo                                 InServerInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UTBBlueprintFunctions::STATIC_GetServerIp(const struct FServerInfo& InServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBBlueprintFunctions.GetServerIp");
		
		UTBBlueprintFunctions_GetServerIp_Params params {};
		params.InServerInfo = InServerInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1DB0
	 * 		Name   -> Function Tinkerbox.TBBlueprintFunctions.GetGameBuildInfo
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 */
	class FString UTBBlueprintFunctions::STATIC_GetGameBuildInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBBlueprintFunctions.GetGameBuildInfo");
		
		UTBBlueprintFunctions_GetGameBuildInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1730
	 * 		Name   -> Function Tinkerbox.TBBlueprintFunctions.DetermineObjectType
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESpawnedObject UTBBlueprintFunctions::STATIC_DetermineObjectType(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBBlueprintFunctions.DetermineObjectType");
		
		UTBBlueprintFunctions_DetermineObjectType_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBBlueprintFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBBlueprintFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBBlueprintFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBFreeCamCharacterMovement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBFreeCamCharacterMovement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBFreeCamCharacterMovement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBFreeCamPawnMovement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBFreeCamPawnMovement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBFreeCamPawnMovement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3810
	 * 		Name   -> Function Tinkerbox.TBFreeCamPlayerCharacter.OnCameraPanReleased
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBFreeCamPlayerCharacter::OnCameraPanReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBFreeCamPlayerCharacter.OnCameraPanReleased");
		
		ATBFreeCamPlayerCharacter_OnCameraPanReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B37F0
	 * 		Name   -> Function Tinkerbox.TBFreeCamPlayerCharacter.OnCameraPanPressed
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBFreeCamPlayerCharacter::OnCameraPanPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBFreeCamPlayerCharacter.OnCameraPanPressed");
		
		ATBFreeCamPlayerCharacter_OnCameraPanPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBFreeCamPlayerCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBFreeCamPlayerCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBFreeCamPlayerCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBGameEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBGameEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBGameEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBGameSandbox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBGameSandbox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBGameSandbox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBGameUserDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBGameUserDeveloperSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBGameUserDeveloperSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6920
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot9KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot9KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot9KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot9KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6810
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot8KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot8KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot8KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot8KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B6700
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot7KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot7KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot7KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot7KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B65F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot6KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot6KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot6KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot6KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B64E0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot5KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot5KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot5KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot5KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B63D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot4KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot4KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot4KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot4KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B62C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot3KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot3KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot3KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot3KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B61B0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot2KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot2KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot2KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot2KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B60A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot1KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot1KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot1KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot1KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5F90
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetWeaponSlot0KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetWeaponSlot0KeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetWeaponSlot0KeyBinding");
		
		UTBGameUserSettings_SetWeaponSlot0KeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5F10
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetVoiceVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormVoiceVolume                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetVoiceVolumeLevelNormalized(float NormVoiceVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetVoiceVolumeLevelNormalized");
		
		UTBGameUserSettings_SetVoiceVolumeLevelNormalized_Params params {};
		params.NormVoiceVolume = NormVoiceVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5E90
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetVoiceVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              VoiceVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetVoiceVolumeLevel(float VoiceVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetVoiceVolumeLevel");
		
		UTBGameUserSettings_SetVoiceVolumeLevel_Params params {};
		params.VoiceVolume = VoiceVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5D80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetUseKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetUseKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetUseKeyBinding");
		
		UTBGameUserSettings_SetUseKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5C70
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSprintKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSprintKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSprintKeyBinding");
		
		UTBGameUserSettings_SetSprintKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5BF0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSoundEffectsVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormSFXVolume                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSoundEffectsVolumeLevelNormalized(float NormSFXVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSoundEffectsVolumeLevelNormalized");
		
		UTBGameUserSettings_SetSoundEffectsVolumeLevelNormalized_Params params {};
		params.NormSFXVolume = NormSFXVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5B70
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSoundEffectsVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SFXVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSoundEffectsVolumeLevel(float SFXVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSoundEffectsVolumeLevel");
		
		UTBGameUserSettings_SetSoundEffectsVolumeLevel_Params params {};
		params.SFXVolume = SFXVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5AE0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSmoothMouseEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSmoothMouseEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSmoothMouseEnabled");
		
		UTBGameUserSettings_SetSmoothMouseEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5A50
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSmoothFrameRateEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSmoothFrameRateEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSmoothFrameRateEnabled");
		
		UTBGameUserSettings_SetSmoothFrameRateEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5940
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetShowScoreboardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetShowScoreboardKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetShowScoreboardKeyBinding");
		
		UTBGameUserSettings_SetShowScoreboardKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5830
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSayTeamKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSayTeamKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSayTeamKeyBinding");
		
		UTBGameUserSettings_SetSayTeamKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5720
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSaySquadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSaySquadKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSaySquadKeyBinding");
		
		UTBGameUserSettings_SetSaySquadKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5610
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetSayAllKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetSayAllKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetSayAllKeyBinding");
		
		UTBGameUserSettings_SetSayAllKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B5500
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetReloadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetReloadKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetReloadKeyBinding");
		
		UTBGameUserSettings_SetReloadKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B53F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetRadialMenuKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetRadialMenuKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetRadialMenuKeyBinding");
		
		UTBGameUserSettings_SetRadialMenuKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B52E0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPushToTalkSquadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPushToTalkSquadKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPushToTalkSquadKeyBinding");
		
		UTBGameUserSettings_SetPushToTalkSquadKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B51D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPushToTalkLocalKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPushToTalkLocalKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPushToTalkLocalKeyBinding");
		
		UTBGameUserSettings_SetPushToTalkLocalKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B50C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPushToTalkCommandKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPushToTalkCommandKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPushToTalkCommandKeyBinding");
		
		UTBGameUserSettings_SetPushToTalkCommandKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4FB0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetProneKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetProneKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetProneKeyBinding");
		
		UTBGameUserSettings_SetProneKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4EA0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPreviousItemKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPreviousItemKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPreviousItemKeyBinding");
		
		UTBGameUserSettings_SetPreviousItemKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4E10
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPlayerIsChangingKeyBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPlayerIsChangingKeyBindings(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPlayerIsChangingKeyBindings");
		
		UTBGameUserSettings_SetPlayerIsChangingKeyBindings_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4D90
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetPlayerCharacterMeshRowName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        NewRowName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetPlayerCharacterMeshRowName(const class FName& NewRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetPlayerCharacterMeshRowName");
		
		UTBGameUserSettings_SetPlayerCharacterMeshRowName_Params params {};
		params.NewRowName = NewRowName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4C80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetNextItemKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetNextItemKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetNextItemKeyBinding");
		
		UTBGameUserSettings_SetNextItemKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4C00
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMusicVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormMusicVolume                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMusicVolumeLevelNormalized(float NormMusicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMusicVolumeLevelNormalized");
		
		UTBGameUserSettings_SetMusicVolumeLevelNormalized_Params params {};
		params.NormMusicVolume = NormMusicVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4B80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMusicVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MusicVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMusicVolumeLevel(float MusicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMusicVolumeLevel");
		
		UTBGameUserSettings_SetMusicVolumeLevel_Params params {};
		params.MusicVolume = MusicVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4A70
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMoveRightKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMoveRightKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMoveRightKeyBinding");
		
		UTBGameUserSettings_SetMoveRightKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4960
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMoveLeftKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMoveLeftKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMoveLeftKeyBinding");
		
		UTBGameUserSettings_SetMoveLeftKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4850
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMoveForwardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMoveForwardKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMoveForwardKeyBinding");
		
		UTBGameUserSettings_SetMoveForwardKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4740
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMoveBackwardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMoveBackwardKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMoveBackwardKeyBinding");
		
		UTBGameUserSettings_SetMoveBackwardKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4680
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMouseSensitivityNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormSensitivityX                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NormSensitivityY                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMouseSensitivityNormalized(float NormSensitivityX, float NormSensitivityY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMouseSensitivityNormalized");
		
		UTBGameUserSettings_SetMouseSensitivityNormalized_Params params {};
		params.NormSensitivityX = NormSensitivityX;
		params.NormSensitivityY = NormSensitivityY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B45C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMouseSensitivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SensitivityX                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SensitivityY                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMouseSensitivity(float SensitivityX, float SensitivityY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMouseSensitivity");
		
		UTBGameUserSettings_SetMouseSensitivity_Params params {};
		params.SensitivityX = SensitivityX;
		params.SensitivityY = SensitivityY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4530
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMotionBlurEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMotionBlurEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMotionBlurEnabled");
		
		UTBGameUserSettings_SetMotionBlurEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B44B0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMasterVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormMasterVolume                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMasterVolumeLevelNormalized(float NormMasterVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMasterVolumeLevelNormalized");
		
		UTBGameUserSettings_SetMasterVolumeLevelNormalized_Params params {};
		params.NormMasterVolume = NormMasterVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4430
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetMasterVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MasterVolume                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetMasterVolumeLevel(float MasterVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetMasterVolumeLevel");
		
		UTBGameUserSettings_SetMasterVolumeLevel_Params params {};
		params.MasterVolume = MasterVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4320
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetLeanRightKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetLeanRightKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetLeanRightKeyBinding");
		
		UTBGameUserSettings_SetLeanRightKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4210
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetLeanLeftKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetLeanLeftKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetLeanLeftKeyBinding");
		
		UTBGameUserSettings_SetLeanLeftKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4100
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetJumpKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetJumpKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetJumpKeyBinding");
		
		UTBGameUserSettings_SetJumpKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B4070
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetInvertMousePitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInvertPitch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetInvertMousePitch(bool bInvertPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetInvertMousePitch");
		
		UTBGameUserSettings_SetInvertMousePitch_Params params {};
		params.bInvertPitch = bInvertPitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3F60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetFireKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetFireKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetFireKeyBinding");
		
		UTBGameUserSettings_SetFireKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3EE0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetFieldOfView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewFOV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetFieldOfView(float NewFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetFieldOfView");
		
		UTBGameUserSettings_SetFieldOfView_Params params {};
		params.NewFOV = NewFOV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3E60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetDisplayGamma
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewGamma                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetDisplayGamma(float NewGamma)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetDisplayGamma");
		
		UTBGameUserSettings_SetDisplayGamma_Params params {};
		params.NewGamma = NewGamma;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3DE0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetDialogueVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NormDialogueVolume                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetDialogueVolumeLevelNormalized(float NormDialogueVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetDialogueVolumeLevelNormalized");
		
		UTBGameUserSettings_SetDialogueVolumeLevelNormalized_Params params {};
		params.NormDialogueVolume = NormDialogueVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3D60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetDialogueVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DialogueVolume                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetDialogueVolumeLevel(float DialogueVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetDialogueVolumeLevel");
		
		UTBGameUserSettings_SetDialogueVolumeLevel_Params params {};
		params.DialogueVolume = DialogueVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3C50
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetDeployMenuKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetDeployMenuKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetDeployMenuKeyBinding");
		
		UTBGameUserSettings_SetDeployMenuKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3B40
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetCrouchKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetCrouchKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetCrouchKeyBinding");
		
		UTBGameUserSettings_SetCrouchKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3A30
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetCameraToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetCameraToggleKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetCameraToggleKeyBinding");
		
		UTBGameUserSettings_SetCameraToggleKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B39A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetAllowSoundInBackground
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetAllowSoundInBackground(bool bAllow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetAllowSoundInBackground");
		
		UTBGameUserSettings_SetAllowSoundInBackground_Params params {};
		params.bAllow = bAllow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3890
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.SetAimDownSightsKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FInputChord                                 NewKey                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::SetAimDownSightsKeyBinding(const struct FInputChord& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.SetAimDownSightsKeyBinding");
		
		UTBGameUserSettings_SetAimDownSightsKeyBinding_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3710
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsVoiceVolumeLevelDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsVoiceVolumeLevelDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsVoiceVolumeLevelDirty");
		
		UTBGameUserSettings_IsVoiceVolumeLevelDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B36F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSoundInBackgroundAllowed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSoundInBackgroundAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSoundInBackgroundAllowed");
		
		UTBGameUserSettings_IsSoundInBackgroundAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B36C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSoundEffectsVolumeLevelDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSoundEffectsVolumeLevelDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSoundEffectsVolumeLevelDirty");
		
		UTBGameUserSettings_IsSoundEffectsVolumeLevelDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3690
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSmoothMouseEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSmoothMouseEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSmoothMouseEnabled");
		
		UTBGameUserSettings_IsSmoothMouseEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3660
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSmoothMouseDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSmoothMouseDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSmoothMouseDirty");
		
		UTBGameUserSettings_IsSmoothMouseDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3630
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSmoothFrameRateEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSmoothFrameRateEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSmoothFrameRateEnabled");
		
		UTBGameUserSettings_IsSmoothFrameRateEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3600
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsSmoothFrameRateDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsSmoothFrameRateDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsSmoothFrameRateDirty");
		
		UTBGameUserSettings_IsSmoothFrameRateDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6AF0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsPlayerCharacterMeshRowNameDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsPlayerCharacterMeshRowNameDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsPlayerCharacterMeshRowNameDirty");
		
		UTBGameUserSettings_IsPlayerCharacterMeshRowNameDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B35D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsPlayerChangingKeyBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTBGameUserSettings::IsPlayerChangingKeyBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsPlayerChangingKeyBindings");
		
		UTBGameUserSettings_IsPlayerChangingKeyBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B35A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsMusicVolumeLevelDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsMusicVolumeLevelDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsMusicVolumeLevelDirty");
		
		UTBGameUserSettings_IsMusicVolumeLevelDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3570
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsMouseSensitivityDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsMouseSensitivityDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsMouseSensitivityDirty");
		
		UTBGameUserSettings_IsMouseSensitivityDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3540
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsMotionBlurEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsMotionBlurEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsMotionBlurEnabled");
		
		UTBGameUserSettings_IsMotionBlurEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3510
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsMotionBlurDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsMotionBlurDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsMotionBlurDirty");
		
		UTBGameUserSettings_IsMotionBlurDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B34E0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsMasterVolumeLevelDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsMasterVolumeLevelDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsMasterVolumeLevelDirty");
		
		UTBGameUserSettings_IsMasterVolumeLevelDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B34B0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsInvertMouseDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsInvertMouseDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsInvertMouseDirty");
		
		UTBGameUserSettings_IsInvertMouseDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3490
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsHeadphoneModeEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsHeadphoneModeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsHeadphoneModeEnabled");
		
		UTBGameUserSettings_IsHeadphoneModeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3460
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsHeadphoneModeDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsHeadphoneModeDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsHeadphoneModeDirty");
		
		UTBGameUserSettings_IsHeadphoneModeDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3430
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsFrameRateLimitDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsFrameRateLimitDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsFrameRateLimitDirty");
		
		UTBGameUserSettings_IsFrameRateLimitDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3400
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsFieldOfViewDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsFieldOfViewDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsFieldOfViewDirty");
		
		UTBGameUserSettings_IsFieldOfViewDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B33D0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsDisplayGammaDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsDisplayGammaDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsDisplayGammaDirty");
		
		UTBGameUserSettings_IsDisplayGammaDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B33A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsDialogueVolumeLevelDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsDialogueVolumeLevelDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsDialogueVolumeLevelDirty");
		
		UTBGameUserSettings_IsDialogueVolumeLevelDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3370
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsAudioQualityDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsAudioQualityDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsAudioQualityDirty");
		
		UTBGameUserSettings_IsAudioQualityDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3340
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsAnyInputKeyBindingDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsAnyInputKeyBindingDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsAnyInputKeyBindingDirty");
		
		UTBGameUserSettings_IsAnyInputKeyBindingDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3310
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.IsAllowSoundInBackgroundDirty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::IsAllowSoundInBackgroundDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.IsAllowSoundInBackgroundDirty");
		
		UTBGameUserSettings_IsAllowSoundInBackgroundDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3280
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot9KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot9KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot9KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot9KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3210
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot8KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot8KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot8KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot8KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B31A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot7KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot7KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot7KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot7KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3130
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot6KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot6KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot6KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot6KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B30C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot5KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot5KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot5KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot5KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3050
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot4KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot4KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot4KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot4KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2FE0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot3KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot3KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot3KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot3KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2F70
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot2KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot2KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot2KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot2KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2F00
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot1KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot1KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot1KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot1KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2E90
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetWeaponSlot0KeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetWeaponSlot0KeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetWeaponSlot0KeyBinding");
		
		UTBGameUserSettings_GetWeaponSlot0KeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2E60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetVoiceVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetVoiceVolumeLevelNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetVoiceVolumeLevelNormalized");
		
		UTBGameUserSettings_GetVoiceVolumeLevelNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2E30
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetVoiceVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetVoiceVolumeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetVoiceVolumeLevel");
		
		UTBGameUserSettings_GetVoiceVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2DC0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetUseKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetUseKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetUseKeyBinding");
		
		UTBGameUserSettings_GetUseKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2D50
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSprintKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetSprintKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSprintKeyBinding");
		
		UTBGameUserSettings_GetSprintKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2D20
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSoundEffectsVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetSoundEffectsVolumeLevelNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSoundEffectsVolumeLevelNormalized");
		
		UTBGameUserSettings_GetSoundEffectsVolumeLevelNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2CF0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSoundEffectsVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetSoundEffectsVolumeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSoundEffectsVolumeLevel");
		
		UTBGameUserSettings_GetSoundEffectsVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2C80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetShowScoreboardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetShowScoreboardKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetShowScoreboardKeyBinding");
		
		UTBGameUserSettings_GetShowScoreboardKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2860
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSayTeamKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetSayTeamKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSayTeamKeyBinding");
		
		UTBGameUserSettings_GetSayTeamKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B27F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSaySquadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetSaySquadKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSaySquadKeyBinding");
		
		UTBGameUserSettings_GetSaySquadKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2780
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetSayAllKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetSayAllKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetSayAllKeyBinding");
		
		UTBGameUserSettings_GetSayAllKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2710
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetReloadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetReloadKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetReloadKeyBinding");
		
		UTBGameUserSettings_GetReloadKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B26A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetRadialMenuKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetRadialMenuKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetRadialMenuKeyBinding");
		
		UTBGameUserSettings_GetRadialMenuKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2630
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetPushToTalkSquadKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetPushToTalkSquadKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetPushToTalkSquadKeyBinding");
		
		UTBGameUserSettings_GetPushToTalkSquadKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B25C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetPushToTalkLocalKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetPushToTalkLocalKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetPushToTalkLocalKeyBinding");
		
		UTBGameUserSettings_GetPushToTalkLocalKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2550
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetPushToTalkCommandKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetPushToTalkCommandKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetPushToTalkCommandKeyBinding");
		
		UTBGameUserSettings_GetPushToTalkCommandKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B24E0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetProneKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetProneKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetProneKeyBinding");
		
		UTBGameUserSettings_GetProneKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2470
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetPreviousItemKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetPreviousItemKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetPreviousItemKeyBinding");
		
		UTBGameUserSettings_GetPreviousItemKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2430
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetPlayerCharacterMeshRowName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UTBGameUserSettings::GetPlayerCharacterMeshRowName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetPlayerCharacterMeshRowName");
		
		UTBGameUserSettings_GetPlayerCharacterMeshRowName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B23C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetNextItemKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetNextItemKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetNextItemKeyBinding");
		
		UTBGameUserSettings_GetNextItemKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2390
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMusicVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMusicVolumeLevelNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMusicVolumeLevelNormalized");
		
		UTBGameUserSettings_GetMusicVolumeLevelNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2360
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMusicVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMusicVolumeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMusicVolumeLevel");
		
		UTBGameUserSettings_GetMusicVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B22F0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMoveRightKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetMoveRightKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMoveRightKeyBinding");
		
		UTBGameUserSettings_GetMoveRightKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2280
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMoveLeftKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetMoveLeftKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMoveLeftKeyBinding");
		
		UTBGameUserSettings_GetMoveLeftKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2210
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMoveForwardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetMoveForwardKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMoveForwardKeyBinding");
		
		UTBGameUserSettings_GetMoveForwardKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B21A0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMoveBackwardKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetMoveBackwardKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMoveBackwardKeyBinding");
		
		UTBGameUserSettings_GetMoveBackwardKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2170
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityYNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMouseSensitivityYNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityYNormalized");
		
		UTBGameUserSettings_GetMouseSensitivityYNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2140
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityY
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMouseSensitivityY()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityY");
		
		UTBGameUserSettings_GetMouseSensitivityY_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2110
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityXNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMouseSensitivityXNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityXNormalized");
		
		UTBGameUserSettings_GetMouseSensitivityXNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B20E0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityX
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMouseSensitivityX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMouseSensitivityX");
		
		UTBGameUserSettings_GetMouseSensitivityX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B20B0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMasterVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMasterVolumeLevelNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMasterVolumeLevelNormalized");
		
		UTBGameUserSettings_GetMasterVolumeLevelNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B2080
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetMasterVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetMasterVolumeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetMasterVolumeLevel");
		
		UTBGameUserSettings_GetMasterVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1FD0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetLocalPlayerControllerBP
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class APlayerController* UTBGameUserSettings::GetLocalPlayerControllerBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetLocalPlayerControllerBP");
		
		UTBGameUserSettings_GetLocalPlayerControllerBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1F60
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetLeanRightKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetLeanRightKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetLeanRightKeyBinding");
		
		UTBGameUserSettings_GetLeanRightKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1EF0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetLeanLeftKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetLeanLeftKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetLeanLeftKeyBinding");
		
		UTBGameUserSettings_GetLeanLeftKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1E80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetJumpKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetJumpKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetJumpKeyBinding");
		
		UTBGameUserSettings_GetJumpKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1E50
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetInvertMousePitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBGameUserSettings::GetInvertMousePitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetInvertMousePitch");
		
		UTBGameUserSettings_GetInvertMousePitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1D80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetFrameRateLimitCurrent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetFrameRateLimitCurrent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetFrameRateLimitCurrent");
		
		UTBGameUserSettings_GetFrameRateLimitCurrent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1D10
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetFireKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetFireKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetFireKeyBinding");
		
		UTBGameUserSettings_GetFireKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1CE0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetFieldOfView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetFieldOfView");
		
		UTBGameUserSettings_GetFieldOfView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1CB0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetDisplayGamma
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetDisplayGamma()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetDisplayGamma");
		
		UTBGameUserSettings_GetDisplayGamma_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1C80
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetDialogueVolumeLevelNormalized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetDialogueVolumeLevelNormalized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetDialogueVolumeLevelNormalized");
		
		UTBGameUserSettings_GetDialogueVolumeLevelNormalized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1C50
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetDialogueVolumeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTBGameUserSettings::GetDialogueVolumeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetDialogueVolumeLevel");
		
		UTBGameUserSettings_GetDialogueVolumeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1BE0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetDeployMenuKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetDeployMenuKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetDeployMenuKeyBinding");
		
		UTBGameUserSettings_GetDeployMenuKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1A30
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetCrouchKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetCrouchKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetCrouchKeyBinding");
		
		UTBGameUserSettings_GetCrouchKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B19C0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetCameraToggleKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetCameraToggleKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetCameraToggleKeyBinding");
		
		UTBGameUserSettings_GetCameraToggleKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1950
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.GetAimDownSightsKeyBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FKey UTBGameUserSettings::GetAimDownSightsKeyBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.GetAimDownSightsKeyBinding");
		
		UTBGameUserSettings_GetAimDownSightsKeyBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B1840
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.FirstRunHardwareBenchmark
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WorkScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CPUMultiplier                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GPUMultiplier                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTBGameUserSettings::FirstRunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.FirstRunHardwareBenchmark");
		
		UTBGameUserSettings_FirstRunHardwareBenchmark_Params params {};
		params.WorkScale = WorkScale;
		params.CPUMultiplier = CPUMultiplier;
		params.GPUMultiplier = GPUMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B17B0
	 * 		Name   -> Function Tinkerbox.TBGameUserSettings.EnableHeadphoneMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGameUserSettings::EnableHeadphoneMode(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGameUserSettings.EnableHeadphoneMode");
		
		UTBGameUserSettings_EnableHeadphoneMode_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBGameUserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBGameUserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBGameUserSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BBB10
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.SetSimulatePhysicsOnAllActors
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSimulate                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::SetSimulatePhysicsOnAllActors(bool bSimulate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.SetSimulatePhysicsOnAllActors");
		
		UTBGizmoEditorComponent_SetSimulatePhysicsOnAllActors_Params params {};
		params.bSimulate = bSimulate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BBA80
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.SetScaleOnAllActors
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     NewScale                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::SetScaleOnAllActors(const struct FVector& NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.SetScaleOnAllActors");
		
		UTBGizmoEditorComponent_SetScaleOnAllActors_Params params {};
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB9F0
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.SetRotationOnAllActors
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    NewRot                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::SetRotationOnAllActors(const struct FRotator& NewRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.SetRotationOnAllActors");
		
		UTBGizmoEditorComponent_SetRotationOnAllActors_Params params {};
		params.NewRot = NewRot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB680
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.SetLocationOnAllActors
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     NewLoc                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::SetLocationOnAllActors(const struct FVector& NewLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.SetLocationOnAllActors");
		
		UTBGizmoEditorComponent_SetLocationOnAllActors_Params params {};
		params.NewLoc = NewLoc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB2C0
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.ServerSetSimulatePhysicsOnAllActors
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bSimulate                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::ServerSetSimulatePhysicsOnAllActors(bool bSimulate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.ServerSetSimulatePhysicsOnAllActors");
		
		UTBGizmoEditorComponent_ServerSetSimulatePhysicsOnAllActors_Params params {};
		params.bSimulate = bSimulate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB210
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.ServerSetScaleOnAllActors
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FVector                                     NewScale                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::ServerSetScaleOnAllActors(const struct FVector& NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.ServerSetScaleOnAllActors");
		
		UTBGizmoEditorComponent_ServerSetScaleOnAllActors_Params params {};
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB160
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.ServerSetRotationOnAllActors
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FRotator                                    NewRot                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::ServerSetRotationOnAllActors(const struct FRotator& NewRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.ServerSetRotationOnAllActors");
		
		UTBGizmoEditorComponent_ServerSetRotationOnAllActors_Params params {};
		params.NewRot = NewRot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB0B0
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.ServerSetLocationOnAllActors
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FVector                                     NewLoc                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::ServerSetLocationOnAllActors(const struct FVector& NewLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.ServerSetLocationOnAllActors");
		
		UTBGizmoEditorComponent_ServerSetLocationOnAllActors_Params params {};
		params.NewLoc = NewLoc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB060
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.ServerDuplicateAllActors
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void UTBGizmoEditorComponent::ServerDuplicateAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.ServerDuplicateAllActors");
		
		UTBGizmoEditorComponent_ServerDuplicateAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAF60
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.ServerDuplicateActor
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAttachActiveGizmo                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::ServerDuplicateActor(class AActor* Actor, bool bAttachActiveGizmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.ServerDuplicateActor");
		
		UTBGizmoEditorComponent_ServerDuplicateActor_Params params {};
		params.Actor = Actor;
		params.bAttachActiveGizmo = bAttachActiveGizmo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAF10
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.ServerDeleteAllActors
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void UTBGizmoEditorComponent::ServerDeleteAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.ServerDeleteAllActors");
		
		UTBGizmoEditorComponent_ServerDeleteAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAE50
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.ServerDeleteActor
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::ServerDeleteActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.ServerDeleteActor");
		
		UTBGizmoEditorComponent_ServerDeleteActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA240
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.DuplicateActor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAttachActiveGizmo                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::DuplicateActor(class AActor* Actor, bool bAttachActiveGizmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.DuplicateActor");
		
		UTBGizmoEditorComponent_DuplicateActor_Params params {};
		params.Actor = Actor;
		params.bAttachActiveGizmo = bAttachActiveGizmo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA220
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.DeleteAllActors
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UTBGizmoEditorComponent::DeleteAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.DeleteAllActors");
		
		UTBGizmoEditorComponent_DeleteAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA190
	 * 		Name   -> Function Tinkerbox.TBGizmoEditorComponent.DeleteActor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBGizmoEditorComponent::DeleteActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBGizmoEditorComponent.DeleteActor");
		
		UTBGizmoEditorComponent_DeleteActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBGizmoEditorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBGizmoEditorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBGizmoEditorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBServerListView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBServerListView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBServerListView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function Tinkerbox.TBJoinGameMenu.ReceiveOnRefreshStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UTBJoinGameMenu::ReceiveOnRefreshStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBJoinGameMenu.ReceiveOnRefreshStart");
		
		UTBJoinGameMenu_ReceiveOnRefreshStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function Tinkerbox.TBJoinGameMenu.ReceiveOnRefreshComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UTBJoinGameMenu::ReceiveOnRefreshComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBJoinGameMenu.ReceiveOnRefreshComplete");
		
		UTBJoinGameMenu_ReceiveOnRefreshComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6E90
	 * 		Name   -> Function Tinkerbox.TBJoinGameMenu.OnResetFilters
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UTBJoinGameMenu::OnResetFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBJoinGameMenu.OnResetFilters");
		
		UTBJoinGameMenu_OnResetFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAD70
	 * 		Name   -> Function Tinkerbox.TBJoinGameMenu.OnRefresh
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UTBJoinGameMenu::OnRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBJoinGameMenu.OnRefresh");
		
		UTBJoinGameMenu_OnRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAA80
	 * 		Name   -> Function Tinkerbox.TBJoinGameMenu.JoinGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTBServerListItemData*                       ServerItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBJoinGameMenu::JoinGame(class UTBServerListItemData* ServerItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBJoinGameMenu.JoinGame");
		
		UTBJoinGameMenu_JoinGame_Params params {};
		params.ServerItem = ServerItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAA10
	 * 		Name   -> Function Tinkerbox.TBJoinGameMenu.IsUsingDebugServerListings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBJoinGameMenu::IsUsingDebugServerListings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBJoinGameMenu.IsUsingDebugServerListings");
		
		UTBJoinGameMenu_IsUsingDebugServerListings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBJoinGameMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBJoinGameMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBJoinGameMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBLevelScriptActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBLevelScriptActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBLevelScriptActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBLocalPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB8C0
	 * 		Name   -> Function Tinkerbox.TBObjectComponent.SetObjectStaticMesh
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class UStaticMesh*                                 NewMesh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBObjectComponent::SetObjectStaticMesh(class UStaticMesh* NewMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBObjectComponent.SetObjectStaticMesh");
		
		UTBObjectComponent_SetObjectStaticMesh_Params params {};
		params.NewMesh = NewMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB830
	 * 		Name   -> Function Tinkerbox.TBObjectComponent.SetObjectSkeletalMesh
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class USkeletalMesh*                               NewMesh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBObjectComponent::SetObjectSkeletalMesh(class USkeletalMesh* NewMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBObjectComponent.SetObjectSkeletalMesh");
		
		UTBObjectComponent_SetObjectSkeletalMesh_Params params {};
		params.NewMesh = NewMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB7A0
	 * 		Name   -> Function Tinkerbox.TBObjectComponent.SetObjectSimulatePhysics
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		bool                                               bSimulate                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBObjectComponent::SetObjectSimulatePhysics(bool bSimulate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBObjectComponent.SetObjectSimulatePhysics");
		
		UTBObjectComponent_SetObjectSimulatePhysics_Params params {};
		params.bSimulate = bSimulate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB710
	 * 		Name   -> Function Tinkerbox.TBObjectComponent.SetObjectScale
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		struct FVector_NetQuantize100                      NewScale                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBObjectComponent::SetObjectScale(const struct FVector_NetQuantize100& NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBObjectComponent.SetObjectScale");
		
		UTBObjectComponent_SetObjectScale_Params params {};
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BADF0
	 * 		Name   -> Function Tinkerbox.TBObjectComponent.OnRep_ObjectStaticMesh
	 * 		Flags  -> (Native, Protected)
	 */
	void UTBObjectComponent::OnRep_ObjectStaticMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBObjectComponent.OnRep_ObjectStaticMesh");
		
		UTBObjectComponent_OnRep_ObjectStaticMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BADD0
	 * 		Name   -> Function Tinkerbox.TBObjectComponent.OnRep_ObjectSkeletalMesh
	 * 		Flags  -> (Native, Protected)
	 */
	void UTBObjectComponent::OnRep_ObjectSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBObjectComponent.OnRep_ObjectSkeletalMesh");
		
		UTBObjectComponent_OnRep_ObjectSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BADB0
	 * 		Name   -> Function Tinkerbox.TBObjectComponent.OnRep_ObjectSimulatePhysics
	 * 		Flags  -> (Native, Protected)
	 */
	void UTBObjectComponent::OnRep_ObjectSimulatePhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBObjectComponent.OnRep_ObjectSimulatePhysics");
		
		UTBObjectComponent_OnRep_ObjectSimulatePhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAD90
	 * 		Name   -> Function Tinkerbox.TBObjectComponent.OnRep_ObjectScale
	 * 		Flags  -> (Native, Protected)
	 */
	void UTBObjectComponent::OnRep_ObjectScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBObjectComponent.OnRep_ObjectScale");
		
		UTBObjectComponent_OnRep_ObjectScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBObjectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBObjectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBObjectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBOptionsMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBOptionsMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBOptionsMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBPhysicsCollisionHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBPhysicsCollisionHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBPhysicsCollisionHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBPlayerCameraManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBPlayerCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBPlayerCameraManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BC1A0
	 * 		Name   -> Function Tinkerbox.ATBSandboxFreeCamPawn.Turn
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AATBSandboxFreeCamPawn::Turn(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.ATBSandboxFreeCamPawn.Turn");
		
		AATBSandboxFreeCamPawn_Turn_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAE30
	 * 		Name   -> Function Tinkerbox.ATBSandboxFreeCamPawn.OnSprintReleased
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void AATBSandboxFreeCamPawn::OnSprintReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.ATBSandboxFreeCamPawn.OnSprintReleased");
		
		AATBSandboxFreeCamPawn_OnSprintReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAE10
	 * 		Name   -> Function Tinkerbox.ATBSandboxFreeCamPawn.OnSprintPressed
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void AATBSandboxFreeCamPawn::OnSprintPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.ATBSandboxFreeCamPawn.OnSprintPressed");
		
		AATBSandboxFreeCamPawn_OnSprintPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAC70
	 * 		Name   -> Function Tinkerbox.ATBSandboxFreeCamPawn.OnCameraPanReleased
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void AATBSandboxFreeCamPawn::OnCameraPanReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.ATBSandboxFreeCamPawn.OnCameraPanReleased");
		
		AATBSandboxFreeCamPawn_OnCameraPanReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAC50
	 * 		Name   -> Function Tinkerbox.ATBSandboxFreeCamPawn.OnCameraPanPressed
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void AATBSandboxFreeCamPawn::OnCameraPanPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.ATBSandboxFreeCamPawn.OnCameraPanPressed");
		
		AATBSandboxFreeCamPawn_OnCameraPanPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAB90
	 * 		Name   -> Function Tinkerbox.ATBSandboxFreeCamPawn.LookUp
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AATBSandboxFreeCamPawn::LookUp(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.ATBSandboxFreeCamPawn.LookUp");
		
		AATBSandboxFreeCamPawn_LookUp_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA9E0
	 * 		Name   -> Function Tinkerbox.ATBSandboxFreeCamPawn.IsSprinting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AATBSandboxFreeCamPawn::IsSprinting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.ATBSandboxFreeCamPawn.IsSprinting");
		
		AATBSandboxFreeCamPawn_IsSprinting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AATBSandboxFreeCamPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AATBSandboxFreeCamPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.ATBSandboxFreeCamPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B3810
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerCharacter.OnCameraPanReleased
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBSandboxPlayerCharacter::OnCameraPanReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerCharacter.OnCameraPanReleased");
		
		ATBSandboxPlayerCharacter_OnCameraPanReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007B37F0
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerCharacter.OnCameraPanPressed
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBSandboxPlayerCharacter::OnCameraPanPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerCharacter.OnCameraPanPressed");
		
		ATBSandboxPlayerCharacter_OnCameraPanPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBSandboxPlayerCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBSandboxPlayerCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBSandboxPlayerCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BC220
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.WorldSpaceManipulationToggle
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBSandboxPlayerController::WorldSpaceManipulationToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.WorldSpaceManipulationToggle");
		
		ATBSandboxPlayerController_WorldSpaceManipulationToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BC0B0
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.ToggleFreeCam
	 * 		Flags  -> (Native, Protected, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewFreeCam                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::ToggleFreeCam(bool bNewFreeCam, const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.ToggleFreeCam");
		
		ATBSandboxPlayerController_ToggleFreeCam_Params params {};
		params.bNewFreeCam = bNewFreeCam;
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BC020
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.ToggleEditMode
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewEditMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::ToggleEditMode(bool bNewEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.ToggleEditMode");
		
		ATBSandboxPlayerController_ToggleEditMode_Params params {};
		params.bNewEditMode = bNewEditMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BC000
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.SwitchActiveGizmo
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBSandboxPlayerController::SwitchActiveGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.SwitchActiveGizmo");
		
		ATBSandboxPlayerController_SwitchActiveGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BBF70
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.SpawnObjectFromTableAtPawn
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        RowName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::SpawnObjectFromTableAtPawn(const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.SpawnObjectFromTableAtPawn");
		
		ATBSandboxPlayerController_SpawnObjectFromTableAtPawn_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BBE90
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.SpawnObjectFromTable
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        RowName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ObjectSpawnLocation                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::SpawnObjectFromTable(const class FName& RowName, const struct FVector& ObjectSpawnLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.SpawnObjectFromTable");
		
		ATBSandboxPlayerController_SpawnObjectFromTable_Params params {};
		params.RowName = RowName;
		params.ObjectSpawnLocation = ObjectSpawnLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BBDC0
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.SpawnObjectFromClass
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      ObjectClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* ATBSandboxPlayerController::SpawnObjectFromClass(class UClass* ObjectClass, class UObject* ObjectData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.SpawnObjectFromClass");
		
		ATBSandboxPlayerController_SpawnObjectFromClass_Params params {};
		params.ObjectClass = ObjectClass;
		params.ObjectData = ObjectData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BBD30
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.SpawnObject
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::SpawnObject(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.SpawnObject");
		
		ATBSandboxPlayerController_SpawnObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB950
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.SetPlayerCharacterMeshRowName
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        RowName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::SetPlayerCharacterMeshRowName(const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.SetPlayerCharacterMeshRowName");
		
		ATBSandboxPlayerController_SetPlayerCharacterMeshRowName_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB560
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.ServerToggleFreeCam
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewFreeCam                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize                         Loc                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::ServerToggleFreeCam(bool bNewFreeCam, const struct FVector_NetQuantize& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.ServerToggleFreeCam");
		
		ATBSandboxPlayerController_ServerToggleFreeCam_Params params {};
		params.bNewFreeCam = bNewFreeCam;
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB4A0
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.ServerToggleEditMode
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewEditMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::ServerToggleEditMode(bool bNewEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.ServerToggleEditMode");
		
		ATBSandboxPlayerController_ServerToggleEditMode_Params params {};
		params.bNewEditMode = bNewEditMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BB380
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.ServerSpawnObjectFromTable
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class FName                                        RowName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      ObjectSpawnLocation                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::ServerSpawnObjectFromTable(const class FName& RowName, const struct FVector_NetQuantize100& ObjectSpawnLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.ServerSpawnObjectFromTable");
		
		ATBSandboxPlayerController_ServerSpawnObjectFromTable_Params params {};
		params.RowName = RowName;
		params.ObjectSpawnLocation = ObjectSpawnLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.OnToggleFreeCam
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewFreeCam                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::OnToggleFreeCam(bool bNewFreeCam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.OnToggleFreeCam");
		
		ATBSandboxPlayerController_OnToggleFreeCam_Params params {};
		params.bNewFreeCam = bNewFreeCam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.OnToggleEditMode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewEditMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::OnToggleEditMode(bool bNewEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.OnToggleEditMode");
		
		ATBSandboxPlayerController_OnToggleEditMode_Params params {};
		params.bNewEditMode = bNewEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.OnSelectActor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewSelectedActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::OnSelectActor(class AActor* NewSelectedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.OnSelectActor");
		
		ATBSandboxPlayerController_OnSelectActor_Params params {};
		params.NewSelectedActor = NewSelectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAD50
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.OnObjectDuplicateReleased
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBSandboxPlayerController::OnObjectDuplicateReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.OnObjectDuplicateReleased");
		
		ATBSandboxPlayerController_OnObjectDuplicateReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAD30
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.OnObjectDuplicatePressed
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBSandboxPlayerController::OnObjectDuplicatePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.OnObjectDuplicatePressed");
		
		ATBSandboxPlayerController_OnObjectDuplicatePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAC90
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.OnLoadedObjectToSpawn
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UObject*                                     LoadedObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::OnLoadedObjectToSpawn(class UObject* LoadedObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.OnLoadedObjectToSpawn");
		
		ATBSandboxPlayerController_OnLoadedObjectToSpawn_Params params {};
		params.LoadedObject = LoadedObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.OnDeselectAllActors
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATBSandboxPlayerController::OnDeselectAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.OnDeselectAllActors");
		
		ATBSandboxPlayerController_OnDeselectAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6E90
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.OnAssetLoadDummy
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ATBSandboxPlayerController::OnAssetLoadDummy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.OnAssetLoadDummy");
		
		ATBSandboxPlayerController_OnAssetLoadDummy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAC30
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.ObjectSelect
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBSandboxPlayerController::ObjectSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.ObjectSelect");
		
		ATBSandboxPlayerController_ObjectSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAC10
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.ObjectDelete
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBSandboxPlayerController::ObjectDelete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.ObjectDelete");
		
		ATBSandboxPlayerController_ObjectDelete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BAB00
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.LookAtObject
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATBSandboxPlayerController::LookAtObject(class AActor* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.LookAtObject");
		
		ATBSandboxPlayerController_LookAtObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA9B0
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.IsInFreeCam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATBSandboxPlayerController::IsInFreeCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.IsInFreeCam");
		
		ATBSandboxPlayerController_IsInFreeCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA980
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.IsEditing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATBSandboxPlayerController::IsEditing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.IsEditing");
		
		ATBSandboxPlayerController_IsEditing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA6E0
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.GetSpawnListByCategory
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      DesiredCategory                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class FName, struct FObjectListing> ATBSandboxPlayerController::GetSpawnListByCategory(const class FString& DesiredCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.GetSpawnListByCategory");
		
		ATBSandboxPlayerController_GetSpawnListByCategory_Params params {};
		params.DesiredCategory = DesiredCategory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA6B0
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.GetObjectFromCursorPos
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	class AActor* ATBSandboxPlayerController::GetObjectFromCursorPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.GetObjectFromCursorPos");
		
		ATBSandboxPlayerController_GetObjectFromCursorPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA680
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.GetObjectFromAimPos
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	class AActor* ATBSandboxPlayerController::GetObjectFromAimPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.GetObjectFromAimPos");
		
		ATBSandboxPlayerController_GetObjectFromAimPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA5E0
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.GetObjectComponent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTBObjectComponent* ATBSandboxPlayerController::GetObjectComponent(class AActor* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.GetObjectComponent");
		
		ATBSandboxPlayerController_GetObjectComponent_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA490
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.GetHitResultUnderCursorByVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FHitResult ATBSandboxPlayerController::GetHitResultUnderCursorByVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.GetHitResultUnderCursorByVisibility");
		
		ATBSandboxPlayerController_GetHitResultUnderCursorByVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA470
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.GetGizmoEditor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTBGizmoEditorComponent* ATBSandboxPlayerController::GetGizmoEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.GetGizmoEditor");
		
		ATBSandboxPlayerController_GetGizmoEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA350
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.GetCategoryList
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	TArray<class FString> ATBSandboxPlayerController::GetCategoryList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.GetCategoryList");
		
		ATBSandboxPlayerController_GetCategoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA330
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.FreeCamToggle
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBSandboxPlayerController::FreeCamToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.FreeCamToggle");
		
		ATBSandboxPlayerController_FreeCamToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BA310
	 * 		Name   -> Function Tinkerbox.TBSandboxPlayerController.EditModeToggle
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void ATBSandboxPlayerController::EditModeToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBSandboxPlayerController.EditModeToggle");
		
		ATBSandboxPlayerController_EditModeToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBSandboxPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBSandboxPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBSandboxPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBServerListItemData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBServerListItemData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBServerListItemData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BBC20
	 * 		Name   -> Function Tinkerbox.TBServerListing.SetupListing
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FServerInfo                                 InServerInfo                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTBServerListing::SetupListing(const struct FServerInfo& InServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBServerListing.SetupListing");
		
		UTBServerListing_SetupListing_Params params {};
		params.InServerInfo = InServerInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBServerListing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBServerListing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBServerListing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATBTranslationGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBTranslationGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBTranslationGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function Tinkerbox.TBVoiceIndicator.ActiveVoiceRemoved
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPanelSlot*                                  NewVoiceWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBVoiceIndicator::ActiveVoiceRemoved(class APlayerState* PlayerState, class UPanelSlot* NewVoiceWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBVoiceIndicator.ActiveVoiceRemoved");
		
		UTBVoiceIndicator_ActiveVoiceRemoved_Params params {};
		params.PlayerState = PlayerState;
		params.NewVoiceWidget = NewVoiceWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function Tinkerbox.TBVoiceIndicator.ActiveVoiceAdded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPanelSlot*                                  NewVoiceWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBVoiceIndicator::ActiveVoiceAdded(class APlayerState* PlayerState, class UPanelSlot* NewVoiceWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBVoiceIndicator.ActiveVoiceAdded");
		
		UTBVoiceIndicator_ActiveVoiceAdded_Params params {};
		params.PlayerState = PlayerState;
		params.NewVoiceWidget = NewVoiceWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBVoiceIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBVoiceIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBVoiceIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007BCBC0
	 * 		Name   -> Function Tinkerbox.TBVoiceIndicatorListing.Init
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UTBVoiceIndicator*                           InParentMenu                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUniqueNetIdRepl                            InUniqueNetId                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InPlayerName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBVoiceIndicatorListing::Init(class UTBVoiceIndicator* InParentMenu, const struct FUniqueNetIdRepl& InUniqueNetId, class FString* InPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tinkerbox.TBVoiceIndicatorListing.Init");
		
		UTBVoiceIndicatorListing_Init_Params params {};
		params.InParentMenu = InParentMenu;
		params.InUniqueNetId = InUniqueNetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPlayerName != nullptr)
			*InPlayerName = params.InPlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBVoiceIndicatorListing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBVoiceIndicatorListing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Tinkerbox.TBVoiceIndicatorListing");
		return ptr;
	}

}


