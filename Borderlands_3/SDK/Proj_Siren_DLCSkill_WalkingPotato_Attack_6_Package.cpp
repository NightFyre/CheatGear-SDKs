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
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.UserConstructionScript");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ReceiveBeginPlay");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedAnyDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::SirenDLCActionSkill_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedAnyDamage");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_SirenDLCActionSkill_OnCausedAnyDamage_Params params {};
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
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.OnOrbStateSending
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::OnOrbStateSending()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.OnOrbStateSending");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_OnOrbStateSending_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FReceivedDamageDetails                      Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows_Params params {};
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
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedDeath
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::SirenDLCActionSkill_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedDeath");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_SirenDLCActionSkill_OnCausedDeath_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6");
		
		AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C");
		return ptr;
	}

}


