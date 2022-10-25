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
	 * 		Name   -> Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Gunner_CausedElementalEffectParent_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.OnActivated");
		
		UPassive_Gunner_CausedElementalEffectParent_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.GunnerCausedElementalEffect
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStatusEffectSpec                           Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UPassive_Gunner_CausedElementalEffectParent_C::GunnerCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.GunnerCausedElementalEffect");
		
		UPassive_Gunner_CausedElementalEffectParent_C_GunnerCausedElementalEffect_Params params {};
		params.Causer = Causer;
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.Gunner_IronBearEnteredAndReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_IronBear*                      IronBear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_CausedElementalEffectParent_C::Gunner_IronBearEnteredAndReady(class AOakCharacter_IronBear* IronBear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.Gunner_IronBearEnteredAndReady");
		
		UPassive_Gunner_CausedElementalEffectParent_C_Gunner_IronBearEnteredAndReady_Params params {};
		params.IronBear = IronBear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Gunner_CausedElementalEffectParent_C::ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent");
		
		UPassive_Gunner_CausedElementalEffectParent_C_ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Gunner_CausedElementalEffectParent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Gunner_CausedElementalEffectParent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C");
		return ptr;
	}

}


