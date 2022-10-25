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
	 * 		Name   -> Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.TrapFailedToSpawn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Beastmaster_DLCSkill_C::TrapFailedToSpawn(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.TrapFailedToSpawn");
		
		UActionSkill_Beastmaster_DLCSkill_C_TrapFailedToSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.EndTrapEarly
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Beastmaster_DLCSkill_C::EndTrapEarly(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.EndTrapEarly");
		
		UActionSkill_Beastmaster_DLCSkill_C_EndTrapEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.GetCooldownRestartPercent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	float UActionSkill_Beastmaster_DLCSkill_C::GetCooldownRestartPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.GetCooldownRestartPercent");
		
		UActionSkill_Beastmaster_DLCSkill_C_GetCooldownRestartPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Beastmaster_DLCSkill_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnActivated");
		
		UActionSkill_Beastmaster_DLCSkill_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.BeastmasterDLCSkill_OnTakeAnyDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FReceivedDamageDetails                      Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UActionSkill_Beastmaster_DLCSkill_C::BeastmasterDLCSkill_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.BeastmasterDLCSkill_OnTakeAnyDamage");
		
		UActionSkill_Beastmaster_DLCSkill_C_BeastmasterDLCSkill_OnTakeAnyDamage_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnStartActionAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Beastmaster_DLCSkill_C::OnStartActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.OnStartActionAbility");
		
		UActionSkill_Beastmaster_DLCSkill_C_OnStartActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Beastmaster_DLCSkill_C::ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C.ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill");
		
		UActionSkill_Beastmaster_DLCSkill_C_ExecuteUbergraph_ActionSkill_Beastmaster_DLCSkill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionSkill_Beastmaster_DLCSkill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionSkill_Beastmaster_DLCSkill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Beastmaster_DLCSkill.ActionSkill_Beastmaster_DLCSkill_C");
		return ptr;
	}

}


