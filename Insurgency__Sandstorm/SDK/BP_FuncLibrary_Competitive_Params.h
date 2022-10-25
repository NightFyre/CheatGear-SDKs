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
	 * Function BP_FuncLibrary_Competitive.BP_FuncLibrary_Competitive_C.GetTierTexture
	 */
	struct UBP_FuncLibrary_Competitive_C_GetTierTexture_Params
	{
	public:
		int32_t                                                    bpp__Tier__pf;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__Division__pf;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          bpp__TierIcon__pf;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_FuncLibrary_Competitive.BP_FuncLibrary_Competitive_C.GetTierBandTexture
	 */
	struct UBP_FuncLibrary_Competitive_C_GetTierBandTexture_Params
	{
	public:
		int32_t                                                    bpp__Tier__pf;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2DYK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          bpp__TierBand__pf;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_FuncLibrary_Competitive.BP_FuncLibrary_Competitive_C.GetCompTierName
	 */
	struct UBP_FuncLibrary_Competitive_C_GetCompTierName_Params
	{
	public:
		int32_t                                                    bpp__Tier__pf;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bAppendDivision__pf;                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YH4G[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    bpp__Division__pf;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H28O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                bpp__TierName__pf;                                       // 0x0018(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
