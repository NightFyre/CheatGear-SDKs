/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Projectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.ReceiveBeginPlay");
		
		ABP_Grenade_Projectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.Explode
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Projectile_C::Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.Explode");
		
		ABP_Grenade_Projectile_C_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.DetachSppon
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Projectile_C::DetachSppon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.DetachSppon");
		
		ABP_Grenade_Projectile_C_DetachSppon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.ExecuteUbergraph_BP_Grenade_Projectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Grenade_Projectile_C::ExecuteUbergraph_BP_Grenade_Projectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Projectile.BP_Grenade_Projectile_C.ExecuteUbergraph_BP_Grenade_Projectile");
		
		ABP_Grenade_Projectile_C_ExecuteUbergraph_BP_Grenade_Projectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Grenade_Projectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Grenade_Projectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Projectile.BP_Grenade_Projectile_C");
		return ptr;
	}

}


