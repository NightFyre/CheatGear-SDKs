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
	 * 		Name   -> Function BP_BlackHawk_InsertBolt.BP_BlackHawk_InsertBolt_C.CanExecuteUsingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeaponReloadData                           Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool UBP_BlackHawk_InsertBolt_C::CanExecuteUsingData(const struct FWeaponReloadData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlackHawk_InsertBolt.BP_BlackHawk_InsertBolt_C.CanExecuteUsingData");
		
		UBP_BlackHawk_InsertBolt_C_CanExecuteUsingData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BlackHawk_InsertBolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BlackHawk_InsertBolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlackHawk_InsertBolt.BP_BlackHawk_InsertBolt_C");
		return ptr;
	}

}


