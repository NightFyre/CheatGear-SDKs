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
	 * 		Name   -> Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointFlareStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPhaseTranceAttackFamilyType                       FamilyType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPhasetranceAttackAction                           ActionAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_Siren_C::AnointFlareStarted(EPhaseTranceAttackFamilyType FamilyType, EPhasetranceAttackAction ActionAction, bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointFlareStarted");
		
		UAbility_AnointParent_Siren_C_AnointFlareStarted_Params params {};
		params.FamilyType = FamilyType;
		params.ActionAction = ActionAction;
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointCastStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPhaseTranceAttackFamilyType                       FamilyType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPhasetranceAttackAction                           AttackAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_Siren_C::AnointCastStarted(EPhaseTranceAttackFamilyType FamilyType, EPhasetranceAttackAction AttackAction, bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointCastStarted");
		
		UAbility_AnointParent_Siren_C_AnointCastStarted_Params params {};
		params.FamilyType = FamilyType;
		params.AttackAction = AttackAction;
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_Siren_C::AnointGraspEnded(bool Killed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspEnded");
		
		UAbility_AnointParent_Siren_C_AnointGraspEnded_Params params {};
		params.Killed = Killed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPhaseTranceElementalType                          Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_Siren_C::AnointGraspStarted(class AActor* Enemy, EPhaseTranceElementalType Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointGraspStarted");
		
		UAbility_AnointParent_Siren_C_AnointGraspStarted_Params params {};
		params.Enemy = Enemy;
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_Siren_C::AnointSlamEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamEnded");
		
		UAbility_AnointParent_Siren_C_AnointSlamEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_Siren_C::AnointSlamStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.AnointSlamStarted");
		
		UAbility_AnointParent_Siren_C_AnointSlamStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_AnointParent_Siren_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.OnActivated");
		
		UAbility_AnointParent_Siren_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.BindSirenEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_AnointParent_Siren_C::BindSirenEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.BindSirenEvents");
		
		UAbility_AnointParent_Siren_C_BindSirenEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.ExecuteUbergraph_Ability_AnointParent_Siren
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_AnointParent_Siren_C::ExecuteUbergraph_Ability_AnointParent_Siren(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Siren.Ability_AnointParent_Siren_C.ExecuteUbergraph_Ability_AnointParent_Siren");
		
		UAbility_AnointParent_Siren_C_ExecuteUbergraph_Ability_AnointParent_Siren_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_AnointParent_Siren_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_AnointParent_Siren_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent_Siren.Ability_AnointParent_Siren_C");
		return ptr;
	}

}


