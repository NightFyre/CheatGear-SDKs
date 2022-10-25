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
	 * Class RBZooKeeper.ZKCore
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UZKCore : public UObject
	{
	public:
		class UGameInstance*                                       GameInstance;                                            // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7Q4B[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RBZooKeeper.ZKAdmin
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UZKAdmin : public UZKCore
	{
	public:
		TArray<struct FZKAdminGroupInfo>                           AdminGroups;                                             // 0x0040(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FZKAdminInfo>                                Admins;                                                  // 0x0050(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FZKAdminInfo>                                ElevatedPlayers;                                         // 0x0060(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bEnableSetupCommand;                                     // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_69V8[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		bool GetAdminInfo(const class FString& UniqueId, struct FZKAdminInfo* OutAdminInfo);
		TArray<class FString> GetAdminGroupCommands(const class FString& AdminGroupName);
		TArray<class FString> GetAdminCommands(const class FString& UniqueId);
		class UZKAdmin* Get();
		bool AllowPlayerName(const class FString& PlayerName, const class FString& UniqueId);
		EZKAdminCommandResult AdminCommand(const class FString& UniqueId, const class FString& Parameters);
		static UClass* StaticClass();
	};

	/**
	 * Class RBZooKeeper.ZKAFKDetection
	 * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
	 */
	class UZKAFKDetection : public UZKCore
	{
	public:
		TMap<class APlayerController*, struct FZKAFKInfo>          AFKInfoMap;                                              // 0x0040(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TR8U[0x20];                                  // 0x0090(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             AFKDetected;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RBZooKeeper.ZKBan
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UZKBan : public UZKCore
	{
	public:
		unsigned char                                              UnknownData_RB14[0x4];                                   // 0x0040(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultBanDuration;                                      // 0x0044(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FZKBanInfo>                                  Banned;                                                  // 0x0048(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected

	public:
		bool IsBanned(const class FString& UniqueIdString, class FString* ErrorMessage);
		class UZKBan* Get();
		static UClass* StaticClass();
	};

	/**
	 * Class RBZooKeeper.ZKCommands
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UZKCommands : public UZKCore
	{
	public:
		class FScriptMulticastDelegate                             OnProcessCommand;                                        // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MutePlayer;                                              // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UZKCommands* Get();
		static UClass* StaticClass();
	};

	/**
	 * Class RBZooKeeper.ZKMapList
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UZKMapList : public UZKCore
	{
	public:
		TArray<class FString>                                      MapList;                                                 // 0x0040(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_89YX[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RBZooKeeper.ZKServer
	 * Size -> 0x00F8 (FullSize[0x0138] - InheritedSize[0x0040])
	 */
	class UZKServer : public UZKCore
	{
	public:
		unsigned char                                              UnknownData_NDI6[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerName;                                              // 0x0050(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              ServerMOTD;                                              // 0x0060(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              ServerPassword;                                          // 0x0070(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              SpectatorOnlyPassword;                                   // 0x0080(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxPlayers;                                              // 0x0090(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxSpectators;                                           // 0x0094(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FName, bool>                                    GameRules;                                               // 0x0098(0x0050) Config, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9CRB[0x30];                                  // 0x00E8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnServerSettingsUpdated;                                 // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnServerGameRulesUpdated;                                // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool HasWhiteList();
		class FString GetSpectatorOnlyPassword();
		class FString GetServerPassword();
		class FString GetServerName();
		class FString GetServerMOTD();
		int32_t GetMaxSpectators();
		int32_t GetMaxPlayers();
		class UZKServer* Get();
		static UClass* StaticClass();
	};

	/**
	 * Class RBZooKeeper.ZKSettings
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class UZKSettings : public UObject
	{
	public:
		class FString                                              ConfigPath;                                              // 0x0028(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAdminSetup;                                       // 0x0038(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TAHT[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      RequiredGameOptions;                                     // 0x0040(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected
		TMap<class FName, bool>                                    DefaultGameRules;                                        // 0x0050(0x0050) Edit, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected
		TArray<struct FZKCommandInfo>                              CommandList;                                             // 0x00A0(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected
		TArray<struct FZKAdminGroupInfo>                           DefaultAdminGroups;                                      // 0x00B0(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      DefaultVotingCommands;                                   // 0x00C0(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      DefaultPermittedGameModes;                               // 0x00D0(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected
		int32_t                                                    KickBanTime;                                             // 0x00E0(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J4QY[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RBZooKeeper.ZKTeamKill
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	class UZKTeamKill : public UZKCore
	{
	public:
		int32_t                                                    MaxTeamKills;                                            // 0x0040(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BanTime;                                                 // 0x0044(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TeamKillExpireTime;                                      // 0x0048(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B46E[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FZKTeamKillerInfo>                           TeamKillers;                                             // 0x0050(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9QJ3[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		void ReportTeamKill(const class FString& TeamKillerUniqueId);
		int32_t GetTotalTeamKills(const class FString& TeamKillerUniqueId, bool bMinusForgives);
		int32_t GetTeamKills(const class FString& TeamKillerUniqueId, const class FString& VictimUniqueId, bool bMinusForgives);
		class UZKTeamKill* Get();
		void ForgiveTeamKill(const class FString& TeamKillerUniqueId, const class FString& VictimUniqueId);
		void AddTeamKill(const class FString& TeamKillerUniqueId, const class FString& TeamKillerName, const class FString& VictimUniqueId, const class FString& VictimName);
		static UClass* StaticClass();
	};

	/**
	 * Class RBZooKeeper.ZKVote
	 * Size -> 0x0100 (FullSize[0x0140] - InheritedSize[0x0040])
	 */
	class UZKVote : public UZKCore
	{
	public:
		class FScriptMulticastDelegate                             OnVoteStarted;                                           // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVoteEnded;                                             // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVoteCountUpdated;                                      // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVoteCommand;                                           // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5V2U[0x50];                                  // 0x0080(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VoteDuration;                                            // 0x00D0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    VoteSucceededTimeout;                                    // 0x00D4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    VoteFailedTimeout;                                       // 0x00D8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MapVoteTimeout;                                          // 0x00DC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinPlayers;                                              // 0x00E0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowVotingOffMapList;                                  // 0x00E4(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GT5V[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      VotingCommands;                                          // 0x00E8(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      PermittedGameModes;                                      // 0x00F8(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9ZNG[0x38];                                  // 0x0108(0x0038) MISSED OFFSET (PADDING)

	public:
		void VoteCommand(class APlayerController* PlayerController, const class FString& Parameters);
		void StartVote(class APlayerController* PlayerController, const class FString& Command, const class FString& Parameters);
		class UZKVote* Get();
		void EndVote(bool bPassed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
