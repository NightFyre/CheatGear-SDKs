/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Overlay Visibility on Dragging
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility Uv2_WB_EquipmentSlot_C::GetOverlayVisibilityonDragging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Overlay Visibility on Dragging");
		
		Uv2_WB_EquipmentSlot_C_GetOverlayVisibilityonDragging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Frame Image Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility Uv2_WB_EquipmentSlot_C::GetFrameImageVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Frame Image Visibility");
		
		Uv2_WB_EquipmentSlot_C_GetFrameImageVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Item Image Opacity
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor Uv2_WB_EquipmentSlot_C::GetItemImageOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Item Image Opacity");
		
		Uv2_WB_EquipmentSlot_C_GetItemImageOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Drop Preview Image Opacity
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor Uv2_WB_EquipmentSlot_C::GetDropPreviewImageOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Drop Preview Image Opacity");
		
		Uv2_WB_EquipmentSlot_C_GetDropPreviewImageOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Drop Preview Color and Opacity
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor Uv2_WB_EquipmentSlot_C::GetDropPreviewColorandOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Drop Preview Color and Opacity");
		
		Uv2_WB_EquipmentSlot_C_GetDropPreviewColorandOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Gauge Visibility
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility Uv2_WB_EquipmentSlot_C::GetGaugeVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Gauge Visibility");
		
		Uv2_WB_EquipmentSlot_C_GetGaugeVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Gauge Percent
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float Uv2_WB_EquipmentSlot_C::GetGaugePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Gauge Percent");
		
		Uv2_WB_EquipmentSlot_C_GetGaugePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Count Text
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText Uv2_WB_EquipmentSlot_C::GetCountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Count Text");
		
		Uv2_WB_EquipmentSlot_C_GetCountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Count Visibility
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility Uv2_WB_EquipmentSlot_C::GetCountVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C.Get Count Visibility");
		
		Uv2_WB_EquipmentSlot_C_GetCountVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uv2_WB_EquipmentSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uv2_WB_EquipmentSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass v2_WB_EquipmentSlot.v2_WB_EquipmentSlot_C");
		return ptr;
	}

}


