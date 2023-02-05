/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnLoadSoundData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MetaPlayerController_C::OnLoadSoundData(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnLoadSoundData");
		
		ABP_MetaPlayerController_C_OnLoadSoundData_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MetaPlayerController_C::OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2");
		
		ABP_MetaPlayerController_C_OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_172D29F6408EA302BE7783989F3BCD08
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MetaPlayerController_C::OnMessageReceived_172D29F6408EA302BE7783989F3BCD08(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_172D29F6408EA302BE7783989F3BCD08");
		
		ABP_MetaPlayerController_C_OnMessageReceived_172D29F6408EA302BE7783989F3BCD08_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_BCC82E2D4711E7B2925EAFBEA0A6FEB8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MetaPlayerController_C::OnMessageReceived_BCC82E2D4711E7B2925EAFBEA0A6FEB8(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_BCC82E2D4711E7B2925EAFBEA0A6FEB8");
		
		ABP_MetaPlayerController_C_OnMessageReceived_BCC82E2D4711E7B2925EAFBEA0A6FEB8_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_MetaPlayerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveBeginPlay");
		
		ABP_MetaPlayerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_MetaPlayerController.BP_MetaPlayerController_C.EventFMsgSucceedWidgetMoveItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgSucceedWidgetMoveItem                   Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_MetaPlayerController_C::EventFMsgSucceedWidgetMoveItem(const struct FMsgSucceedWidgetMoveItem& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.EventFMsgSucceedWidgetMoveItem");
		
		ABP_MetaPlayerController_C_EventFMsgSucceedWidgetMoveItem_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_MetaPlayerController.BP_MetaPlayerController_C.EventFMsgPlayerExitClientRequest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgPlayerExitClientRequest                 Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_MetaPlayerController_C::EventFMsgPlayerExitClientRequest(const struct FMsgPlayerExitClientRequest& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.EventFMsgPlayerExitClientRequest");
		
		ABP_MetaPlayerController_C_EventFMsgPlayerExitClientRequest_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MetaPlayerController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveEndPlay");
		
		ABP_MetaPlayerController_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_MetaPlayerController.BP_MetaPlayerController_C.UpdateGameState
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameStateData                              InGameStateData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_MetaPlayerController_C::UpdateGameState(const struct FGameStateData& InGameStateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.UpdateGameState");
		
		ABP_MetaPlayerController_C_UpdateGameState_Params params {};
		params.InGameStateData = InGameStateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_MetaPlayerController.BP_MetaPlayerController_C.ExecuteUbergraph_BP_MetaPlayerController
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MetaPlayerController_C::ExecuteUbergraph_BP_MetaPlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MetaPlayerController.BP_MetaPlayerController_C.ExecuteUbergraph_BP_MetaPlayerController");
		
		ABP_MetaPlayerController_C_ExecuteUbergraph_BP_MetaPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MetaPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MetaPlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MetaPlayerController.BP_MetaPlayerController_C");
		return ptr;
	}

}


