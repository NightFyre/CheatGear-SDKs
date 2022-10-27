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
	 * 		Name   -> Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TooltipOverviewElement_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.PreConstruct");
		
		UUI_TooltipOverviewElement_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnNumberDataChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TooltipOverviewElement_C::OnNumberDataChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnNumberDataChanged");
		
		UUI_TooltipOverviewElement_C_OnNumberDataChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnTextDataChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_TooltipOverviewElement_C::OnTextDataChanged(const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnTextDataChanged");
		
		UUI_TooltipOverviewElement_C_OnTextDataChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.ExecuteUbergraph_UI_TooltipOverviewElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TooltipOverviewElement_C::ExecuteUbergraph_UI_TooltipOverviewElement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.ExecuteUbergraph_UI_TooltipOverviewElement");
		
		UUI_TooltipOverviewElement_C_ExecuteUbergraph_UI_TooltipOverviewElement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TooltipOverviewElement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TooltipOverviewElement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TooltipOverviewElement.UI_TooltipOverviewElement_C");
		return ptr;
	}

}


