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
	 * 		RVA    -> 0x04F35500
	 * 		Name   -> Function CC_BASE_EYECOLOUR.CC_BASE_EYECOLOUR_C.BlueprintInitSharedState
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class USharedCosmeticState*                        bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_EYECOLOUR_C::BlueprintInitSharedState(class USharedCosmeticState* bpp__NewState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_EYECOLOUR.CC_BASE_EYECOLOUR_C.BlueprintInitSharedState");
		
		UCC_BASE_EYECOLOUR_C_BlueprintInitSharedState_Params params {};
		params.bpp__NewState__pf = bpp__NewState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCC_BASE_EYECOLOUR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_BASE_EYECOLOUR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_BASE_EYECOLOUR.CC_BASE_EYECOLOUR_C");
		return ptr;
	}

}


