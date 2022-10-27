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
	 * 		Name   -> Function InteractionWidget.InteractionWidget_C.BndEvt___actionButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInteractionWidget_C::BndEvt___actionButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.BndEvt___actionButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");
		
		UInteractionWidget_C_BndEvt___actionButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractionWidget.InteractionWidget_C.BndEvt___actionButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInteractionWidget_C::BndEvt___actionButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.BndEvt___actionButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature");
		
		UInteractionWidget_C_BndEvt___actionButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InteractionWidget.InteractionWidget_C.ExecuteUbergraph_InteractionWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInteractionWidget_C::ExecuteUbergraph_InteractionWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.ExecuteUbergraph_InteractionWidget");
		
		UInteractionWidget_C_ExecuteUbergraph_InteractionWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InteractionWidget.InteractionWidget_C");
		return ptr;
	}

}


