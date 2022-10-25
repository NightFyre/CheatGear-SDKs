/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.UpdateTacticalMap
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::UpdateTacticalMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.UpdateTacticalMap");
		
		UBP_InGameMenu_ClassSelect_C_UpdateTacticalMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.ToggleTacticalMap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::ToggleTacticalMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.ToggleTacticalMap");
		
		UBP_InGameMenu_ClassSelect_C_ToggleTacticalMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CreateClassButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerClassLimit                           ClassLimit                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UPlayerClass*                                PlayerClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATeamInfo*                                   Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_ClassSelect_ClassButton_C*               ClassButton                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::CreateClassButton(const struct FPlayerClassLimit& ClassLimit, class UPlayerClass* PlayerClass, class ATeamInfo* Team, int32_t SlotNumber, class UBP_ClassSelect_ClassButton_C** ClassButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CreateClassButton");
		
		UBP_InGameMenu_ClassSelect_C_CreateClassButton_Params params {};
		params.ClassLimit = ClassLimit;
		params.PlayerClass = PlayerClass;
		params.Team = Team;
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClassButton != nullptr)
			*ClassButton = params.ClassButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetPlayerExperience
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerExperience                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::GetPlayerExperience(int32_t* PlayerExperience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetPlayerExperience");
		
		UBP_InGameMenu_ClassSelect_C_GetPlayerExperience_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerExperience != nullptr)
			*PlayerExperience = params.PlayerExperience;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.Get_ToolTipClassLockInfoText_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_ClassSelect_C::Get_ToolTipClassLockInfoText_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.Get_ToolTipClassLockInfoText_Visibility");
		
		UBP_InGameMenu_ClassSelect_C_Get_ToolTipClassLockInfoText_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.IsClassRestricted
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerClassLimit                           ClassLimit                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_ClassSelect_C::IsClassRestricted(const struct FPlayerClassLimit& ClassLimit, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.IsClassRestricted");
		
		UBP_InGameMenu_ClassSelect_C_IsClassRestricted_Params params {};
		params.ClassLimit = ClassLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.HideHints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::HideHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.HideHints");
		
		UBP_InGameMenu_ClassSelect_C_HideHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.ToggleHints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::ToggleHints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.ToggleHints");
		
		UBP_InGameMenu_ClassSelect_C_ToggleHints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_InGameMenu_ClassSelect_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnKeyDown");
		
		UBP_InGameMenu_ClassSelect_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_InGameMenu_ClassSelect_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnFocusReceived");
		
		UBP_InGameMenu_ClassSelect_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateMutatorList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::PopulateMutatorList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateMutatorList");
		
		UBP_InGameMenu_ClassSelect_C_PopulateMutatorList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.UpdateTeamSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::UpdateTeamSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.UpdateTeamSelection");
		
		UBP_InGameMenu_ClassSelect_C_UpdateTeamSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CheckForPlayerStateReplication
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::CheckForPlayerStateReplication()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CheckForPlayerStateReplication");
		
		UBP_InGameMenu_ClassSelect_C_CheckForPlayerStateReplication_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BindPlayerControllerDelegates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::BindPlayerControllerDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BindPlayerControllerDelegates");
		
		UBP_InGameMenu_ClassSelect_C_BindPlayerControllerDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.SetIsUsingGamepad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsingController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EeInputIconType                                    IconType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::SetIsUsingGamepad(bool bUsingController, EeInputIconType IconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.SetIsUsingGamepad");
		
		UBP_InGameMenu_ClassSelect_C_SetIsUsingGamepad_Params params {};
		params.bUsingController = bUsingController;
		params.IconType = IconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.LoadMapOverview
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Loaded                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_ClassSelect_C::LoadMapOverview(bool* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.LoadMapOverview");
		
		UBP_InGameMenu_ClassSelect_C_LoadMapOverview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loaded != nullptr)
			*Loaded = params.Loaded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetTeamIconVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_InGameMenu_ClassSelect_C::GetTeamIconVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetTeamIconVisibility");
		
		UBP_InGameMenu_ClassSelect_C_GetTeamIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CheckForGameStateReplication
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::CheckForGameStateReplication()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CheckForGameStateReplication");
		
		UBP_InGameMenu_ClassSelect_C_CheckForGameStateReplication_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.RefreshCurrentClassInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlayerClass*                                Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPlayerClassLimit                           ClassLimit                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_ClassSelect_C::RefreshCurrentClassInfo(class UPlayerClass* Class, int32_t Slot, const struct FPlayerClassLimit& ClassLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.RefreshCurrentClassInfo");
		
		UBP_InGameMenu_ClassSelect_C_RefreshCurrentClassInfo_Params params {};
		params.Class = Class;
		params.Slot = Slot;
		params.ClassLimit = ClassLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateGameRuleList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_ClassSelect_C::PopulateGameRuleList(bool* Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateGameRuleList");
		
		UBP_InGameMenu_ClassSelect_C_PopulateGameRuleList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Completed != nullptr)
			*Completed = params.Completed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.RestoreKeyboardListFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                VerticalBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::RestoreKeyboardListFocus(class UPanelWidget* VerticalBox, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.RestoreKeyboardListFocus");
		
		UBP_InGameMenu_ClassSelect_C_RestoreKeyboardListFocus_Params params {};
		params.VerticalBox = VerticalBox;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetFocusedListIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPanelWidget*                                Panel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::GetFocusedListIndex(class UPanelWidget* Panel, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetFocusedListIndex");
		
		UBP_InGameMenu_ClassSelect_C_GetFocusedListIndex_Params params {};
		params.Panel = Panel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnNavigateFromConfirm
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     WidgetToFocus                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnNavigateFromConfirm(class UWidget** WidgetToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnNavigateFromConfirm");
		
		UBP_InGameMenu_ClassSelect_C_OnNavigateFromConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WidgetToFocus != nullptr)
			*WidgetToFocus = params.WidgetToFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnNavigateToConfirm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnNavigateToConfirm(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnNavigateToConfirm");
		
		UBP_InGameMenu_ClassSelect_C_OnNavigateToConfirm_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_InGameMenu_ClassSelect_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnCustomNavigation");
		
		UBP_InGameMenu_ClassSelect_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetFirstButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::GetFirstButton(class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.GetFirstButton");
		
		UBP_InGameMenu_ClassSelect_C_GetFirstButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.Get_ConfirmButton_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_InGameMenu_ClassSelect_C::Get_ConfirmButton_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.Get_ConfirmButton_bIsEnabled_1");
		
		UBP_InGameMenu_ClassSelect_C_Get_ConfirmButton_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateClasses
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::PopulateClasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateClasses");
		
		UBP_InGameMenu_ClassSelect_C_PopulateClasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateTeams
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::PopulateTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.PopulateTeams");
		
		UBP_InGameMenu_ClassSelect_C_PopulateTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.Construct");
		
		UBP_InGameMenu_ClassSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnTeamButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnTeamButtonPressed(unsigned char TeamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnTeamButtonPressed");
		
		UBP_InGameMenu_ClassSelect_C_OnTeamButtonPressed_Params params {};
		params.TeamId = TeamId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPlayerTeamChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      FactionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATeamInfo*                                   FactionInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnPlayerTeamChanged(unsigned char FactionId, class ATeamInfo* FactionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPlayerTeamChanged");
		
		UBP_InGameMenu_ClassSelect_C_OnPlayerTeamChanged_Params params {};
		params.FactionId = FactionId;
		params.FactionInfo = FactionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnClassButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlayerClass*                                Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClassSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnClassButtonPressed(class UPlayerClass* Class, int32_t ClassSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnClassButtonPressed");
		
		UBP_InGameMenu_ClassSelect_C_OnClassButtonPressed_Params params {};
		params.Class = Class;
		params.ClassSlot = ClassSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPlayerClassChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlayerClass*                                NewClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnPlayerClassChanged(class UPlayerClass* NewClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPlayerClassChanged");
		
		UBP_InGameMenu_ClassSelect_C_OnPlayerClassChanged_Params params {};
		params.NewClass = NewClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPanelOpened
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnPanelOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPanelOpened");
		
		UBP_InGameMenu_ClassSelect_C_OnPanelOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBP_InGameMenu_ClassSelect_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnClassButtonHoverChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlayerClass*                                Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClassSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HoverValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerClassLimit                           PlayerClassLimit                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnClassButtonHoverChanged(class UPlayerClass* Class, int32_t ClassSlot, bool HoverValue, const struct FPlayerClassLimit& PlayerClassLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnClassButtonHoverChanged");
		
		UBP_InGameMenu_ClassSelect_C_OnClassButtonHoverChanged_Params params {};
		params.Class = Class;
		params.ClassSlot = ClassSlot;
		params.HoverValue = HoverValue;
		params.PlayerClassLimit = PlayerClassLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnRefreshTeams
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnRefreshTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnRefreshTeams");
		
		UBP_InGameMenu_ClassSelect_C_OnRefreshTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_ClassSelect_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EConfirmableEvent                                  ButtonEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature(EConfirmableEvent ButtonEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature");
		
		UBP_InGameMenu_ClassSelect_C_BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_1_OnHover__DelegateSignature_Params params {};
		params.ButtonEvent = ButtonEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_3_OnUnHover__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EConfirmableEvent                                  ButtonEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_3_OnUnHover__DelegateSignature(EConfirmableEvent ButtonEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_3_OnUnHover__DelegateSignature");
		
		UBP_InGameMenu_ClassSelect_C_BndEvt__BP_GametypeInfoButton_K2Node_ComponentBoundEvent_3_OnUnHover__DelegateSignature_Params params {};
		params.ButtonEvent = ButtonEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPanelClosed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnPanelClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnPanelClosed");
		
		UBP_InGameMenu_ClassSelect_C_OnPanelClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BtnToggleTacticalMap_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::BndEvt__BtnToggleTacticalMap_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.BndEvt__BtnToggleTacticalMap_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");
		
		UBP_InGameMenu_ClassSelect_C_BndEvt__BtnToggleTacticalMap_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnRemovedFromFocusPath");
		
		UBP_InGameMenu_ClassSelect_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.CustomEvent_1");
		
		UBP_InGameMenu_ClassSelect_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.ExecuteUbergraph_BP_InGameMenu_ClassSelect
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InGameMenu_ClassSelect_C::ExecuteUbergraph_BP_InGameMenu_ClassSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.ExecuteUbergraph_BP_InGameMenu_ClassSelect");
		
		UBP_InGameMenu_ClassSelect_C_ExecuteUbergraph_BP_InGameMenu_ClassSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnToggleTacticalMap__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnToggleTacticalMap__DelegateSignature(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnToggleTacticalMap__DelegateSignature");
		
		UBP_InGameMenu_ClassSelect_C_OnToggleTacticalMap__DelegateSignature_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnTeamChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnTeamChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnTeamChanged__DelegateSignature");
		
		UBP_InGameMenu_ClassSelect_C_OnTeamChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnNavigateBack__DelegateSignature");
		
		UBP_InGameMenu_ClassSelect_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnClassSelectionConfirm__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InGameMenu_ClassSelect_C::OnClassSelectionConfirm__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C.OnClassSelectionConfirm__DelegateSignature");
		
		UBP_InGameMenu_ClassSelect_C_OnClassSelectionConfirm__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InGameMenu_ClassSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InGameMenu_ClassSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_InGameMenu_ClassSelect.BP_InGameMenu_ClassSelect_C");
		return ptr;
	}

}


