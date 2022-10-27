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
	 * Class ModKit.GetModRatingsAsync
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UGetModRatingsAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnModRatingsReceived;                                    // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KRV[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		void GetModRatingsMCDelegate__DelegateSignature(bool bSuccess, const struct FGetUserRatingsSchema& Ratings);
		class UGetModRatingsAsync* STATIC_GetModRatingsAsync(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class ModKit.GetModsAsync
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UGetModsAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnModsRetrieved;                                         // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYNY[0x60];                                  // 0x0040(0x0060) MISSED OFFSET (PADDING)

	public:
		class UGetModsAsync* STATIC_GetModsByIdAsync(class UObject* WorldContextObject, TArray<int64_t> InModIds);
		class UGetModsAsync* STATIC_GetModsAsync(class UObject* WorldContextObject, const struct FGetModsFilters& InFilters);
		static UClass* StaticClass();
	};

	/**
	 * Class ModKit.GetSubscribedModsAsync
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UGetSubscribedModsAsync : public FModKit_UGetModsAsync
	{
	public:
		class UGetSubscribedModsAsync* STATIC_GetSubscribedModsFilteredAsync(class UObject* WorldContextObject, const struct FGetModsFilters& InFilters);
		class UGetSubscribedModsAsync* STATIC_GetSubscribedModsAsync(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class ModKit.ModDownloadQueue
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UModDownloadQueue : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnModDownloadAddToQueueDelegate;                         // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModDownloadStartDelegate;                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModDownloadReadyDelegate;                              // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModDownloadQueueFinishedDelegate;                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UModIOClient*                                        ModIOClient;                                             // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UModDownloadTask*                                    ActiveTask;                                              // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UModDownloadTask*>                            QueuedTasks;                                             // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UModDownloadTask*>                            PendingQueryTasks;                                       // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3FI3[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (PADDING)

	public:
		void ModDownloadStartDelegate__DelegateSignature(const struct FModObject& Mod);
		void ModDownloadReadyDelegate__DelegateSignature(const struct FModObject& Mod);
		void ModDownloadQueueFinishedDelegate__DelegateSignature();
		void ModDownloadAddToQueueDelegate__DelegateSignature(const struct FModObject& Mod);
		bool STATIC_LoadModState(int64_t ModId, struct FModObject* OutObject);
		bool STATIC_IsModUpToDate(const struct FModObject& ModObject);
		bool STATIC_IsModOnDisk(const struct FModObject& ModObject);
		bool IsModIdDownloadPending(int64_t ModId);
		bool IsModDownloadPending(const struct FModObject& ModObject);
		bool HasPendingTasks();
		bool HasActiveTask();
		class FString STATIC_GetPathForModFile(const struct FModObject& ModObject);
		class FString STATIC_GetModRootForId(int64_t ModId);
		class FString STATIC_GetModRoot(const struct FModObject& ModObject);
		class UModDownloadTask* GetActiveTask();
		static UClass* StaticClass();
	};

	/**
	 * Class ModKit.ModDownloadTask
	 * Size -> 0x0388 (FullSize[0x03B0] - InheritedSize[0x0028])
	 */
	class UModDownloadTask : public UObject
	{
	public:
		struct FModObject                                          Mod;                                                     // 0x0028(0x02D8) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bPendingQuery;                                           // 0x0300(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHighPriority;                                           // 0x0301(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FX92[0x6];                                   // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    ModId;                                                   // 0x0308(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTaskChangeStateDelegate;                               // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EOH[0x50];                                  // 0x0320(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDownloadTaskState                                         DownloadTaskState;                                       // 0x0370(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IBVM[0x3F];                                  // 0x0371(0x003F) MISSED OFFSET (PADDING)

	public:
		bool IsReadyToDownload();
		int64_t GetTotalBytes();
		EDownloadTaskState GetTaskState();
		float GetDownloadProgress();
		int64_t GetBytesReceived();
		static UClass* StaticClass();
	};

	/**
	 * Class ModKit.ModIOClient
	 * Size -> 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
	 */
	class UModIOClient : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnAcceptedTermsDelegate;                                 // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EmailRequestResponseDelegate;                            // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LoginSuccessDelegate;                                    // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LoginFailedDelegate;                                     // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bHasUserAcceptedTerms;                                   // 0x0068(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U54N[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccessToken;                                             // 0x0070(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int64_t                                                    AccessExpiryTime;                                        // 0x0080(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCachedUserDetails;                                      // 0x0088(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECJ6[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUserObject                                         CachedUser;                                              // 0x0090(0x00A0) BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9746[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		void SimpleModioMessageDelegate__DelegateSignature(const struct FModIOMessage& Message);
		void SetUserAcceptedTerms();
		void ModioLoginSuccessDelegate__DelegateSignature();
		void ModioLoginFailedDelegate__DelegateSignature();
		void ModioAcceptedTermsDelegate__DelegateSignature();
		void Logout();
		bool LoginEmailRequest(const class FString& Email);
		bool LoginEmailExchange(const class FString& SecurityCode);
		bool IsAuthenticated();
		bool HasUserAcceptedTerms();
		class FString GetUrlForGameEndpoint(const class FString& Endpoint);
		class FString GetUrlForEndpoint(const class FString& Endpoint);
		int32_t GetGameId();
		static UClass* StaticClass();
	};

	/**
	 * Class ModKit.ModKitSettings
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UModKitSettings : public UDeveloperSettings
	{
	public:
		TArray<struct FModTagCategory>                             ModTags;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ApiKey;                                                  // 0x0048(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTestEnvironment;                                     // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASDX[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GameId;                                                  // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      CompatibleGameVersions;                                  // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModKit.ModKitSubsystem
	 * Size -> 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
	 */
	class UModKitSubsystem : public UEngineSubsystem
	{
	public:
		class UModIOClient*                                        ModIOClient;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UModDownloadQueue*                                   DownloadQueue;                                           // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZEOJ[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             AuthStateChangedDelegate;                                // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<int64_t, struct FModState>                            ActiveMods;                                              // 0x0068(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FModObject>                                  SubscribedMods;                                          // 0x00B8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModSubscriptionsUpdated;                               // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModActivatedDelegate;                                  // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModDeactivatedDelegate;                                // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnModEmailRequestedDelegate;                             // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06GC[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)

	public:
		bool QueueSubscriptions();
		bool PassUserEmail(const class FString& InEmailAddress);
		bool PassSecurityCode(const class FString& InSecurityCode);
		void OnModSubscriptionsUpdatedDelegate__DelegateSignature(TArray<struct FModObject> Mods);
		void OnModEmailRequestedDelegate__DelegateSignature();
		void OnModDeactivatedDelegate__DelegateSignature(const struct FModState& ModState);
		void OnModActivatedDelegate__DelegateSignature(const struct FModState& ModState, bool bIsUpToDate);
		bool IsSubscribed(int64_t InModId);
		bool IsLoggedIn();
		bool HasPendingDownloadTasks();
		bool HasActiveDownloadTask();
		class UModKitSettings* GetSettings();
		class FString GetRegistrationUrl();
		class UModIOClient* GetModIOClient();
		class FString GetLoggedInUserProfileUrl();
		class FText GetLoggedInUsername();
		class UModDownloadQueue* GetDownloadQueue();
		EModPlatformAuthState GetCurrentAuthState();
		static UClass* StaticClass();
	};

	/**
	 * Class ModKit.RateModAsync
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class URateModAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnModRated;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O2RM[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		class URateModAsync* STATIC_RateModAsync(class UObject* WorldContextObject, int64_t InModId, int32_t InRating);
		void OnModRatedDelegate__DelegateSignature(bool bSuccess);
		static UClass* StaticClass();
	};

	/**
	 * Class ModKit.SubscribeModAsync
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class USubscribeModAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSubscribed;                                            // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2O0W[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		class USubscribeModAsync* STATIC_SubscribeModAsync(class UObject* WorldContextObject, int64_t InModId);
		static UClass* StaticClass();
	};

	/**
	 * Class ModKit.UnsubscribeModAsync
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UUnsubscribeModAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnUnsubscribed;                                          // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1OZ[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		class UUnsubscribeModAsync* STATIC_UnsubscribeModAsync(class UObject* WorldContextObject, int64_t InModId);
		void OnUnsubscribedModDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
