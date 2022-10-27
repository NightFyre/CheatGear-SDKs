/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function ShipInside_DamageExplosion.ShipInside_DamageExplosion_C.TriggerInsideShipActor_Damage
	 * 		Flags  -> ()
	 */
	void AShipInside_DamageExplosion_C::TriggerInsideShipActor_Damage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShipInside_DamageExplosion.ShipInside_DamageExplosion_C.TriggerInsideShipActor_Damage");
		
		AShipInside_DamageExplosion_C_TriggerInsideShipActor_Damage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShipInside_DamageExplosion.ShipInside_DamageExplosion_C.ExecuteUbergraph_ShipInside_DamageExplosion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShipInside_DamageExplosion_C::ExecuteUbergraph_ShipInside_DamageExplosion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShipInside_DamageExplosion.ShipInside_DamageExplosion_C.ExecuteUbergraph_ShipInside_DamageExplosion");
		
		AShipInside_DamageExplosion_C_ExecuteUbergraph_ShipInside_DamageExplosion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShipInside_DamageExplosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShipInside_DamageExplosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShipInside_DamageExplosion.ShipInside_DamageExplosion_C");
		return ptr;
	}

}


