#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Class OnlineSubsystemSteam.SteamNetConnection
	 * Size -> 0x0000 (FullSize[0x19A0] - InheritedSize[0x19A0])
	 */
	class USteamNetConnection : public UIpConnection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteam.SteamBeaconNetConnection
	 * Size -> 0x0000 (FullSize[0x19A0] - InheritedSize[0x19A0])
	 */
	class USteamBeaconNetConnection : public USteamNetConnection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteam.SteamNetDriver
	 * Size -> 0x0018 (FullSize[0x0590] - InheritedSize[0x0578])
	 */
	class USteamNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_LG0M[0x18];                                  // 0x0578(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteam.SteamBeaconNetDriver
	 * Size -> 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
	 */
	class USteamBeaconNetDriver : public USteamNetDriver
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
