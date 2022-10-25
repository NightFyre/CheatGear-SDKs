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
	 * 		Name   -> Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.AdjustPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   adjustment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_YesNoMenuConfirmation_C::AdjustPosition(const struct FVector2D& adjustment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.AdjustPosition");
		
		UUI_YesNoMenuConfirmation_C_AdjustPosition_Params params {};
		params.adjustment = adjustment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanel*                                CanvasPanel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_YesNoMenuConfirmation_C::Init(class UCanvasPanel* CanvasPanel, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.Init");
		
		UUI_YesNoMenuConfirmation_C_Init_Params params {};
		params.CanvasPanel = CanvasPanel;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_YesNoMenuConfirmation_C::BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UUI_YesNoMenuConfirmation_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_YesNoMenuConfirmation_C::BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UUI_YesNoMenuConfirmation_C_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.OnYes
	 * 		Flags  -> ()
	 */
	void UUI_YesNoMenuConfirmation_C::OnYes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.OnYes");
		
		UUI_YesNoMenuConfirmation_C_OnYes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.ExecuteUbergraph_UI_YesNoMenuConfirmation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_YesNoMenuConfirmation_C::ExecuteUbergraph_UI_YesNoMenuConfirmation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.ExecuteUbergraph_UI_YesNoMenuConfirmation");
		
		UUI_YesNoMenuConfirmation_C_ExecuteUbergraph_UI_YesNoMenuConfirmation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.YesClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_YesNoMenuConfirmation_C::YesClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.YesClicked__DelegateSignature");
		
		UUI_YesNoMenuConfirmation_C_YesClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_YesNoMenuConfirmation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_YesNoMenuConfirmation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C");
		return ptr;
	}

}


