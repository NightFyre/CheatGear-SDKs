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
	 * 		Name   -> Function WB_ClassLevelup.WB_ClassLevelup_C.OnMessageReceived_FC4A7786420D545450EC54AB0C491319
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassLevelup_C::OnMessageReceived_FC4A7786420D545450EC54AB0C491319(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassLevelup.WB_ClassLevelup_C.OnMessageReceived_FC4A7786420D545450EC54AB0C491319");
		
		UWB_ClassLevelup_C_OnMessageReceived_FC4A7786420D545450EC54AB0C491319_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassLevelup.WB_ClassLevelup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ClassLevelup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassLevelup.WB_ClassLevelup_C.Construct");
		
		UWB_ClassLevelup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassLevelup.WB_ClassLevelup_C.ExecuteUbergraph_WB_ClassLevelup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassLevelup_C::ExecuteUbergraph_WB_ClassLevelup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassLevelup.WB_ClassLevelup_C.ExecuteUbergraph_WB_ClassLevelup");
		
		UWB_ClassLevelup_C_ExecuteUbergraph_WB_ClassLevelup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ClassLevelup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ClassLevelup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ClassLevelup.WB_ClassLevelup_C");
		return ptr;
	}

}


