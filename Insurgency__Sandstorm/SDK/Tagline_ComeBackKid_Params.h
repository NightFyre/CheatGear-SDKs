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
	 * Function Tagline_ComeBackKid.Tagline_ComeBackKid_C.CheckLastManStanding
	 */
	struct UTagline_ComeBackKid_C_CheckLastManStanding_Params
	{
	public:
		class AINSGameState*                                       bpp__GameState__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__WinningTeam__pf;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tagline_ComeBackKid.Tagline_ComeBackKid_C.BlueprintOnCheckRoundEndAward
	 */
	struct UTagline_ComeBackKid_C_BlueprintOnCheckRoundEndAward_Params
	{
	public:
		class AINSGameState*                                       bpp__InGameState__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__LastWinningTeam__pf__const;                         // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
