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
	 * 		Name   -> Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.DoGrenadeSingularityMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_GrenadeLauncher_Singularity_C::DoGrenadeSingularityMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.DoGrenadeSingularityMovement");
		
		AProjectile_GrenadeLauncher_Singularity_C_DoGrenadeSingularityMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.AttemptGrenadeSingularity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_GrenadeLauncher_Singularity_C::AttemptGrenadeSingularity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.AttemptGrenadeSingularity");
		
		AProjectile_GrenadeLauncher_Singularity_C_AttemptGrenadeSingularity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.InitGrenadeLauncher
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_GrenadeLauncher_Singularity_C::InitGrenadeLauncher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.InitGrenadeLauncher");
		
		AProjectile_GrenadeLauncher_Singularity_C_InitGrenadeLauncher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_GrenadeLauncher_Singularity_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.UserConstructionScript");
		
		AProjectile_GrenadeLauncher_Singularity_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_GrenadeLauncher_Singularity_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ReceiveBeginPlay");
		
		AProjectile_GrenadeLauncher_Singularity_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_GrenadeLauncher_Singularity_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnExplode");
		
		AProjectile_GrenadeLauncher_Singularity_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitDamagableObject
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_GrenadeLauncher_Singularity_C::OnHitDamagableObject(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitDamagableObject");
		
		AProjectile_GrenadeLauncher_Singularity_C_OnHitDamagableObject_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_GrenadeLauncher_Singularity_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.OnHitWorld");
		
		AProjectile_GrenadeLauncher_Singularity_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_GrenadeLauncher_Singularity_C::ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C.ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity");
		
		AProjectile_GrenadeLauncher_Singularity_C_ExecuteUbergraph_Projectile_GrenadeLauncher_Singularity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_GrenadeLauncher_Singularity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_GrenadeLauncher_Singularity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_GrenadeLauncher_Singularity.Projectile_GrenadeLauncher_Singularity_C");
		return ptr;
	}

}


