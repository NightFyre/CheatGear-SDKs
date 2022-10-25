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
	 * 		Name   -> Function ShipInside_DamageSteam.ShipInside_DamageSteam_C.TriggerInsideShipActor_Damage
	 * 		Flags  -> ()
	 */
	void AShipInside_DamageSteam_C::TriggerInsideShipActor_Damage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShipInside_DamageSteam.ShipInside_DamageSteam_C.TriggerInsideShipActor_Damage");
		
		AShipInside_DamageSteam_C_TriggerInsideShipActor_Damage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShipInside_DamageSteam.ShipInside_DamageSteam_C.ExecuteUbergraph_ShipInside_DamageSteam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShipInside_DamageSteam_C::ExecuteUbergraph_ShipInside_DamageSteam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShipInside_DamageSteam.ShipInside_DamageSteam_C.ExecuteUbergraph_ShipInside_DamageSteam");
		
		AShipInside_DamageSteam_C_ExecuteUbergraph_ShipInside_DamageSteam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShipInside_DamageSteam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShipInside_DamageSteam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShipInside_DamageSteam.ShipInside_DamageSteam_C");
		return ptr;
	}

}


