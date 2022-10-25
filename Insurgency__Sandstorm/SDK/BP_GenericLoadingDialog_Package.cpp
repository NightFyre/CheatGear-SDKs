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
	 * 		Name   -> Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_GenericLoadingDialog_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.OnFocusReceived");
		
		UBP_GenericLoadingDialog_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_GenericLoadingDialog_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.PreConstruct");
		
		UBP_GenericLoadingDialog_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.BndEvt__DialogWidget_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_GenericLoadingDialog_C::BndEvt__DialogWidget_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.BndEvt__DialogWidget_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature");
		
		UBP_GenericLoadingDialog_C_BndEvt__DialogWidget_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.ExecuteUbergraph_BP_GenericLoadingDialog
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_GenericLoadingDialog_C::ExecuteUbergraph_BP_GenericLoadingDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.ExecuteUbergraph_BP_GenericLoadingDialog");
		
		UBP_GenericLoadingDialog_C_ExecuteUbergraph_BP_GenericLoadingDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.OnActionCancelled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GenericLoadingDialog_C::OnActionCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GenericLoadingDialog.BP_GenericLoadingDialog_C.OnActionCancelled__DelegateSignature");
		
		UBP_GenericLoadingDialog_C_OnActionCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_GenericLoadingDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_GenericLoadingDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GenericLoadingDialog.BP_GenericLoadingDialog_C");
		return ptr;
	}

}


