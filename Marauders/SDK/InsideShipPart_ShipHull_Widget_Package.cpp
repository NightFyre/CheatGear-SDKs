/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function InsideShipPart_ShipHull_Widget.InsideShipPart_ShipHull_Widget_C.SetupInitialLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text_PartName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInsideShipPart_ShipHull_Widget_C::SetupInitialLook(const class FText& Text_PartName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsideShipPart_ShipHull_Widget.InsideShipPart_ShipHull_Widget_C.SetupInitialLook");
		
		UInsideShipPart_ShipHull_Widget_C_SetupInitialLook_Params params {};
		params.Text_PartName = Text_PartName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InsideShipPart_ShipHull_Widget.InsideShipPart_ShipHull_Widget_C.UpdatePartHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Current                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInsideShipPart_ShipHull_Widget_C::UpdatePartHealth(float Current, float Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsideShipPart_ShipHull_Widget.InsideShipPart_ShipHull_Widget_C.UpdatePartHealth");
		
		UInsideShipPart_ShipHull_Widget_C_UpdatePartHealth_Params params {};
		params.Current = Current;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInsideShipPart_ShipHull_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInsideShipPart_ShipHull_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InsideShipPart_ShipHull_Widget.InsideShipPart_ShipHull_Widget_C");
		return ptr;
	}

}


