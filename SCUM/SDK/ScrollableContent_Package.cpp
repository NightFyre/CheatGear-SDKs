/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.GetTitleText
	 * 		Flags  -> ()
	 */
	class FText UScrollableContent_C::GetTitleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetTitleText");
		
		UScrollableContent_C_GetTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.GetDefaultTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        defaultTitle                                               (Parm, OutParm)
	 */
	void UScrollableContent_C::GetDefaultTitle(class FText* defaultTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetDefaultTitle");
		
		UScrollableContent_C_GetDefaultTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (defaultTitle != nullptr)
			*defaultTitle = params.defaultTitle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.ResetInputChatLineString
	 * 		Flags  -> ()
	 */
	void UScrollableContent_C::ResetInputChatLineString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.ResetInputChatLineString");
		
		UScrollableContent_C_ResetInputChatLineString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.SetInputChatLineString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        chatLineStringToSet                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UScrollableContent_C::SetInputChatLineString(const class FText& chatLineStringToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.SetInputChatLineString");
		
		UScrollableContent_C_SetInputChatLineString_Params params {};
		params.chatLineStringToSet = chatLineStringToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.GetInputChatLineText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        chatLineString                                             (Parm, OutParm)
	 */
	void UScrollableContent_C::GetInputChatLineText(class FText* chatLineString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetInputChatLineText");
		
		UScrollableContent_C_GetInputChatLineText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chatLineString != nullptr)
			*chatLineString = params.chatLineString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.PrintChatMessages
	 * 		Flags  -> ()
	 */
	void UScrollableContent_C::PrintChatMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.PrintChatMessages");
		
		UScrollableContent_C_PrintChatMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.SelectCustomColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollableContent_C::SelectCustomColor(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.SelectCustomColor");
		
		UScrollableContent_C_SelectCustomColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.AutoCreateContent
	 * 		Flags  -> ()
	 */
	void UScrollableContent_C::AutoCreateContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.AutoCreateContent");
		
		UScrollableContent_C_AutoCreateContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.PopulateMessageStrings
	 * 		Flags  -> ()
	 */
	void UScrollableContent_C::PopulateMessageStrings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.PopulateMessageStrings");
		
		UScrollableContent_C_PopulateMessageStrings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.AddTextLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        textToSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               scrollToTheEnd                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               lineAdded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScrollableContent_C::AddTextLine(const class FText& textToSet, const struct FLinearColor& Color, bool scrollToTheEnd, bool* lineAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.AddTextLine");
		
		UScrollableContent_C_AddTextLine_Params params {};
		params.textToSet = textToSet;
		params.Color = Color;
		params.scrollToTheEnd = scrollToTheEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (lineAdded != nullptr)
			*lineAdded = params.lineAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.OnMouseButtonDownOnConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UScrollableContent_C::OnMouseButtonDownOnConsole(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.OnMouseButtonDownOnConsole");
		
		UScrollableContent_C_OnMouseButtonDownOnConsole_Params params {};
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
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.StartDrag
	 * 		Flags  -> ()
	 */
	void UScrollableContent_C::StartDrag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.StartDrag");
		
		UScrollableContent_C_StartDrag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollableContent_C::BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UScrollableContent_C_BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.Construct
	 * 		Flags  -> ()
	 */
	void UScrollableContent_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.Construct");
		
		UScrollableContent_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.OnMinimize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldMinimize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScrollableContent_C::OnMinimize(bool shouldMinimize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.OnMinimize");
		
		UScrollableContent_C_OnMinimize_Params params {};
		params.shouldMinimize = shouldMinimize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScrollableContent.ScrollableContent_C.ExecuteUbergraph_ScrollableContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrollableContent_C::ExecuteUbergraph_ScrollableContent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.ExecuteUbergraph_ScrollableContent");
		
		UScrollableContent_C_ExecuteUbergraph_ScrollableContent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScrollableContent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrollableContent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScrollableContent.ScrollableContent_C");
		return ptr;
	}

}


