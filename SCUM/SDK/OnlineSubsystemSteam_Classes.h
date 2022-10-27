#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteam.SteamNetConnection
	 * Size -> 0x0008 (FullSize[0x1C50] - InheritedSize[0x1C48])
	 */
	class USteamNetConnection : public UIpConnection
	{
	public:
		bool                                                       bIsPassthrough;                                          // 0x1C48(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16E7[0x7];                                   // 0x1C49(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteam.SteamNetDriver
	 * Size -> 0x0008 (FullSize[0x07E8] - InheritedSize[0x07E0])
	 */
	class USteamNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_6JP7[0x8];                                   // 0x07E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
