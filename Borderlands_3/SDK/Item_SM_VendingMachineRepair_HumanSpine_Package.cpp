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
	 * 		Name   -> Function Item_SM_VendingMachineRepair_HumanSpine.Item_SM_VendingMachineRepair_HumanSpine_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AItem_SM_VendingMachineRepair_HumanSpine_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Item_SM_VendingMachineRepair_HumanSpine.Item_SM_VendingMachineRepair_HumanSpine_C.UserConstructionScript");
		
		AItem_SM_VendingMachineRepair_HumanSpine_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AItem_SM_VendingMachineRepair_HumanSpine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AItem_SM_VendingMachineRepair_HumanSpine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Item_SM_VendingMachineRepair_HumanSpine.Item_SM_VendingMachineRepair_HumanSpine_C");
		return ptr;
	}

}


