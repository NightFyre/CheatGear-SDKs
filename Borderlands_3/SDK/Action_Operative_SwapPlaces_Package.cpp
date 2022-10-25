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
	 * 		Name   -> Function Action_Operative_SwapPlaces.Action_Operative_SwapPlaces_C.Notify_SwapPlaces
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Operative_SwapPlaces_C::Notify_SwapPlaces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_SwapPlaces.Action_Operative_SwapPlaces_C.Notify_SwapPlaces");
		
		UAction_Operative_SwapPlaces_C_Notify_SwapPlaces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_SwapPlaces.Action_Operative_SwapPlaces_C.ExecuteUbergraph_Action_Operative_SwapPlaces
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_SwapPlaces_C::ExecuteUbergraph_Action_Operative_SwapPlaces(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_SwapPlaces.Action_Operative_SwapPlaces_C.ExecuteUbergraph_Action_Operative_SwapPlaces");
		
		UAction_Operative_SwapPlaces_C_ExecuteUbergraph_Action_Operative_SwapPlaces_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Operative_SwapPlaces_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Operative_SwapPlaces_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_SwapPlaces.Action_Operative_SwapPlaces_C");
		return ptr;
	}

}


