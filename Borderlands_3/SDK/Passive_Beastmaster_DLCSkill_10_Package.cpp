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
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.GetManualHUDIconValues
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		int32_t                                            outStackCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              outDuration                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              outTimeRemaining                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_9_C::GetManualHUDIconValues(int32_t* outStackCount, float* outDuration, float* outTimeRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.GetManualHUDIconValues");
		
		UPassive_Beastmaster_DLCSkill_9_C_GetManualHUDIconValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outStackCount != nullptr)
			*outStackCount = params.outStackCount;
		if (outDuration != nullptr)
			*outDuration = params.outDuration;
		if (outTimeRemaining != nullptr)
			*outTimeRemaining = params.outTimeRemaining;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.SetupPetDamageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_9_C::SetupPetDamageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.SetupPetDamageEvent");
		
		UPassive_Beastmaster_DLCSkill_9_C_SetupPetDamageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.RemovePetDamageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_9_C::RemovePetDamageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.RemovePetDamageEvent");
		
		UPassive_Beastmaster_DLCSkill_9_C_RemovePetDamageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastPetSpawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_9_C::DLCSkill9_OnBeastPetSpawned(class AOakCharacter* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastPetSpawned");
		
		UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_OnBeastPetSpawned_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastmasterPetReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_9_C::DLCSkill9_OnBeastmasterPetReleased(class AOakCharacter* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastmasterPetReleased");
		
		UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_OnBeastmasterPetReleased_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Pet_OnCausedAnyDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UPassive_Beastmaster_DLCSkill_9_C::DLCSkill9_Pet_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Pet_OnCausedAnyDamage");
		
		UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_Pet_OnCausedAnyDamage_Params params {};
		params.DamageInstigator = DamageInstigator;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.DamagedActor = DamagedActor;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Player_OnWeaponUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_9_C::DLCSkill9_Player_OnWeaponUsed(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Player_OnWeaponUsed");
		
		UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_Player_OnWeaponUsed_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_DLCSkill_9_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.OnActivated");
		
		UPassive_Beastmaster_DLCSkill_9_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_DLCSkill_9_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10");
		
		UPassive_Beastmaster_DLCSkill_9_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Beastmaster_DLCSkill_9_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Beastmaster_DLCSkill_9_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C");
		return ptr;
	}

}


