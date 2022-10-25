/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ActiveObjectiveDisplay.BP_ActiveObjectiveDisplay_C.OnNumCapturersChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_ActiveObjectiveDisplay_C::OnNumCapturersChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActiveObjectiveDisplay.BP_ActiveObjectiveDisplay_C.OnNumCapturersChanged");
		
		UBP_ActiveObjectiveDisplay_C_OnNumCapturersChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ActiveObjectiveDisplay.BP_ActiveObjectiveDisplay_C.ExecuteUbergraph_BP_ActiveObjectiveDisplay
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ActiveObjectiveDisplay_C::ExecuteUbergraph_BP_ActiveObjectiveDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ActiveObjectiveDisplay.BP_ActiveObjectiveDisplay_C.ExecuteUbergraph_BP_ActiveObjectiveDisplay");
		
		UBP_ActiveObjectiveDisplay_C_ExecuteUbergraph_BP_ActiveObjectiveDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ActiveObjectiveDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ActiveObjectiveDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ActiveObjectiveDisplay.BP_ActiveObjectiveDisplay_C");
		return ptr;
	}

}


