/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * 		Name   -> PredefinedFunction AVehicleMovementNWheeledVehicle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVehicleMovementNWheeledVehicle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OWIEnhancedVehicleMovement.VehicleMovementNWheeledVehicle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVehicleMovementTankVehicle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVehicleMovementTankVehicle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OWIEnhancedVehicleMovement.VehicleMovementTankVehicle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleMovementWheelTracked.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleMovementWheelTracked::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OWIEnhancedVehicleMovement.VehicleMovementWheelTracked");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWheeledVehicleMovementComponentNW.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWheeledVehicleMovementComponentNW::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentNW");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0080DB80
	 * 		Name   -> Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.SetRightTrackThrottleInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InThrottle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentTank::SetRightTrackThrottleInput(float InThrottle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.SetRightTrackThrottleInput");
		
		UWheeledVehicleMovementComponentTank_SetRightTrackThrottleInput_Params params {};
		params.InThrottle = InThrottle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEB40
	 * 		Name   -> Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.SetLeftTrackThrottleInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InThrottle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentTank::SetLeftTrackThrottleInput(float InThrottle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.SetLeftTrackThrottleInput");
		
		UWheeledVehicleMovementComponentTank_SetLeftTrackThrottleInput_Params params {};
		params.InThrottle = InThrottle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0080DB00
	 * 		Name   -> Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.SetBothTracksThrottleInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InThrottle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWheeledVehicleMovementComponentTank::SetBothTracksThrottleInput(float InThrottle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.SetBothTracksThrottleInput");
		
		UWheeledVehicleMovementComponentTank_SetBothTracksThrottleInput_Params params {};
		params.InThrottle = InThrottle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0080DAC0
	 * 		Name   -> Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.GetRightTrackSpeed
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWheeledVehicleMovementComponentTank::GetRightTrackSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.GetRightTrackSpeed");
		
		UWheeledVehicleMovementComponentTank_GetRightTrackSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0080DA80
	 * 		Name   -> Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.GetLeftTrackSpeed
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWheeledVehicleMovementComponentTank::GetLeftTrackSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank.GetLeftTrackSpeed");
		
		UWheeledVehicleMovementComponentTank_GetLeftTrackSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWheeledVehicleMovementComponentTank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWheeledVehicleMovementComponentTank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank");
		return ptr;
	}

}


