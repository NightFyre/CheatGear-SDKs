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
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Label_Text
	 * 		Flags  -> ()
	 */
	class FText UUI_WaypointWidget_C::Get_Label_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Label_Text");
		
		UUI_WaypointWidget_C_Get_Label_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Accent_Brush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UUI_WaypointWidget_C::Get_Accent_Brush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Accent_Brush");
		
		UUI_WaypointWidget_C_Get_Accent_Brush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Color
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_WaypointWidget_C::Get_Emphasis_Color()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Color");
		
		UUI_WaypointWidget_C_Get_Emphasis_Color_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_WaypointWidget_C::Get_Emphasis_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Visibility");
		
		UUI_WaypointWidget_C_Get_Emphasis_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_WaypointWidget_C::Get_Bar_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Visibility");
		
		UUI_WaypointWidget_C_Get_Bar_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Distance_Text
	 * 		Flags  -> ()
	 */
	class FText UUI_WaypointWidget_C::Get_Distance_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Distance_Text");
		
		UUI_WaypointWidget_C_Get_Distance_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Brush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UUI_WaypointWidget_C::Get_Bar_Brush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Brush");
		
		UUI_WaypointWidget_C_Get_Bar_Brush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.Get_BigPointer_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_WaypointWidget_C::Get_BigPointer_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_BigPointer_Visibility");
		
		UUI_WaypointWidget_C_Get_BigPointer_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.Get_SmallPointer_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_WaypointWidget_C::Get_SmallPointer_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_SmallPointer_Visibility");
		
		UUI_WaypointWidget_C_Get_SmallPointer_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Icon_Brush
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UUI_WaypointWidget_C::Get_Icon_Brush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Icon_Brush");
		
		UUI_WaypointWidget_C_Get_Icon_Brush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WaypointWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Tick");
		
		UUI_WaypointWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaypointWidget.UI_WaypointWidget_C.ExecuteUbergraph_UI_WaypointWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WaypointWidget_C::ExecuteUbergraph_UI_WaypointWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.ExecuteUbergraph_UI_WaypointWidget");
		
		UUI_WaypointWidget_C_ExecuteUbergraph_UI_WaypointWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WaypointWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WaypointWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_WaypointWidget.UI_WaypointWidget_C");
		return ptr;
	}

}


