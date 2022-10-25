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
	 * 		Name   -> Function Base_ContractsActor.Base_ContractsActor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABase_ContractsActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ContractsActor.Base_ContractsActor_C.UserConstructionScript");
		
		ABase_ContractsActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_ContractsActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_ContractsActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_ContractsActor.Base_ContractsActor_C");
		return ptr;
	}

}


