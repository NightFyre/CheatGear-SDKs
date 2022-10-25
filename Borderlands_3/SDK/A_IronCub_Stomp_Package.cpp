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
	 * 		Name   -> Function A_IronCub_Stomp.A_IronCub_Stomp_C.AN_StompDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_IronCub_Stomp_C::AN_StompDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_IronCub_Stomp.A_IronCub_Stomp_C.AN_StompDamage");
		
		UA_IronCub_Stomp_C_AN_StompDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_IronCub_Stomp.A_IronCub_Stomp_C.AN_StompKnockback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_IronCub_Stomp_C::AN_StompKnockback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_IronCub_Stomp.A_IronCub_Stomp_C.AN_StompKnockback");
		
		UA_IronCub_Stomp_C_AN_StompKnockback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_IronCub_Stomp.A_IronCub_Stomp_C.ExecuteUbergraph_A_IronCub_Stomp
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_IronCub_Stomp_C::ExecuteUbergraph_A_IronCub_Stomp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_IronCub_Stomp.A_IronCub_Stomp_C.ExecuteUbergraph_A_IronCub_Stomp");
		
		UA_IronCub_Stomp_C_ExecuteUbergraph_A_IronCub_Stomp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_IronCub_Stomp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_IronCub_Stomp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_IronCub_Stomp.A_IronCub_Stomp_C");
		return ptr;
	}

}


