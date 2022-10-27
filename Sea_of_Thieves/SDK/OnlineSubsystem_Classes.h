#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class OnlineSubsystem.DefaultOnlineEnvironmentSettings
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UDefaultOnlineEnvironmentSettings : public UObject
	{
	public:
		class FString                                              EnvironmentId;                                           // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		uint32_t                                                   TitleId;                                                 // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0WBT[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServiceConfigId;                                         // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		class FString                                              ClientCertificateThumbprint;                             // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystem.NamedInterfaces
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UNamedInterfaces : public UObject
	{
	public:
		TArray<struct FNamedInterface>                             NamedInterfaces;                                         // 0x0028(0x0010) ZeroConstructor
		TArray<struct FNamedInterfaceDef>                          NamedInterfaceDefs;                                      // 0x0038(0x0010) ZeroConstructor, Config
		unsigned char                                              UnknownData_MSS1[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystem.TurnBasedMatchInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTurnBasedMatchInterface : public UInterface
	{
	public:
		void OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive);
		void OnMatchEnded(const class FString& Match);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
