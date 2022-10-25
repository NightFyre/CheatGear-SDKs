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
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.GetRemappedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FKey                                        OutKey                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_BindGamePadButtonOverlay_C::GetRemappedKey(const struct FKey& InKey, struct FKey* OutKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.GetRemappedKey");
		
		UWBP_BindGamePadButtonOverlay_C_GetRemappedKey_Params params {};
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
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWBP_BindGamePadButtonOverlay_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.OnKeyDown");
		
		UWBP_BindGamePadButtonOverlay_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.GetVisibility_ModifiersAndKey
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_BindGamePadButtonOverlay_C::GetVisibility_ModifiersAndKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.GetVisibility_ModifiersAndKey");
		
		UWBP_BindGamePadButtonOverlay_C_GetVisibility_ModifiersAndKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.GetVisibility_BindKeyMessage
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_BindGamePadButtonOverlay_C::GetVisibility_BindKeyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.GetVisibility_BindKeyMessage");
		
		UWBP_BindGamePadButtonOverlay_C_GetVisibility_BindKeyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_BindGamePadButtonOverlay_C::BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_BindGamePadButtonOverlay_C_BndEvt__Button_Key_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_BindGamePadButtonOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.Construct");
		
		UWBP_BindGamePadButtonOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.SetKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_BindGamePadButtonOverlay_C::SetKey(const struct FKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.SetKey");
		
		UWBP_BindGamePadButtonOverlay_C_SetKey_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_BindGamePadButtonOverlay_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_BindGamePadButtonOverlay_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_BindGamePadButtonOverlay_C::BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_BindGamePadButtonOverlay_C_BndEvt__Button_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_BindGamePadButtonOverlay_C::BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_BindGamePadButtonOverlay_C_BndEvt__Button_ClearBinds_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.ExecuteUbergraph_WBP_BindGamePadButtonOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BindGamePadButtonOverlay_C::ExecuteUbergraph_WBP_BindGamePadButtonOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.ExecuteUbergraph_WBP_BindGamePadButtonOverlay");
		
		UWBP_BindGamePadButtonOverlay_C_ExecuteUbergraph_WBP_BindGamePadButtonOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.OnOk__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputBoundKey                              BoundKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_BindGamePadButtonOverlay_C::OnOk__DelegateSignature(const struct FInputBoundKey& BoundKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C.OnOk__DelegateSignature");
		
		UWBP_BindGamePadButtonOverlay_C_OnOk__DelegateSignature_Params params {};
		params.BoundKey = BoundKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_BindGamePadButtonOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_BindGamePadButtonOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BindGamePadButtonOverlay.WBP_BindGamePadButtonOverlay_C");
		return ptr;
	}

}


