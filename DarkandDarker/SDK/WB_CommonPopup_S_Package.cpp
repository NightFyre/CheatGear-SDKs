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
	 * 		Name   -> Function WB_CommonPopup_S.WB_CommonPopup_S_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_CommonPopup_S_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommonPopup_S.WB_CommonPopup_S_C.Construct");
		
		UWB_CommonPopup_S_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CommonPopup_S.WB_CommonPopup_S_C.OnRemovePopup
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWB_CommonPopup_S_C::OnRemovePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommonPopup_S.WB_CommonPopup_S_C.OnRemovePopup");
		
		UWB_CommonPopup_S_C_OnRemovePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CommonPopup_S.WB_CommonPopup_S_C.OnCreatePopup
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPopupSWidgetData                           PopupSWidgetData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_CommonPopup_S_C::OnCreatePopup(const struct FPopupSWidgetData& PopupSWidgetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommonPopup_S.WB_CommonPopup_S_C.OnCreatePopup");
		
		UWB_CommonPopup_S_C_OnCreatePopup_Params params {};
		params.PopupSWidgetData = PopupSWidgetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CommonPopup_S.WB_CommonPopup_S_C.ExecuteUbergraph_WB_CommonPopup_S
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_CommonPopup_S_C::ExecuteUbergraph_WB_CommonPopup_S(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CommonPopup_S.WB_CommonPopup_S_C.ExecuteUbergraph_WB_CommonPopup_S");
		
		UWB_CommonPopup_S_C_ExecuteUbergraph_WB_CommonPopup_S_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_CommonPopup_S_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_CommonPopup_S_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CommonPopup_S.WB_CommonPopup_S_C");
		return ptr;
	}

}


