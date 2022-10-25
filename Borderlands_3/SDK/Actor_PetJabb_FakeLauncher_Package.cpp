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
	 * 		Name   -> Function Actor_PetJabb_FakeLauncher.Actor_PetJabb_FakeLauncher_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AActor_PetJabb_FakeLauncher_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Actor_PetJabb_FakeLauncher.Actor_PetJabb_FakeLauncher_C.UserConstructionScript");
		
		AActor_PetJabb_FakeLauncher_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AActor_PetJabb_FakeLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActor_PetJabb_FakeLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Actor_PetJabb_FakeLauncher.Actor_PetJabb_FakeLauncher_C");
		return ptr;
	}

}


