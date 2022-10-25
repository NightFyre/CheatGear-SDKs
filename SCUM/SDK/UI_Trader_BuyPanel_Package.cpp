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
	 * 		Name   -> Function UI_Trader_BuyPanel.UI_Trader_BuyPanel_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Trader_BuyPanel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Trader_BuyPanel.UI_Trader_BuyPanel_C.Construct");
		
		UUI_Trader_BuyPanel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Trader_BuyPanel.UI_Trader_BuyPanel_C.ExecuteUbergraph_UI_Trader_BuyPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Trader_BuyPanel_C::ExecuteUbergraph_UI_Trader_BuyPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Trader_BuyPanel.UI_Trader_BuyPanel_C.ExecuteUbergraph_UI_Trader_BuyPanel");
		
		UUI_Trader_BuyPanel_C_ExecuteUbergraph_UI_Trader_BuyPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Trader_BuyPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Trader_BuyPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Trader_BuyPanel.UI_Trader_BuyPanel_C");
		return ptr;
	}

}


