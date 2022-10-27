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
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.IsDirty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDirty                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MagLevelSensitivityScaling_C::IsDirty(bool* IsDirty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.IsDirty");
		
		UWBP_MagLevelSensitivityScaling_C_IsDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDirty != nullptr)
			*IsDirty = params.IsDirty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.GetKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_MagLevelSensitivityScaling_C::GetKey(class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.GetKey");
		
		UWBP_MagLevelSensitivityScaling_C_GetKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_MagLevelSensitivityScaling_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.GetToolTipWidget_1");
		
		UWBP_MagLevelSensitivityScaling_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.CreateMagLevelSensitivityScalesString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutSring                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_MagLevelSensitivityScaling_C::CreateMagLevelSensitivityScalesString(class FString* OutSring)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.CreateMagLevelSensitivityScalesString");
		
		UWBP_MagLevelSensitivityScaling_C_CreateMagLevelSensitivityScalesString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSring != nullptr)
			*OutSring = params.OutSring;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.SetKeyValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyValueAsString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_MagLevelSensitivityScaling_C::SetKeyValue(const class FString& KeyValueAsString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.SetKeyValue");
		
		UWBP_MagLevelSensitivityScaling_C_SetKeyValue_Params params {};
		params.KeyValueAsString = KeyValueAsString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MagLevelSensitivityScaling_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.Construct");
		
		UWBP_MagLevelSensitivityScaling_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.SetConfigValue
	 * 		Flags  -> ()
	 */
	void UWBP_MagLevelSensitivityScaling_C::SetConfigValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.SetConfigValue");
		
		UWBP_MagLevelSensitivityScaling_C_SetConfigValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.RevertToInitialValue
	 * 		Flags  -> ()
	 */
	void UWBP_MagLevelSensitivityScaling_C::RevertToInitialValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.RevertToInitialValue");
		
		UWBP_MagLevelSensitivityScaling_C_RevertToInitialValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWBP_MagLevelSensitivityScaling_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.Refresh");
		
		UWBP_MagLevelSensitivityScaling_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.SetDefaultValue
	 * 		Flags  -> ()
	 */
	void UWBP_MagLevelSensitivityScaling_C::SetDefaultValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.SetDefaultValue");
		
		UWBP_MagLevelSensitivityScaling_C_SetDefaultValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.UpdateIsDirty
	 * 		Flags  -> ()
	 */
	void UWBP_MagLevelSensitivityScaling_C::UpdateIsDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.UpdateIsDirty");
		
		UWBP_MagLevelSensitivityScaling_C_UpdateIsDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.OnValueChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MagLevelSensitivityScaling_C::OnValueChanged_Event_1(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.OnValueChanged_Event_1");
		
		UWBP_MagLevelSensitivityScaling_C_OnValueChanged_Event_1_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.ExecuteUbergraph_WBP_MagLevelSensitivityScaling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MagLevelSensitivityScaling_C::ExecuteUbergraph_WBP_MagLevelSensitivityScaling(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C.ExecuteUbergraph_WBP_MagLevelSensitivityScaling");
		
		UWBP_MagLevelSensitivityScaling_C_ExecuteUbergraph_WBP_MagLevelSensitivityScaling_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MagLevelSensitivityScaling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MagLevelSensitivityScaling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MagLevelSensitivityScaling.WBP_MagLevelSensitivityScaling_C");
		return ptr;
	}

}


