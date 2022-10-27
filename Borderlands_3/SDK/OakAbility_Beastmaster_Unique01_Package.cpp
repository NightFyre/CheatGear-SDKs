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
	 * 		Name   -> Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Beastmaster_Unique01_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.OnActivated");
		
		UOakAbility_Beastmaster_Unique01_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.CausedDeath_UniqueClassMod01
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UOakAbility_Beastmaster_Unique01_C::CausedDeath_UniqueClassMod01(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.CausedDeath_UniqueClassMod01");
		
		UOakAbility_Beastmaster_Unique01_C_CausedDeath_UniqueClassMod01_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.AddPetDamageModifier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Beastmaster_Unique01_C::AddPetDamageModifier(class AOakCharacter* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.AddPetDamageModifier");
		
		UOakAbility_Beastmaster_Unique01_C_AddPetDamageModifier_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique01
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Beastmaster_Unique01_C::ExecuteUbergraph_OakAbility_Beastmaster_Unique01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C.ExecuteUbergraph_OakAbility_Beastmaster_Unique01");
		
		UOakAbility_Beastmaster_Unique01_C_ExecuteUbergraph_OakAbility_Beastmaster_Unique01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Beastmaster_Unique01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Beastmaster_Unique01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Beastmaster_Unique01.OakAbility_Beastmaster_Unique01_C");
		return ptr;
	}

}


