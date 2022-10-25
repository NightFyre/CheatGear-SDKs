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
	 * 		RVA    -> 0x04DB78E0
	 * 		Name   -> Function BP_Apache.BP_Apache_C.ReceiveBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void ABP_Apache_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Apache.BP_Apache_C.ReceiveBeginPlay");
		
		ABP_Apache_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4C80
	 * 		Name   -> Function BP_Apache.BP_Apache_C.BndEvt__VehiclePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_Apache_C::BndEvt__VehiclePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Apache.BP_Apache_C.BndEvt__VehiclePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature");
		
		ABP_Apache_C_BndEvt__VehiclePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD4D0
	 * 		Name   -> Function BP_Apache.BP_Apache_C.BndEvt__TopRotor_K2Node_ComponentBoundEvent_1_VehiclePartDestroyedDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_Apache_C::BndEvt__TopRotor_K2Node_ComponentBoundEvent_1_VehiclePartDestroyedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Apache.BP_Apache_C.BndEvt__TopRotor_K2Node_ComponentBoundEvent_1_VehiclePartDestroyedDelegate__DelegateSignature");
		
		ABP_Apache_C_BndEvt__TopRotor_K2Node_ComponentBoundEvent_1_VehiclePartDestroyedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB7150
	 * 		Name   -> Function BP_Apache.BP_Apache_C.BndEvt__GunnerSeat_K2Node_ComponentBoundEvent_3_VehicleSeat_SeatEnterExitDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class AINSCharacter*                               bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVehicleSeatComponent*                       bpp__Seat__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Apache_C::BndEvt__GunnerSeat_K2Node_ComponentBoundEvent_3_VehicleSeat_SeatEnterExitDelegate__DelegateSignature(class AINSCharacter* bpp__Character__pf, class UVehicleSeatComponent* bpp__Seat__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Apache.BP_Apache_C.BndEvt__GunnerSeat_K2Node_ComponentBoundEvent_3_VehicleSeat_SeatEnterExitDelegate__DelegateSignature");
		
		ABP_Apache_C_BndEvt__GunnerSeat_K2Node_ComponentBoundEvent_3_VehicleSeat_SeatEnterExitDelegate__DelegateSignature_Params params {};
		params.bpp__Character__pf = bpp__Character__pf;
		params.bpp__Seat__pf = bpp__Seat__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB6CB0
	 * 		Name   -> Function BP_Apache.BP_Apache_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDestroyedDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 */
	void ABP_Apache_C::BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDestroyedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Apache.BP_Apache_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDestroyedDelegate__DelegateSignature");
		
		ABP_Apache_C_BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDestroyedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE8760
	 * 		Name   -> Function BP_Apache.BP_Apache_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDamagedDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class UVehiclePartComponent*                       bpp__VehiclePart__pf                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Damage__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Apache_C::BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDamagedDelegate__DelegateSignature(class UVehiclePartComponent* bpp__VehiclePart__pf, float bpp__Damage__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Apache.BP_Apache_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDamagedDelegate__DelegateSignature");
		
		ABP_Apache_C_BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDamagedDelegate__DelegateSignature_Params params {};
		params.bpp__VehiclePart__pf = bpp__VehiclePart__pf;
		params.bpp__Damage__pf = bpp__Damage__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE8690
	 * 		Name   -> Function BP_Apache.BP_Apache_C.BndEvt__DriverSeat_K2Node_ComponentBoundEvent_2_VehicleSeat_SeatEnterExitDelegate__DelegateSignature
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class AINSCharacter*                               bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVehicleSeatComponent*                       bpp__Seat__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Apache_C::BndEvt__DriverSeat_K2Node_ComponentBoundEvent_2_VehicleSeat_SeatEnterExitDelegate__DelegateSignature(class AINSCharacter* bpp__Character__pf, class UVehicleSeatComponent* bpp__Seat__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Apache.BP_Apache_C.BndEvt__DriverSeat_K2Node_ComponentBoundEvent_2_VehicleSeat_SeatEnterExitDelegate__DelegateSignature");
		
		ABP_Apache_C_BndEvt__DriverSeat_K2Node_ComponentBoundEvent_2_VehicleSeat_SeatEnterExitDelegate__DelegateSignature_Params params {};
		params.bpp__Character__pf = bpp__Character__pf;
		params.bpp__Seat__pf = bpp__Seat__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Apache_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Apache_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Apache.BP_Apache_C");
		return ptr;
	}

}


