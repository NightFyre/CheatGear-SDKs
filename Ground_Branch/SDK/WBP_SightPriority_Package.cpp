/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.IsDirty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDirty                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SightPriority_C::IsDirty(bool* IsDirty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.IsDirty");
		
		UWBP_SightPriority_C_IsDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDirty != nullptr)
			*IsDirty = params.IsDirty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.GetKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_SightPriority_C::GetKey(class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.GetKey");
		
		UWBP_SightPriority_C_GetKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.Get_Button_1_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_SightPriority_C::Get_Button_1_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.Get_Button_1_ToolTipWidget_1");
		
		UWBP_SightPriority_C_Get_Button_1_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.SightPrioritesToStringArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutSring                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_SightPriority_C::SightPrioritesToStringArray(class FString* OutSring)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.SightPrioritesToStringArray");
		
		UWBP_SightPriority_C_SightPrioritesToStringArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSring != nullptr)
			*OutSring = params.OutSring;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.SetKeyValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyValueAsString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_SightPriority_C::SetKeyValue(const class FString& KeyValueAsString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.SetKeyValue");
		
		UWBP_SightPriority_C_SetKeyValue_Params params {};
		params.KeyValueAsString = KeyValueAsString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SightPriority_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_SightPriority_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SightPriority_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_SightPriority_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_SightPriority_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.Construct");
		
		UWBP_SightPriority_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.SetConfigValue
	 * 		Flags  -> ()
	 */
	void UWBP_SightPriority_C::SetConfigValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.SetConfigValue");
		
		UWBP_SightPriority_C_SetConfigValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.RevertToInitialValue
	 * 		Flags  -> ()
	 */
	void UWBP_SightPriority_C::RevertToInitialValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.RevertToInitialValue");
		
		UWBP_SightPriority_C_RevertToInitialValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWBP_SightPriority_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.Refresh");
		
		UWBP_SightPriority_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.SetDefaultValue
	 * 		Flags  -> ()
	 */
	void UWBP_SightPriority_C::SetDefaultValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.SetDefaultValue");
		
		UWBP_SightPriority_C_SetDefaultValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.UpdateText
	 * 		Flags  -> ()
	 */
	void UWBP_SightPriority_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.UpdateText");
		
		UWBP_SightPriority_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SightPriority.WBP_SightPriority_C.ExecuteUbergraph_WBP_SightPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SightPriority_C::ExecuteUbergraph_WBP_SightPriority(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SightPriority.WBP_SightPriority_C.ExecuteUbergraph_WBP_SightPriority");
		
		UWBP_SightPriority_C_ExecuteUbergraph_WBP_SightPriority_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SightPriority_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SightPriority_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SightPriority.WBP_SightPriority_C");
		return ptr;
	}

}


