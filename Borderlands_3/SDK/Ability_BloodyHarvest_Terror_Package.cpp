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
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ForceResetAllTerror
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::ForceResetAllTerror()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ForceResetAllTerror");
		
		UAbility_BloodyHarvest_Terror_C_ForceResetAllTerror_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.SetTerrorResourcePool
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::SetTerrorResourcePool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.SetTerrorResourcePool");
		
		UAbility_BloodyHarvest_Terror_C_SetTerrorResourcePool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.GetTerrorResourcePoolValues
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Terror_Current_Value                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_BloodyHarvest_Terror_C::GetTerrorResourcePoolValues(bool* IsValid, float* Terror_Current_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.GetTerrorResourcePoolValues");
		
		UAbility_BloodyHarvest_Terror_C_GetTerrorResourcePoolValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (Terror_Current_Value != nullptr)
			*Terror_Current_Value = params.Terror_Current_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::RemoveTerror()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror");
		
		UAbility_BloodyHarvest_Terror_C_RemoveTerror_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror3_Presentation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::ApplyTerror3_Presentation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror3_Presentation");
		
		UAbility_BloodyHarvest_Terror_C_ApplyTerror3_Presentation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror2_Presentation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::ApplyTerror2_Presentation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror2_Presentation");
		
		UAbility_BloodyHarvest_Terror_C_ApplyTerror2_Presentation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror1_Presentation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::ApplyTerror1_Presentation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror1_Presentation");
		
		UAbility_BloodyHarvest_Terror_C_ApplyTerror1_Presentation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror3_Presentation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::RemoveTerror3_Presentation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror3_Presentation");
		
		UAbility_BloodyHarvest_Terror_C_RemoveTerror3_Presentation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror2_Presentation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::RemoveTerror2_Presentation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror2_Presentation");
		
		UAbility_BloodyHarvest_Terror_C_RemoveTerror2_Presentation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror1_Presentation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::RemoveTerror1_Presentation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.RemoveTerror1_Presentation");
		
		UAbility_BloodyHarvest_Terror_C_RemoveTerror1_Presentation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::ApplyTerror()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ApplyTerror");
		
		UAbility_BloodyHarvest_Terror_C_ApplyTerror_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.Terror
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::Terror()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.Terror");
		
		UAbility_BloodyHarvest_Terror_C_Terror_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.Update Terror
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameResourcePoolReference                  ResourcePool                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void UAbility_BloodyHarvest_Terror_C::Update_Terror(const struct FGameResourcePoolReference& ResourcePool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.Update Terror");
		
		UAbility_BloodyHarvest_Terror_C_Update_Terror_Params params {};
		params.ResourcePool = ResourcePool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnDeath_Terror
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_BloodyHarvest_Terror_C::OnDeath_Terror(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnDeath_Terror");
		
		UAbility_BloodyHarvest_Terror_C_OnDeath_Terror_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnActivated");
		
		UAbility_BloodyHarvest_Terror_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_BloodyHarvest_Terror_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.OnDeactivated");
		
		UAbility_BloodyHarvest_Terror_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ExecuteUbergraph_Ability_BloodyHarvest_Terror
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_BloodyHarvest_Terror_C::ExecuteUbergraph_Ability_BloodyHarvest_Terror(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C.ExecuteUbergraph_Ability_BloodyHarvest_Terror");
		
		UAbility_BloodyHarvest_Terror_C_ExecuteUbergraph_Ability_BloodyHarvest_Terror_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_BloodyHarvest_Terror_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_BloodyHarvest_Terror_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_BloodyHarvest_Terror.Ability_BloodyHarvest_Terror_C");
		return ptr;
	}

}


