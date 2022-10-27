/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_tavern_frontend_01_a.BP_tavern_frontend_01_a_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_tavern_frontend_01_a_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_tavern_frontend_01_a.BP_tavern_frontend_01_a_C.UserConstructionScript");
		
		ABP_tavern_frontend_01_a_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_tavern_frontend_01_a_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_tavern_frontend_01_a_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_tavern_frontend_01_a.BP_tavern_frontend_01_a_C");
		return ptr;
	}

}


