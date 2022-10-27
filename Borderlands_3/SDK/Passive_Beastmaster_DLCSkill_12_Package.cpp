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
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_11_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.OnActivated");
		
		UPassive_Beastmaster_DLCSkill_11_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_OnBeastmasterPetSpawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_11_C::DLCSkill11_OnBeastmasterPetSpawned(class AOakCharacter* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_OnBeastmasterPetSpawned");
		
		UPassive_Beastmaster_DLCSkill_11_C_DLCSkill11_OnBeastmasterPetSpawned_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_OnBeastmasterPetReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_11_C::DLCSkill11_OnBeastmasterPetReleased(class AOakCharacter* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_OnBeastmasterPetReleased");
		
		UPassive_Beastmaster_DLCSkill_11_C_DLCSkill11_OnBeastmasterPetReleased_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.SetupPetEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_11_C::SetupPetEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.SetupPetEvents");
		
		UPassive_Beastmaster_DLCSkill_11_C_SetupPetEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.CleanupPetEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_11_C::CleanupPetEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.CleanupPetEvents");
		
		UPassive_Beastmaster_DLCSkill_11_C_CleanupPetEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_Pet_OnCausedDeath
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPassive_Beastmaster_DLCSkill_11_C::DLCSkill11_Pet_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_Pet_OnCausedDeath");
		
		UPassive_Beastmaster_DLCSkill_11_C_DLCSkill11_Pet_OnCausedDeath_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_12
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_11_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_12(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_12");
		
		UPassive_Beastmaster_DLCSkill_11_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_12_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Beastmaster_DLCSkill_11_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Beastmaster_DLCSkill_11_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C");
		return ptr;
	}

}


