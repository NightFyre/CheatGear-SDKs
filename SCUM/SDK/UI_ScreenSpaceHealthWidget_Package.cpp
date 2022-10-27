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
	 * 		Name   -> Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ScreenSpaceHealthWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.Construct");
		
		UUI_ScreenSpaceHealthWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetMaxHealthPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScreenSpaceHealthWidget_C::SetMaxHealthPercentage(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetMaxHealthPercentage");
		
		UUI_ScreenSpaceHealthWidget_C_SetMaxHealthPercentage_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetHealthPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScreenSpaceHealthWidget_C::SetHealthPercentage(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetHealthPercentage");
		
		UUI_ScreenSpaceHealthWidget_C_SetHealthPercentage_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.ExecuteUbergraph_UI_ScreenSpaceHealthWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScreenSpaceHealthWidget_C::ExecuteUbergraph_UI_ScreenSpaceHealthWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.ExecuteUbergraph_UI_ScreenSpaceHealthWidget");
		
		UUI_ScreenSpaceHealthWidget_C_ExecuteUbergraph_UI_ScreenSpaceHealthWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ScreenSpaceHealthWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ScreenSpaceHealthWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C");
		return ptr;
	}

}


