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
	 * 		Name   -> Function BP_TedBehavior_ETech.BP_TedBehavior_ETech_C.K2_OnProjectileExplode
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ATedioreProjectile*                          Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TedBehavior_ETech_C::K2_OnProjectileExplode(class ATedioreProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TedBehavior_ETech.BP_TedBehavior_ETech_C.K2_OnProjectileExplode");
		
		UBP_TedBehavior_ETech_C_K2_OnProjectileExplode_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_TedBehavior_ETech_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TedBehavior_ETech_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TedBehavior_ETech.BP_TedBehavior_ETech_C");
		return ptr;
	}

}


