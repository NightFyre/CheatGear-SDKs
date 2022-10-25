/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function ABP_Prisoner_Grappled.ABP_Prisoner_Grappled_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Prisoner_Grappled_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Prisoner_Grappled.ABP_Prisoner_Grappled_C.AnimGraph");
		
		UABP_Prisoner_Grappled_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Prisoner_Grappled.ABP_Prisoner_Grappled_C.ExecuteUbergraph_ABP_Prisoner_Grappled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Prisoner_Grappled_C::ExecuteUbergraph_ABP_Prisoner_Grappled(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Prisoner_Grappled.ABP_Prisoner_Grappled_C.ExecuteUbergraph_ABP_Prisoner_Grappled");
		
		UABP_Prisoner_Grappled_C_ExecuteUbergraph_ABP_Prisoner_Grappled_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Prisoner_Grappled_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Prisoner_Grappled_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Prisoner_Grappled.ABP_Prisoner_Grappled_C");
		return ptr;
	}

}


