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
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.FindEmoji
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SearchIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutPos                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutCharSkip                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatOverlay_Message_C::FindEmoji(const class FString& SearchIn, int32_t StartPosition, int32_t* OutPos, int32_t* OutCharSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.FindEmoji");
		
		UWBP_ChatOverlay_Message_C_FindEmoji_Params params {};
		params.SearchIn = SearchIn;
		params.StartPosition = StartPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPos != nullptr)
			*OutPos = params.OutPos;
		if (OutCharSkip != nullptr)
			*OutCharSkip = params.OutCharSkip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.ParseMessage
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_Message_C::ParseMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.ParseMessage");
		
		UWBP_ChatOverlay_Message_C_ParseMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_Message_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.Construct");
		
		UWBP_ChatOverlay_Message_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.SetPrefix
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_Message_C::SetPrefix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.SetPrefix");
		
		UWBP_ChatOverlay_Message_C_SetPrefix_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.SetDeadVis
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_Message_C::SetDeadVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.SetDeadVis");
		
		UWBP_ChatOverlay_Message_C_SetDeadVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.SetPlayerNameColour
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_Message_C::SetPlayerNameColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.SetPlayerNameColour");
		
		UWBP_ChatOverlay_Message_C_SetPlayerNameColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.PlayFadeOut
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_Message_C::PlayFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.PlayFadeOut");
		
		UWBP_ChatOverlay_Message_C_PlayFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.StartTimer
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_Message_C::StartTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.StartTimer");
		
		UWBP_ChatOverlay_Message_C_StartTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.Pause
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_Message_C::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.Pause");
		
		UWBP_ChatOverlay_Message_C_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.Unpause
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_Message_C::Unpause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.Unpause");
		
		UWBP_ChatOverlay_Message_C_Unpause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.OnAnimationFinished_Event_1
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_Message_C::OnAnimationFinished_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.OnAnimationFinished_Event_1");
		
		UWBP_ChatOverlay_Message_C_OnAnimationFinished_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.AddText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatOverlay_Message_C::AddText(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.AddText");
		
		UWBP_ChatOverlay_Message_C_AddText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.AddEmoji
	 * 		Flags  -> ()
	 */
	void UWBP_ChatOverlay_Message_C::AddEmoji()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.AddEmoji");
		
		UWBP_ChatOverlay_Message_C_AddEmoji_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.ExecuteUbergraph_WBP_ChatOverlay_Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatOverlay_Message_C::ExecuteUbergraph_WBP_ChatOverlay_Message(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C.ExecuteUbergraph_WBP_ChatOverlay_Message");
		
		UWBP_ChatOverlay_Message_C_ExecuteUbergraph_WBP_ChatOverlay_Message_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ChatOverlay_Message_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ChatOverlay_Message_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C");
		return ptr;
	}

}


