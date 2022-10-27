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
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.IsDirty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDirty                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Config_Resolution_C::IsDirty(bool* IsDirty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.IsDirty");
		
		UWBP_Config_Resolution_C_IsDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDirty != nullptr)
			*IsDirty = params.IsDirty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.GetKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Resolution_C::GetKey(class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.GetKey");
		
		UWBP_Config_Resolution_C_GetKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            New_Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Resolution_C::SetValue(int32_t New_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetValue");
		
		UWBP_Config_Resolution_C_SetValue_Params params {};
		params.New_Value = New_Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetKeyValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyValueAsString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Resolution_C::SetKeyValue(const class FString& KeyValueAsString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetKeyValue");
		
		UWBP_Config_Resolution_C_SetKeyValue_Params params {};
		params.KeyValueAsString = KeyValueAsString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWBP_Config_Resolution_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.Refresh");
		
		UWBP_Config_Resolution_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetDefaultValue
	 * 		Flags  -> ()
	 */
	void UWBP_Config_Resolution_C::SetDefaultValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetDefaultValue");
		
		UWBP_Config_Resolution_C_SetDefaultValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Config_Resolution_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.Construct");
		
		UWBP_Config_Resolution_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetInitialValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Resolution_C::SetInitialValue(const struct FIntPoint& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetInitialValue");
		
		UWBP_Config_Resolution_C_SetInitialValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetConfigValue
	 * 		Flags  -> ()
	 */
	void UWBP_Config_Resolution_C::SetConfigValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetConfigValue");
		
		UWBP_Config_Resolution_C_SetConfigValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.RevertToInitialValue
	 * 		Flags  -> ()
	 */
	void UWBP_Config_Resolution_C::RevertToInitialValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.RevertToInitialValue");
		
		UWBP_Config_Resolution_C_RevertToInitialValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.BndEvt__DropDown_Resolutions_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Resolution_C::BndEvt__DropDown_Resolutions_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.BndEvt__DropDown_Resolutions_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature");
		
		UWBP_Config_Resolution_C_BndEvt__DropDown_Resolutions_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Config_Resolution.WBP_Config_Resolution_C.ExecuteUbergraph_WBP_Config_Resolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Config_Resolution_C::ExecuteUbergraph_WBP_Config_Resolution(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Config_Resolution.WBP_Config_Resolution_C.ExecuteUbergraph_WBP_Config_Resolution");
		
		UWBP_Config_Resolution_C_ExecuteUbergraph_WBP_Config_Resolution_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Config_Resolution_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Config_Resolution_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Config_Resolution.WBP_Config_Resolution_C");
		return ptr;
	}

}


