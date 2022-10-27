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
	 * Function CC_BASE_FACEWEAR_Shemagh.CC_BASE_FACEWEAR_Shemagh_C.SetShemaghMorph
	 */
	struct UCC_BASE_FACEWEAR_Shemagh_C_SetShemaghMorph_Params
	{
	public:
		ECarrierArmour                                             bpp__GearCombination__pf;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U8EP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Morph__pf;                                          // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CC_BASE_FACEWEAR_Shemagh.CC_BASE_FACEWEAR_Shemagh_C.BlueprintInitCosmetic
	 */
	struct UCC_BASE_FACEWEAR_Shemagh_C_BlueprintInitCosmetic_Params
	{
	public:
		class UClass*                                              bpp__VariationClass__pf;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
