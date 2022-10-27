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
	 * 		Name   -> Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_CTFMiniStatsWidget_C::GetColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor");
		
		UUI_CTFMiniStatsWidget_C_GetColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.UpdateStats
	 * 		Flags  -> ()
	 */
	void UUI_CTFMiniStatsWidget_C::UpdateStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.UpdateStats");
		
		UUI_CTFMiniStatsWidget_C_UpdateStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.FillLabels
	 * 		Flags  -> ()
	 */
	void UUI_CTFMiniStatsWidget_C::FillLabels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.FillLabels");
		
		UUI_CTFMiniStatsWidget_C_FillLabels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CTFMiniStatsWidget_C::ExecuteUbergraph_UI_CTFMiniStatsWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget");
		
		UUI_CTFMiniStatsWidget_C_ExecuteUbergraph_UI_CTFMiniStatsWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CTFMiniStatsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CTFMiniStatsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C");
		return ptr;
	}

}


