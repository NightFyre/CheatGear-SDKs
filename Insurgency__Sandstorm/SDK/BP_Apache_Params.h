#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Apache.BP_Apache_C.ReceiveBeginPlay
	 */
	struct ABP_Apache_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Apache.BP_Apache_C.BndEvt__VehiclePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature
	 */
	struct ABP_Apache_C_BndEvt__VehiclePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Apache.BP_Apache_C.BndEvt__TopRotor_K2Node_ComponentBoundEvent_1_VehiclePartDestroyedDelegate__DelegateSignature
	 */
	struct ABP_Apache_C_BndEvt__TopRotor_K2Node_ComponentBoundEvent_1_VehiclePartDestroyedDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Apache.BP_Apache_C.BndEvt__GunnerSeat_K2Node_ComponentBoundEvent_3_VehicleSeat_SeatEnterExitDelegate__DelegateSignature
	 */
	struct ABP_Apache_C_BndEvt__GunnerSeat_K2Node_ComponentBoundEvent_3_VehicleSeat_SeatEnterExitDelegate__DelegateSignature_Params
	{
	public:
		class AINSCharacter*                                       bpp__Character__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVehicleSeatComponent*                               bpp__Seat__pf;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Apache.BP_Apache_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDestroyedDelegate__DelegateSignature
	 */
	struct ABP_Apache_C_BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDestroyedDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Apache.BP_Apache_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDamagedDelegate__DelegateSignature
	 */
	struct ABP_Apache_C_BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePartDamagedDelegate__DelegateSignature_Params
	{
	public:
		class UVehiclePartComponent*                               bpp__VehiclePart__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Damage__pf;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Apache.BP_Apache_C.BndEvt__DriverSeat_K2Node_ComponentBoundEvent_2_VehicleSeat_SeatEnterExitDelegate__DelegateSignature
	 */
	struct ABP_Apache_C_BndEvt__DriverSeat_K2Node_ComponentBoundEvent_2_VehicleSeat_SeatEnterExitDelegate__DelegateSignature_Params
	{
	public:
		class AINSCharacter*                                       bpp__Character__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVehicleSeatComponent*                               bpp__Seat__pf;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
