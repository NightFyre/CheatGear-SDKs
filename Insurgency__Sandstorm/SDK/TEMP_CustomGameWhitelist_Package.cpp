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
	 * 		RVA    -> 0x05010F40
	 * 		Name   -> Function TEMP_CustomGameWhitelist.TEMP_CustomGameWhitelist_C.CanPlayScenarioInCustom
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      bpp__Scenario__pf__const                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp____WorldContext__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bCanPlay__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTEMP_CustomGameWhitelist_C::STATIC_CanPlayScenarioInCustom(const class FString& bpp__Scenario__pf__const, class UObject* bpp____WorldContext__pf, bool* bpp__bCanPlay__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEMP_CustomGameWhitelist.TEMP_CustomGameWhitelist_C.CanPlayScenarioInCustom");
		
		UTEMP_CustomGameWhitelist_C_CanPlayScenarioInCustom_Params params {};
		params.bpp__Scenario__pf__const = bpp__Scenario__pf__const;
		params.bpp____WorldContext__pf = bpp____WorldContext__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__bCanPlay__pf != nullptr)
			*bpp__bCanPlay__pf = params.bpp__bCanPlay__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTEMP_CustomGameWhitelist_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTEMP_CustomGameWhitelist_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass TEMP_CustomGameWhitelist.TEMP_CustomGameWhitelist_C");
		return ptr;
	}

}


