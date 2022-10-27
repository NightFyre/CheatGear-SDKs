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
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.OnRep_OrbState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_PetLoader_ShockOrb_C::OnRep_OrbState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.OnRep_OrbState");
		
		AProj_PetLoader_ShockOrb_C_OnRep_OrbState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_PetLoader_ShockOrb_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.UserConstructionScript");
		
		AProj_PetLoader_ShockOrb_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Spawning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_PetLoader_ShockOrb_C::Orb_Spawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Spawning");
		
		AProj_PetLoader_ShockOrb_C_Orb_Spawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Idle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_PetLoader_ShockOrb_C::Orb_Idle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Idle");
		
		AProj_PetLoader_ShockOrb_C_Orb_Idle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Explode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_PetLoader_ShockOrb_C::Orb_Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_Explode");
		
		AProj_PetLoader_ShockOrb_C_Orb_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_PetLoader_ShockOrb
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TouchingActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UActorComponent*                             ComponentTouched                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_PetLoader_ShockOrb_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_PetLoader_ShockOrb(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_PetLoader_ShockOrb");
		
		AProj_PetLoader_ShockOrb_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_PetLoader_ShockOrb_Params params {};
		params.TouchingActor = TouchingActor;
		params.bIsPlayer = bIsPlayer;
		params.ComponentTouched = ComponentTouched;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_LargeExplode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_PetLoader_ShockOrb_C::Orb_LargeExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.Orb_LargeExplode");
		
		AProj_PetLoader_ShockOrb_C_Orb_LargeExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_PetLoader_ShockOrb_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.OnExplode");
		
		AProj_PetLoader_ShockOrb_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_PetLoader_ShockOrb_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ReceiveBeginPlay");
		
		AProj_PetLoader_ShockOrb_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ShockOrb_OnTargetDied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_PetLoader_ShockOrb_C::ShockOrb_OnTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ShockOrb_OnTargetDied");
		
		AProj_PetLoader_ShockOrb_C_ShockOrb_OnTargetDied_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.SetAllowShotTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_PetLoader_ShockOrb_C::SetAllowShotTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.SetAllowShotTrigger");
		
		AProj_PetLoader_ShockOrb_C_SetAllowShotTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_PetLoader_ShockOrb
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
	void AProj_PetLoader_ShockOrb_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_PetLoader_ShockOrb(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_PetLoader_ShockOrb");
		
		AProj_PetLoader_ShockOrb_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_PetLoader_ShockOrb_Params params {};
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
	 * 		Name   -> Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ExecuteUbergraph_Proj_PetLoader_ShockOrb
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_PetLoader_ShockOrb_C::ExecuteUbergraph_Proj_PetLoader_ShockOrb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C.ExecuteUbergraph_Proj_PetLoader_ShockOrb");
		
		AProj_PetLoader_ShockOrb_C_ExecuteUbergraph_Proj_PetLoader_ShockOrb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_PetLoader_ShockOrb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_PetLoader_ShockOrb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_PetLoader_ShockOrb.Proj_PetLoader_ShockOrb_C");
		return ptr;
	}

}


