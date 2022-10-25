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
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.GetBarrierPlacementTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  res                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::GetBarrierPlacementTransform(struct FTransform* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.GetBarrierPlacementTransform");
		
		AProjectile_Beastmaster_TrapSpawner_C_GetBarrierPlacementTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.UserConstructionScript");
		
		AProjectile_Beastmaster_TrapSpawner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner");
		
		AProjectile_Beastmaster_TrapSpawner_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.SpawnBarrier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::SpawnBarrier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.SpawnBarrier");
		
		AProjectile_Beastmaster_TrapSpawner_C_SpawnBarrier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnExplode");
		
		AProjectile_Beastmaster_TrapSpawner_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OnHitWorld");
		
		AProjectile_Beastmaster_TrapSpawner_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OpenHitWorldGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::OpenHitWorldGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.OpenHitWorldGate");
		
		AProjectile_Beastmaster_TrapSpawner_C_OpenHitWorldGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveBeginPlay");
		
		AProjectile_Beastmaster_TrapSpawner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.StartWobble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::StartWobble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.StartWobble");
		
		AProjectile_Beastmaster_TrapSpawner_C_StartWobble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.DidTrapSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::DidTrapSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.DidTrapSpawn");
		
		AProjectile_Beastmaster_TrapSpawner_C_DidTrapSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ReceiveDestroyed");
		
		AProjectile_Beastmaster_TrapSpawner_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Beastmaster_TrapSpawner_C::ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C.ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner");
		
		AProjectile_Beastmaster_TrapSpawner_C_ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_Beastmaster_TrapSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_Beastmaster_TrapSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C");
		return ptr;
	}

}


