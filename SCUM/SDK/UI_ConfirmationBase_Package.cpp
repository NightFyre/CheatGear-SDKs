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
	 * 		Name   -> Function UI_ConfirmationBase.UI_ConfirmationBase_C.AddToCanvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanel*                                Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConfirmationBase_C::AddToCanvas(class UCanvasPanel* Canvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.AddToCanvas");
		
		UUI_ConfirmationBase_C_AddToCanvas_Params params {};
		params.Canvas = Canvas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationBase.UI_ConfirmationBase_C.OnNo
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationBase_C::OnNo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.OnNo");
		
		UUI_ConfirmationBase_C_OnNo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationBase.UI_ConfirmationBase_C.ExecuteUbergraph_UI_ConfirmationBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConfirmationBase_C::ExecuteUbergraph_UI_ConfirmationBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.ExecuteUbergraph_UI_ConfirmationBase");
		
		UUI_ConfirmationBase_C_ExecuteUbergraph_UI_ConfirmationBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ConfirmationBase.UI_ConfirmationBase_C.NoClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ConfirmationBase_C::NoClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.NoClicked__DelegateSignature");
		
		UUI_ConfirmationBase_C_NoClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ConfirmationBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ConfirmationBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ConfirmationBase.UI_ConfirmationBase_C");
		return ptr;
	}

}


