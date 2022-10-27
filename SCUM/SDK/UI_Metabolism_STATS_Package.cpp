/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_Metabolism_STATS.UI_Metabolism_STATS_C.GetIntProgressToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_STATS_C::GetIntProgressToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_STATS.UI_Metabolism_STATS_C.GetIntProgressToolTip");
		
		UUI_Metabolism_STATS_C_GetIntProgressToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_STATS.UI_Metabolism_STATS_C.GetDexProgressToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_STATS_C::GetDexProgressToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_STATS.UI_Metabolism_STATS_C.GetDexProgressToolTip");
		
		UUI_Metabolism_STATS_C_GetDexProgressToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_STATS.UI_Metabolism_STATS_C.GetConProgressToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_STATS_C::GetConProgressToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_STATS.UI_Metabolism_STATS_C.GetConProgressToolTip");
		
		UUI_Metabolism_STATS_C_GetConProgressToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_STATS.UI_Metabolism_STATS_C.GetStrProgressToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_STATS_C::GetStrProgressToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_STATS.UI_Metabolism_STATS_C.GetStrProgressToolTip");
		
		UUI_Metabolism_STATS_C_GetStrProgressToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_STATS.UI_Metabolism_STATS_C.ExecuteUbergraph_UI_Metabolism_STATS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Metabolism_STATS_C::ExecuteUbergraph_UI_Metabolism_STATS(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_STATS.UI_Metabolism_STATS_C.ExecuteUbergraph_UI_Metabolism_STATS");
		
		UUI_Metabolism_STATS_C_ExecuteUbergraph_UI_Metabolism_STATS_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Metabolism_STATS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Metabolism_STATS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Metabolism_STATS.UI_Metabolism_STATS_C");
		return ptr;
	}

}


