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
	 * 		Name   -> Function tls_wld_Orb_light_c.tls_wld_Orb_light_c_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void Atls_wld_Orb_light_c_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tls_wld_Orb_light_c.tls_wld_Orb_light_c_C.UserConstructionScript");
		
		Atls_wld_Orb_light_c_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Atls_wld_Orb_light_c_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Atls_wld_Orb_light_c_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass tls_wld_Orb_light_c.tls_wld_Orb_light_c_C");
		return ptr;
	}

}


