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
	 * 		Name   -> Function UI_ItemMainTooltipPanel.UI_ItemMainTooltipPanel_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ItemMainTooltipPanel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemMainTooltipPanel.UI_ItemMainTooltipPanel_C.Construct");
		
		UUI_ItemMainTooltipPanel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ItemMainTooltipPanel.UI_ItemMainTooltipPanel_C.ExecuteUbergraph_UI_ItemMainTooltipPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ItemMainTooltipPanel_C::ExecuteUbergraph_UI_ItemMainTooltipPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ItemMainTooltipPanel.UI_ItemMainTooltipPanel_C.ExecuteUbergraph_UI_ItemMainTooltipPanel");
		
		UUI_ItemMainTooltipPanel_C_ExecuteUbergraph_UI_ItemMainTooltipPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ItemMainTooltipPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ItemMainTooltipPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ItemMainTooltipPanel.UI_ItemMainTooltipPanel_C");
		return ptr;
	}

}


