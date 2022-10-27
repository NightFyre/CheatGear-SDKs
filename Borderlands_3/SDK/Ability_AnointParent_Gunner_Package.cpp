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
	 * 		Name   -> Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasValidTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ChargeTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_Gunner_C::AnointAutoBearEnded(bool HasValidTarget, class AActor* ChargeTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearEnded");
		
		UAbility_AnointParent_Gunner_C_AnointAutoBearEnded_Params params {};
		params.HasValidTarget = HasValidTarget;
		params.ChargeTarget = ChargeTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_Gunner_C::AnointAutoBearStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearStarted");
		
		UAbility_AnointParent_Gunner_C_AnointAutoBearStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronBearEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_Gunner_C::AnointIronBearEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronBearEnded");
		
		UAbility_AnointParent_Gunner_C_AnointIronBearEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronIronBearStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_IronBear*                      IronBear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_Gunner_C::AnointIronIronBearStarted(class AOakCharacter_IronBear* IronBear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronIronBearStarted");
		
		UAbility_AnointParent_Gunner_C_AnointIronIronBearStarted_Params params {};
		params.IronBear = IronBear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_AnointParent_Gunner_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.OnActivated");
		
		UAbility_AnointParent_Gunner_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.BindGunnerEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_Gunner_C::BindGunnerEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.BindGunnerEvents");
		
		UAbility_AnointParent_Gunner_C_BindGunnerEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.ExecuteUbergraph_Ability_AnointParent_Gunner
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_Gunner_C::ExecuteUbergraph_Ability_AnointParent_Gunner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.ExecuteUbergraph_Ability_AnointParent_Gunner");
		
		UAbility_AnointParent_Gunner_C_ExecuteUbergraph_Ability_AnointParent_Gunner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_AnointParent_Gunner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_AnointParent_Gunner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C");
		return ptr;
	}

}


