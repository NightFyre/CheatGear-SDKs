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
	 * 		Name   -> Function ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C.Notify_Landed_Pet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UANav_PetJabbermon_Leap_C::Notify_Landed_Pet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C.Notify_Landed_Pet");
		
		UANav_PetJabbermon_Leap_C_Notify_Landed_Pet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C.ExecuteUbergraph_ANav_PetJabbermon_Leap
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANav_PetJabbermon_Leap_C::ExecuteUbergraph_ANav_PetJabbermon_Leap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C.ExecuteUbergraph_ANav_PetJabbermon_Leap");
		
		UANav_PetJabbermon_Leap_C_ExecuteUbergraph_ANav_PetJabbermon_Leap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANav_PetJabbermon_Leap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANav_PetJabbermon_Leap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C");
		return ptr;
	}

}


