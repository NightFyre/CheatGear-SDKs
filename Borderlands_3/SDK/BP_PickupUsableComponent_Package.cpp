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
	 * 		Name   -> Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_GetOptionalErrorText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FText UBP_PickupUsableComponent_C::K2_GetOptionalErrorText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_GetOptionalErrorText");
		
		UBP_PickupUsableComponent_C_K2_GetOptionalErrorText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_CanBeUsed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FUsabilityQuery                             Query                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	bool UBP_PickupUsableComponent_C::K2_CanBeUsed(const struct FUsabilityQuery& Query)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_CanBeUsed");
		
		UBP_PickupUsableComponent_C_K2_CanBeUsed_Params params {};
		params.Query = Query;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PickupUsableComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PickupUsableComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupUsableComponent.BP_PickupUsableComponent_C");
		return ptr;
	}

}


