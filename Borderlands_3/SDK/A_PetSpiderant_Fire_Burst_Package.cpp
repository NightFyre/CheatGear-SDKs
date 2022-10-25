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
	 * 		Name   -> Function A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C.Notify_SkillUse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetSpiderant_Fire_Burst_C::Notify_SkillUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C.Notify_SkillUse");
		
		UA_PetSpiderant_Fire_Burst_C_Notify_SkillUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C.ExecuteUbergraph_A_PetSpiderant_Fire_Burst
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSpiderant_Fire_Burst_C::ExecuteUbergraph_A_PetSpiderant_Fire_Burst(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C.ExecuteUbergraph_A_PetSpiderant_Fire_Burst");
		
		UA_PetSpiderant_Fire_Burst_C_ExecuteUbergraph_A_PetSpiderant_Fire_Burst_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetSpiderant_Fire_Burst_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetSpiderant_Fire_Burst_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C");
		return ptr;
	}

}


