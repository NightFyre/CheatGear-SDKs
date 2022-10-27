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
	 * 		Name   -> Function LightProjectile_HW_COV_Yellowcake_3.LightProjectile_HW_COV_Yellowcake_2_C.OnDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bCritical                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULightProjectile_HW_COV_Yellowcake_2_C::OnDamage(class ULightProjectile* Projectile, const struct FHitResult& Hit, bool bCritical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightProjectile_HW_COV_Yellowcake_3.LightProjectile_HW_COV_Yellowcake_2_C.OnDamage");
		
		ULightProjectile_HW_COV_Yellowcake_2_C_OnDamage_Params params {};
		params.Projectile = Projectile;
		params.Hit = Hit;
		params.bCritical = bCritical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function LightProjectile_HW_COV_Yellowcake_3.LightProjectile_HW_COV_Yellowcake_2_C.OnLifetimeExpired
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightProjectile_HW_COV_Yellowcake_2_C::OnLifetimeExpired(class ULightProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightProjectile_HW_COV_Yellowcake_3.LightProjectile_HW_COV_Yellowcake_2_C.OnLifetimeExpired");
		
		ULightProjectile_HW_COV_Yellowcake_2_C_OnLifetimeExpired_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectile_HW_COV_Yellowcake_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectile_HW_COV_Yellowcake_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HW_COV_Yellowcake_3.LightProjectile_HW_COV_Yellowcake_2_C");
		return ptr;
	}

}


