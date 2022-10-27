#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * BlueprintGeneratedClass PlayerPawn.PlayerPawn_C
	 * Size -> 0x0008 (FullSize[0x06B0] - InheritedSize[0x06A8])
	 */
	class APlayerPawn_C : public AShooterCharacter
	{
	public:
		unsigned char                                              UnknownData_ZFHM[0x8];                                   // 0x06A8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
