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
	 * 		Name   -> Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointTriggerEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TriggerEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Siren_Grasp_ConstantNova_C::AnointTriggerEffect(bool TriggerEffect, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointTriggerEffect");
		
		UAbility_Siren_Grasp_ConstantNova_C_AnointTriggerEffect_Params params {};
		params.TriggerEffect = TriggerEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.TriggerNova
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Siren_Grasp_ConstantNova_C::TriggerNova()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.TriggerNova");
		
		UAbility_Siren_Grasp_ConstantNova_C_TriggerNova_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointRemoveEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Siren_Grasp_ConstantNova_C::AnointRemoveEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointRemoveEffect");
		
		UAbility_Siren_Grasp_ConstantNova_C_AnointRemoveEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.StartTriggeringNovas
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Siren_Grasp_ConstantNova_C::StartTriggeringNovas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.StartTriggeringNovas");
		
		UAbility_Siren_Grasp_ConstantNova_C_StartTriggeringNovas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointGraspEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_Siren_Grasp_ConstantNova_C::AnointGraspEnded(bool Killed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointGraspEnded");
		
		UAbility_Siren_Grasp_ConstantNova_C_AnointGraspEnded_Params params {};
		params.Killed = Killed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Siren_Grasp_ConstantNova_C::ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova");
		
		UAbility_Siren_Grasp_ConstantNova_C_ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Siren_Grasp_ConstantNova_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Siren_Grasp_ConstantNova_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C");
		return ptr;
	}

}


