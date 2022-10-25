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
	 * Function EQS_GetAllOccupiedCover.EQS_GetAllOccupiedCover_C.ProvideLocationsSet
	 */
	struct UEQS_GetAllOccupiedCover_C_ProvideLocationsSet_Params
	{
	public:
		class UObject*                                             bpp__QuerierObject__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__QuerierActor__pf;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     bpp__ResultingLocationSet__pf;                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
