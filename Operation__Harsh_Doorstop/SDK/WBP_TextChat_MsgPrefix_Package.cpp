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
	 * 		Name   -> Function WBP_TextChat_MsgPrefix.WBP_TextChat_MsgPrefix_C.SetupMsgPrefix
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDTextChatMsgInfo*                          Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_TextChat_MsgPrefix_C::SetupMsgPrefix(class UHDTextChatMsgInfo* Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_TextChat_MsgPrefix.WBP_TextChat_MsgPrefix_C.SetupMsgPrefix");
		
		UWBP_TextChat_MsgPrefix_C_SetupMsgPrefix_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_TextChat_MsgPrefix.WBP_TextChat_MsgPrefix_C.ExecuteUbergraph_WBP_TextChat_MsgPrefix
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_TextChat_MsgPrefix_C::ExecuteUbergraph_WBP_TextChat_MsgPrefix(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_TextChat_MsgPrefix.WBP_TextChat_MsgPrefix_C.ExecuteUbergraph_WBP_TextChat_MsgPrefix");
		
		UWBP_TextChat_MsgPrefix_C_ExecuteUbergraph_WBP_TextChat_MsgPrefix_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_TextChat_MsgPrefix_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_TextChat_MsgPrefix_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TextChat_MsgPrefix.WBP_TextChat_MsgPrefix_C");
		return ptr;
	}

}


