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
	 * 		Name   -> Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.Get_Overlay_EmoteSlot_ToolTipWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UWB_CustomizeEmoteRadialSlot_C::Get_Overlay_EmoteSlot_ToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.Get_Overlay_EmoteSlot_ToolTipWidget");
		
		UWB_CustomizeEmoteRadialSlot_C_Get_Overlay_EmoteSlot_ToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_CustomizeEmoteRadialSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.Construct");
		
		UWB_CustomizeEmoteRadialSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.SetEmoteIconImageAngle
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewAngle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_CustomizeEmoteRadialSlot_C::SetEmoteIconImageAngle(float NewAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.SetEmoteIconImageAngle");
		
		UWB_CustomizeEmoteRadialSlot_C_SetEmoteIconImageAngle_Params params {};
		params.NewAngle = NewAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.OnEmoteNameChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewEmoteName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_CustomizeEmoteRadialSlot_C::OnEmoteNameChanged(const class FText& NewEmoteName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.OnEmoteNameChanged");
		
		UWB_CustomizeEmoteRadialSlot_C_OnEmoteNameChanged_Params params {};
		params.NewEmoteName = NewEmoteName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.ExecuteUbergraph_WB_CustomizeEmoteRadialSlot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_CustomizeEmoteRadialSlot_C::ExecuteUbergraph_WB_CustomizeEmoteRadialSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C.ExecuteUbergraph_WB_CustomizeEmoteRadialSlot");
		
		UWB_CustomizeEmoteRadialSlot_C_ExecuteUbergraph_WB_CustomizeEmoteRadialSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_CustomizeEmoteRadialSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_CustomizeEmoteRadialSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_CustomizeEmoteRadialSlot.WB_CustomizeEmoteRadialSlot_C");
		return ptr;
	}

}


