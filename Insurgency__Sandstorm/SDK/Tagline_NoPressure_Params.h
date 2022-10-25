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
	 * Function Tagline_NoPressure.Tagline_NoPressure_C.OnHeroCapture
	 */
	struct UTagline_NoPressure_C_OnHeroCapture_Params
	{
	public:
		class AINSPlayerState*                                     bpp__HeroPlayer__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tagline_NoPressure.Tagline_NoPressure_C.BlueprintInit
	 */
	struct UTagline_NoPressure_C_BlueprintInit_Params
	{
	public:
		class AINSGameMode*                                        bpp__GameMode__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Tagline_NoPressure.Tagline_NoPressure_C.OnHeroCaptureDelegate__DelegateSignature
	 */
	struct UTagline_NoPressure_C_OnHeroCaptureDelegate__DelegateSignature_Params
	{
	public:
		class AINSPlayerState*                                     bpp__HeroPlayer__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
