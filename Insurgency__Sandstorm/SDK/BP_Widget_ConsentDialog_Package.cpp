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
	 * 		Name   -> Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_ConsentDialog_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.PreConstruct");
		
		UBP_Widget_ConsentDialog_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.BndEvt__InnerDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_ConsentDialog_C::BndEvt__InnerDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.BndEvt__InnerDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature");
		
		UBP_Widget_ConsentDialog_C_BndEvt__InnerDialog_K2Node_ComponentBoundEvent_0_OnCanceled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.BndEvt__InnerDialog_K2Node_ComponentBoundEvent_1_OnConfirmed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Widget_ConsentDialog_C::BndEvt__InnerDialog_K2Node_ComponentBoundEvent_1_OnConfirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.BndEvt__InnerDialog_K2Node_ComponentBoundEvent_1_OnConfirmed__DelegateSignature");
		
		UBP_Widget_ConsentDialog_C_BndEvt__InnerDialog_K2Node_ComponentBoundEvent_1_OnConfirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.ExecuteUbergraph_BP_Widget_ConsentDialog
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_ConsentDialog_C::ExecuteUbergraph_BP_Widget_ConsentDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.ExecuteUbergraph_BP_Widget_ConsentDialog");
		
		UBP_Widget_ConsentDialog_C_ExecuteUbergraph_BP_Widget_ConsentDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.OnConfirmed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCheckboxSelected                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_ConsentDialog_C::OnConfirmed__DelegateSignature(bool bCheckboxSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.OnConfirmed__DelegateSignature");
		
		UBP_Widget_ConsentDialog_C_OnConfirmed__DelegateSignature_Params params {};
		params.bCheckboxSelected = bCheckboxSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.OnCancelled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_ConsentDialog_C::OnCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C.OnCancelled__DelegateSignature");
		
		UBP_Widget_ConsentDialog_C_OnCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_ConsentDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_ConsentDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_ConsentDialog.BP_Widget_ConsentDialog_C");
		return ptr;
	}

}


