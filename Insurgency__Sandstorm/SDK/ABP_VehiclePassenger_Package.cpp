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
	 * 		RVA    -> 0x04DB9E70
	 * 		Name   -> Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnKilledInVehicle
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_VehiclePassenger_C::OnKilledInVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnKilledInVehicle");
		
		UABP_VehiclePassenger_C_OnKilledInVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD09E0
	 * 		Name   -> Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnEnteredVehicle
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVehicleSeatComponent*                       bpp__VehicleSeat__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_VehiclePassenger_C::OnEnteredVehicle(class UVehicleSeatComponent* bpp__VehicleSeat__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnEnteredVehicle");
		
		UABP_VehiclePassenger_C_OnEnteredVehicle_Params params {};
		params.bpp__VehicleSeat__pf = bpp__VehicleSeat__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3A80
	 * 		Name   -> Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_8F415A9C49C73918A0983BBFFED6F919
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_VehiclePassenger_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_8F415A9C49C73918A0983BBFFED6F919()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_8F415A9C49C73918A0983BBFFED6F919");
		
		UABP_VehiclePassenger_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_8F415A9C49C73918A0983BBFFED6F919_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3FE0
	 * 		Name   -> Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_0FA0FAA7420609F7B190328DE0713572
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_VehiclePassenger_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_0FA0FAA7420609F7B190328DE0713572()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_0FA0FAA7420609F7B190328DE0713572");
		
		UABP_VehiclePassenger_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_VehiclePassenger_AnimGraphNode_ModifyBone_0FA0FAA7420609F7B190328DE0713572_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCE430
	 * 		Name   -> Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaTimeX__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_VehiclePassenger_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.BlueprintUpdateAnimation");
		
		UABP_VehiclePassenger_C_BlueprintUpdateAnimation_Params params {};
		params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB41C0
	 * 		Name   -> Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_VehiclePassenger_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.BlueprintInitializeAnimation");
		
		UABP_VehiclePassenger_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB53E0
	 * 		Name   -> Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.BlueprintBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_VehiclePassenger_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.BlueprintBeginPlay");
		
		UABP_VehiclePassenger_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD2F0
	 * 		Name   -> Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_VehiclePassenger_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_VehiclePassenger.ABP_VehiclePassenger_C.AnimGraph");
		
		UABP_VehiclePassenger_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AnimGraph__pf != nullptr)
			*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnVehicleSeatChangeDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class UVehicleSeatComponent*                       bpp__VehicleSeat__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_VehiclePassenger_C::OnVehicleSeatChangeDelegate__DelegateSignature(class UVehicleSeatComponent* bpp__VehicleSeat__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnVehicleSeatChangeDelegate__DelegateSignature");
		
		UABP_VehiclePassenger_C_OnVehicleSeatChangeDelegate__DelegateSignature_Params params {};
		params.bpp__VehicleSeat__pf = bpp__VehicleSeat__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnKilledInVehicleSeatDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UABP_VehiclePassenger_C::OnKilledInVehicleSeatDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_VehiclePassenger.ABP_VehiclePassenger_C.OnKilledInVehicleSeatDelegate__DelegateSignature");
		
		UABP_VehiclePassenger_C_OnKilledInVehicleSeatDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_VehiclePassenger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_VehiclePassenger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass ABP_VehiclePassenger.ABP_VehiclePassenger_C");
		return ptr;
	}

}


