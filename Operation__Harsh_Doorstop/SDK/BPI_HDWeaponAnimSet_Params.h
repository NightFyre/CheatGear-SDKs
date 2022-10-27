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
	 * Function BPI_HDWeaponAnimSet.BPI_HDWeaponAnimSet_C.ShouldUseMirroredLowerBodyLoco
	 */
	struct UBPI_HDWeaponAnimSet_C_ShouldUseMirroredLowerBodyLoco_Params
	{
	public:
		bool                                                       bOutUseMirrored;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_HDWeaponAnimSet.BPI_HDWeaponAnimSet_C.GetLocoTPPAnimSet
	 */
	struct UBPI_HDWeaponAnimSet_C_GetLocoTPPAnimSet_Params
	{
	public:
		TMap<class FName, class UAnimSequenceBase*>                OutAnimSet;                                              // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BPI_HDWeaponAnimSet.BPI_HDWeaponAnimSet_C.GetLocoAnimSet
	 */
	struct UBPI_HDWeaponAnimSet_C_GetLocoAnimSet_Params
	{
	public:
		TMap<class FName, class UAnimSequenceBase*>                OutAnimSet;                                              // 0x0000(0x0050)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
