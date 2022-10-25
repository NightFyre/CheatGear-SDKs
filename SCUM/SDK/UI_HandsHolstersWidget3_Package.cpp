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
	 * 		Name   -> Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HandsHolstersWidget3_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.PreConstruct");
		
		UUI_HandsHolstersWidget3_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.ExecuteUbergraph_UI_HandsHolstersWidget3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HandsHolstersWidget3_C::ExecuteUbergraph_UI_HandsHolstersWidget3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.ExecuteUbergraph_UI_HandsHolstersWidget3");
		
		UUI_HandsHolstersWidget3_C_ExecuteUbergraph_UI_HandsHolstersWidget3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HandsHolstersWidget3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HandsHolstersWidget3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C");
		return ptr;
	}

}


