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
	 * 		Name   -> Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnShieldCreated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_HYP_Shield_RestoreAmmo_C::OnShieldCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnShieldCreated");
		
		UBP_HYP_Shield_RestoreAmmo_C_OnShieldCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnTakeWeaponShieldDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShieldDamage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HYP_Shield_RestoreAmmo_C::OnTakeWeaponShieldDamage(class UDamageComponent* DamageReceiver, float ShieldDamage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnTakeWeaponShieldDamage");
		
		UBP_HYP_Shield_RestoreAmmo_C_OnTakeWeaponShieldDamage_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.ShieldDamage = ShieldDamage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HYP_Shield_RestoreAmmo_C::ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo");
		
		UBP_HYP_Shield_RestoreAmmo_C_ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HYP_Shield_RestoreAmmo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HYP_Shield_RestoreAmmo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C");
		return ptr;
	}

}


