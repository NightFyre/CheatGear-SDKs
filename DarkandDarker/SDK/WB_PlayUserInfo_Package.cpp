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
	 * 		Name   -> Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnPlayUserInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayPartyUserInfo                          PlayPartyUserInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWB_PlayUserInfo_C::OnPlayUserInfo(const struct FPlayPartyUserInfo& PlayPartyUserInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnPlayUserInfo");
		
		UWB_PlayUserInfo_C_OnPlayUserInfo_Params params {};
		params.PlayPartyUserInfo = PlayPartyUserInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnLoadArtData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InObjectLoaded                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PlayUserInfo_C::OnLoadArtData(class UObject* InObjectLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnLoadArtData");
		
		UWB_PlayUserInfo_C_OnLoadArtData_Params params {};
		params.InObjectLoaded = InObjectLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnPlayPartyUserState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWidgetPlayUserPartyState                          Ready                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PlayUserInfo_C::OnPlayPartyUserState(EWidgetPlayUserPartyState Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnPlayPartyUserState");
		
		UWB_PlayUserInfo_C_OnPlayPartyUserState_Params params {};
		params.Ready = Ready;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnUpdateLobbyCharacterInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLobbyCharacterInfo                         LobbyCharacterInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_PlayUserInfo_C::OnUpdateLobbyCharacterInfo(const struct FLobbyCharacterInfo& LobbyCharacterInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnUpdateLobbyCharacterInfo");
		
		UWB_PlayUserInfo_C_OnUpdateLobbyCharacterInfo_Params params {};
		params.LobbyCharacterInfo = LobbyCharacterInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnLocationUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FClientMsgPartyCharacterInfo                PartyCharacterInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            MetaLocationIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PlayUserInfo_C::OnLocationUpdate(const struct FClientMsgPartyCharacterInfo& PartyCharacterInfo, int32_t MetaLocationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnLocationUpdate");
		
		UWB_PlayUserInfo_C_OnLocationUpdate_Params params {};
		params.PartyCharacterInfo = PartyCharacterInfo;
		params.MetaLocationIndex = MetaLocationIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnUpdateLocationCacheData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MetaLopcationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PlayUserInfo_C::OnUpdateLocationCacheData(int32_t MetaLopcationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayUserInfo.WB_PlayUserInfo_C.OnUpdateLocationCacheData");
		
		UWB_PlayUserInfo_C_OnUpdateLocationCacheData_Params params {};
		params.MetaLopcationIndex = MetaLopcationIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_PlayUserInfo.WB_PlayUserInfo_C.ExecuteUbergraph_WB_PlayUserInfo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PlayUserInfo_C::ExecuteUbergraph_WB_PlayUserInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayUserInfo.WB_PlayUserInfo_C.ExecuteUbergraph_WB_PlayUserInfo");
		
		UWB_PlayUserInfo_C_ExecuteUbergraph_WB_PlayUserInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_PlayUserInfo.WB_PlayUserInfo_C.NewEventDispatcher_0__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWB_PlayUserInfo_C::NewEventDispatcher_0__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayUserInfo.WB_PlayUserInfo_C.NewEventDispatcher_0__DelegateSignature");
		
		UWB_PlayUserInfo_C_NewEventDispatcher_0__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_PlayUserInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_PlayUserInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_PlayUserInfo.WB_PlayUserInfo_C");
		return ptr;
	}

}


