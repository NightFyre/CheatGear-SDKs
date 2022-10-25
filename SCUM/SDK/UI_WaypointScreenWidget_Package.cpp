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
	 * 		Name   -> Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.AddWaypointWidgetToScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWaypointWidget*                             Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WaypointScreenWidget_C::AddWaypointWidgetToScreen(class UWaypointWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.AddWaypointWidgetToScreen");
		
		UUI_WaypointScreenWidget_C_AddWaypointWidgetToScreen_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.RemoveWaypointWidgetFromScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWaypointWidget*                             Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WaypointScreenWidget_C::RemoveWaypointWidgetFromScreen(class UWaypointWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.RemoveWaypointWidgetFromScreen");
		
		UUI_WaypointScreenWidget_C_RemoveWaypointWidgetFromScreen_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.ExecuteUbergraph_UI_WaypointScreenWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WaypointScreenWidget_C::ExecuteUbergraph_UI_WaypointScreenWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.ExecuteUbergraph_UI_WaypointScreenWidget");
		
		UUI_WaypointScreenWidget_C_ExecuteUbergraph_UI_WaypointScreenWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WaypointScreenWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WaypointScreenWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_WaypointScreenWidget.UI_WaypointScreenWidget_C");
		return ptr;
	}

}


