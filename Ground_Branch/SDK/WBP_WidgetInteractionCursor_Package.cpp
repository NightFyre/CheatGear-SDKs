/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.GetVisibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UWBP_WidgetInteractionCursor_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.GetVisibility_1");
		
		UWBP_WidgetInteractionCursor_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.OnHoveredWidgetChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetComponent*                            WidgetComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetComponent*                            PreviousWidgetComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WidgetInteractionCursor_C::OnHoveredWidgetChanged_Event_1(class UWidgetComponent* WidgetComponent, class UWidgetComponent* PreviousWidgetComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.OnHoveredWidgetChanged_Event_1");
		
		UWBP_WidgetInteractionCursor_C_OnHoveredWidgetChanged_Event_1_Params params {};
		params.WidgetComponent = WidgetComponent;
		params.PreviousWidgetComponent = PreviousWidgetComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_WidgetInteractionCursor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.Construct");
		
		UWBP_WidgetInteractionCursor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.ExecuteUbergraph_WBP_WidgetInteractionCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_WidgetInteractionCursor_C::ExecuteUbergraph_WBP_WidgetInteractionCursor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.ExecuteUbergraph_WBP_WidgetInteractionCursor");
		
		UWBP_WidgetInteractionCursor_C_ExecuteUbergraph_WBP_WidgetInteractionCursor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_WidgetInteractionCursor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_WidgetInteractionCursor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C");
		return ptr;
	}

}


