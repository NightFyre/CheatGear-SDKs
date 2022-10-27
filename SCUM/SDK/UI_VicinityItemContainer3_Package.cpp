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
	 * 		Name   -> Function UI_VicinityItemContainer3.UI_VicinityItemContainer3_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_VicinityItemContainer3_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer3.UI_VicinityItemContainer3_C.Construct");
		
		UUI_VicinityItemContainer3_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VicinityItemContainer3.UI_VicinityItemContainer3_C.ExecuteUbergraph_UI_VicinityItemContainer3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_VicinityItemContainer3_C::ExecuteUbergraph_UI_VicinityItemContainer3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer3.UI_VicinityItemContainer3_C.ExecuteUbergraph_UI_VicinityItemContainer3");
		
		UUI_VicinityItemContainer3_C_ExecuteUbergraph_UI_VicinityItemContainer3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_VicinityItemContainer3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_VicinityItemContainer3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_VicinityItemContainer3.UI_VicinityItemContainer3_C");
		return ptr;
	}

}


