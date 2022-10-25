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
	 * 		RVA    -> 0x04DBFED0
	 * 		Name   -> Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.UpdateRevolverChamberState
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<ERevolverChamberState>                      bpp__Chambers__pf__const                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_PP_Molotov_Rag_C::UpdateRevolverChamberState(TArray<ERevolverChamberState> bpp__Chambers__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.UpdateRevolverChamberState");
		
		UABP_PP_Molotov_Rag_C_UpdateRevolverChamberState_Params params {};
		params.bpp__Chambers__pf__const = bpp__Chambers__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBFE40
	 * 		Name   -> Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.ToggleOpticState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Enable__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_PP_Molotov_Rag_C::ToggleOpticState(bool bpp__Enable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.ToggleOpticState");
		
		UABP_PP_Molotov_Rag_C_ToggleOpticState_Params params {};
		params.bpp__Enable__pf = bpp__Enable__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3A80
	 * 		Name   -> Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.StopToggleOpticMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void UABP_PP_Molotov_Rag_C::StopToggleOpticMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.StopToggleOpticMontage");
		
		UABP_PP_Molotov_Rag_C_StopToggleOpticMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBFDC0
	 * 		Name   -> Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.InterfaceUpdateSimulationBlend
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_PP_Molotov_Rag_C::InterfaceUpdateSimulationBlend(float bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.InterfaceUpdateSimulationBlend");
		
		UABP_PP_Molotov_Rag_C_InterfaceUpdateSimulationBlend_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBAA20
	 * 		Name   -> Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.ForceToggleOpticState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bEnable__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_PP_Molotov_Rag_C::ForceToggleOpticState(bool bpp__bEnable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.ForceToggleOpticState");
		
		UABP_PP_Molotov_Rag_C_ForceToggleOpticState_Params params {};
		params.bpp__bEnable__pf = bpp__bEnable__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBFD30
	 * 		Name   -> Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.ForceRevolverChamberVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__RemainingAmmo__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_PP_Molotov_Rag_C::ForceRevolverChamberVisibility(int32_t bpp__RemainingAmmo__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.ForceRevolverChamberVisibility");
		
		UABP_PP_Molotov_Rag_C_ForceRevolverChamberVisibility_Params params {};
		params.bpp__RemainingAmmo__pf = bpp__RemainingAmmo__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBFCB0
	 * 		Name   -> Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaTimeX__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_PP_Molotov_Rag_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.BlueprintUpdateAnimation");
		
		UABP_PP_Molotov_Rag_C_BlueprintUpdateAnimation_Params params {};
		params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBFC90
	 * 		Name   -> Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_PP_Molotov_Rag_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.BlueprintInitializeAnimation");
		
		UABP_PP_Molotov_Rag_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBFB90
	 * 		Name   -> Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__InPose__pf                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_PP_Molotov_Rag_C::AnimGraph(const struct FPoseLink& bpp__InPose__pf, struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C.AnimGraph");
		
		UABP_PP_Molotov_Rag_C_AnimGraph_Params params {};
		params.bpp__InPose__pf = bpp__InPose__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AnimGraph__pf != nullptr)
			*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_PP_Molotov_Rag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_PP_Molotov_Rag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C");
		return ptr;
	}

}


