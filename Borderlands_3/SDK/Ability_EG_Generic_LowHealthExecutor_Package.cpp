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
	 * 		Name   -> Function Ability_EG_Generic_LowHealthExecutor.Ability_EG_Generic_LowHealthExecutor_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_EG_Generic_LowHealthExecutor_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_LowHealthExecutor.Ability_EG_Generic_LowHealthExecutor_C.OnActivated");
		
		UAbility_EG_Generic_LowHealthExecutor_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_EG_Generic_LowHealthExecutor.Ability_EG_Generic_LowHealthExecutor_C.ExecuteUbergraph_Ability_EG_Generic_LowHealthExecutor
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_EG_Generic_LowHealthExecutor_C::ExecuteUbergraph_Ability_EG_Generic_LowHealthExecutor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_EG_Generic_LowHealthExecutor.Ability_EG_Generic_LowHealthExecutor_C.ExecuteUbergraph_Ability_EG_Generic_LowHealthExecutor");
		
		UAbility_EG_Generic_LowHealthExecutor_C_ExecuteUbergraph_Ability_EG_Generic_LowHealthExecutor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_EG_Generic_LowHealthExecutor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_EG_Generic_LowHealthExecutor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_EG_Generic_LowHealthExecutor.Ability_EG_Generic_LowHealthExecutor_C");
		return ptr;
	}

}


