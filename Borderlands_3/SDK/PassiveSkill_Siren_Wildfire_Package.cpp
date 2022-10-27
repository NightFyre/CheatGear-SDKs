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
	 * 		Name   -> Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_Wildfire_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OnActivated");
		
		UPassiveSkill_Siren_Wildfire_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedElementalEffect
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStatusEffectSpec                           Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPassiveSkill_Siren_Wildfire_C::WildfireOnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedElementalEffect");
		
		UPassiveSkill_Siren_Wildfire_C_WildfireOnCausedElementalEffect_Params params {};
		params.Causer = Causer;
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedMaxResource
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakStatusEffectResourceEffectType                 ResourceEffectType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_Wildfire_C::WildfireOnCausedMaxResource(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedMaxResource");
		
		UPassiveSkill_Siren_Wildfire_C_WildfireOnCausedMaxResource_Params params {};
		params.Target = Target;
		params.ResourceEffectType = ResourceEffectType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OpenWildfireGates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_Wildfire_C::OpenWildfireGates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OpenWildfireGates");
		
		UPassiveSkill_Siren_Wildfire_C_OpenWildfireGates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.CloseWildfireGates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_Wildfire_C::CloseWildfireGates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.CloseWildfireGates");
		
		UPassiveSkill_Siren_Wildfire_C_CloseWildfireGates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.ExecuteUbergraph_PassiveSkill_Siren_Wildfire
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_Wildfire_C::ExecuteUbergraph_PassiveSkill_Siren_Wildfire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.ExecuteUbergraph_PassiveSkill_Siren_Wildfire");
		
		UPassiveSkill_Siren_Wildfire_C_ExecuteUbergraph_PassiveSkill_Siren_Wildfire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Siren_Wildfire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Siren_Wildfire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C");
		return ptr;
	}

}


