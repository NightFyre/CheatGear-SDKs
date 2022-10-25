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
	 * 		RVA    -> 0x04F2C2B0
	 * 		Name   -> Function BP_WidgetGameModeFilter.BP_WidgetGameModeFilter_C.ApplyAllowedGameModes
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__isCoop__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__isVersus__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__isArcade__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_WidgetGameModeFilter_C::ApplyAllowedGameModes(bool bpp__isCoop__pf, bool bpp__isVersus__pf, bool bpp__isArcade__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetGameModeFilter.BP_WidgetGameModeFilter_C.ApplyAllowedGameModes");
		
		UBP_WidgetGameModeFilter_C_ApplyAllowedGameModes_Params params {};
		params.bpp__isCoop__pf = bpp__isCoop__pf;
		params.bpp__isVersus__pf = bpp__isVersus__pf;
		params.bpp__isArcade__pf = bpp__isArcade__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_WidgetGameModeFilter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WidgetGameModeFilter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_WidgetGameModeFilter.BP_WidgetGameModeFilter_C");
		return ptr;
	}

}


