/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_InputNumber.v2_WB_InputNumber_C.Get Text Value Text
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText Uv2_WB_InputNumber_C::GetTextValueText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_InputNumber.v2_WB_InputNumber_C.Get Text Value Text");
		
		Uv2_WB_InputNumber_C_GetTextValueText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_InputNumber.v2_WB_InputNumber_C.Get Tool Tip Text
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText Uv2_WB_InputNumber_C::GetToolTipText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_InputNumber.v2_WB_InputNumber_C.Get Tool Tip Text");
		
		Uv2_WB_InputNumber_C_GetToolTipText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_InputNumber.v2_WB_InputNumber_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void Uv2_WB_InputNumber_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_InputNumber.v2_WB_InputNumber_C.Construct");
		
		Uv2_WB_InputNumber_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_InputNumber.v2_WB_InputNumber_C.BndEvt__v2_WB_InputNumber_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uv2_WB_InputNumber_C::BndEvt__v2_WB_InputNumber_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_InputNumber.v2_WB_InputNumber_C.BndEvt__v2_WB_InputNumber_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
		
		Uv2_WB_InputNumber_C_BndEvt__v2_WB_InputNumber_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_InputNumber.v2_WB_InputNumber_C.BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uv2_WB_InputNumber_C::BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_InputNumber.v2_WB_InputNumber_C.BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");
		
		Uv2_WB_InputNumber_C_BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_InputNumber.v2_WB_InputNumber_C.BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void Uv2_WB_InputNumber_C::BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_InputNumber.v2_WB_InputNumber_C.BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature");
		
		Uv2_WB_InputNumber_C_BndEvt__v2_WB_InputNumber_TextValue_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_InputNumber.v2_WB_InputNumber_C.ExecuteUbergraph_v2_WB_InputNumber
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Uv2_WB_InputNumber_C::ExecuteUbergraph_v2_WB_InputNumber(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_InputNumber.v2_WB_InputNumber_C.ExecuteUbergraph_v2_WB_InputNumber");
		
		Uv2_WB_InputNumber_C_ExecuteUbergraph_v2_WB_InputNumber_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uv2_WB_InputNumber_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uv2_WB_InputNumber_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass v2_WB_InputNumber.v2_WB_InputNumber_C");
		return ptr;
	}

}


