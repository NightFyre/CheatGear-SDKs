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
	 * Function Tagline_Warlord.Tagline_Warlord_C.CheckLastOneStanded
	 */
	struct UTagline_Warlord_C_CheckLastOneStanded_Params
	{
	public:
		unsigned char                                              bpp__WinningTeam__pf;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tagline_Warlord.Tagline_Warlord_C.BlueprintOnCheckRoundEndAward
	 */
	struct UTagline_Warlord_C_BlueprintOnCheckRoundEndAward_Params
	{
	public:
		class AINSGameState*                                       bpp__InGameState__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__LastWinningTeam__pf__const;                         // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
