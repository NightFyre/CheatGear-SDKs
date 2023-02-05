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
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_LobbyTopMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.Construct");
		
		UWB_LobbyTopMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuPlayButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_LobbyTopMenu_C::TopMenuPlayButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuPlayButtonClicked");
		
		UWB_LobbyTopMenu_C_TopMenuPlayButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.UpdateTopMenuSwitch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWidgetLobbyGroupType                              CurrentGroupType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LobbyTopMenu_C::UpdateTopMenuSwitch(EWidgetLobbyGroupType CurrentGroupType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.UpdateTopMenuSwitch");
		
		UWB_LobbyTopMenu_C_UpdateTopMenuSwitch_Params params {};
		params.CurrentGroupType = CurrentGroupType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuLeaderBoardButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_LobbyTopMenu_C::TopMenuLeaderBoardButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuLeaderBoardButtonClicked");
		
		UWB_LobbyTopMenu_C_TopMenuLeaderBoardButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuLoadoutButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_LobbyTopMenu_C::TopMenuLoadoutButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuLoadoutButtonClicked");
		
		UWB_LobbyTopMenu_C_TopMenuLoadoutButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuMerchantButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_LobbyTopMenu_C::TopMenuMerchantButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuMerchantButtonClicked");
		
		UWB_LobbyTopMenu_C_TopMenuMerchantButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.OnPlayPartyReadyStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bMine                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLeader                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReady                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LobbyTopMenu_C::OnPlayPartyReadyStateChanged(bool bMine, bool bLeader, bool bReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.OnPlayPartyReadyStateChanged");
		
		UWB_LobbyTopMenu_C_OnPlayPartyReadyStateChanged_Params params {};
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
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.OnMatchingStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bMatching                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LobbyTopMenu_C::OnMatchingStateChanged(bool bMatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.OnMatchingStateChanged");
		
		UWB_LobbyTopMenu_C_OnMatchingStateChanged_Params params {};
		params.bMatching = bMatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuClassButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_LobbyTopMenu_C::TopMenuClassButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuClassButtonClicked");
		
		UWB_LobbyTopMenu_C_TopMenuClassButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuTradeButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_LobbyTopMenu_C::TopMenuTradeButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuTradeButtonClicked");
		
		UWB_LobbyTopMenu_C_TopMenuTradeButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuCustomizeButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_LobbyTopMenu_C::TopMenuCustomizeButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuCustomizeButtonClicked");
		
		UWB_LobbyTopMenu_C_TopMenuCustomizeButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuShopButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_LobbyTopMenu_C::TopMenuShopButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.TopMenuShopButtonClicked");
		
		UWB_LobbyTopMenu_C_TopMenuShopButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.ExecuteUbergraph_WB_LobbyTopMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LobbyTopMenu_C::ExecuteUbergraph_WB_LobbyTopMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LobbyTopMenu.WB_LobbyTopMenu_C.ExecuteUbergraph_WB_LobbyTopMenu");
		
		UWB_LobbyTopMenu_C_ExecuteUbergraph_WB_LobbyTopMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_LobbyTopMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_LobbyTopMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_LobbyTopMenu.WB_LobbyTopMenu_C");
		return ptr;
	}

}


