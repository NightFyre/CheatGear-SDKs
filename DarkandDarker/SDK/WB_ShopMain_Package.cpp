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
	 * 		Name   -> Function WB_ShopMain.WB_ShopMain_C.OnMessageReceived_5D7814904BE2B695FD46979779CC4BD0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ShopMain_C::OnMessageReceived_5D7814904BE2B695FD46979779CC4BD0(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ShopMain.WB_ShopMain_C.OnMessageReceived_5D7814904BE2B695FD46979779CC4BD0");
		
		UWB_ShopMain_C_OnMessageReceived_5D7814904BE2B695FD46979779CC4BD0_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ShopMain.WB_ShopMain_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ShopMain_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ShopMain.WB_ShopMain_C.Construct");
		
		UWB_ShopMain_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ShopMain.WB_ShopMain_C.OnClickedCommonInfoBtn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_ShopMain_C::OnClickedCommonInfoBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ShopMain.WB_ShopMain_C.OnClickedCommonInfoBtn");
		
		UWB_ShopMain_C_OnClickedCommonInfoBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ShopMain.WB_ShopMain_C.ExecuteUbergraph_WB_ShopMain
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ShopMain_C::ExecuteUbergraph_WB_ShopMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ShopMain.WB_ShopMain_C.ExecuteUbergraph_WB_ShopMain");
		
		UWB_ShopMain_C_ExecuteUbergraph_WB_ShopMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ShopMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ShopMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ShopMain.WB_ShopMain_C");
		return ptr;
	}

}


