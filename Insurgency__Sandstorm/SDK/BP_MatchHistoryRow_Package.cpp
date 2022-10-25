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
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MatchHistoryRow_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.OnFocusReceived");
		
		UBP_MatchHistoryRow_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.SetPreferredWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MatchHistoryRow_C::SetPreferredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.SetPreferredWeapon");
		
		UBP_MatchHistoryRow_C_SetPreferredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.SetSelectedState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchHistoryRow_C::SetSelectedState(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.SetSelectedState");
		
		UBP_MatchHistoryRow_C_SetSelectedState_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.Build Played as Text
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              PlayedAsTeams                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBP_MatchHistoryRow_C::Build_Played_as_Text(TArray<class FString>* PlayedAsTeams, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.Build Played as Text");
		
		UBP_MatchHistoryRow_C_Build_Played_as_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayedAsTeams != nullptr)
			*PlayedAsTeams = params.PlayedAsTeams;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MatchHistoryRow_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.Initialize");
		
		UBP_MatchHistoryRow_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BP_OnEntryReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_MatchHistoryRow_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BP_OnEntryReleased");
		
		UBP_MatchHistoryRow_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BP_OnItemSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchHistoryRow_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BP_OnItemSelectionChanged");
		
		UBP_MatchHistoryRow_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BP_OnItemExpansionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchHistoryRow_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BP_OnItemExpansionChanged");
		
		UBP_MatchHistoryRow_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BndEvt__BtnReplayCopyId_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchHistoryRow_C::BndEvt__BtnReplayCopyId_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BndEvt__BtnReplayCopyId_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature");
		
		UBP_MatchHistoryRow_C_BndEvt__BtnReplayCopyId_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature_Params params {};
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.OnListItemObjectSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchHistoryRow_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.OnListItemObjectSet");
		
		UBP_MatchHistoryRow_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MatchHistoryRow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.Construct");
		
		UBP_MatchHistoryRow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BndEvt__BtnReplayWatch_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchHistoryRow_C::BndEvt__BtnReplayWatch_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature(int32_t TabIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.BndEvt__BtnReplayWatch_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature");
		
		UBP_MatchHistoryRow_C_BndEvt__BtnReplayWatch_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature_Params params {};
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.ExecuteUbergraph_BP_MatchHistoryRow
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchHistoryRow_C::ExecuteUbergraph_BP_MatchHistoryRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistoryRow.BP_MatchHistoryRow_C.ExecuteUbergraph_BP_MatchHistoryRow");
		
		UBP_MatchHistoryRow_C_ExecuteUbergraph_BP_MatchHistoryRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MatchHistoryRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MatchHistoryRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MatchHistoryRow.BP_MatchHistoryRow_C");
		return ptr;
	}

}


