/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BrassImpact_9_Concrete.BP_BrassImpact_9_Concrete_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BrassImpact_9_Concrete_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BrassImpact_9_Concrete.BP_BrassImpact_9_Concrete_C.ReceiveBeginPlay");
		
		ABP_BrassImpact_9_Concrete_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BrassImpact_9_Concrete.BP_BrassImpact_9_Concrete_C.ExecuteUbergraph_BP_BrassImpact_9_Concrete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BrassImpact_9_Concrete_C::ExecuteUbergraph_BP_BrassImpact_9_Concrete(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BrassImpact_9_Concrete.BP_BrassImpact_9_Concrete_C.ExecuteUbergraph_BP_BrassImpact_9_Concrete");
		
		ABP_BrassImpact_9_Concrete_C_ExecuteUbergraph_BP_BrassImpact_9_Concrete_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BrassImpact_9_Concrete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BrassImpact_9_Concrete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BrassImpact_9_Concrete.BP_BrassImpact_9_Concrete_C");
		return ptr;
	}

}


