/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BP_HUD.BP_HUD_C.IsMenuVisibleEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_HUD_C::IsMenuVisibleEvent(const class FName& MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.IsMenuVisibleEvent");
		
		ABP_HUD_C_IsMenuVisibleEvent_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OnLoaded_DBAF99D94FF9C0F390EF76BCB18F9A84
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::OnLoaded_DBAF99D94FF9C0F390EF76BCB18F9A84(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnLoaded_DBAF99D94FF9C0F390EF76BCB18F9A84");
		
		ABP_HUD_C_OnLoaded_DBAF99D94FF9C0F390EF76BCB18F9A84_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ReceiveBeginPlay");
		
		ABP_HUD_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ReceiveDestroyed");
		
		ABP_HUD_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OnShowHintEvent
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::OnShowHintEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnShowHintEvent");
		
		ABP_HUD_C_OnShowHintEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OnSuggestHintEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        HintName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::OnSuggestHintEvent(const class FName& HintName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnSuggestHintEvent");
		
		ABP_HUD_C_OnSuggestHintEvent_Params params {};
		params.HintName = HintName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.ShowMenuEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::ShowMenuEvent(const class FName& MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ShowMenuEvent");
		
		ABP_HUD_C_ShowMenuEvent_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.ShowChatOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTeamChat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HUD_C::ShowChatOverlay(bool bTeamChat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ShowChatOverlay");
		
		ABP_HUD_C_ShowChatOverlay_Params params {};
		params.bTeamChat = bTeamChat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.HideMenuEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::HideMenuEvent(const class FName& MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.HideMenuEvent");
		
		ABP_HUD_C_HideMenuEvent_Params params {};
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OnChatLineAddedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              SenderGBPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::OnChatLineAddedEvent(class AGBPlayerState* SenderGBPlayerState, const class FString& Message, const class FName& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnChatLineAddedEvent");
		
		ABP_HUD_C_OnChatLineAddedEvent_Params params {};
		params.SenderGBPlayerState = SenderGBPlayerState;
		params.Message = Message;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.ShowReadyRoomPlayerNameEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ETeamElement                                       PlayerTeamElement                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::ShowReadyRoomPlayerNameEvent(const class FString& PlayerName, ETeamElement PlayerTeamElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ShowReadyRoomPlayerNameEvent");
		
		ABP_HUD_C_ShowReadyRoomPlayerNameEvent_Params params {};
		params.PlayerName = PlayerName;
		params.PlayerTeamElement = PlayerTeamElement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.HideReadyRoomPlayerNameEvent
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::HideReadyRoomPlayerNameEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.HideReadyRoomPlayerNameEvent");
		
		ABP_HUD_C_HideReadyRoomPlayerNameEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OnInventorySlotEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bImmediate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HUD_C::OnInventorySlotEvent(int32_t Index, bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnInventorySlotEvent");
		
		ABP_HUD_C_OnInventorySlotEvent_Params params {};
		params.Index = Index;
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.ShowRadialItemsMenuEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AGBItem*>                             Items                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_HUD_C::ShowRadialItemsMenuEvent(TArray<class AGBItem*> Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ShowRadialItemsMenuEvent");
		
		ABP_HUD_C_ShowRadialItemsMenuEvent_Params params {};
		params.Items = Items;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.HideRadialItemsMenuEvent
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::HideRadialItemsMenuEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.HideRadialItemsMenuEvent");
		
		ABP_HUD_C_HideRadialItemsMenuEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.HideGamePlayRelated
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::HideGamePlayRelated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.HideGamePlayRelated");
		
		ABP_HUD_C_HideGamePlayRelated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OpenLinearUserMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MenuName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::OpenLinearUserMenu(const class FString& MenuName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OpenLinearUserMenu");
		
		ABP_HUD_C_OpenLinearUserMenu_Params params {};
		params.MenuName = MenuName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OpenRadialUserMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MenuName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::OpenRadialUserMenu(const class FString& MenuName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OpenRadialUserMenu");
		
		ABP_HUD_C_OpenRadialUserMenu_Params params {};
		params.MenuName = MenuName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OpenUserMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MenuName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::OpenUserMenu(const class FString& MenuName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OpenUserMenu");
		
		ABP_HUD_C_OpenUserMenu_Params params {};
		params.MenuName = MenuName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.RemoveReadyRoomPlayerName
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::RemoveReadyRoomPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.RemoveReadyRoomPlayerName");
		
		ABP_HUD_C_RemoveReadyRoomPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.ResetRemoveReadyRoomPlayerNameTimer
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::ResetRemoveReadyRoomPlayerNameTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ResetRemoveReadyRoomPlayerNameTimer");
		
		ABP_HUD_C_ResetRemoveReadyRoomPlayerNameTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.InternalOpenUserMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MenuName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::InternalOpenUserMenu(const class FString& MenuName, const class FName& MenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.InternalOpenUserMenu");
		
		ABP_HUD_C_InternalOpenUserMenu_Params params {};
		params.MenuName = MenuName;
		params.MenuType = MenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.OnShowHUDEvent
	 * 		Flags  -> ()
	 */
	void ABP_HUD_C::OnShowHUDEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnShowHUDEvent");
		
		ABP_HUD_C_OnShowHUDEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_C::ExecuteUbergraph_BP_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD");
		
		ABP_HUD_C_ExecuteUbergraph_BP_HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUD.BP_HUD_C");
		return ptr;
	}

}


