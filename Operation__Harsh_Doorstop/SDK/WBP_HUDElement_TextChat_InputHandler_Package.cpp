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
	 * 		Name   -> Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.StartTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              NewTalkChannel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_InputHandler_C::StartTalking(class UDFCommChannel* NewTalkChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.StartTalking");
		
		UWBP_HUDElement_TextChat_InputHandler_C_StartTalking_Params params {};
		params.NewTalkChannel = NewTalkChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.StopTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              CurrentChannel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_InputHandler_C::StopTalking(class UDFCommChannel* CurrentChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.StopTalking");
		
		UWBP_HUDElement_TextChat_InputHandler_C_StopTalking_Params params {};
		params.CurrentChannel = CurrentChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.InputTextEntered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_HUDElement_TextChat_InputHandler_C::InputTextEntered(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.InputTextEntered");
		
		UWBP_HUDElement_TextChat_InputHandler_C_InputTextEntered_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.BndEvt__MsgInputTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_InputHandler_C::BndEvt__MsgInputTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.BndEvt__MsgInputTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UWBP_HUDElement_TextChat_InputHandler_C_BndEvt__MsgInputTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.ExecuteUbergraph_WBP_HUDElement_TextChat_InputHandler
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_InputHandler_C::ExecuteUbergraph_WBP_HUDElement_TextChat_InputHandler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.ExecuteUbergraph_WBP_HUDElement_TextChat_InputHandler");
		
		UWBP_HUDElement_TextChat_InputHandler_C_ExecuteUbergraph_WBP_HUDElement_TextChat_InputHandler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.OnInputTextCommitted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_InputHandler_C::OnInputTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C.OnInputTextCommitted__DelegateSignature");
		
		UWBP_HUDElement_TextChat_InputHandler_C_OnInputTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HUDElement_TextChat_InputHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HUDElement_TextChat_InputHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C");
		return ptr;
	}

}


