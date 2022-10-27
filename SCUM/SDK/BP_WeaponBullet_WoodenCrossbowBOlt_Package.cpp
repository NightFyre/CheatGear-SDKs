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
	 * 		Name   -> Function BP_WeaponBullet_WoodenCrossbowBOlt.BP_WeaponBullet_WoodenCrossbowBolt_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WeaponBullet_WoodenCrossbowBolt_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenCrossbowBOlt.BP_WeaponBullet_WoodenCrossbowBolt_C.ReceiveBeginPlay");
		
		ABP_WeaponBullet_WoodenCrossbowBolt_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponBullet_WoodenCrossbowBOlt.BP_WeaponBullet_WoodenCrossbowBolt_C.ExecuteUbergraph_BP_WeaponBullet_WoodenCrossbowBolt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WeaponBullet_WoodenCrossbowBolt_C::ExecuteUbergraph_BP_WeaponBullet_WoodenCrossbowBolt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenCrossbowBOlt.BP_WeaponBullet_WoodenCrossbowBolt_C.ExecuteUbergraph_BP_WeaponBullet_WoodenCrossbowBolt");
		
		ABP_WeaponBullet_WoodenCrossbowBolt_C_ExecuteUbergraph_BP_WeaponBullet_WoodenCrossbowBolt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WeaponBullet_WoodenCrossbowBolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WeaponBullet_WoodenCrossbowBolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_WoodenCrossbowBOlt.BP_WeaponBullet_WoodenCrossbowBolt_C");
		return ptr;
	}

}


