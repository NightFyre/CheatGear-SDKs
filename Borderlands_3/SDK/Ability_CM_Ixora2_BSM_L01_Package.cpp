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
	 * 		Name   -> Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_CM_Ixora2_BSM_L01_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.OnActivated");
		
		UAbility_CM_Ixora2_BSM_L01_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.BSMIxora2CM_OnCausedAnyDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UAbility_CM_Ixora2_BSM_L01_C::BSMIxora2CM_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.BSMIxora2CM_OnCausedAnyDamage");
		
		UAbility_CM_Ixora2_BSM_L01_C_BSMIxora2CM_OnCausedAnyDamage_Params params {};
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
	 * 		Name   -> Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.BSMIxora2CM_OnBeastmasterPetSpawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_CM_Ixora2_BSM_L01_C::BSMIxora2CM_OnBeastmasterPetSpawned(class AOakCharacter* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.BSMIxora2CM_OnBeastmasterPetSpawned");
		
		UAbility_CM_Ixora2_BSM_L01_C_BSMIxora2CM_OnBeastmasterPetSpawned_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.BSMIxora2CM_OnBeastmasterPetReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_CM_Ixora2_BSM_L01_C::BSMIxora2CM_OnBeastmasterPetReleased(class AOakCharacter* Pet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.BSMIxora2CM_OnBeastmasterPetReleased");
		
		UAbility_CM_Ixora2_BSM_L01_C_BSMIxora2CM_OnBeastmasterPetReleased_Params params {};
		params.Pet = Pet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.SetupPetEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_CM_Ixora2_BSM_L01_C::SetupPetEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.SetupPetEvents");
		
		UAbility_CM_Ixora2_BSM_L01_C_SetupPetEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.ExecuteUbergraph_Ability_CM_Ixora2_BSM_L01
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_CM_Ixora2_BSM_L01_C::ExecuteUbergraph_Ability_CM_Ixora2_BSM_L01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C.ExecuteUbergraph_Ability_CM_Ixora2_BSM_L01");
		
		UAbility_CM_Ixora2_BSM_L01_C_ExecuteUbergraph_Ability_CM_Ixora2_BSM_L01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_CM_Ixora2_BSM_L01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_CM_Ixora2_BSM_L01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CM_Ixora2_BSM_L01.Ability_CM_Ixora2_BSM_L01_C");
		return ptr;
	}

}


