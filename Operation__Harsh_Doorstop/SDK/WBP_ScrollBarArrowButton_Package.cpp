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
	 * 		Name   -> Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.GetMaxScrollOffset
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              MaxOffset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScrollBarArrowButton_C::GetMaxScrollOffset(float* MaxOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.GetMaxScrollOffset");
		
		UWBP_ScrollBarArrowButton_C_GetMaxScrollOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxOffset != nullptr)
			*MaxOffset = params.MaxOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.IsInitialized
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bInitialized                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ScrollBarArrowButton_C::IsInitialized(bool* bInitialized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.IsInitialized");
		
		UWBP_ScrollBarArrowButton_C_IsInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bInitialized != nullptr)
			*bInitialized = params.bInitialized;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.SetScrollBox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBoxToUse                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScrollBarArrowButton_C::SetScrollBox(class UScrollBox* ScrollBoxToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.SetScrollBox");
		
		UWBP_ScrollBarArrowButton_C_SetScrollBox_Params params {};
		params.ScrollBoxToUse = ScrollBoxToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_ScrollBarArrowButton_C::BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ScrollBarArrowButton_C_BndEvt__ArrowBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ScrollBarArrowButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.PreConstruct");
		
		UWBP_ScrollBarArrowButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_ScrollBarArrowButton_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.OnInitialized");
		
		UWBP_ScrollBarArrowButton_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.ExecuteUbergraph_WBP_ScrollBarArrowButton
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScrollBarArrowButton_C::ExecuteUbergraph_WBP_ScrollBarArrowButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C.ExecuteUbergraph_WBP_ScrollBarArrowButton");
		
		UWBP_ScrollBarArrowButton_C_ExecuteUbergraph_WBP_ScrollBarArrowButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ScrollBarArrowButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ScrollBarArrowButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ScrollBarArrowButton.WBP_ScrollBarArrowButton_C");
		return ptr;
	}

}


