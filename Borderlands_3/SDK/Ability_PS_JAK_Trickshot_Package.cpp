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
	 * 		Name   -> Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnRegistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_PS_JAK_Trickshot_C::OnRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnRegistered");
		
		UAbility_PS_JAK_Trickshot_C_OnRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnCausedDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UAbility_PS_JAK_Trickshot_C::OnCausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnCausedDamage");
		
		UAbility_PS_JAK_Trickshot_C_OnCausedDamage_Params params {};
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
	 * 		Name   -> Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ReloadEndedDelegate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_PS_JAK_Trickshot_C::ReloadEndedDelegate(class AWeapon* EventWeapon, bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ReloadEndedDelegate");
		
		UAbility_PS_JAK_Trickshot_C_ReloadEndedDelegate_Params params {};
		params.EventWeapon = EventWeapon;
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_PS_JAK_Trickshot_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnDeactivated");
		
		UAbility_PS_JAK_Trickshot_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnUnregistered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_PS_JAK_Trickshot_C::OnUnregistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnUnregistered");
		
		UAbility_PS_JAK_Trickshot_C_OnUnregistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_PS_JAK_Trickshot_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.OnPaused");
		
		UAbility_PS_JAK_Trickshot_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ExecuteUbergraph_Ability_PS_JAK_Trickshot
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_PS_JAK_Trickshot_C::ExecuteUbergraph_Ability_PS_JAK_Trickshot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C.ExecuteUbergraph_Ability_PS_JAK_Trickshot");
		
		UAbility_PS_JAK_Trickshot_C_ExecuteUbergraph_Ability_PS_JAK_Trickshot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_PS_JAK_Trickshot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_PS_JAK_Trickshot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_PS_JAK_Trickshot.Ability_PS_JAK_Trickshot_C");
		return ptr;
	}

}


