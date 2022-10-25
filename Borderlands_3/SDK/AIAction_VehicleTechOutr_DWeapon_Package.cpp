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
	 * 		Name   -> Function AIAction_VehicleTechOutr_DWeapon.AIAction_VehicleTechOutr_DWeapon_C.ExecuteUbergraph_AIAction_VehicleTechOutr_DWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_VehicleTechOutr_DWeapon_C::ExecuteUbergraph_AIAction_VehicleTechOutr_DWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_VehicleTechOutr_DWeapon.AIAction_VehicleTechOutr_DWeapon_C.ExecuteUbergraph_AIAction_VehicleTechOutr_DWeapon");
		
		UAIAction_VehicleTechOutr_DWeapon_C_ExecuteUbergraph_AIAction_VehicleTechOutr_DWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_VehicleTechOutr_DWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_VehicleTechOutr_DWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_VehicleTechOutr_DWeapon.AIAction_VehicleTechOutr_DWeapon_C");
		return ptr;
	}

}


