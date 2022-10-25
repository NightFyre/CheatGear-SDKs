/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04DB5CB0
	 * 		Name   -> Function A10_Supersonic_Crackle.A10_Supersonic_Crackle_C.OnBeginFiring
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AAircraftStrafing*                           bpp__Aircraft__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AA10_Supersonic_Crackle_C::OnBeginFiring(class AAircraftStrafing* bpp__Aircraft__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A10_Supersonic_Crackle.A10_Supersonic_Crackle_C.OnBeginFiring");
		
		AA10_Supersonic_Crackle_C_OnBeginFiring_Params params {};
		params.bpp__Aircraft__pf = bpp__Aircraft__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AA10_Supersonic_Crackle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AA10_Supersonic_Crackle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass A10_Supersonic_Crackle.A10_Supersonic_Crackle_C");
		return ptr;
	}

}


