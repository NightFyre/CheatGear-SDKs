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
	 * 		Name   -> Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_BlackHawk_Crossbow_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.AnimGraph");
		
		UABP_BlackHawk_Crossbow_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_BlackHawk_Crossbow_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.BlueprintUpdateAnimation");
		
		UABP_BlackHawk_Crossbow_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.ExecuteUbergraph_ABP_BlackHawk_Crossbow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_BlackHawk_Crossbow_C::ExecuteUbergraph_ABP_BlackHawk_Crossbow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C.ExecuteUbergraph_ABP_BlackHawk_Crossbow");
		
		UABP_BlackHawk_Crossbow_C_ExecuteUbergraph_ABP_BlackHawk_Crossbow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_BlackHawk_Crossbow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_BlackHawk_Crossbow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BlackHawk_Crossbow.ABP_BlackHawk_Crossbow_C");
		return ptr;
	}

}


