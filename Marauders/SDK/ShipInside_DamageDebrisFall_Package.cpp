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
	 * 		Name   -> Function ShipInside_DamageDebrisFall.ShipInside_DamageDebrisFall_C.TriggerInsideShipActor_Damage
	 * 		Flags  -> ()
	 */
	void AShipInside_DamageDebrisFall_C::TriggerInsideShipActor_Damage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShipInside_DamageDebrisFall.ShipInside_DamageDebrisFall_C.TriggerInsideShipActor_Damage");
		
		AShipInside_DamageDebrisFall_C_TriggerInsideShipActor_Damage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShipInside_DamageDebrisFall.ShipInside_DamageDebrisFall_C.ExecuteUbergraph_ShipInside_DamageDebrisFall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShipInside_DamageDebrisFall_C::ExecuteUbergraph_ShipInside_DamageDebrisFall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShipInside_DamageDebrisFall.ShipInside_DamageDebrisFall_C.ExecuteUbergraph_ShipInside_DamageDebrisFall");
		
		AShipInside_DamageDebrisFall_C_ExecuteUbergraph_ShipInside_DamageDebrisFall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShipInside_DamageDebrisFall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShipInside_DamageDebrisFall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShipInside_DamageDebrisFall.ShipInside_DamageDebrisFall_C");
		return ptr;
	}

}


