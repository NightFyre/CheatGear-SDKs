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
	 * 		Name   -> Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.OnExplode
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightProjectile_CalledShot_DurationReturn_C::OnExplode(class ULightProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.OnExplode");
		
		ULightProjectile_CalledShot_DurationReturn_C_OnExplode_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.TryEnableProjectileHoming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakLightProjectile*                         Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightProjectile_CalledShot_DurationReturn_C::TryEnableProjectileHoming(class UOakLightProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.TryEnableProjectileHoming");
		
		ULightProjectile_CalledShot_DurationReturn_C_TryEnableProjectileHoming_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.EnableProjectileHoming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakLightProjectile*                         LightProjectile                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightProjectile_CalledShot_DurationReturn_C::EnableProjectileHoming(class UOakLightProjectile* LightProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C.EnableProjectileHoming");
		
		ULightProjectile_CalledShot_DurationReturn_C_EnableProjectileHoming_Params params {};
		params.LightProjectile = LightProjectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectile_CalledShot_DurationReturn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectile_CalledShot_DurationReturn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_CalledShot_DurationReturn.LightProjectile_CalledShot_DurationReturn_C");
		return ptr;
	}

}


