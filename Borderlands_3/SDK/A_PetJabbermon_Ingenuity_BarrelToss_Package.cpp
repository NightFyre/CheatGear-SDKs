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
	 * 		Name   -> Function A_PetJabbermon_Ingenuity_BarrelToss.A_PetJabbermon_Ingenuity_BarrelToss_C.Notify_Throw
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetJabbermon_Ingenuity_BarrelToss_C::Notify_Throw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelToss.A_PetJabbermon_Ingenuity_BarrelToss_C.Notify_Throw");
		
		UA_PetJabbermon_Ingenuity_BarrelToss_C_Notify_Throw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetJabbermon_Ingenuity_BarrelToss.A_PetJabbermon_Ingenuity_BarrelToss_C.ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelToss
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetJabbermon_Ingenuity_BarrelToss_C::ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelToss(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetJabbermon_Ingenuity_BarrelToss.A_PetJabbermon_Ingenuity_BarrelToss_C.ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelToss");
		
		UA_PetJabbermon_Ingenuity_BarrelToss_C_ExecuteUbergraph_A_PetJabbermon_Ingenuity_BarrelToss_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetJabbermon_Ingenuity_BarrelToss_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetJabbermon_Ingenuity_BarrelToss_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetJabbermon_Ingenuity_BarrelToss.A_PetJabbermon_Ingenuity_BarrelToss_C");
		return ptr;
	}

}


