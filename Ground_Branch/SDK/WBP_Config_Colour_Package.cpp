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
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.GetKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Colour_C::GetKey(class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.GetKey");
		
		UWBP_Config_Colour_C_GetKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.IsDirty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDirty                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Config_Colour_C::IsDirty(bool* IsDirty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.IsDirty");
		
		UWBP_Config_Colour_C_IsDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDirty != nullptr)
			*IsDirty = params.IsDirty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.SetInitialValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Colour_C::SetInitialValue(const struct FLinearColor& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.SetInitialValue");
		
		UWBP_Config_Colour_C_SetInitialValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Colour_C::SetValue(const struct FLinearColor& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.SetValue");
		
		UWBP_Config_Colour_C_SetValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.SetKeyValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyValueAsString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Colour_C::SetKeyValue(const class FString& KeyValueAsString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.SetKeyValue");
		
		UWBP_Config_Colour_C_SetKeyValue_Params params {};
		params.KeyValueAsString = KeyValueAsString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Config_Colour_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.Construct");
		
		UWBP_Config_Colour_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.SetConfigValue
	 * 		Flags  -> ()
	 */
	void UWBP_Config_Colour_C::SetConfigValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.SetConfigValue");
		
		UWBP_Config_Colour_C_SetConfigValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.RevertToInitialValue
	 * 		Flags  -> ()
	 */
	void UWBP_Config_Colour_C::RevertToInitialValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.RevertToInitialValue");
		
		UWBP_Config_Colour_C_RevertToInitialValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Config_Colour_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.PreConstruct");
		
		UWBP_Config_Colour_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWBP_Config_Colour_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.Refresh");
		
		UWBP_Config_Colour_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.SetDefaultValue
	 * 		Flags  -> ()
	 */
	void UWBP_Config_Colour_C::SetDefaultValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.SetDefaultValue");
		
		UWBP_Config_Colour_C_SetDefaultValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.BndEvt__WBP_Config_Colour_WBP_ColourPicker_K2Node_ComponentBoundEvent_1_OnColourPicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Colour                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Colour_C::BndEvt__WBP_Config_Colour_WBP_ColourPicker_K2Node_ComponentBoundEvent_1_OnColourPicked__DelegateSignature(const struct FLinearColor& Colour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.BndEvt__WBP_Config_Colour_WBP_ColourPicker_K2Node_ComponentBoundEvent_1_OnColourPicked__DelegateSignature");
		
		UWBP_Config_Colour_C_BndEvt__WBP_Config_Colour_WBP_ColourPicker_K2Node_ComponentBoundEvent_1_OnColourPicked__DelegateSignature_Params params {};
		params.Colour = Colour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Colour.WBP_Config_Colour_C.ExecuteUbergraph_WBP_Config_Colour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Colour_C::ExecuteUbergraph_WBP_Config_Colour(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Colour.WBP_Config_Colour_C.ExecuteUbergraph_WBP_Config_Colour");
		
		UWBP_Config_Colour_C_ExecuteUbergraph_WBP_Config_Colour_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Config_Colour_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Config_Colour_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Config_Colour.WBP_Config_Colour_C");
		return ptr;
	}

}


