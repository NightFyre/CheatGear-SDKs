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
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnGetMenuContent_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_ChatOverlay_C::OnGetMenuContent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnGetMenuContent_1");
		
		UWBP_ChatOverlay_C_OnGetMenuContent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_ChatOverlay_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.GetVisibility_1");
		
		UWBP_ChatOverlay_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWBP_ChatOverlay_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnKeyUp");
		
		UWBP_ChatOverlay_C_OnKeyUp_Params params {};
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
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWBP_ChatOverlay_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnKeyDown");
		
		UWBP_ChatOverlay_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.AddChatLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerState*                              InSenderPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatOverlay_C::AddChatLine(class AGBPlayerState* InSenderPlayerState, const class FString& InMessage, const class FName& InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.AddChatLine");
		
		UWBP_ChatOverlay_C_AddChatLine_Params params {};
		params.InSenderPlayerState = InSenderPlayerState;
		params.InMessage = InMessage;
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.BndEvt__ChatWindow_K2Node_ComponentBoundEvent_933_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatOverlay_C::BndEvt__ChatWindow_K2Node_ComponentBoundEvent_933_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.BndEvt__ChatWindow_K2Node_ComponentBoundEvent_933_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UWBP_ChatOverlay_C_BndEvt__ChatWindow_K2Node_ComponentBoundEvent_933_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.DelayedChatFocus
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_C::DelayedChatFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.DelayedChatFocus");
		
		UWBP_ChatOverlay_C_DelayedChatFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.Open
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTeamChat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ChatOverlay_C::Open(bool bTeamChat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.Open");
		
		UWBP_ChatOverlay_C_Open_Params params {};
		params.bTeamChat = bTeamChat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.Close
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.Close");
		
		UWBP_ChatOverlay_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.BindEmojiList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_ChatEmojiList_Content_C*                EmojiList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatOverlay_C::BindEmojiList(class UWBP_ChatEmojiList_Content_C* EmojiList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.BindEmojiList");
		
		UWBP_ChatOverlay_C_BindEmojiList_Params params {};
		params.EmojiList = EmojiList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.BndEvt__Button_AddEmoji_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_C::BndEvt__Button_AddEmoji_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.BndEvt__Button_AddEmoji_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ChatOverlay_C_BndEvt__Button_AddEmoji_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnEmojiSelected_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Code                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatOverlay_C::OnEmojiSelected_Event_1(const class FString& Code)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.OnEmojiSelected_Event_1");
		
		UWBP_ChatOverlay_C_OnEmojiSelected_Event_1_Params params {};
		params.Code = Code;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.UpdateDeadChatNote
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_C::UpdateDeadChatNote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.UpdateDeadChatNote");
		
		UWBP_ChatOverlay_C_UpdateDeadChatNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.CloseIfShowing
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_C::CloseIfShowing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.CloseIfShowing");
		
		UWBP_ChatOverlay_C_CloseIfShowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay.WBP_ChatOverlay_C.ExecuteUbergraph_WBP_ChatOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatOverlay_C::ExecuteUbergraph_WBP_ChatOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay.WBP_ChatOverlay_C.ExecuteUbergraph_WBP_ChatOverlay");
		
		UWBP_ChatOverlay_C_ExecuteUbergraph_WBP_ChatOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ChatOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ChatOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ChatOverlay.WBP_ChatOverlay_C");
		return ptr;
	}

}


