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
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetRowToFocus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_Widget_Scoreboard_PlayerRow_C*           RowToFocus                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_Column_C::GetRowToFocus(class UBP_Widget_Scoreboard_PlayerRow_C** RowToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetRowToFocus");
		
		UBP_Widget_Scoreboard_Column_C_GetRowToFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowToFocus != nullptr)
			*RowToFocus = params.RowToFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OnScoreboardHidden
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_Column_C::OnScoreboardHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OnScoreboardHidden");
		
		UBP_Widget_Scoreboard_Column_C_OnScoreboardHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OnPlayerMenuDialogClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_Column_C::OnPlayerMenuDialogClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OnPlayerMenuDialogClosed");
		
		UBP_Widget_Scoreboard_Column_C_OnPlayerMenuDialogClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetNextRowToNavigate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Down                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBP_Widget_Scoreboard_PlayerRow_C*           RowToFocus                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_Column_C::GetNextRowToNavigate(bool Down, class UBP_Widget_Scoreboard_PlayerRow_C** RowToFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetNextRowToNavigate");
		
		UBP_Widget_Scoreboard_Column_C_GetNextRowToNavigate_Params params {};
		params.Down = Down;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowToFocus != nullptr)
			*RowToFocus = params.RowToFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.DoCreatePlayerRowWidget
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBP_Widget_Scoreboard_Column_C::DoCreatePlayerRowWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.DoCreatePlayerRowWidget");
		
		UBP_Widget_Scoreboard_Column_C_DoCreatePlayerRowWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_Widget_Scoreboard_Column_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OnFocusReceived");
		
		UBP_Widget_Scoreboard_Column_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.CheckRowAtIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AINSPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMatches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWidget_Scoreboard_PlayerRow*                RowWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_Column_C::CheckRowAtIndex(class AINSPlayerState* PlayerState, int32_t Index, bool* bMatches, class UWidget_Scoreboard_PlayerRow** RowWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.CheckRowAtIndex");
		
		UBP_Widget_Scoreboard_Column_C_CheckRowAtIndex_Params params {};
		params.PlayerState = PlayerState;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bMatches != nullptr)
			*bMatches = params.bMatches;
		if (RowWidget != nullptr)
			*RowWidget = params.RowWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetFactionBannerBrush_PreColored
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_Widget_Scoreboard_Column_C::GetFactionBannerBrush_PreColored()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetFactionBannerBrush_PreColored");
		
		UBP_Widget_Scoreboard_Column_C_GetFactionBannerBrush_PreColored_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetWinTextText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_Widget_Scoreboard_Column_C::GetWinTextText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetWinTextText");
		
		UBP_Widget_Scoreboard_Column_C_GetWinTextText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetFactionNameText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_Widget_Scoreboard_Column_C::GetFactionNameText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetFactionNameText");
		
		UBP_Widget_Scoreboard_Column_C_GetFactionNameText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetTeamScoreText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_Widget_Scoreboard_Column_C::GetTeamScoreText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.GetTeamScoreText");
		
		UBP_Widget_Scoreboard_Column_C_GetTeamScoreText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_Column_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.Destruct");
		
		UBP_Widget_Scoreboard_Column_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_Column_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.Tick");
		
		UBP_Widget_Scoreboard_Column_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.DoSetTacticalMapToPlayerWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     InPlayerWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_Column_C::DoSetTacticalMapToPlayerWidget(class UWidget* InPlayerWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.DoSetTacticalMapToPlayerWidget");
		
		UBP_Widget_Scoreboard_Column_C_DoSetTacticalMapToPlayerWidget_Params params {};
		params.InPlayerWidget = InPlayerWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OpenMenuForPlayer
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AINSPlayerState*                             InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_Column_C::OpenMenuForPlayer(class AINSPlayerState* InPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.OpenMenuForPlayer");
		
		UBP_Widget_Scoreboard_Column_C_OpenMenuForPlayer_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.BndEvt__JoinFaction_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_Column_C::BndEvt__JoinFaction_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.BndEvt__JoinFaction_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");
		
		UBP_Widget_Scoreboard_Column_C_BndEvt__JoinFaction_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_Scoreboard_Column_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.Construct");
		
		UBP_Widget_Scoreboard_Column_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.UpdateSelectButtonOnConsole
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsRowSelectable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_Scoreboard_Column_C::UpdateSelectButtonOnConsole(bool bIsRowSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.UpdateSelectButtonOnConsole");
		
		UBP_Widget_Scoreboard_Column_C_UpdateSelectButtonOnConsole_Params params {};
		params.bIsRowSelectable = bIsRowSelectable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.ExecuteUbergraph_BP_Widget_Scoreboard_Column
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_Scoreboard_Column_C::ExecuteUbergraph_BP_Widget_Scoreboard_Column(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C.ExecuteUbergraph_BP_Widget_Scoreboard_Column");
		
		UBP_Widget_Scoreboard_Column_C_ExecuteUbergraph_BP_Widget_Scoreboard_Column_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_Scoreboard_Column_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_Scoreboard_Column_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_Scoreboard_Column.BP_Widget_Scoreboard_Column_C");
		return ptr;
	}

}


