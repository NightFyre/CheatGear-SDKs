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
	 * 		Name   -> Function UI_Metabolism_TreatmentPanel.UI_Metabolism_TreatmentPanel_C.Get_RecoveryBackground_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_TreatmentPanel_C::Get_RecoveryBackground_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_TreatmentPanel.UI_Metabolism_TreatmentPanel_C.Get_RecoveryBackground_ToolTipWidget_1");
		
		UUI_Metabolism_TreatmentPanel_C_Get_RecoveryBackground_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_TreatmentPanel.UI_Metabolism_TreatmentPanel_C.GetStabilizationToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_TreatmentPanel_C::GetStabilizationToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_TreatmentPanel.UI_Metabolism_TreatmentPanel_C.GetStabilizationToolTip");
		
		UUI_Metabolism_TreatmentPanel_C_GetStabilizationToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Metabolism_TreatmentPanel.UI_Metabolism_TreatmentPanel_C.GetUntreatedToolTip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_Metabolism_TreatmentPanel_C::GetUntreatedToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_TreatmentPanel.UI_Metabolism_TreatmentPanel_C.GetUntreatedToolTip");
		
		UUI_Metabolism_TreatmentPanel_C_GetUntreatedToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Metabolism_TreatmentPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Metabolism_TreatmentPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Metabolism_TreatmentPanel.UI_Metabolism_TreatmentPanel_C");
		return ptr;
	}

}


