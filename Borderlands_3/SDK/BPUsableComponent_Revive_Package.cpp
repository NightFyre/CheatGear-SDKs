/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPUsableComponent_Revive.BPUsableComponent_Revive_C.K2_CanBeUsed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FUsabilityQuery                             Query                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	bool UBPUsableComponent_Revive_C::K2_CanBeUsed(const struct FUsabilityQuery& Query)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPUsableComponent_Revive.BPUsableComponent_Revive_C.K2_CanBeUsed");
		
		UBPUsableComponent_Revive_C_K2_CanBeUsed_Params params {};
		params.Query = Query;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPUsableComponent_Revive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPUsableComponent_Revive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPUsableComponent_Revive.BPUsableComponent_Revive_C");
		return ptr;
	}

}


