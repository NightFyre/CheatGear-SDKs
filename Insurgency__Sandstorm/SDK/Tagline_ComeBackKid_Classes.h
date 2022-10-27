#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * DynamicClass Tagline_ComeBackKid.Tagline_ComeBackKid_C
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UTagline_ComeBackKid_C : public UTagline
	{
	public:
		class AINSGameState*                                       K2Node_Event_InGameState;                                // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              K2Node_Event_LastWinningTeam;                            // 0x00E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDMG[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)

	public:
		void CheckLastManStanding(class AINSGameState* bpp__GameState__pf, unsigned char bpp__WinningTeam__pf);
		void BlueprintOnCheckRoundEndAward(class AINSGameState* bpp__InGameState__pf, unsigned char bpp__LastWinningTeam__pf__const);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
