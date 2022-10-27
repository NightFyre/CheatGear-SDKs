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
	 * 		Name   -> Function WBP_GameMessage.WBP_GameMessage_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_GameMessage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameMessage.WBP_GameMessage_C.Construct");
		
		UWBP_GameMessage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameMessage.WBP_GameMessage_C.PlayFadeOut
	 * 		Flags  -> ()
	 */
	void UWBP_GameMessage_C::PlayFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameMessage.WBP_GameMessage_C.PlayFadeOut");
		
		UWBP_GameMessage_C_PlayFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameMessage.WBP_GameMessage_C.OnAnimationFinished_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_GameMessage_C::OnAnimationFinished_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameMessage.WBP_GameMessage_C.OnAnimationFinished_Event_1");
		
		UWBP_GameMessage_C_OnAnimationFinished_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameMessage.WBP_GameMessage_C.ExecuteUbergraph_WBP_GameMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameMessage_C::ExecuteUbergraph_WBP_GameMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameMessage.WBP_GameMessage_C.ExecuteUbergraph_WBP_GameMessage");
		
		UWBP_GameMessage_C_ExecuteUbergraph_WBP_GameMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_GameMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_GameMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameMessage.WBP_GameMessage_C");
		return ptr;
	}

}


