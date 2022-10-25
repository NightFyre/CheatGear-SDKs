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
	 * 		Name   -> Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ChatEmojiList_Content_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.Construct");
		
		UWBP_ChatEmojiList_Content_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.OnSelected_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Code                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatEmojiList_Content_C::OnSelected_Event_1(const class FString& Code)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.OnSelected_Event_1");
		
		UWBP_ChatEmojiList_Content_C_OnSelected_Event_1_Params params {};
		params.Code = Code;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.ExecuteUbergraph_WBP_ChatEmojiList_Content
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatEmojiList_Content_C::ExecuteUbergraph_WBP_ChatEmojiList_Content(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.ExecuteUbergraph_WBP_ChatEmojiList_Content");
		
		UWBP_ChatEmojiList_Content_C_ExecuteUbergraph_WBP_ChatEmojiList_Content_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.OnEmojiSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Code                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatEmojiList_Content_C::OnEmojiSelected__DelegateSignature(const class FString& Code)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.OnEmojiSelected__DelegateSignature");
		
		UWBP_ChatEmojiList_Content_C_OnEmojiSelected__DelegateSignature_Params params {};
		params.Code = Code;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ChatEmojiList_Content_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ChatEmojiList_Content_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C");
		return ptr;
	}

}


