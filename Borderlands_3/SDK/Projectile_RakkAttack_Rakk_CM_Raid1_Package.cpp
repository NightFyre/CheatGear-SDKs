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
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnRep_IceRakk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::OnRep_IceRakk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnRep_IceRakk");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnRep_IceRakk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ConfigureFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::ConfigureFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ConfigureFX");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_ConfigureFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.DoRakkDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::DoRakkDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.DoRakkDamage");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_DoRakkDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.SetRakkHomingTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::SetRakkHomingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.SetRakkHomingTarget");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_SetRakkHomingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.UserConstructionScript");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.StartHoming
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::StartHoming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.StartHoming");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_StartHoming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.HomingTarget_OnDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::HomingTarget_OnDeath(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.HomingTarget_OnDeath");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_HomingTarget_OnDeath_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitDamagableObject
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::OnHitDamagableObject(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitDamagableObject");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnHitDamagableObject_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitEnemy
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::OnHitEnemy(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitEnemy");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnHitEnemy_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TouchingActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UActorComponent*                             ComponentTouched                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1_Params params {};
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
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ReceiveBeginPlay");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnExplode");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_RakkAttack_Rakk_CM_Raid1_C::ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1");
		
		AProjectile_RakkAttack_Rakk_CM_Raid1_C_ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_RakkAttack_Rakk_CM_Raid1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_RakkAttack_Rakk_CM_Raid1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C");
		return ptr;
	}

}


