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
	 * 		Name   -> Function A_Pet_Taunt.A_Pet_Taunt_C.Notify_Taunt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_Pet_Taunt_C::Notify_Taunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_Taunt.A_Pet_Taunt_C.Notify_Taunt");
		
		UA_Pet_Taunt_C_Notify_Taunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Pet_Taunt.A_Pet_Taunt_C.ExecuteUbergraph_A_Pet_Taunt
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Pet_Taunt_C::ExecuteUbergraph_A_Pet_Taunt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_Taunt.A_Pet_Taunt_C.ExecuteUbergraph_A_Pet_Taunt");
		
		UA_Pet_Taunt_C_ExecuteUbergraph_A_Pet_Taunt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_Pet_Taunt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_Pet_Taunt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_Pet_Taunt.A_Pet_Taunt_C");
		return ptr;
	}

}


