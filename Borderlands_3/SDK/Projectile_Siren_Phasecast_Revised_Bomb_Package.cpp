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
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Siren_Phasecast_Revised_Bomb_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.UserConstructionScript");
		
		AProjectile_Siren_Phasecast_Revised_Bomb_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Siren_Phasecast_Revised_Bomb_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnHitWorld");
		
		AProjectile_Siren_Phasecast_Revised_Bomb_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnHitEnemy
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Siren_Phasecast_Revised_Bomb_C::OnHitEnemy(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnHitEnemy");
		
		AProjectile_Siren_Phasecast_Revised_Bomb_C_OnHitEnemy_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_Siren_Phasecast_Revised_Bomb_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnExplode");
		
		AProjectile_Siren_Phasecast_Revised_Bomb_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnOverlappedEnemy
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Siren_Phasecast_Revised_Bomb_C::OnOverlappedEnemy(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnOverlappedEnemy");
		
		AProjectile_Siren_Phasecast_Revised_Bomb_C_OnOverlappedEnemy_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnOverlappedNeutral
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_Siren_Phasecast_Revised_Bomb_C::OnOverlappedNeutral(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnOverlappedNeutral");
		
		AProjectile_Siren_Phasecast_Revised_Bomb_C_OnOverlappedNeutral_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Siren_Phasecast_Revised_Bomb_C::ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb");
		
		AProjectile_Siren_Phasecast_Revised_Bomb_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_Siren_Phasecast_Revised_Bomb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_Siren_Phasecast_Revised_Bomb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C");
		return ptr;
	}

}


