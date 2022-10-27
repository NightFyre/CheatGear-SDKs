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
	 * 		RVA    -> 0x04F3AA90
	 * 		Name   -> Function CC_BASE_FACEWEAR_Shemagh.CC_BASE_FACEWEAR_Shemagh_C.SetShemaghMorph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		ECarrierArmour                                     bpp__GearCombination__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Morph__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_FACEWEAR_Shemagh_C::SetShemaghMorph(ECarrierArmour bpp__GearCombination__pf, class FName* bpp__Morph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_FACEWEAR_Shemagh.CC_BASE_FACEWEAR_Shemagh_C.SetShemaghMorph");
		
		UCC_BASE_FACEWEAR_Shemagh_C_SetShemaghMorph_Params params {};
		params.bpp__GearCombination__pf = bpp__GearCombination__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Morph__pf != nullptr)
			*bpp__Morph__pf = params.bpp__Morph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F3A890
	 * 		Name   -> Function CC_BASE_FACEWEAR_Shemagh.CC_BASE_FACEWEAR_Shemagh_C.BlueprintInitCosmetic
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      bpp__VariationClass__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCC_BASE_FACEWEAR_Shemagh_C::BlueprintInitCosmetic(class UClass* bpp__VariationClass__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_BASE_FACEWEAR_Shemagh.CC_BASE_FACEWEAR_Shemagh_C.BlueprintInitCosmetic");
		
		UCC_BASE_FACEWEAR_Shemagh_C_BlueprintInitCosmetic_Params params {};
		params.bpp__VariationClass__pf = bpp__VariationClass__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCC_BASE_FACEWEAR_Shemagh_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCC_BASE_FACEWEAR_Shemagh_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CC_BASE_FACEWEAR_Shemagh.CC_BASE_FACEWEAR_Shemagh_C");
		return ptr;
	}

}


