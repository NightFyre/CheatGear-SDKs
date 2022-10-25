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
	 * 		Name   -> Function BP_TedBehavior_Sludge.BP_TedBehavior_Sludge_C.K2_OnProjectileImpact
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ATedioreProjectile*                          Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBP_TedBehavior_Sludge_C::K2_OnProjectileImpact(class ATedioreProjectile* Projectile, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TedBehavior_Sludge.BP_TedBehavior_Sludge_C.K2_OnProjectileImpact");
		
		UBP_TedBehavior_Sludge_C_K2_OnProjectileImpact_Params params {};
		params.Projectile = Projectile;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_TedBehavior_Sludge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TedBehavior_Sludge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TedBehavior_Sludge.BP_TedBehavior_Sludge_C");
		return ptr;
	}

}


