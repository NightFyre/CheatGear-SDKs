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
	 * 		Name   -> Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_DoubleDowner_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnActivated");
		
		UAbility_DoubleDowner_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_DoubleDowner.Ability_DoubleDowner_C.Downed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_DoubleDowner_C::Downed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DoubleDowner.Ability_DoubleDowner_C.Downed");
		
		UAbility_DoubleDowner_C_Downed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_DoubleDowner.Ability_DoubleDowner_C.Upped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_DoubleDowner_C::Upped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DoubleDowner.Ability_DoubleDowner_C.Upped");
		
		UAbility_DoubleDowner_C_Upped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_DoubleDowner_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DoubleDowner.Ability_DoubleDowner_C.OnDeactivated");
		
		UAbility_DoubleDowner_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_DoubleDowner.Ability_DoubleDowner_C.ExecuteUbergraph_Ability_DoubleDowner
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_DoubleDowner_C::ExecuteUbergraph_Ability_DoubleDowner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_DoubleDowner.Ability_DoubleDowner_C.ExecuteUbergraph_Ability_DoubleDowner");
		
		UAbility_DoubleDowner_C_ExecuteUbergraph_Ability_DoubleDowner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_DoubleDowner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_DoubleDowner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_DoubleDowner.Ability_DoubleDowner_C");
		return ptr;
	}

}


