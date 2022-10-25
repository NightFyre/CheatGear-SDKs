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
	 * Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.SetEquipable
	 */
	struct UABP_Weapon_Mounted_C_SetEquipable_Params
	{
	public:
		class AItemEquipable*                                      bpp__Item__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.OnPlayReload
	 */
	struct UABP_Weapon_Mounted_C_OnPlayReload_Params
	{
	public:
		bool                                                       bpp__Empty__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__HasReload__pf;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.OnPlayFireLoop
	 */
	struct UABP_Weapon_Mounted_C_OnPlayFireLoop_Params
	{	};

	/**
	 * Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.OnPlayFire
	 */
	struct UABP_Weapon_Mounted_C_OnPlayFire_Params
	{	};

	/**
	 * Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintUpdateAnimation
	 */
	struct UABP_Weapon_Mounted_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      bpp__DeltaTimeX__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnReloadInterrupt
	 */
	struct UABP_Weapon_Mounted_C_BlueprintOnReloadInterrupt_Params
	{	};

	/**
	 * Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnReload
	 */
	struct UABP_Weapon_Mounted_C_BlueprintOnReload_Params
	{
	public:
		bool                                                       bpp__bDryReload__pf__const;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bSingleReload__pf__const;                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LVFX[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bpp__RateMultiplier__pf__const;                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnFirearmStopFire
	 */
	struct UABP_Weapon_Mounted_C_BlueprintOnFirearmStopFire_Params
	{	};

	/**
	 * Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintOnFirearmFired
	 */
	struct UABP_Weapon_Mounted_C_BlueprintOnFirearmFired_Params
	{
	public:
		struct FVector                                             bpp__FireOrigin__pf__const;                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__FireDirection__pf__const;                           // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.BlueprintBeginPlay
	 */
	struct UABP_Weapon_Mounted_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ABP_Weapon_Mounted.ABP_Weapon_Mounted_C.AnimGraph
	 */
	struct UABP_Weapon_Mounted_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
