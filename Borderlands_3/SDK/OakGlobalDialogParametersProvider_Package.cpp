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
	 * 		Name   -> Function OakGlobalDialogParametersProvider.OakGlobalDialogParametersProvider_C.InitDialogContext
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FDialogContext                              Parameters                                                 (BlueprintVisible, Parm, OutParm, ReferenceParm)
	 */
	void UOakGlobalDialogParametersProvider_C::InitDialogContext(struct FDialogContext* Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakGlobalDialogParametersProvider.OakGlobalDialogParametersProvider_C.InitDialogContext");
		
		UOakGlobalDialogParametersProvider_C_InitDialogContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Parameters != nullptr)
			*Parameters = params.Parameters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakGlobalDialogParametersProvider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakGlobalDialogParametersProvider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakGlobalDialogParametersProvider.OakGlobalDialogParametersProvider_C");
		return ptr;
	}

}


