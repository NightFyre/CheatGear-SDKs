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
	 * Function WeaponAnimInterface.WeaponAnimInterface_C.UpdateRevolverChamberState
	 */
	struct UWeaponAnimInterface_C_UpdateRevolverChamberState_Params
	{
	public:
		TArray<ERevolverChamberState>                              bpp__Chambers__pf__const;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WeaponAnimInterface.WeaponAnimInterface_C.ToggleOpticState
	 */
	struct UWeaponAnimInterface_C_ToggleOpticState_Params
	{
	public:
		bool                                                       bpp__Enable__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WeaponAnimInterface.WeaponAnimInterface_C.StopToggleOpticMontage
	 */
	struct UWeaponAnimInterface_C_StopToggleOpticMontage_Params
	{	};

	/**
	 * Function WeaponAnimInterface.WeaponAnimInterface_C.InterfaceUpdateSimulationBlend
	 */
	struct UWeaponAnimInterface_C_InterfaceUpdateSimulationBlend_Params
	{
	public:
		float                                                      bpp__State__pf;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WeaponAnimInterface.WeaponAnimInterface_C.ForceToggleOpticState
	 */
	struct UWeaponAnimInterface_C_ForceToggleOpticState_Params
	{
	public:
		bool                                                       bpp__bEnable__pf;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WeaponAnimInterface.WeaponAnimInterface_C.ForceRevolverChamberVisibility
	 */
	struct UWeaponAnimInterface_C_ForceRevolverChamberVisibility_Params
	{
	public:
		int32_t                                                    bpp__RemainingAmmo__pf;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
