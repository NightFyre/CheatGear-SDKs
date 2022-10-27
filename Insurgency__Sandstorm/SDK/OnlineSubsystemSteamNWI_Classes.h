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
	 * Class OnlineSubsystemSteamNWI.GeneralSteamSettings
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGeneralSteamSettings : public UObject
	{
	public:
		class FString                                              ProductString;                                           // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultGameDescription;                                  // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteamNWI.SteamAuthComponentModuleInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteamNWI.SteamNetConnection
	 * Size -> 0x0008 (FullSize[0x1AD8] - InheritedSize[0x1AD0])
	 */
	class USteamNetConnection : public UIpConnection
	{
	public:
		bool                                                       bIsPassthrough;                                          // 0x1AD0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SG9[0x7];                                   // 0x1AD1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteamNWI.SteamNetDriver
	 * Size -> 0x0008 (FullSize[0x07C0] - InheritedSize[0x07B8])
	 */
	class USteamNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_N6NF[0x8];                                   // 0x07B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
