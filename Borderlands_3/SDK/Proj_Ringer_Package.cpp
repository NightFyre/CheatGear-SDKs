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
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Ringer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.UserConstructionScript");
		
		AProj_Ringer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.InitializeElement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOakElementalType                                  ElementType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Ringer_C::InitializeElement(EOakElementalType ElementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.InitializeElement");
		
		AProj_Ringer_C_InitializeElement_Params params {};
		params.ElementType = ElementType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetFuseTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewFuseTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Ringer_C::TinkSuicideBomb_SetFuseTimer(float NewFuseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetFuseTimer");
		
		AProj_Ringer_C_TinkSuicideBomb_SetFuseTimer_Params params {};
		params.NewFuseTime = NewFuseTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetCurrentHealth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewCurrentHealth                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Ringer_C::TinkSuicideBomb_SetCurrentHealth(float NewCurrentHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetCurrentHealth");
		
		AProj_Ringer_C_TinkSuicideBomb_SetCurrentHealth_Params params {};
		params.NewCurrentHealth = NewCurrentHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_StartSuicide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Ringer_C::TinkSuicideBomb_StartSuicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_StartSuicide");
		
		AProj_Ringer_C_TinkSuicideBomb_StartSuicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.HNT_Prime
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Ringer_C::HNT_Prime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.HNT_Prime");
		
		AProj_Ringer_C_HNT_Prime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.HNT_Drop
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Ringer_C::HNT_Drop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.HNT_Drop");
		
		AProj_Ringer_C_HNT_Drop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.HNT_Throw
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Ringer_C::HNT_Throw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.HNT_Throw");
		
		AProj_Ringer_C_HNT_Throw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Ringer_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee");
		
		AProj_Ringer_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Ringer_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.OnExplode");
		
		AProj_Ringer_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Ringer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.ReceiveBeginPlay");
		
		AProj_Ringer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Ringer_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb");
		
		AProj_Ringer_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.OnHitDamagableObject
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Ringer_C::OnHitDamagableObject(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.OnHitDamagableObject");
		
		AProj_Ringer_C_OnHitDamagableObject_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.FuseTimerExpired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Ringer_C::FuseTimerExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.FuseTimerExpired");
		
		AProj_Ringer_C_FuseTimerExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Ringer.Proj_Ringer_C.ExecuteUbergraph_Proj_Ringer
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Ringer_C::ExecuteUbergraph_Proj_Ringer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.ExecuteUbergraph_Proj_Ringer");
		
		AProj_Ringer_C_ExecuteUbergraph_Proj_Ringer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Ringer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Ringer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Ringer.Proj_Ringer_C");
		return ptr;
	}

}


