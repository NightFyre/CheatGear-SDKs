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
	 * 		Name   -> Function UI_CraftingComponentTooltip.UI_CraftingComponentTooltip_C.InitFromItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_CraftingComponent_C*                     componentWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CraftingComponentTooltip_C::InitFromItem(class UUI_CraftingComponent_C* componentWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CraftingComponentTooltip.UI_CraftingComponentTooltip_C.InitFromItem");
		
		UUI_CraftingComponentTooltip_C_InitFromItem_Params params {};
		params.componentWidget = componentWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CraftingComponentTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CraftingComponentTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CraftingComponentTooltip.UI_CraftingComponentTooltip_C");
		return ptr;
	}

}


