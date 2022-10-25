#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.WeaponJumpLoop
	 */
	struct UABPI_WeaponAnimLayer_C_WeaponJumpLoop_Params
	{
	public:
		struct FPoseLink                                           LowerJumpLoop;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           WeaponJumpLoop;                                          // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.Move
	 */
	struct UABPI_WeaponAnimLayer_C_Move_Params
	{
	public:
		struct FPoseLink                                           Move;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           Move2;                                                   // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.WeaponAdditive
	 */
	struct UABPI_WeaponAnimLayer_C_WeaponAdditive_Params
	{
	public:
		struct FPoseLink                                           WeaponAdditive;                                          // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.WeaponUpperBody
	 */
	struct UABPI_WeaponAnimLayer_C_WeaponUpperBody_Params
	{
	public:
		struct FPoseLink                                           UpperBody;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           WeaponUpperBody;                                         // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
