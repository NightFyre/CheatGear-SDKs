/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_Toggle.WBP_Toggle_C.UpdateDesignerView
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_Toggle_C::UpdateDesignerView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Toggle.WBP_Toggle_C.UpdateDesignerView");
		
		UWBP_Toggle_C_UpdateDesignerView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_Toggle.WBP_Toggle_C.IsToggledOn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bToggledOn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Toggle_C::IsToggledOn(bool* bToggledOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Toggle.WBP_Toggle_C.IsToggledOn");
		
		UWBP_Toggle_C_IsToggledOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bToggledOn != nullptr)
			*bToggledOn = params.bToggledOn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_Toggle.WBP_Toggle_C.SetToggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInToggle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Toggle_C::SetToggle(bool bInToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Toggle.WBP_Toggle_C.SetToggle");
		
		UWBP_Toggle_C_SetToggle_Params params {};
		params.bInToggle = bInToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_Toggle.WBP_Toggle_C.BndEvt__OnBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_Toggle_C::BndEvt__OnBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Toggle.WBP_Toggle_C.BndEvt__OnBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature");
		
		UWBP_Toggle_C_BndEvt__OnBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_Toggle.WBP_Toggle_C.BndEvt__OffBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_Toggle_C::BndEvt__OffBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Toggle.WBP_Toggle_C.BndEvt__OffBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature");
		
		UWBP_Toggle_C_BndEvt__OffBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_Toggle.WBP_Toggle_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Toggle_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Toggle.WBP_Toggle_C.PreConstruct");
		
		UWBP_Toggle_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_Toggle.WBP_Toggle_C.ExecuteUbergraph_WBP_Toggle
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Toggle_C::ExecuteUbergraph_WBP_Toggle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Toggle.WBP_Toggle_C.ExecuteUbergraph_WBP_Toggle");
		
		UWBP_Toggle_C_ExecuteUbergraph_WBP_Toggle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_Toggle.WBP_Toggle_C.ToggleStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bToggledOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Toggle_C::ToggleStateChanged__DelegateSignature(bool bToggledOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Toggle.WBP_Toggle_C.ToggleStateChanged__DelegateSignature");
		
		UWBP_Toggle_C_ToggleStateChanged__DelegateSignature_Params params {};
		params.bToggledOn = bToggledOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Toggle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Toggle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Toggle.WBP_Toggle_C");
		return ptr;
	}

}


