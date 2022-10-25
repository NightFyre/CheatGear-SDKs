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
	 * 		Name   -> Function WBP_ChatEmojiList_Entry.WBP_ChatEmojiList_Entry_C.OnLoaded_56A4D861459C843F9DCD368D6487BB85
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatEmojiList_Entry_C::OnLoaded_56A4D861459C843F9DCD368D6487BB85(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmojiList_Entry.WBP_ChatEmojiList_Entry_C.OnLoaded_56A4D861459C843F9DCD368D6487BB85");
		
		UWBP_ChatEmojiList_Entry_C_OnLoaded_56A4D861459C843F9DCD368D6487BB85_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatEmojiList_Entry.WBP_ChatEmojiList_Entry_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ChatEmojiList_Entry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmojiList_Entry.WBP_ChatEmojiList_Entry_C.Construct");
		
		UWBP_ChatEmojiList_Entry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatEmojiList_Entry.WBP_ChatEmojiList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ChatEmojiList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmojiList_Entry.WBP_ChatEmojiList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ChatEmojiList_Entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatEmojiList_Entry.WBP_ChatEmojiList_Entry_C.ExecuteUbergraph_WBP_ChatEmojiList_Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatEmojiList_Entry_C::ExecuteUbergraph_WBP_ChatEmojiList_Entry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmojiList_Entry.WBP_ChatEmojiList_Entry_C.ExecuteUbergraph_WBP_ChatEmojiList_Entry");
		
		UWBP_ChatEmojiList_Entry_C_ExecuteUbergraph_WBP_ChatEmojiList_Entry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatEmojiList_Entry.WBP_ChatEmojiList_Entry_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Code                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatEmojiList_Entry_C::OnSelected__DelegateSignature(const class FString& Code)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmojiList_Entry.WBP_ChatEmojiList_Entry_C.OnSelected__DelegateSignature");
		
		UWBP_ChatEmojiList_Entry_C_OnSelected__DelegateSignature_Params params {};
		params.Code = Code;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ChatEmojiList_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ChatEmojiList_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ChatEmojiList_Entry.WBP_ChatEmojiList_Entry_C");
		return ptr;
	}

}


