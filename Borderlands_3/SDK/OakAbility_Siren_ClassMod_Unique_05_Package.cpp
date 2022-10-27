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
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Siren_ClassMod_Unique_05_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActivated");
		
		UOakAbility_Siren_ClassMod_Unique_05_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnGraspedTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxCharacter*                               GraspedTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Siren_ClassMod_Unique_05_C::OnGraspedTarget(class AGbxCharacter* GraspedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnGraspedTarget");
		
		UOakAbility_Siren_ClassMod_Unique_05_C_OnGraspedTarget_Params params {};
		params.GraspedTarget = GraspedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActionSkillActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Siren_ClassMod_Unique_05_C::OnActionSkillActivated(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnActionSkillActivated");
		
		UOakAbility_Siren_ClassMod_Unique_05_C_OnActionSkillActivated_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnCausedAnyDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UOakAbility_Siren_ClassMod_Unique_05_C::OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OnCausedAnyDamage");
		
		UOakAbility_Siren_ClassMod_Unique_05_C_OnCausedAnyDamage_Params params {};
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
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OpenDamageGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOakAbility_Siren_ClassMod_Unique_05_C::OpenDamageGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.OpenDamageGate");
		
		UOakAbility_Siren_ClassMod_Unique_05_C_OpenDamageGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Siren_ClassMod_Unique_05_C::ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05");
		
		UOakAbility_Siren_ClassMod_Unique_05_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_05_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Siren_ClassMod_Unique_05_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Siren_ClassMod_Unique_05_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_05.OakAbility_Siren_ClassMod_Unique_05_C");
		return ptr;
	}

}


