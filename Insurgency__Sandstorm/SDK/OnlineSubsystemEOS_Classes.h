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
	 * Class OnlineSubsystemEOS.AntiCheatNetComponentEOS
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UAntiCheatNetComponentEOS : public UActorComponent
	{
	public:
		unsigned char                                              bIsRegisteredEOS : 1;                                    // 0x00B0(0x0001) BIT_FIELD Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3V3T[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		void ServerSendMessage(TArray<unsigned char> Message);
		void ServerCheckSanctions(const struct FUniqueNetIdRepl& UserId);
		void OnRep_IsRegisteredEOS();
		void ClientSendMessage(TArray<unsigned char> Message);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOS.EOSArtifactSettings
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEOSArtifactSettings : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOS.EOSSettings
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UEOSSettings : public UObject
	{
	public:
		class FString                                              CacheDir;                                                // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultArtifactName;                                     // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultArtifactNameBeta;                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TickBudgetInMilliseconds;                                // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableOverlay;                                          // 0x005C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSocialOverlay;                                    // 0x005D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldEnforceBeingLaunchedByEGS;                        // 0x005E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PD0T[0x1];                                   // 0x005F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      TitleStorageTags;                                        // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TitleStorageReadChunkLength;                             // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63VA[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FArtifactSettings>                           Artifacts;                                               // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEAS;                                                 // 0x0088(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEOSConnect;                                          // 0x0089(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMirrorStatsToEOS;                                       // 0x008A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMirrorAchievementsToEOS;                                // 0x008B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEOSSessions;                                         // 0x008C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMirrorPresenceToEAS;                                    // 0x008D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MAI4[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOS.NetConnectionEOS
	 * Size -> 0x0008 (FullSize[0x1AD8] - InheritedSize[0x1AD0])
	 */
	class UNetConnectionEOS : public UIpConnection
	{
	public:
		unsigned char                                              UnknownData_FVOQ[0x8];                                   // 0x1AD0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOS.NetDriverEOS
	 * Size -> 0x0008 (FullSize[0x07C0] - InheritedSize[0x07B8])
	 */
	class UNetDriverEOS : public UIpNetDriver
	{
	public:
		bool                                                       bIsPassthrough;                                          // 0x07B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUsingP2PSockets;                                      // 0x07B9(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9X5[0x6];                                   // 0x07BA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOS.AuthComponentModuleInterfaceEOS
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAuthComponentModuleInterfaceEOS : public UHandlerComponentFactory
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
