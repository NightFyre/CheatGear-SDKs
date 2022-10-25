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
	 * 		Name   -> Function BP_LegalScreen.BP_LegalScreen_C.Get_Logo_Vivox_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_LegalScreen_C::Get_Logo_Vivox_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LegalScreen.BP_LegalScreen_C.Get_Logo_Vivox_Visibility_1");
		
		UBP_LegalScreen_C_Get_Logo_Vivox_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_LegalScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_LegalScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_LegalScreen.BP_LegalScreen_C");
		return ptr;
	}

}


