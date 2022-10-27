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
	 * 		Name   -> Function Passive_Siren_DLCSkill_5.Passive_Siren_DLCSkill_4_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Siren_DLCSkill_4_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_5.Passive_Siren_DLCSkill_4_C.OnActivated");
		
		UPassive_Siren_DLCSkill_4_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Siren_DLCSkill_5.Passive_Siren_DLCSkill_4_C.DLCSkill4_OnCausedMaxResourceEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOakStatusEffectResourceEffectType                 ResourceEffectType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Siren_DLCSkill_4_C::DLCSkill4_OnCausedMaxResourceEffect(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_5.Passive_Siren_DLCSkill_4_C.DLCSkill4_OnCausedMaxResourceEffect");
		
		UPassive_Siren_DLCSkill_4_C_DLCSkill4_OnCausedMaxResourceEffect_Params params {};
		params.Target = Target;
		params.ResourceEffectType = ResourceEffectType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Siren_DLCSkill_5.Passive_Siren_DLCSkill_4_C.ExecuteUbergraph_Passive_Siren_DLCSkill_5
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Siren_DLCSkill_4_C::ExecuteUbergraph_Passive_Siren_DLCSkill_5(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_5.Passive_Siren_DLCSkill_4_C.ExecuteUbergraph_Passive_Siren_DLCSkill_5");
		
		UPassive_Siren_DLCSkill_4_C_ExecuteUbergraph_Passive_Siren_DLCSkill_5_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Siren_DLCSkill_4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Siren_DLCSkill_4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_DLCSkill_5.Passive_Siren_DLCSkill_4_C");
		return ptr;
	}

}


