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
	 * Function BP_Drone_IED.BP_Drone_IED_C.ReceiveTick
	 */
	struct ABP_Drone_IED_C_ReceiveTick_Params
	{
	public:
		float                                                      bpp__DeltaSeconds__pf;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Drone_IED.BP_Drone_IED_C.CheckStuck
	 */
	struct ABP_Drone_IED_C_CheckStuck_Params
	{	};

	/**
	 * Function BP_Drone_IED.BP_Drone_IED_C.BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature
	 */
	struct ABP_Drone_IED_C_BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature_Params
	{
	public:
		class UVehiclePartComponent*                               bpp__VehiclePart__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Damage__pf;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Drone_IED.BP_Drone_IED_C.BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature
	 */
	struct ABP_Drone_IED_C_BndEvt__VehicleDestructablePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
