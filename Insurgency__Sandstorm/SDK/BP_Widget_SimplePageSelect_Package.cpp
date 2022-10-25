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
	 * 		Name   -> Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_Widget_SimplePageSelect_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.OnKeyDown");
		
		UBP_Widget_SimplePageSelect_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePageAndTotal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewTotal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_SimplePageSelect_C::UpdatePageAndTotal(int32_t NewPage, int32_t NewTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePageAndTotal");
		
		UBP_Widget_SimplePageSelect_C_UpdatePageAndTotal_Params params {};
		params.NewPage = NewPage;
		params.NewTotal = NewTotal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePageTotal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewTotal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_SimplePageSelect_C::UpdatePageTotal(int32_t NewTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePageTotal");
		
		UBP_Widget_SimplePageSelect_C_UpdatePageTotal_Params params {};
		params.NewTotal = NewTotal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_SimplePageSelect_C::UpdatePage(int32_t NewPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePage");
		
		UBP_Widget_SimplePageSelect_C_UpdatePage_Params params {};
		params.NewPage = NewPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePageDisplay
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_SimplePageSelect_C::UpdatePageDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.UpdatePageDisplay");
		
		UBP_Widget_SimplePageSelect_C_UpdatePageDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_SimplePageSelect_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.PreConstruct");
		
		UBP_Widget_SimplePageSelect_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.BndEvt__BackIcon_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_SimplePageSelect_C::BndEvt__BackIcon_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.BndEvt__BackIcon_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_Widget_SimplePageSelect_C_BndEvt__BackIcon_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.BndEvt__NextIcon_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_SimplePageSelect_C::BndEvt__NextIcon_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.BndEvt__NextIcon_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UBP_Widget_SimplePageSelect_C_BndEvt__NextIcon_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.ExecuteUbergraph_BP_Widget_SimplePageSelect
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_SimplePageSelect_C::ExecuteUbergraph_BP_Widget_SimplePageSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.ExecuteUbergraph_BP_Widget_SimplePageSelect");
		
		UBP_Widget_SimplePageSelect_C_ExecuteUbergraph_BP_Widget_SimplePageSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.OnNavigateNext__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_SimplePageSelect_C::OnNavigateNext__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.OnNavigateNext__DelegateSignature");
		
		UBP_Widget_SimplePageSelect_C_OnNavigateNext__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.OnNavigatePrevious__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_SimplePageSelect_C::OnNavigatePrevious__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C.OnNavigatePrevious__DelegateSignature");
		
		UBP_Widget_SimplePageSelect_C_OnNavigatePrevious__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_SimplePageSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_SimplePageSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_SimplePageSelect.BP_Widget_SimplePageSelect_C");
		return ptr;
	}

}


