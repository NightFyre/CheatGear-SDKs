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
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_UseTimeoutHint.BP_UseTimeoutHint_C.SetTimeoutFraction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Fraction                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UseTimeoutHint_C::SetTimeoutFraction(float Fraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UseTimeoutHint.BP_UseTimeoutHint_C.SetTimeoutFraction");
		
		UBP_UseTimeoutHint_C_SetTimeoutFraction_Params params {};
		params.Fraction = Fraction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UseTimeoutHint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UseTimeoutHint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_UseTimeoutHint.BP_UseTimeoutHint_C");
		return ptr;
	}

}


