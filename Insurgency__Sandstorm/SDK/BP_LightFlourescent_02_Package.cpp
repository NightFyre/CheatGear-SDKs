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
	 * 		RVA    -> 0x04DEF370
	 * 		Name   -> Function BP_LightFlourescent_02.BP_LightFlourescent_02_C.Kelvin to RGB
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__Tempature__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                bpp__Color__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_LightFlourescent_02_C::Kelvin_to_RGB(float bpp__Tempature__pf, struct FLinearColor* bpp__Color__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LightFlourescent_02.BP_LightFlourescent_02_C.Kelvin to RGB");
		
		ABP_LightFlourescent_02_C_Kelvin_to_RGB_Params params {};
		params.bpp__Tempature__pf = bpp__Tempature__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Color__pf != nullptr)
			*bpp__Color__pf = params.bpp__Color__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LightFlourescent_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LightFlourescent_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_LightFlourescent_02.BP_LightFlourescent_02_C");
		return ptr;
	}

}


