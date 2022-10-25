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
	 * 		Name   -> Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnSynchronizeProperties
	 * 		Flags  -> ()
	 */
	void UUI_ItemSelectionSlotWidget_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnSynchronizeProperties");
		
		UUI_ItemSelectionSlotWidget_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ExecuteUbergraph_UI_ItemSelectionSlotWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemSelectionSlotWidget_C::ExecuteUbergraph_UI_ItemSelectionSlotWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ExecuteUbergraph_UI_ItemSelectionSlotWidget");
		
		UUI_ItemSelectionSlotWidget_C_ExecuteUbergraph_UI_ItemSelectionSlotWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ItemSelectionSlotWidget_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnClicked__DelegateSignature");
		
		UUI_ItemSelectionSlotWidget_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ItemSelectionSlotWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ItemSelectionSlotWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C");
		return ptr;
	}

}


