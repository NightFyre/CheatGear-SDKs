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
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.GetAppearanceCreditVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_PostMatch_C::GetAppearanceCreditVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.GetAppearanceCreditVisibility");
		
		UBP_MainMenu_PostMatch_C_GetAppearanceCreditVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.GetLastKnownAppearanceCreditBalance
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MainMenu_PostMatch_C::GetLastKnownAppearanceCreditBalance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.GetLastKnownAppearanceCreditBalance");
		
		UBP_MainMenu_PostMatch_C_GetLastKnownAppearanceCreditBalance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_BtnNextMatch_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_MainMenu_PostMatch_C::Get_BtnNextMatch_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_BtnNextMatch_bIsEnabled_1");
		
		UBP_MainMenu_PostMatch_C_Get_BtnNextMatch_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_SectionText_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MainMenu_PostMatch_C::Get_SectionText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_SectionText_Text_1");
		
		UBP_MainMenu_PostMatch_C_Get_SectionText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_TextNextQueueIn_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_MainMenu_PostMatch_C::Get_TextNextQueueIn_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_TextNextQueueIn_Visibility_1");
		
		UBP_MainMenu_PostMatch_C_Get_TextNextQueueIn_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_TextNextQueueIn_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MainMenu_PostMatch_C::Get_TextNextQueueIn_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_TextNextQueueIn_Text_1");
		
		UBP_MainMenu_PostMatch_C_Get_TextNextQueueIn_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_PostMatch_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnKeyDown");
		
		UBP_MainMenu_PostMatch_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_PostMatch_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnFocusReceived");
		
		UBP_MainMenu_PostMatch_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_PlayerName_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MainMenu_PostMatch_C::Get_PlayerName_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.Get_PlayerName_Text_1");
		
		UBP_MainMenu_PostMatch_C_Get_PlayerName_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnPageSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EnumMainMenuPage                                   NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_PostMatch_C::OnPageSelected(EnumMainMenuPage NewPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnPageSelected");
		
		UBP_MainMenu_PostMatch_C_OnPageSelected_Params params {};
		params.NewPage = NewPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_211_OnTabSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_PostMatch_C::BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_211_OnTabSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_211_OnTabSelected__DelegateSignature");
		
		UBP_MainMenu_PostMatch_C_BndEvt__BP_MenuTabs_K2Node_ComponentBoundEvent_211_OnTabSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_MainMenu_PostMatch_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__ButtonNextMatch_K2Node_ComponentBoundEvent_199_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_C::BndEvt__ButtonNextMatch_K2Node_ComponentBoundEvent_199_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__ButtonNextMatch_K2Node_ComponentBoundEvent_199_OnClick__DelegateSignature");
		
		UBP_MainMenu_PostMatch_C_BndEvt__ButtonNextMatch_K2Node_ComponentBoundEvent_199_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_238_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_238_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_238_OnClick__DelegateSignature");
		
		UBP_MainMenu_PostMatch_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_238_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnPanelClosed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_C::OnPanelClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnPanelClosed");
		
		UBP_MainMenu_PostMatch_C_OnPanelClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.ExecuteUbergraph_BP_MainMenu_PostMatch
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_PostMatch_C::ExecuteUbergraph_BP_MainMenu_PostMatch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.ExecuteUbergraph_BP_MainMenu_PostMatch");
		
		UBP_MainMenu_PostMatch_C_ExecuteUbergraph_BP_MainMenu_PostMatch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_PostMatch_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_PostMatch_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnOpenServerBrowser__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_PostMatch_C::OnOpenServerBrowser__DelegateSignature(const class FName& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C.OnOpenServerBrowser__DelegateSignature");
		
		UBP_MainMenu_PostMatch_C_OnOpenServerBrowser__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_PostMatch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_PostMatch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_PostMatch.BP_MainMenu_PostMatch_C");
		return ptr;
	}

}


