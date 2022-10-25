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
	 * 		RVA    -> 0x04ED9570
	 * 		Name   -> Function BP_UG_M240Bipod.BP_UG_M240Bipod_C.ReceiveTick
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaSeconds__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_UG_M240Bipod_C::ReceiveTick(float bpp__DeltaSeconds__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UG_M240Bipod.BP_UG_M240Bipod_C.ReceiveTick");
		
		UBP_UG_M240Bipod_C_ReceiveTick_Params params {};
		params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UG_M240Bipod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UG_M240Bipod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_UG_M240Bipod.BP_UG_M240Bipod_C");
		return ptr;
	}

}


