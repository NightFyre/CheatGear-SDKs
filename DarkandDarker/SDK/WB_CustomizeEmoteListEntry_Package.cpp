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
	 * 		Name   -> Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.Get_Overlay_EmoteSlot_ToolTipWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UWB_CustomizeEmoteListEntry_C::Get_Overlay_EmoteSlot_ToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.Get_Overlay_EmoteSlot_ToolTipWidget");
		
		UWB_CustomizeEmoteListEntry_C_Get_Overlay_EmoteSlot_ToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.Get_Image_Hover_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWB_CustomizeEmoteListEntry_C::Get_Image_Hover_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.Get_Image_Hover_Visibility");
		
		UWB_CustomizeEmoteListEntry_C_Get_Image_Hover_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_CustomizeEmoteListEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.Construct");
		
		UWB_CustomizeEmoteListEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.ExecuteUbergraph_WB_CustomizeEmoteListEntry
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_CustomizeEmoteListEntry_C::ExecuteUbergraph_WB_CustomizeEmoteListEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C.ExecuteUbergraph_WB_CustomizeEmoteListEntry");
		
		UWB_CustomizeEmoteListEntry_C_ExecuteUbergraph_WB_CustomizeEmoteListEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_CustomizeEmoteListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_CustomizeEmoteListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CustomizeEmoteListEntry.WB_CustomizeEmoteListEntry_C");
		return ptr;
	}

}


