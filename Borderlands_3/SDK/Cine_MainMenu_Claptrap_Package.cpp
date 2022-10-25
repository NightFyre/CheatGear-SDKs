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
	 * 		Name   -> Function Cine_MainMenu_Claptrap.Cine_MainMenu_Claptrap_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACine_MainMenu_Claptrap_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cine_MainMenu_Claptrap.Cine_MainMenu_Claptrap_C.UserConstructionScript");
		
		ACine_MainMenu_Claptrap_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACine_MainMenu_Claptrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACine_MainMenu_Claptrap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cine_MainMenu_Claptrap.Cine_MainMenu_Claptrap_C");
		return ptr;
	}

}


