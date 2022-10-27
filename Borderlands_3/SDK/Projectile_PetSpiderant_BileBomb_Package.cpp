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
	 * 		Name   -> Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_PetSpiderant_BileBomb_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.UserConstructionScript");
		
		AProjectile_PetSpiderant_BileBomb_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_PetSpiderant_BileBomb_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.ReceiveBeginPlay");
		
		AProjectile_PetSpiderant_BileBomb_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnHitDamagableObject
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_PetSpiderant_BileBomb_C::OnHitDamagableObject(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnHitDamagableObject");
		
		AProjectile_PetSpiderant_BileBomb_C_OnHitDamagableObject_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_PetSpiderant_BileBomb_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnHitWorld");
		
		AProjectile_PetSpiderant_BileBomb_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_PetSpiderant_BileBomb_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnExplode");
		
		AProjectile_PetSpiderant_BileBomb_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.ExecuteUbergraph_Projectile_PetSpiderant_BileBomb
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_PetSpiderant_BileBomb_C::ExecuteUbergraph_Projectile_PetSpiderant_BileBomb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.ExecuteUbergraph_Projectile_PetSpiderant_BileBomb");
		
		AProjectile_PetSpiderant_BileBomb_C_ExecuteUbergraph_Projectile_PetSpiderant_BileBomb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_PetSpiderant_BileBomb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_PetSpiderant_BileBomb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C");
		return ptr;
	}

}


