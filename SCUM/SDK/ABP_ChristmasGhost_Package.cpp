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
	 * 		Name   -> Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_ChristmasGhost_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.AnimGraph");
		
		UABP_ChristmasGhost_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.AnimNotify_SpawnChristmasGift
	 * 		Flags  -> ()
	 */
	void UABP_ChristmasGhost_C::AnimNotify_SpawnChristmasGift()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.AnimNotify_SpawnChristmasGift");
		
		UABP_ChristmasGhost_C_AnimNotify_SpawnChristmasGift_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.ExecuteUbergraph_ABP_ChristmasGhost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_ChristmasGhost_C::ExecuteUbergraph_ABP_ChristmasGhost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_ChristmasGhost.ABP_ChristmasGhost_C.ExecuteUbergraph_ABP_ChristmasGhost");
		
		UABP_ChristmasGhost_C_ExecuteUbergraph_ABP_ChristmasGhost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_ChristmasGhost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_ChristmasGhost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ChristmasGhost.ABP_ChristmasGhost_C");
		return ptr;
	}

}


