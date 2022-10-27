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
	 * 		Name   -> Function UI_Metabolism_RadialAttributeProgressBar.UI_Metabolism_RadialAttributeProgressBar_C.ExecuteUbergraph_UI_Metabolism_RadialAttributeProgressBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Metabolism_RadialAttributeProgressBar_C::ExecuteUbergraph_UI_Metabolism_RadialAttributeProgressBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Metabolism_RadialAttributeProgressBar.UI_Metabolism_RadialAttributeProgressBar_C.ExecuteUbergraph_UI_Metabolism_RadialAttributeProgressBar");
		
		UUI_Metabolism_RadialAttributeProgressBar_C_ExecuteUbergraph_UI_Metabolism_RadialAttributeProgressBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Metabolism_RadialAttributeProgressBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Metabolism_RadialAttributeProgressBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Metabolism_RadialAttributeProgressBar.UI_Metabolism_RadialAttributeProgressBar_C");
		return ptr;
	}

}


