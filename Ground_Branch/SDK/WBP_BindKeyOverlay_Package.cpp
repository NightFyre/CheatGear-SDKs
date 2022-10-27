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
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.GetRemappedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FKey                                        OutKey                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_BindKeyOverlay_C::GetRemappedKey(const struct FKey& InKey, struct FKey* OutKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.GetRemappedKey");
		
		UWBP_BindKeyOverlay_C_GetRemappedKey_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKey != nullptr)
			*OutKey = params.OutKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_BindKeyOverlay_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnMouseButtonDown");
		
		UWBP_BindKeyOverlay_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWBP_BindKeyOverlay_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnKeyDown");
		
		UWBP_BindKeyOverlay_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_BindKeyOverlay_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnMouseWheel");
		
		UWBP_BindKeyOverlay_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.GetVisibility_ModifiersAndKey
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_BindKeyOverlay_C::GetVisibility_ModifiersAndKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.GetVisibility_ModifiersAndKey");
		
		UWBP_BindKeyOverlay_C_GetVisibility_ModifiersAndKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.GetVisibility_BindKeyMessage
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_BindKeyOverlay_C::GetVisibility_BindKeyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.GetVisibility_BindKeyMessage");
		
		UWBP_BindKeyOverlay_C_GetVisibility_BindKeyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_BindKeyOverlay_C::BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_BindKeyOverlay_C_BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_BindKeyOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.Construct");
		
		UWBP_BindKeyOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.SetKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_BindKeyOverlay_C::SetKey(const struct FKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.SetKey");
		
		UWBP_BindKeyOverlay_C_SetKey_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_BindKeyOverlay_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_BindKeyOverlay_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_BindKeyOverlay_C::BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_BindKeyOverlay_C_BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_BindKeyOverlay_C::BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_BindKeyOverlay_C_BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.ExecuteUbergraph_WBP_BindKeyOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BindKeyOverlay_C::ExecuteUbergraph_WBP_BindKeyOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.ExecuteUbergraph_WBP_BindKeyOverlay");
		
		UWBP_BindKeyOverlay_C_ExecuteUbergraph_WBP_BindKeyOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnOk__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputBoundKey                              BoundKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_BindKeyOverlay_C::OnOk__DelegateSignature(const struct FInputBoundKey& BoundKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindKeyOverlay.WBP_BindKeyOverlay_C.OnOk__DelegateSignature");
		
		UWBP_BindKeyOverlay_C_OnOk__DelegateSignature_Params params {};
		params.BoundKey = BoundKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_BindKeyOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_BindKeyOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BindKeyOverlay.WBP_BindKeyOverlay_C");
		return ptr;
	}

}


