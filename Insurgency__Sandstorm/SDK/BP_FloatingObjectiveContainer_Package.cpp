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
	 * 		Name   -> Function BP_FloatingObjectiveContainer.BP_FloatingObjectiveContainer_C.GetColorAndOpacityForObjectives
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_FloatingObjectiveContainer_C::GetColorAndOpacityForObjectives()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveContainer.BP_FloatingObjectiveContainer_C.GetColorAndOpacityForObjectives");
		
		UBP_FloatingObjectiveContainer_C_GetColorAndOpacityForObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FloatingObjectiveContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FloatingObjectiveContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FloatingObjectiveContainer.BP_FloatingObjectiveContainer_C");
		return ptr;
	}

}


