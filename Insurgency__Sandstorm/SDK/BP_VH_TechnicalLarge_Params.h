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
	 * DelegateFunction BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.OnGearChange__DelegateSignature
	 */
	struct ABP_VH_TechnicalLarge_C_OnGearChange__DelegateSignature_Params
	{	};

	/**
	 * Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.UserConstructionScript
	 */
	struct ABP_VH_TechnicalLarge_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.OnGearChanged
	 */
	struct ABP_VH_TechnicalLarge_C_OnGearChanged_Params
	{	};

	/**
	 * Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.OnBrakelightToggled
	 */
	struct ABP_VH_TechnicalLarge_C_OnBrakelightToggled_Params
	{
	public:
		bool                                                       bpp__bEnabled__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature
	 */
	struct ABP_VH_TechnicalLarge_C_BndEvt__EnginePart_K2Node_ComponentBoundEvent_2_VehiclePartDamagedDelegate__DelegateSignature_Params
	{
	public:
		class UVehiclePartComponent*                               bpp__VehiclePart__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Damage__pf;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_VH_TechnicalLarge.BP_VH_TechnicalLarge_C.BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature
	 */
	struct ABP_VH_TechnicalLarge_C_BndEvt__EnginePart_K2Node_ComponentBoundEvent_0_VehiclePart_DestroyedDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
