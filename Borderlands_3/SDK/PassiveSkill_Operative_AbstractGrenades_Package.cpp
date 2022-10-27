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
	 * 		Name   -> Function PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C.OperativeTriggerKillSkillEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     KillLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      KilledEnemy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_AbstractGrenades_C::OperativeTriggerKillSkillEffect(const struct FVector& KillLocation, class AActor* KilledEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C.OperativeTriggerKillSkillEffect");
		
		UPassiveSkill_Operative_AbstractGrenades_C_OperativeTriggerKillSkillEffect_Params params {};
		params.KillLocation = KillLocation;
		params.KilledEnemy = KilledEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C.ExecuteUbergraph_PassiveSkill_Operative_AbstractGrenades
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_AbstractGrenades_C::ExecuteUbergraph_PassiveSkill_Operative_AbstractGrenades(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C.ExecuteUbergraph_PassiveSkill_Operative_AbstractGrenades");
		
		UPassiveSkill_Operative_AbstractGrenades_C_ExecuteUbergraph_PassiveSkill_Operative_AbstractGrenades_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Operative_AbstractGrenades_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Operative_AbstractGrenades_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C");
		return ptr;
	}

}


