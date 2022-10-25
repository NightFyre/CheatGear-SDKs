/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WeaponBullet_762x54FMJ_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C.ReceiveBeginPlay");
		
		ABP_WeaponBullet_762x54FMJ_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C.ExecuteUbergraph_BP_WeaponBullet_762x54FMJ
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WeaponBullet_762x54FMJ_C::ExecuteUbergraph_BP_WeaponBullet_762x54FMJ(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C.ExecuteUbergraph_BP_WeaponBullet_762x54FMJ");
		
		ABP_WeaponBullet_762x54FMJ_C_ExecuteUbergraph_BP_WeaponBullet_762x54FMJ_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WeaponBullet_762x54FMJ_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WeaponBullet_762x54FMJ_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C");
		return ptr;
	}

}


