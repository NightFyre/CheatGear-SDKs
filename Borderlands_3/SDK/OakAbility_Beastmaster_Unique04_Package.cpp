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
	 * 		Name   -> Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Beastmaster_Unique04_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.OnActivated");
		
		UOakAbility_Beastmaster_Unique04_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.PetSpawned_ClassModUnique04
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Beastmaster_Unique04_C::PetSpawned_ClassModUnique04(class AOakCharacter* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.PetSpawned_ClassModUnique04");
		
		UOakAbility_Beastmaster_Unique04_C_PetSpawned_ClassModUnique04_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ApplyPetConditionalModifier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               NewPet                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Beastmaster_Unique04_C::ApplyPetConditionalModifier(class AOakCharacter* NewPet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ApplyPetConditionalModifier");
		
		UOakAbility_Beastmaster_Unique04_C_ApplyPetConditionalModifier_Params params {};
		params.NewPet = NewPet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.RemovePetModifier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               NewPet                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Beastmaster_Unique04_C::RemovePetModifier(class AOakCharacter* NewPet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.RemovePetModifier");
		
		UOakAbility_Beastmaster_Unique04_C_RemovePetModifier_Params params {};
		params.NewPet = NewPet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique04
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Beastmaster_Unique04_C::ExecuteUbergraph_OakAbility_Beastmaster_Unique04(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique04");
		
		UOakAbility_Beastmaster_Unique04_C_ExecuteUbergraph_OakAbility_Beastmaster_Unique04_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Beastmaster_Unique04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Beastmaster_Unique04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Beastmaster_Unique04.OakAbility_Beastmaster_Unique04_C");
		return ptr;
	}

}


