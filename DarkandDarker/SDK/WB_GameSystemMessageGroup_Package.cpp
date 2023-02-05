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
	 * 		Name   -> Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.SetNextIndex
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWB_GameSystemMessageGroup_C::SetNextIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.SetNextIndex");
		
		UWB_GameSystemMessageGroup_C_SetNextIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_GameSystemMessageGroup_C::OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816");
		
		UWB_GameSystemMessageGroup_C_OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_GameSystemMessageGroup_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.OnInitialized");
		
		UWB_GameSystemMessageGroup_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.EventFMsgSystemMessageNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgSystemMessageNotify                     Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_GameSystemMessageGroup_C::EventFMsgSystemMessageNotify(const struct FMsgSystemMessageNotify& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.EventFMsgSystemMessageNotify");
		
		UWB_GameSystemMessageGroup_C_EventFMsgSystemMessageNotify_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_GameSystemMessageGroup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.Destruct");
		
		UWB_GameSystemMessageGroup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.ExecuteUbergraph_WB_GameSystemMessageGroup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_GameSystemMessageGroup_C::ExecuteUbergraph_WB_GameSystemMessageGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.ExecuteUbergraph_WB_GameSystemMessageGroup");
		
		UWB_GameSystemMessageGroup_C_ExecuteUbergraph_WB_GameSystemMessageGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_GameSystemMessageGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_GameSystemMessageGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C");
		return ptr;
	}

}


