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
	 * Function Tagline_TenaciousD.Tagline_TenaciousD_C.OnRoundOver
	 */
	struct UTagline_TenaciousD_C_OnRoundOver_Params
	{
	public:
		ERoundConclusion                                           bpp__RoundEndReason__pf;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__WinningTeam__pf;                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tagline_TenaciousD.Tagline_TenaciousD_C.OnLastStand
	 */
	struct UTagline_TenaciousD_C_OnLastStand_Params
	{	};

	/**
	 * Function Tagline_TenaciousD.Tagline_TenaciousD_C.BlueprintOnRoundReset
	 */
	struct UTagline_TenaciousD_C_BlueprintOnRoundReset_Params
	{	};

	/**
	 * Function Tagline_TenaciousD.Tagline_TenaciousD_C.BlueprintInit
	 */
	struct UTagline_TenaciousD_C_BlueprintInit_Params
	{
	public:
		class AINSGameMode*                                        bpp__GameMode__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Tagline_TenaciousD.Tagline_TenaciousD_C.OnRoundOverDelegate__DelegateSignature
	 */
	struct UTagline_TenaciousD_C_OnRoundOverDelegate__DelegateSignature_Params
	{
	public:
		ERoundConclusion                                           bpp__RoundEndReason__pf;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__WinningTeam__pf;                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Tagline_TenaciousD.Tagline_TenaciousD_C.OnLastStandDelegate__DelegateSignature
	 */
	struct UTagline_TenaciousD_C_OnLastStandDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
