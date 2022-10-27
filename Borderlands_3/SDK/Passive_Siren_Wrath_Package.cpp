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
	 * 		Name   -> Function Passive_Siren_Wrath.Passive_Siren_Wrath_C.SirenActionAbilityTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Siren_Wrath_C::SirenActionAbilityTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Siren_Wrath.Passive_Siren_Wrath_C.SirenActionAbilityTrigger");
		
		UPassive_Siren_Wrath_C_SirenActionAbilityTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Siren_Wrath.Passive_Siren_Wrath_C.ExecuteUbergraph_Passive_Siren_Wrath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Siren_Wrath_C::ExecuteUbergraph_Passive_Siren_Wrath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Siren_Wrath.Passive_Siren_Wrath_C.ExecuteUbergraph_Passive_Siren_Wrath");
		
		UPassive_Siren_Wrath_C_ExecuteUbergraph_Passive_Siren_Wrath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Siren_Wrath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Siren_Wrath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_Wrath.Passive_Siren_Wrath_C");
		return ptr;
	}

}


