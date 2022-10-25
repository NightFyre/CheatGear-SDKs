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
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.GainFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_CallVoteMenu_C::GainFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.GainFocus");
		
		UBP_Widget_CallVoteMenu_C_GainFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.GetSelectedOption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      SelectedOption                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_CallVoteMenu_C::GetSelectedOption(class FString* SelectedOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.GetSelectedOption");
		
		UBP_Widget_CallVoteMenu_C_GetSelectedOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedOption != nullptr)
			*SelectedOption = params.SelectedOption;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.PopulateOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_CallVoteMenu_C::PopulateOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.PopulateOptions");
		
		UBP_Widget_CallVoteMenu_C_PopulateOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.GetSelectedVoteIssueClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      VoteClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_CallVoteMenu_C::GetSelectedVoteIssueClass(class UClass** VoteClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.GetSelectedVoteIssueClass");
		
		UBP_Widget_CallVoteMenu_C_GetSelectedVoteIssueClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VoteClass != nullptr)
			*VoteClass = params.VoteClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.AddPlayer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AINSPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_CallVoteMenu_C::AddPlayer(class AINSPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.AddPlayer");
		
		UBP_Widget_CallVoteMenu_C_AddPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.PopulatePlayers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSameTeamOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_CallVoteMenu_C::PopulatePlayers(bool bSameTeamOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.PopulatePlayers");
		
		UBP_Widget_CallVoteMenu_C_PopulatePlayers_Params params {};
		params.bSameTeamOnly = bSameTeamOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.CallVote
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                TargetPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_CallVoteMenu_C::CallVote(class APlayerState* TargetPlayer, const class FString& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.CallVote");
		
		UBP_Widget_CallVoteMenu_C_CallVote_Params params {};
		params.TargetPlayer = TargetPlayer;
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_CallVoteMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.Construct");
		
		UBP_Widget_CallVoteMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.OnIssueClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ContextValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            IssueIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_CallVoteMenu_C::OnIssueClicked(const class FString& ContextValue, int32_t IssueIndex, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.OnIssueClicked");
		
		UBP_Widget_CallVoteMenu_C_OnIssueClicked_Params params {};
		params.ContextValue = ContextValue;
		params.IssueIndex = IssueIndex;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.OnPlayerButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ContextValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_CallVoteMenu_C::OnPlayerButtonClicked(const class FString& ContextValue, int32_t PlayerIndex, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.OnPlayerButtonClicked");
		
		UBP_Widget_CallVoteMenu_C_OnPlayerButtonClicked_Params params {};
		params.ContextValue = ContextValue;
		params.PlayerIndex = PlayerIndex;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCloseButtonPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_CallVoteMenu_C::BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCloseButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCloseButtonPressed__DelegateSignature");
		
		UBP_Widget_CallVoteMenu_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_0_OnCloseButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_1_OnCanceled__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_CallVoteMenu_C::BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_1_OnCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_1_OnCanceled__DelegateSignature");
		
		UBP_Widget_CallVoteMenu_C_BndEvt__BP_GenericDialog_K2Node_ComponentBoundEvent_1_OnCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_CallVoteMenu_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.OnInitialized");
		
		UBP_Widget_CallVoteMenu_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.RestoreWidgetFocus
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_CallVoteMenu_C::RestoreWidgetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.RestoreWidgetFocus");
		
		UBP_Widget_CallVoteMenu_C_RestoreWidgetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.ExecuteUbergraph_BP_Widget_CallVoteMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_CallVoteMenu_C::ExecuteUbergraph_BP_Widget_CallVoteMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C.ExecuteUbergraph_BP_Widget_CallVoteMenu");
		
		UBP_Widget_CallVoteMenu_C_ExecuteUbergraph_BP_Widget_CallVoteMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_CallVoteMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_CallVoteMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_CallVoteMenu.BP_Widget_CallVoteMenu_C");
		return ptr;
	}

}


