#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Class SteamSockets.SteamSocketsNetConnection
	 * Size -> 0x0010 (FullSize[0x1B00] - InheritedSize[0x1AF0])
	 */
	class USteamSocketsNetConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_JK82[0x10];                                  // 0x1AF0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteamSockets.SteamSocketsNetDriver
	 * Size -> 0x0010 (FullSize[0x0758] - InheritedSize[0x0748])
	 */
	class USteamSocketsNetDriver : public UNetDriver
	{
	public:
		unsigned char                                              UnknownData_G290[0x10];                                  // 0x0748(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
