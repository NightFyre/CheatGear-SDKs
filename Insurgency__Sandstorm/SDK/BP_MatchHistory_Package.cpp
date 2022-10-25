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
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.OnLoadedTransitionAnimationFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MatchHistory_C::OnLoadedTransitionAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.OnLoadedTransitionAnimationFinished");
		
		UBP_MatchHistory_C_OnLoadedTransitionAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MatchHistory_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.OnFocusReceived");
		
		UBP_MatchHistory_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.OnMatchHistoryLoaded
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMatchHistory                               NewHistory                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MatchHistory_C::OnMatchHistoryLoaded(const struct FMatchHistory& NewHistory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.OnMatchHistoryLoaded");
		
		UBP_MatchHistory_C_OnMatchHistoryLoaded_Params params {};
		params.NewHistory = NewHistory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.LoadHistory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MatchHistory_C::LoadHistory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.LoadHistory");
		
		UBP_MatchHistory_C_LoadHistory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__ListView_53_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MatchHistory_C::BndEvt__ListView_53_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__ListView_53_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature");
		
		UBP_MatchHistory_C_BndEvt__ListView_53_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__EnterReplayIdButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MatchHistory_C::BndEvt__EnterReplayIdButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__EnterReplayIdButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBP_MatchHistory_C_BndEvt__EnterReplayIdButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.WatchReplayByID
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ConfirmText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MatchHistory_C::WatchReplayByID(const class FText& ConfirmText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.WatchReplayByID");
		
		UBP_MatchHistory_C_WatchReplayByID_Params params {};
		params.ConfirmText = ConfirmText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.CanceledReplayByID
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MatchHistory_C::CanceledReplayByID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.CanceledReplayByID");
		
		UBP_MatchHistory_C_CanceledReplayByID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.ConfirmedReplayByID
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MatchHistory_C::ConfirmedReplayByID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.ConfirmedReplayByID");
		
		UBP_MatchHistory_C_ConfirmedReplayByID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MatchHistory_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.Construct");
		
		UBP_MatchHistory_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__ListView_53_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchHistory_C::BndEvt__ListView_53_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__ListView_53_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature");
		
		UBP_MatchHistory_C_BndEvt__ListView_53_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__ListView_53_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchHistory_C::BndEvt__ListView_53_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.BndEvt__ListView_53_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");
		
		UBP_MatchHistory_C_BndEvt__ListView_53_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MatchHistory.BP_MatchHistory_C.ExecuteUbergraph_BP_MatchHistory
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MatchHistory_C::ExecuteUbergraph_BP_MatchHistory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MatchHistory.BP_MatchHistory_C.ExecuteUbergraph_BP_MatchHistory");
		
		UBP_MatchHistory_C_ExecuteUbergraph_BP_MatchHistory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MatchHistory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MatchHistory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MatchHistory.BP_MatchHistory_C");
		return ptr;
	}

}


