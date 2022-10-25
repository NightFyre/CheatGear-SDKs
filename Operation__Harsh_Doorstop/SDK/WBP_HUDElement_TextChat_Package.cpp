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
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.OnPaint
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_HUDElement_TextChat_C::OnPaint(struct FPaintContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.OnPaint");
		
		UWBP_HUDElement_TextChat_C_OnPaint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.GetChatHistoryIsVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUDElement_TextChat_C::GetChatHistoryIsVisible(bool* bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.GetChatHistoryIsVisible");
		
		UWBP_HUDElement_TextChat_C_GetChatHistoryIsVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bVisible != nullptr)
			*bVisible = params.bVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.AddNewOutputListing
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDTextChatMsgInfo*                          ChatMsg                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Listing                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_C::AddNewOutputListing(class UHDTextChatMsgInfo* ChatMsg, class UWidget** Listing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.AddNewOutputListing");
		
		UWBP_HUDElement_TextChat_C_AddNewOutputListing_Params params {};
		params.ChatMsg = ChatMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Listing != nullptr)
			*Listing = params.Listing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.DisplayChatMessage
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDTextChatMsgInfo*                          NewChatMsg                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_C::DisplayChatMessage(class UHDTextChatMsgInfo* NewChatMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.DisplayChatMessage");
		
		UWBP_HUDElement_TextChat_C_DisplayChatMessage_Params params {};
		params.NewChatMsg = NewChatMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUDElement_TextChat_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.PreConstruct");
		
		UWBP_HUDElement_TextChat_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.StartTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              TalkChannel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_C::StartTalking(class UDFCommChannel* TalkChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.StartTalking");
		
		UWBP_HUDElement_TextChat_C_StartTalking_Params params {};
		params.TalkChannel = TalkChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.StopTalking
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UWBP_HUDElement_TextChat_C::StopTalking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.StopTalking");
		
		UWBP_HUDElement_TextChat_C_StopTalking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.BndEvt__WBP_TextChat_Input_K2Node_ComponentBoundEvent_2_OnInputTextCommitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_C::BndEvt__WBP_TextChat_Input_K2Node_ComponentBoundEvent_2_OnInputTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.BndEvt__WBP_TextChat_Input_K2Node_ComponentBoundEvent_2_OnInputTextCommitted__DelegateSignature");
		
		UWBP_HUDElement_TextChat_C_BndEvt__WBP_TextChat_Input_K2Node_ComponentBoundEvent_2_OnInputTextCommitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_HUDElement_TextChat_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.OnInitialized");
		
		UWBP_HUDElement_TextChat_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.ChatHistoryTimeout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HUDElement_TextChat_C::ChatHistoryTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.ChatHistoryTimeout");
		
		UWBP_HUDElement_TextChat_C_ChatHistoryTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.SetChatHistoryIsVisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HUDElement_TextChat_C::SetChatHistoryIsVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.SetChatHistoryIsVisible");
		
		UWBP_HUDElement_TextChat_C_SetChatHistoryIsVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.BndEvt__ChatMsgLogSBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_C::BndEvt__ChatMsgLogSBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.BndEvt__ChatMsgLogSBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");
		
		UWBP_HUDElement_TextChat_C_BndEvt__ChatMsgLogSBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.ExecuteUbergraph_WBP_HUDElement_TextChat
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HUDElement_TextChat_C::ExecuteUbergraph_WBP_HUDElement_TextChat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C.ExecuteUbergraph_WBP_HUDElement_TextChat");
		
		UWBP_HUDElement_TextChat_C_ExecuteUbergraph_WBP_HUDElement_TextChat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HUDElement_TextChat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HUDElement_TextChat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C");
		return ptr;
	}

}


