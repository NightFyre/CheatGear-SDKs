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
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnHomingTargetDied
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Receiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::OnHomingTargetDied(class AActor* Receiver, class AActor* Causer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnHomingTargetDied");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_OnHomingTargetDied_Params params {};
		params.Receiver = Receiver;
		params.Causer = Causer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.AttachToNewHomingTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::AttachToNewHomingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.AttachToNewHomingTarget");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_AttachToNewHomingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.DetachFromOldHomingTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::DetachFromOldHomingTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.DetachFromOldHomingTarget");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_DetachFromOldHomingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.SetNewHomingTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::SetNewHomingTarget(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.SetNewHomingTarget");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_SetNewHomingTarget_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.GetGraspDuration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::GetGraspDuration(float* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.GetGraspDuration");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_GetGraspDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.SetTransferParticle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::SetTransferParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.SetTransferParticle");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_SetTransferParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.PlayExplosionEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::PlayExplosionEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.PlayExplosionEffect");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_PlayExplosionEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.UserConstructionScript");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.ReceiveBeginPlay");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnExplode");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnShutdownGracefully
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::OnShutdownGracefully()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.OnShutdownGracefully");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_OnShutdownGracefully_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_PhaseTrance_Transfer_C::ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C.ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer");
		
		AProjectile_Siren_PhaseTrance_Transfer_C_ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_Siren_PhaseTrance_Transfer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_Siren_PhaseTrance_Transfer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C");
		return ptr;
	}

}


