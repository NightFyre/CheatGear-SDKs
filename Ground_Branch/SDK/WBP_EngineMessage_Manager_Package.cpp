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
	 * 		Name   -> Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.GetSpectatorMinimapShifterVis
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_EngineMessage_Manager_C::GetSpectatorMinimapShifterVis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.GetSpectatorMinimapShifterVis");
		
		UWBP_EngineMessage_Manager_C_GetSpectatorMinimapShifterVis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.GetEngineMessagesVisi
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_EngineMessage_Manager_C::GetEngineMessagesVisi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.GetEngineMessagesVisi");
		
		UWBP_EngineMessage_Manager_C_GetEngineMessagesVisi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.AddMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Prefix                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      Suffix                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Highlight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FlushMessages                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_EngineMessage_Manager_C::AddMessage(const class FString& Prefix, const class FString& PlayerName, const class FText& Message, const class FString& Suffix, bool Highlight, bool FlushMessages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.AddMessage");
		
		UWBP_EngineMessage_Manager_C_AddMessage_Params params {};
		params.Prefix = Prefix;
		params.PlayerName = PlayerName;
		params.Message = Message;
		params.Suffix = Suffix;
		params.Highlight = Highlight;
		params.FlushMessages = FlushMessages;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.ExecuteUbergraph_WBP_EngineMessage_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EngineMessage_Manager_C::ExecuteUbergraph_WBP_EngineMessage_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C.ExecuteUbergraph_WBP_EngineMessage_Manager");
		
		UWBP_EngineMessage_Manager_C_ExecuteUbergraph_WBP_EngineMessage_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_EngineMessage_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_EngineMessage_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EngineMessage_Manager.WBP_EngineMessage_Manager_C");
		return ptr;
	}

}


