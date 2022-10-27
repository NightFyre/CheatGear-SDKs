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
	 * Class Hydra5.Hydra5AbstractDataService
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHydra5AbstractDataService : public UObject
	{
	public:
		EHydraErrorCode SetOwnDataArray(TArray<struct FAbstractDataContainerRecord> Containers, const class FScriptDelegate& Delegate);
		EHydraErrorCode SetOwnData(const class FString& ContainerName, const struct FAbstractDataRecord& AbstractDataRecord, const class FScriptDelegate& Delegate);
		EHydraErrorCode SetData(TArray<struct FAbstractDataKeyRecord> KeyRecords, const class FScriptDelegate& Delegate);
		EHydraErrorCode ServerSetData(TArray<struct FAbstractDataKeyRecord> KeyRecords, const class FScriptDelegate& Delegate);
		EHydraErrorCode ServerRequestData(TArray<struct FAbstractDataGetRequestRecord> RequestRecords, const class FScriptDelegate& Delegate);
		EHydraErrorCode RequestOwnDataArray(TArray<class FString> ContainerNames, const class FScriptDelegate& Delegate);
		EHydraErrorCode RequestOwnData(const class FString& ContainerName, const class FScriptDelegate& Delegate);
		EHydraErrorCode RequestData(TArray<struct FAbstractDataGetRequestRecord> RequestRecords, const class FScriptDelegate& Delegate);
		class UHydra5AbstractDataService* STATIC_Get();
		static UClass* StaticClass();
	};

	/**
	 * Class Hydra5.Hydra5DiagnosticsService
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UHydra5DiagnosticsService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnCrashDumpUpload;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCrashDumpUploadUserToken;                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XD15[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)

	public:
		EHydraErrorCode GetCrashReporterUserToken(class FString* OutReporterToken);
		class UHydra5DiagnosticsService* STATIC_Get();
		EHydraErrorCode CrashDumpUploadUserToken(const class FString& Token, const struct FDiagnosticsCrashDumpData& Data);
		EHydraErrorCode CrashDumpUpload(const struct FDiagnosticsCrashDumpData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class Hydra5.Hydra5EconomyService
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UHydra5EconomyService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnHydraEconomyServiceConnectionStateChange;              // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateData;                                            // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0L3[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)

	public:
		EHydraErrorCode ZenSendPlaytimeEvents(TArray<struct FEconomyZenEventPlaytime> Events, const class FScriptDelegate& Delegate);
		EHydraErrorCode ZenApplyOffer(TArray<struct FZenDiscountOfferItem> Items, const class FScriptDelegate& Delegate);
		EHydraErrorCode ProcessPlatformEntitlements(const class FScriptDelegate& Delegate);
		EHydraErrorCode GetUserTransactions(int64_t FromTransactionId, int64_t Count, const class FScriptDelegate& Delegate);
		int64_t GetLastTransactionId();
		struct FEconomyUserStates GetCachedStates();
		bool GetCachedState(const class FString& ID, struct FEconomyUserState* OutState);
		class UHydra5EconomyService* STATIC_Get();
		EHydraErrorCode Disconnect();
		EHydraErrorCode Connect();
		void CleanupConnectCallbacks();
		EHydraErrorCode ApplyOffer(TArray<struct FOfferItem> Items, const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

	/**
	 * Class Hydra5.Hydra5Interface
	 * Size -> 0x0138 (FullSize[0x0160] - InheritedSize[0x0028])
	 */
	class UHydra5Interface : public UObject
	{
	public:
		unsigned char                                              UnknownData_2F1S[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHydraLog;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHydraConnectionStateChanged;                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHydraXboxXstoreCustomDevString;                        // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHydraUserIdByEpicOnlineServicesUserId;                 // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHydraEpicOnlineServicesUserIdByUserId;                 // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHydraGameConfigurationInitializeLayers;                // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHydraGameConfiguration;                                // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HLQ[0xB8];                                  // 0x00A8(0x00B8) MISSED OFFSET (PADDING)

	public:
		void Update();
		void Terminate();
		void TelemetryTypedEvent(const class FString& Type, int32_t Version, const class FString& Params);
		void SimpleLog(const class FString& Category, EHydraLogLevel Level, const class FString& Log);
		bool IsInitialized();
		bool IsHydraBackendTimeSynced();
		bool InitUsingConfig();
		bool Init(const class FString& TitleName, const class FString& TitleId, const class FString& TitleSecret, const class FString& Version);
		EHydraErrorCode GetXboxXstoreCustomDevString(const class FString& XboxToken, const class FString& XboxSignature);
		EHydraErrorCode GetUserIdByEpicOnlineServicesUserId(TArray<class FString> EosIds);
		class FString GetSdkVersion();
		class FString GetKernelSessionIdVisualAlias();
		class FString GetKernelSessionIdString();
		class FString GetHydraUserId();
		class FString GetHydraUserExternalIdentityToken();
		class FString GetHydraDebugInfo();
		struct FDateTime GetHydraBackendTimeOffset();
		struct FDateTime GetHydraBackendTime();
		EHydraErrorCode GetGameConfiguration(TArray<struct FLayerProperties> Layers);
		class FString GetErrorMessage(EHydraErrorCode ErrorCode);
		EHydraErrorCode GetEpicOnlineServicesUserIdByUserId(TArray<class FString> Hydra5UserIds);
		class FString GetConnectionStateStr();
		EHydraConnectionState GetConnectionState();
		class UHydra5Interface* STATIC_Get();
		EHydraErrorCode GameConfigurationInitializeLayers();
		struct FLayerInfoArray GameConfigurationGetLayersInfo();
		void Disconnect();
		EHydraErrorCode ConnectXboxXstore(const class FString& XboxToken, const class FString& XboxSignature, const class FString& XstoreLicenseToken);
		EHydraErrorCode ConnectXbox(const class FString& XboxToken, const class FString& XboxSignature);
		EHydraErrorCode ConnectSteam(const class FString& SteamAuthSessionTicket);
		EHydraErrorCode ConnectStadia(const class FString& PlayerJwt);
		EHydraErrorCode ConnectPsnToken(const class FString& IdToken);
		EHydraErrorCode ConnectPsnCode(const class FString& AuthCode, int32_t IssuerId);
		EHydraErrorCode ConnectOculus(const class FString& Nonce, int64_t UserId);
		EHydraErrorCode ConnectNintendo(const class FString& IdentityToken);
		EHydraErrorCode ConnectEpicOnlineServices(const class FString& AuthAccessToken);
		EHydraErrorCode ConnectDeveloper(const class FString& UserLogin);
		static UClass* StaticClass();
	};

	/**
	 * Class Hydra5.HydraSettings
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UHydraSettings : public UObject
	{
	public:
		float                                                      SessionUpdateInterval;                                   // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_77KB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TitleName;                                               // 0x0030(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleId;                                                 // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleSecret;                                             // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0060(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubmissiveOSSName;                                       // 0x0070(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubmissiveOSSEnabledAutoLoginInEditor;                  // 0x0080(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHLX[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserLogin;                                               // 0x0088(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePresenceService;                                  // 0x0098(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSessionControlService;                            // 0x0099(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableLeaderboardsService;                              // 0x009A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRatingsService;                                   // 0x009B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableServerService;                                    // 0x009C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableEconomyService;                                   // 0x009D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableAbstractDataService;                              // 0x009E(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDiagnosticsService;                               // 0x009F(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Hydra5.Hydra5LeaderboardsService
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UHydra5LeaderboardsService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnLeaderboardsGet;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeaderboardsGetFiltered;                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeaderboardsUpdate;                                    // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnServerLeaderboardsUpdate;                              // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VMT[0x60];                                  // 0x0068(0x0060) MISSED OFFSET (PADDING)

	public:
		EHydraErrorCode ServerLeaderboardsUpdate(const class FString& ID, TArray<struct FLeaderboardEntry> Entries);
		EHydraErrorCode LeaderboardsUpdate(const class FString& ID, TArray<struct FLeaderboardEntry> Entries);
		EHydraErrorCode LeaderboardsGet(TArray<struct FLeaderboardGetRequest> Leaderboards);
		EHydraErrorCode LeaderboardsFilteredGet(const class FString& ID, TArray<class FString> FilterItems);
		class UHydra5LeaderboardsService* STATIC_Get();
		static UClass* StaticClass();
	};

	/**
	 * Class Hydra5.Hydra5PresenceService
	 * Size -> 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
	 */
	class UHydra5PresenceService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnHydraPresenceBackendError;                             // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHydraPresenceServiceConnectionStateChange;             // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyGetInvite;                                        // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyGetRevoke;                                        // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyInviteAcceptConfirmed;                            // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyInviteRejectConfirmed;                            // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyInviteAnswer;                                     // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyUpdated;                                          // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchmakeSessionUpdated;                               // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPresenceUserPresenceDataUpdated;                       // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPresenceGetUsersPresenceData;                          // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UJ4[0x108];                                 // 0x00D8(0x0108) MISSED OFFSET (PADDING)

	public:
		bool PresenceRetreiveCachedUserPresenceData(const class FString& UserId, struct FPresenceUserPresenceData* OutData);
		EHydraErrorCode PresenceGetUsersPresenceData(TArray<class FString> UserIds);
		EHydraErrorCode PartySetSettings(const struct FPartySettingsHydra& Settings);
		EHydraErrorCode PartySetMemberData(const class FString& Data);
		EHydraErrorCode PartySetLeader(const class FString& UserId);
		EHydraErrorCode PartySetData(const class FString& Data);
		EHydraErrorCode PartyRemoveMember(const class FString& UserId);
		EHydraErrorCode PartyLeave();
		EHydraErrorCode PartyJoinCodeUse(const class FString& JoinCode);
		EHydraErrorCode PartyJoinCodeReset();
		EHydraErrorCode PartyJoinCodeGenerate();
		EHydraErrorCode PartyJoin(const class FString& UserId);
		EHydraErrorCode PartyInviteSend(const class FString& UserIdTo);
		EHydraErrorCode PartyInviteRevoke(const class FString& UserIdTo);
		EHydraErrorCode PartyInviteReject(const class FString& UserIdFrom);
		EHydraErrorCode PartyInviteAccept(const class FString& UserIdFrom);
		struct FPartyStatus PartyGetStatus();
		TArray<class FString> PartyGetReceivedInvites();
		TArray<class FString> PartyGetInvitedUsers();
		EHydraErrorCode PartyDisband();
		EHydraErrorCode PartyCreate(const struct FPartyCreateData& Data);
		EHydraErrorCode MatchmakeStop();
		EHydraErrorCode MatchmakeStart(const struct FMatchmakeQueueOptions& Options);
		EHydraErrorCode MatchmakeSessionSetVariants(TArray<struct FMatchmakeSessionVariant> Variants);
		EHydraErrorCode MatchmakeSessionSetSettings(const struct FMatchmakeSessionSettings& Settings);
		EHydraErrorCode MatchmakeSessionSetOwner(const class FString& UserId);
		EHydraErrorCode MatchmakeSessionSetMemberData(const class FString& Data);
		EHydraErrorCode MatchmakeSessionSetData(const class FString& Data);
		EHydraErrorCode MatchmakeSessionRemoveMembers(TArray<class FString> UserIds);
		EHydraErrorCode MatchmakeSessionLeave();
		EHydraErrorCode MatchmakeSessionJoin(const class FString& SessionId);
		struct FMatchmakeSessionStatus MatchmakeSessionGetStatus();
		EHydraErrorCode MatchmakeSessionCreate(const struct FMatchmakeSessionCreateOptions& Options);
		class UHydra5PresenceService* STATIC_Get();
		void Disconnect();
		void Connect(const class FString& StaticData);
		static UClass* StaticClass();
	};

	/**
	 * Class Hydra5.Hydra5RatingsService
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UHydra5RatingsService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnRatingsGet;                                            // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnServerRatingsGet;                                      // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRatingsUpdate;                                         // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnServerRatingsUpdate;                                   // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4CV[0x60];                                  // 0x0068(0x0060) MISSED OFFSET (PADDING)

	public:
		EHydraErrorCode ServerRatingsUpdate(const class FString& RatingId, TArray<struct FRatingsUpdateEntry> Entries);
		EHydraErrorCode ServerRatingsGet(const class FString& RatingId, TArray<class FString> EntryIds);
		EHydraErrorCode RatingsUpdate(const class FString& RatingId, const class FString& SessionId, TArray<struct FRatingsUpdateEntry> Entries);
		EHydraErrorCode RatingsGet(const class FString& RatingId, TArray<class FString> EntryIds);
		class UHydra5RatingsService* STATIC_Get();
		static UClass* StaticClass();
	};

	/**
	 * Class Hydra5.Hydra5ServerService
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UHydra5ServerService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnActivateVdsm;                                          // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActivateTicket;                                        // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClientConnectingVdsm;                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClientConnectingTicket;                                // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinishSession;                                         // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2IJ[0x78];                                  // 0x0078(0x0078) MISSED OFFSET (PADDING)

	public:
		class UHydra5ServerService* STATIC_Get();
		EHydraErrorCode FinishSession();
		void ClientReject(const class FString& Key);
		void ClientAccept(const class FString& Key);
		EHydraErrorCode ActivateVdsm(const struct FServerSimpleInitOptions& Options);
		EHydraErrorCode ActivateTicket(const struct FServerSimpleInitOptions& Options, const struct FServerTicket& ticket);
		static UClass* StaticClass();
	};

	/**
	 * Class Hydra5.Hydra5SessionControlService
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UHydra5SessionControlService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnHydraSessionControlServiceConnectionStateChange;       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTryToCreateSession;                                    // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTryToCreateSessionServerInfo;                          // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartPollingServerInfo;                                // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAvailableDataCenters;                                  // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllDataCenters;                                        // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0NT[0x90];                                  // 0x0088(0x0090) MISSED OFFSET (PADDING)

	public:
		EHydraErrorCode TryToCreateSession(const class FString& DataCenterId, const class FString& ServerData, bool bStartPoling);
		EHydraErrorCode StopPollingServer(const class FString& GameSessionId);
		EHydraErrorCode StartPollingServer(const class FString& GameSessionId);
		EHydraServiceState GetState();
		struct FSessionControlAcceptClientResult GetCachedPolingServerResult(const class FString& GameSessionId);
		EHydraErrorCode GetAvailableDataCenters();
		EHydraErrorCode GetAllDataCenters();
		class UHydra5SessionControlService* STATIC_Get();
		void Disconnect();
		void Connect();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
