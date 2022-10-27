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
	 * 		Name   -> Function UI_ErrorMessage.UI_ErrorMessage_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ErrorMessage_C::BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UUI_ErrorMessage_C_BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ErrorMessage.UI_ErrorMessage_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UCanvasPanel*                                Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     widgetToDisable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ErrorMessage_C::Init(const class FText& Message, class UCanvasPanel* Canvas, class UWidget* widgetToDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.Init");
		
		UUI_ErrorMessage_C_Init_Params params {};
		params.Message = Message;
		params.Canvas = Canvas;
		params.widgetToDisable = widgetToDisable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ErrorMessage.UI_ErrorMessage_C.OnDismissed
	 * 		Flags  -> ()
	 */
	void UUI_ErrorMessage_C::OnDismissed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.OnDismissed");
		
		UUI_ErrorMessage_C_OnDismissed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ErrorMessage.UI_ErrorMessage_C.ExecuteUbergraph_UI_ErrorMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ErrorMessage_C::ExecuteUbergraph_UI_ErrorMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.ExecuteUbergraph_UI_ErrorMessage");
		
		UUI_ErrorMessage_C_ExecuteUbergraph_UI_ErrorMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ErrorMessage.UI_ErrorMessage_C.Dismissed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ErrorMessage_C::Dismissed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.Dismissed__DelegateSignature");
		
		UUI_ErrorMessage_C_Dismissed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ErrorMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ErrorMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ErrorMessage.UI_ErrorMessage_C");
		return ptr;
	}

}


