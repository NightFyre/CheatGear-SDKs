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
	 * 		Name   -> Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.OnTextDataChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_TooltipOverviewTextParameterElement_C::OnTextDataChanged(const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.OnTextDataChanged");
		
		UUI_TooltipOverviewTextParameterElement_C_OnTextDataChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TooltipOverviewTextParameterElement_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.PreConstruct");
		
		UUI_TooltipOverviewTextParameterElement_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.OnNumberDataChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TooltipOverviewTextParameterElement_C::OnNumberDataChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.OnNumberDataChanged");
		
		UUI_TooltipOverviewTextParameterElement_C_OnNumberDataChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.ExecuteUbergraph_UI_TooltipOverviewTextParameterElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TooltipOverviewTextParameterElement_C::ExecuteUbergraph_UI_TooltipOverviewTextParameterElement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.ExecuteUbergraph_UI_TooltipOverviewTextParameterElement");
		
		UUI_TooltipOverviewTextParameterElement_C_ExecuteUbergraph_UI_TooltipOverviewTextParameterElement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TooltipOverviewTextParameterElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TooltipOverviewTextParameterElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C");
		return ptr;
	}

}


