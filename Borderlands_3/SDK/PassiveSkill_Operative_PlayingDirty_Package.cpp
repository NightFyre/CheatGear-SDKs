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
	 * 		Name   -> Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.GetManualHUDIconValues
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		int32_t                                            outStackCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              outDuration                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              outTimeRemaining                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_PlayingDirty_C::GetManualHUDIconValues(int32_t* outStackCount, float* outDuration, float* outTimeRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.GetManualHUDIconValues");
		
		UPassiveSkill_Operative_PlayingDirty_C_GetManualHUDIconValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outStackCount != nullptr)
			*outStackCount = params.outStackCount;
		if (outDuration != nullptr)
			*outDuration = params.outDuration;
		if (outTimeRemaining != nullptr)
			*outTimeRemaining = params.outTimeRemaining;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.PlayingDirtyOnWeaponUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_PlayingDirty_C::PlayingDirtyOnWeaponUsed(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.PlayingDirtyOnWeaponUsed");
		
		UPassiveSkill_Operative_PlayingDirty_C_PlayingDirtyOnWeaponUsed_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.OperativeTriggerKillSkillEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     KillLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      KilledEnemy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_PlayingDirty_C::OperativeTriggerKillSkillEffect(const struct FVector& KillLocation, class AActor* KilledEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.OperativeTriggerKillSkillEffect");
		
		UPassiveSkill_Operative_PlayingDirty_C_OperativeTriggerKillSkillEffect_Params params {};
		params.KillLocation = KillLocation;
		params.KilledEnemy = KilledEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_PlayingDirty_C::ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty");
		
		UPassiveSkill_Operative_PlayingDirty_C_ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Operative_PlayingDirty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Operative_PlayingDirty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C");
		return ptr;
	}

}


