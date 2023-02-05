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
	 * 		Name   -> Function WB_PlayServerSelect.WB_PlayServerSelect_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_PlayServerSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayServerSelect.WB_PlayServerSelect_C.Construct");
		
		UWB_PlayServerSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_PlayServerSelect.WB_PlayServerSelect_C.OnClickedServerSelectBtn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_PlayServerSelect_C::OnClickedServerSelectBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayServerSelect.WB_PlayServerSelect_C.OnClickedServerSelectBtn");
		
		UWB_PlayServerSelect_C_OnClickedServerSelectBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_PlayServerSelect.WB_PlayServerSelect_C.OnClickedServerSelect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_PlayServerSelect_C::OnClickedServerSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayServerSelect.WB_PlayServerSelect_C.OnClickedServerSelect");
		
		UWB_PlayServerSelect_C_OnClickedServerSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_PlayServerSelect.WB_PlayServerSelect_C.OnDisableRegionList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_PlayServerSelect_C::OnDisableRegionList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayServerSelect.WB_PlayServerSelect_C.OnDisableRegionList");
		
		UWB_PlayServerSelect_C_OnDisableRegionList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_PlayServerSelect.WB_PlayServerSelect_C.ExecuteUbergraph_WB_PlayServerSelect
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_PlayServerSelect_C::ExecuteUbergraph_WB_PlayServerSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_PlayServerSelect.WB_PlayServerSelect_C.ExecuteUbergraph_WB_PlayServerSelect");
		
		UWB_PlayServerSelect_C_ExecuteUbergraph_WB_PlayServerSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_PlayServerSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_PlayServerSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_PlayServerSelect.WB_PlayServerSelect_C");
		return ptr;
	}

}


