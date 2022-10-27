/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_ButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Operative_ToggleBarrier_C::AN_ButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_ButtonPressed");
		
		UAction_Operative_ToggleBarrier_C_AN_ButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_ShowDevice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Operative_ToggleBarrier_C::AN_ShowDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_ShowDevice");
		
		UAction_Operative_ToggleBarrier_C_AN_ShowDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_HideDevice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Operative_ToggleBarrier_C::AN_HideDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.AN_HideDevice");
		
		UAction_Operative_ToggleBarrier_C_AN_HideDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.ExecuteUbergraph_Action_Operative_ToggleBarrier
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_ToggleBarrier_C::ExecuteUbergraph_Action_Operative_ToggleBarrier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C.ExecuteUbergraph_Action_Operative_ToggleBarrier");
		
		UAction_Operative_ToggleBarrier_C_ExecuteUbergraph_Action_Operative_ToggleBarrier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Operative_ToggleBarrier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Operative_ToggleBarrier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C");
		return ptr;
	}

}


