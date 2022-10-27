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
	 * 		Name   -> Function Passive_OperativeDLC_3.Passive_OperativeDLC_2_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_OperativeDLC_2_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_3.Passive_OperativeDLC_2_C.OnActivated");
		
		UPassive_OperativeDLC_2_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_OperativeDLC_3.Passive_OperativeDLC_2_C.OperativeDLCSkill_OnCausedAnyDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UPassive_OperativeDLC_2_C::OperativeDLCSkill_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_3.Passive_OperativeDLC_2_C.OperativeDLCSkill_OnCausedAnyDamage");
		
		UPassive_OperativeDLC_2_C_OperativeDLCSkill_OnCausedAnyDamage_Params params {};
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
	 * 		Name   -> Function Passive_OperativeDLC_3.Passive_OperativeDLC_2_C.ExecuteUbergraph_Passive_OperativeDLC_3
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_OperativeDLC_2_C::ExecuteUbergraph_Passive_OperativeDLC_3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_3.Passive_OperativeDLC_2_C.ExecuteUbergraph_Passive_OperativeDLC_3");
		
		UPassive_OperativeDLC_2_C_ExecuteUbergraph_Passive_OperativeDLC_3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_OperativeDLC_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_OperativeDLC_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_OperativeDLC_3.Passive_OperativeDLC_2_C");
		return ptr;
	}

}


