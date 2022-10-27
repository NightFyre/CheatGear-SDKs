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
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.SetInitialFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ReplayBrowser_C::SetInitialFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.SetInitialFocus");
		
		UBP_ReplayBrowser_C_SetInitialFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_ReplayBrowser_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.OnFocusReceived");
		
		UBP_ReplayBrowser_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.SetFilters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPersonal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ReplayBrowser_C::SetFilters(bool bPersonal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.SetFilters");
		
		UBP_ReplayBrowser_C_SetFilters_Params params {};
		params.bPersonal = bPersonal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.Get_StatusLoadingText_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_ReplayBrowser_C::Get_StatusLoadingText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.Get_StatusLoadingText_Text_1");
		
		UBP_ReplayBrowser_C_Get_StatusLoadingText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.Get_BtnRefreshRecentStreams_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_ReplayBrowser_C::Get_BtnRefreshRecentStreams_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.Get_BtnRefreshRecentStreams_bIsEnabled_1");
		
		UBP_ReplayBrowser_C_Get_BtnRefreshRecentStreams_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.RefreshList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ReplayBrowser_C::RefreshList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.RefreshList");
		
		UBP_ReplayBrowser_C_RefreshList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.OnReplaysEnumerated_A45BCCCF45C73ECEA0E21695A412F751
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FReplayBrowserInfo>                  Streams                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_ReplayBrowser_C::OnReplaysEnumerated_A45BCCCF45C73ECEA0E21695A412F751(TArray<struct FReplayBrowserInfo> Streams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.OnReplaysEnumerated_A45BCCCF45C73ECEA0E21695A412F751");
		
		UBP_ReplayBrowser_C_OnReplaysEnumerated_A45BCCCF45C73ECEA0E21695A412F751_Params params {};
		params.Streams = Streams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ReplayBrowser_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.Construct");
		
		UBP_ReplayBrowser_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.BndEvt__BP_SpecialButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ReplayBrowser_C::BndEvt__BP_SpecialButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.BndEvt__BP_SpecialButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UBP_ReplayBrowser_C_BndEvt__BP_SpecialButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.BndEvt__BP_SpecialButton_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_ReplayBrowser_C::BndEvt__BP_SpecialButton_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.BndEvt__BP_SpecialButton_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UBP_ReplayBrowser_C_BndEvt__BP_SpecialButton_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.LoadReplayList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ReplayBrowser_C::LoadReplayList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.LoadReplayList");
		
		UBP_ReplayBrowser_C_LoadReplayList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.WatchReplayByID
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ConfirmText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ReplayBrowser_C::WatchReplayByID(const class FText& ConfirmText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.WatchReplayByID");
		
		UBP_ReplayBrowser_C_WatchReplayByID_Params params {};
		params.ConfirmText = ConfirmText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.CanceledReplayByID
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ReplayBrowser_C::CanceledReplayByID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.CanceledReplayByID");
		
		UBP_ReplayBrowser_C_CanceledReplayByID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.ConfirmedReplayByID
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ReplayBrowser_C::ConfirmedReplayByID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.ConfirmedReplayByID");
		
		UBP_ReplayBrowser_C_ConfirmedReplayByID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ReplayBrowser.BP_ReplayBrowser_C.ExecuteUbergraph_BP_ReplayBrowser
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ReplayBrowser_C::ExecuteUbergraph_BP_ReplayBrowser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ReplayBrowser.BP_ReplayBrowser_C.ExecuteUbergraph_BP_ReplayBrowser");
		
		UBP_ReplayBrowser_C_ExecuteUbergraph_BP_ReplayBrowser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ReplayBrowser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ReplayBrowser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ReplayBrowser.BP_ReplayBrowser_C");
		return ptr;
	}

}


