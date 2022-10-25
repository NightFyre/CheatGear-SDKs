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
	 * 		Name   -> Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.FadeMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                Tags                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_GameMessage_Manager_C::FadeMessages(TArray<class FName>* Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.FadeMessages");
		
		UWBP_GameMessage_Manager_C_FadeMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tags != nullptr)
			*Tags = params.Tags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.RemoveAllMessages
	 * 		Flags  -> ()
	 */
	void UWBP_GameMessage_Manager_C::RemoveAllMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.RemoveAllMessages");
		
		UWBP_GameMessage_Manager_C_RemoveAllMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.RemoveMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                Tags                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_GameMessage_Manager_C::RemoveMessages(TArray<class FName>* Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.RemoveMessages");
		
		UWBP_GameMessage_Manager_C_RemoveMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tags != nullptr)
			*Tags = params.Tags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.AddMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FName>                                Tags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              DisplayTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FlushMessages                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_GameMessage_Manager_C::AddMessage(const class FText& Message, TArray<class FName> Tags, float DisplayTime, bool FlushMessages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.AddMessage");
		
		UWBP_GameMessage_Manager_C_AddMessage_Params params {};
		params.Message = Message;
		params.Tags = Tags;
		params.DisplayTime = DisplayTime;
		params.FlushMessages = FlushMessages;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.ExecuteUbergraph_WBP_GameMessage_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameMessage_Manager_C::ExecuteUbergraph_WBP_GameMessage_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameMessage_Manager.WBP_GameMessage_Manager_C.ExecuteUbergraph_WBP_GameMessage_Manager");
		
		UWBP_GameMessage_Manager_C_ExecuteUbergraph_WBP_GameMessage_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_GameMessage_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_GameMessage_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameMessage_Manager.WBP_GameMessage_Manager_C");
		return ptr;
	}

}


