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
	 * Class Gauntlet.GauntletTestController
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGauntletTestController : public UObject
	{
	public:
		unsigned char                                              UnknownData_950Z[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Gauntlet.GauntletTestControllerBootTest
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGauntletTestControllerBootTest : public UGauntletTestController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Gauntlet.GauntletTestControllerErrorTest
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UGauntletTestControllerErrorTest : public UGauntletTestController
	{
	public:
		unsigned char                                              UnknownData_MXTG[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
