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
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.GetKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_CVar_String_C::GetKey(class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.GetKey");
		
		UWBP_CVar_String_C_GetKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.IsDirty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDirty                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CVar_String_C::IsDirty(bool* IsDirty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.IsDirty");
		
		UWBP_CVar_String_C_IsDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDirty != nullptr)
			*IsDirty = params.IsDirty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_CVar_String_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.GetToolTipWidget_1");
		
		UWBP_CVar_String_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.SetInitialValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_CVar_String_C::SetInitialValue(const class FString& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.SetInitialValue");
		
		UWBP_CVar_String_C_SetInitialValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CVar_String_C::SetValue(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.SetValue");
		
		UWBP_CVar_String_C_SetValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.SetDefaultValue
	 * 		Flags  -> ()
	 */
	void UWBP_CVar_String_C::SetDefaultValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.SetDefaultValue");
		
		UWBP_CVar_String_C_SetDefaultValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_CVar_String_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.Construct");
		
		UWBP_CVar_String_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.SetConfigValue
	 * 		Flags  -> ()
	 */
	void UWBP_CVar_String_C::SetConfigValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.SetConfigValue");
		
		UWBP_CVar_String_C_SetConfigValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.RevertToInitialValue
	 * 		Flags  -> ()
	 */
	void UWBP_CVar_String_C::RevertToInitialValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.RevertToInitialValue");
		
		UWBP_CVar_String_C_RevertToInitialValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.SetKeyValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyValueAsString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_CVar_String_C::SetKeyValue(const class FString& KeyValueAsString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.SetKeyValue");
		
		UWBP_CVar_String_C_SetKeyValue_Params params {};
		params.KeyValueAsString = KeyValueAsString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWBP_CVar_String_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.Refresh");
		
		UWBP_CVar_String_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CVar_String_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.PreConstruct");
		
		UWBP_CVar_String_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CVar_String.WBP_CVar_String_C.ExecuteUbergraph_WBP_CVar_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CVar_String_C::ExecuteUbergraph_WBP_CVar_String(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CVar_String.WBP_CVar_String_C.ExecuteUbergraph_WBP_CVar_String");
		
		UWBP_CVar_String_C_ExecuteUbergraph_WBP_CVar_String_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CVar_String_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CVar_String_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CVar_String.WBP_CVar_String_C");
		return ptr;
	}

}


