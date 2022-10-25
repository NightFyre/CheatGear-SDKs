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
	 * Function BP_Firearm_P90.BP_Firearm_P90_C.UpdateSocketName
	 */
	struct ABP_Firearm_P90_C_UpdateSocketName_Params
	{
	public:
		class FName                                                bpp__ParentSocket__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Firearm_P90.BP_Firearm_P90_C.HasMovableUpgrade
	 */
	struct ABP_Firearm_P90_C_HasMovableUpgrade_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_Firearm_P90.BP_Firearm_P90_C.GetMovableUpgrade
	 */
	struct ABP_Firearm_P90_C_GetMovableUpgrade_Params
	{
	public:
		class UWeaponUpgradeComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
