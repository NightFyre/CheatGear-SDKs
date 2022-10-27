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
	 * 		Name   -> Function StandIn_Beastmaster_BULLoader.StandIn_Beastmaster_BULLoader_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStandIn_Beastmaster_BULLoader_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandIn_Beastmaster_BULLoader.StandIn_Beastmaster_BULLoader_C.UserConstructionScript");
		
		AStandIn_Beastmaster_BULLoader_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStandIn_Beastmaster_BULLoader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandIn_Beastmaster_BULLoader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Beastmaster_BULLoader.StandIn_Beastmaster_BULLoader_C");
		return ptr;
	}

}


