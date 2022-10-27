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
	 * 		Name   -> Function LightProjectile_PS_MAL_ThunderballFists_FIST.LightProjectile_PS_MAL_ThunderballFists_FIST_C.OnLifetimeExpired
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ULightProjectile*                            Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULightProjectile_PS_MAL_ThunderballFists_FIST_C::OnLifetimeExpired(class ULightProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightProjectile_PS_MAL_ThunderballFists_FIST.LightProjectile_PS_MAL_ThunderballFists_FIST_C.OnLifetimeExpired");
		
		ULightProjectile_PS_MAL_ThunderballFists_FIST_C_OnLifetimeExpired_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightProjectile_PS_MAL_ThunderballFists_FIST_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightProjectile_PS_MAL_ThunderballFists_FIST_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_PS_MAL_ThunderballFists_FIST.LightProjectile_PS_MAL_ThunderballFists_FIST_C");
		return ptr;
	}

}


