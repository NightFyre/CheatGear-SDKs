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
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Beastmaster_TrapSpawner_Mod3_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.UserConstructionScript");
		
		AProjectile_Beastmaster_TrapSpawner_Mod3_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.DidTrapSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Beastmaster_TrapSpawner_Mod3_C::DidTrapSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.DidTrapSpawn");
		
		AProjectile_Beastmaster_TrapSpawner_Mod3_C_DidTrapSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Mod3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Beastmaster_TrapSpawner_Mod3_C::ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Mod3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C.ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Mod3");
		
		AProjectile_Beastmaster_TrapSpawner_Mod3_C_ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner_Mod3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_Beastmaster_TrapSpawner_Mod3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_Beastmaster_TrapSpawner_Mod3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Beastmaster_TrapSpawner_Mod3.Projectile_Beastmaster_TrapSpawner_Mod3_C");
		return ptr;
	}

}


