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
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.SirenUnique04_ActivatedRushBonus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RushStacks                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Siren_ClassMod_Unique_04_C::SirenUnique04_ActivatedRushBonus(int32_t RushStacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.SirenUnique04_ActivatedRushBonus");
		
		UOakAbility_Siren_ClassMod_Unique_04_C_SirenUnique04_ActivatedRushBonus_Params params {};
		params.RushStacks = RushStacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.TickDownRushStacks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Siren_ClassMod_Unique_04_C::TickDownRushStacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.TickDownRushStacks");
		
		UOakAbility_Siren_ClassMod_Unique_04_C_TickDownRushStacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Siren_ClassMod_Unique_04_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.OnActivated");
		
		UOakAbility_Siren_ClassMod_Unique_04_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Siren_ClassMod_Unique_04_C::ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04");
		
		UOakAbility_Siren_ClassMod_Unique_04_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_04_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Siren_ClassMod_Unique_04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Siren_ClassMod_Unique_04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_04.OakAbility_Siren_ClassMod_Unique_04_C");
		return ptr;
	}

}


