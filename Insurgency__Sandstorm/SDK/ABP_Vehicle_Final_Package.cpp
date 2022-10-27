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
	 * 		RVA    -> 0x04DB4DE0
	 * 		Name   -> Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnPlayGearShift
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Vehicle_Final_C::OnPlayGearShift()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnPlayGearShift");
		
		UABP_Vehicle_Final_C_OnPlayGearShift_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB41C0
	 * 		Name   -> Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnPlayFireEnd
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Vehicle_Final_C::OnPlayFireEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnPlayFireEnd");
		
		UABP_Vehicle_Final_C_OnPlayFireEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB53E0
	 * 		Name   -> Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnPlayFire
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Vehicle_Final_C::OnPlayFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnPlayFire");
		
		UABP_Vehicle_Final_C_OnPlayFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3500
	 * 		Name   -> Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnGearChange
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Vehicle_Final_C::OnGearChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnGearChange");
		
		UABP_Vehicle_Final_C_OnGearChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9CA0
	 * 		Name   -> Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnFireEnd
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Vehicle_Final_C::OnFireEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnFireEnd");
		
		UABP_Vehicle_Final_C_OnFireEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9C80
	 * 		Name   -> Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnFire
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Vehicle_Final_C::OnFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.OnFire");
		
		UABP_Vehicle_Final_C_OnFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD05E0
	 * 		Name   -> Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.GetVehicleAnims
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVehicleAnimationStruct                     bpp__VehicleAnimations__pf                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_Vehicle_Final_C::GetVehicleAnims(struct FVehicleAnimationStruct* bpp__VehicleAnimations__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.GetVehicleAnims");
		
		UABP_Vehicle_Final_C_GetVehicleAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__VehicleAnimations__pf != nullptr)
			*bpp__VehicleAnimations__pf = params.bpp__VehicleAnimations__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCEA10
	 * 		Name   -> Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.CalcFloatInterp
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__Current__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Target__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Speed__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Output__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Vehicle_Final_C::CalcFloatInterp(float bpp__Current__pf, float bpp__Target__pf, float bpp__Speed__pf, float* bpp__Output__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.CalcFloatInterp");
		
		UABP_Vehicle_Final_C_CalcFloatInterp_Params params {};
		params.bpp__Current__pf = bpp__Current__pf;
		params.bpp__Target__pf = bpp__Target__pf;
		params.bpp__Speed__pf = bpp__Speed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Output__pf != nullptr)
			*bpp__Output__pf = params.bpp__Output__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB1A70
	 * 		Name   -> Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaTimeX__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Vehicle_Final_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.BlueprintUpdateAnimation");
		
		UABP_Vehicle_Final_C_BlueprintUpdateAnimation_Params params {};
		params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB34E0
	 * 		Name   -> Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Vehicle_Final_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.BlueprintInitializeAnimation");
		
		UABP_Vehicle_Final_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD390
	 * 		Name   -> Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_Vehicle_Final_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Vehicle_Final.ABP_Vehicle_Final_C.AnimGraph");
		
		UABP_Vehicle_Final_C_AnimGraph_Params params {};
		
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
	 * 		Name   -> PredefinedFunction UABP_Vehicle_Final_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Vehicle_Final_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass ABP_Vehicle_Final.ABP_Vehicle_Final_C");
		return ptr;
	}

}


