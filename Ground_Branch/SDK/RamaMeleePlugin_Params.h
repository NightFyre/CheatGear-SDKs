#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function RamaMeleePlugin.RamaMeleeWeapon.UpdateSwingPoseBodies
	 */
	struct URamaMeleeWeapon_UpdateSwingPoseBodies_Params
	{	};

	/**
	 * Function RamaMeleePlugin.RamaMeleeWeapon.StopSwingDamage
	 */
	struct URamaMeleeWeapon_StopSwingDamage_Params
	{	};

	/**
	 * Function RamaMeleePlugin.RamaMeleeWeapon.StartSwingDamage
	 */
	struct URamaMeleeWeapon_StartSwingDamage_Params
	{	};

	/**
	 * Function RamaMeleePlugin.RamaMeleeWeapon.MeleeSweep
	 */
	struct URamaMeleeWeapon_MeleeSweep_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7T89[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTransform>                                  BodyPreviousPose;                                        // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
