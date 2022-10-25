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
	 * Class GbxTwitch.GbxTwitchSettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UGbxTwitchSettings : public UObject
	{
	public:
		class FString                                              AppClientID;                                             // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AppClientID_Stable;                                      // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AppClientID_Cert;                                        // 0x0048(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExtensionID;                                             // 0x0058(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameID;                                                  // 0x0068(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTwitch.TwitchAPI
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UTwitchAPI : public UObject
	{
	public:
		unsigned char                                              UnknownData_6PIE[0x110];                                 // 0x0028(0x0110) MISSED OFFSET (PADDING)

	public:
		void STATIC_RequestTwitchStreams(int32_t MaxNbStreams, const class FString& GameName, const class FString& UserLogin, const class FString& Language, const class FScriptDelegate& StreamInfoReceivedDelegate);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTwitch.TwitchIRCClient
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UTwitchIRCClient : public UObject
	{
	public:
		unsigned char                                              UnknownData_CHAY[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTwitchChannel>                              PendingChannels;                                         // 0x0058(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<struct FTwitchChannel>                              ConnectedChannels;                                       // 0x0068(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class FString>                                      IRCCommandsMessages;                                     // 0x0078(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S42U[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		void STATIC_SendChatMessage(const class FString& ChannelName, const class FString& Message);
		void STATIC_QuitChannel(const class FString& ChannelName);
		void STATIC_JoinChannel(const class FString& ChannelName, const class FScriptDelegate& OnMessageReceived);
		void STATIC_InitChatBot();
		void STATIC_ExitChatBot();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
