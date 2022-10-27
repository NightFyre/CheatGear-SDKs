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
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_13_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.OnActivated");
		
		UPassive_Beastmaster_DLCSkill_13_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.SetPetCDM
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_13_C::SetPetCDM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.SetPetCDM");
		
		UPassive_Beastmaster_DLCSkill_13_C_SetPetCDM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.RemovePetCDM
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_13_C::RemovePetCDM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.RemovePetCDM");
		
		UPassive_Beastmaster_DLCSkill_13_C_RemovePetCDM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.Beastmaster_DLCSkill13_OnPetSpawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_13_C::Beastmaster_DLCSkill13_OnPetSpawned(class AOakCharacter* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.Beastmaster_DLCSkill13_OnPetSpawned");
		
		UPassive_Beastmaster_DLCSkill_13_C_Beastmaster_DLCSkill13_OnPetSpawned_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.Beastmaster_DLCSkill13_OnPetReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_13_C::Beastmaster_DLCSkill13_OnPetReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.Beastmaster_DLCSkill13_OnPetReleased");
		
		UPassive_Beastmaster_DLCSkill_13_C_Beastmaster_DLCSkill13_OnPetReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_14
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_13_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_14(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_14");
		
		UPassive_Beastmaster_DLCSkill_13_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_14_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Beastmaster_DLCSkill_13_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Beastmaster_DLCSkill_13_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C");
		return ptr;
	}

}


