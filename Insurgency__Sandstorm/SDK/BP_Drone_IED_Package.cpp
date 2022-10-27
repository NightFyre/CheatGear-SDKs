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
	 * 		RVA    -> 0x04DFCFB0
	 * 		Name   -> Function BP_Drone_IED.BP_Drone_IED_C.ReceiveTick
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaSeconds__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Drone_IED_C::ReceiveTick(float bpp__DeltaSeconds__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Drone_IED.BP_Drone_IED_C.ReceiveTick");
		
		ABP_Drone_IED_C_ReceiveTick_Params params {};
		params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4C80
	 * 		Name   -> Function BP_Drone_IED.BP_Drone_IED_C.CheckStuck
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABP_Drone_IED_C::CheckStuck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Drone_IED.BP_Drone_IED_C.CheckStuck");
		
		ABP_Drone_IED_C_CheckStuck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE8830
	 * 		Name   -> Function BP_Drone_IED.BP_Drone_IED_C.BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class UVehiclePartComponent*                       bpp__VehiclePart__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Damage__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Drone_IED_C::BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature(class UVehiclePartComponent* bpp__VehiclePart__pf, float bpp__Damage__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Drone_IED.BP_Drone_IED_C.BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature");
		
		ABP_Drone_IED_C_BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature_Params params {};
		params.bpp__VehiclePart__pf = bpp__VehiclePart__pf;
		params.bpp__Damage__pf = bpp__Damage__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB6CB0
	 * 		Name   -> Function BP_Drone_IED.BP_Drone_IED_C.BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_Drone_IED_C::BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Drone_IED.BP_Drone_IED_C.BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature");
		
		ABP_Drone_IED_C_BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Drone_IED_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Drone_IED_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Drone_IED.BP_Drone_IED_C");
		return ptr;
	}

}


