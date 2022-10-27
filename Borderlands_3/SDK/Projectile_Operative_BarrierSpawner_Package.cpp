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
	 * 		Name   -> Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.GetBarrierPlacementTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  res                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void AProjectile_Operative_BarrierSpawner_C::GetBarrierPlacementTransform(struct FTransform* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.GetBarrierPlacementTransform");
		
		AProjectile_Operative_BarrierSpawner_C_GetBarrierPlacementTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Operative_BarrierSpawner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.UserConstructionScript");
		
		AProjectile_Operative_BarrierSpawner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Operative_BarrierSpawner_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner");
		
		AProjectile_Operative_BarrierSpawner_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.SpawnBarrier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Operative_BarrierSpawner_C::SpawnBarrier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.SpawnBarrier");
		
		AProjectile_Operative_BarrierSpawner_C_SpawnBarrier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_Operative_BarrierSpawner_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnExplode");
		
		AProjectile_Operative_BarrierSpawner_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Operative_BarrierSpawner_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OnHitWorld");
		
		AProjectile_Operative_BarrierSpawner_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OpenHitWorldGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Operative_BarrierSpawner_C::OpenHitWorldGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.OpenHitWorldGate");
		
		AProjectile_Operative_BarrierSpawner_C_OpenHitWorldGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.ExecuteUbergraph_Projectile_Operative_BarrierSpawner
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Operative_BarrierSpawner_C::ExecuteUbergraph_Projectile_Operative_BarrierSpawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C.ExecuteUbergraph_Projectile_Operative_BarrierSpawner");
		
		AProjectile_Operative_BarrierSpawner_C_ExecuteUbergraph_Projectile_Operative_BarrierSpawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_Operative_BarrierSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_Operative_BarrierSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C");
		return ptr;
	}

}


