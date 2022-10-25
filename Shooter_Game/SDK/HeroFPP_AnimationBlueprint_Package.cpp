/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * 		Name   -> Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UHeroFPP_AnimationBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.AnimGraph");
		
		UHeroFPP_AnimationBlueprint_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_663925D24DF32B6AC7F34AB905521A2F
	 * 		Flags  -> ()
	 */
	void UHeroFPP_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_663925D24DF32B6AC7F34AB905521A2F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_663925D24DF32B6AC7F34AB905521A2F");
		
		UHeroFPP_AnimationBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_663925D24DF32B6AC7F34AB905521A2F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_EBA6C0224B9F3AC09D7303B401AB8889
	 * 		Flags  -> ()
	 */
	void UHeroFPP_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_EBA6C0224B9F3AC09D7303B401AB8889()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_EBA6C0224B9F3AC09D7303B401AB8889");
		
		UHeroFPP_AnimationBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_EBA6C0224B9F3AC09D7303B401AB8889_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHeroFPP_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.BlueprintUpdateAnimation");
		
		UHeroFPP_AnimationBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.AnimNotify_Footstep
	 * 		Flags  -> ()
	 */
	void UHeroFPP_AnimationBlueprint_C::AnimNotify_Footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.AnimNotify_Footstep");
		
		UHeroFPP_AnimationBlueprint_C_AnimNotify_Footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.AnimNotify_Jumpland
	 * 		Flags  -> ()
	 */
	void UHeroFPP_AnimationBlueprint_C::AnimNotify_Jumpland()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.AnimNotify_Jumpland");
		
		UHeroFPP_AnimationBlueprint_C_AnimNotify_Jumpland_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.ExecuteUbergraph_HeroFPP_AnimationBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHeroFPP_AnimationBlueprint_C::ExecuteUbergraph_HeroFPP_AnimationBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C.ExecuteUbergraph_HeroFPP_AnimationBlueprint");
		
		UHeroFPP_AnimationBlueprint_C_ExecuteUbergraph_HeroFPP_AnimationBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroFPP_AnimationBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroFPP_AnimationBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C");
		return ptr;
	}

}


