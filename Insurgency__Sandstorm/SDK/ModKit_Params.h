#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * DelegateFunction ModKit.GetModRatingsAsync.GetModRatingsMCDelegate__DelegateSignature
	 */
	struct UGetModRatingsAsync_GetModRatingsMCDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_44ZI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGetUserRatingsSchema                               Ratings;                                                 // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.GetModRatingsAsync.GetModRatingsAsync
	 */
	struct UGetModRatingsAsync_GetModRatingsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGetModRatingsAsync*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.GetModsAsync.GetModsByIdAsync
	 */
	struct UGetModsAsync_GetModsByIdAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int64_t>                                            InModIds;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGetModsAsync*                                       ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.GetModsAsync.GetModsAsync
	 */
	struct UGetModsAsync_GetModsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGetModsFilters                                     InFilters;                                               // 0x0008(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UGetModsAsync*                                       ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.GetSubscribedModsAsync.GetSubscribedModsFilteredAsync
	 */
	struct UGetSubscribedModsAsync_GetSubscribedModsFilteredAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGetModsFilters                                     InFilters;                                               // 0x0008(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UGetSubscribedModsAsync*                             ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.GetSubscribedModsAsync.GetSubscribedModsAsync
	 */
	struct UGetSubscribedModsAsync_GetSubscribedModsAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGetSubscribedModsAsync*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ModKit.ModDownloadQueue.ModDownloadStartDelegate__DelegateSignature
	 */
	struct UModDownloadQueue_ModDownloadStartDelegate__DelegateSignature_Params
	{
	public:
		struct FModObject                                          Mod;                                                     // 0x0000(0x02D8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ModKit.ModDownloadQueue.ModDownloadReadyDelegate__DelegateSignature
	 */
	struct UModDownloadQueue_ModDownloadReadyDelegate__DelegateSignature_Params
	{
	public:
		struct FModObject                                          Mod;                                                     // 0x0000(0x02D8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ModKit.ModDownloadQueue.ModDownloadQueueFinishedDelegate__DelegateSignature
	 */
	struct UModDownloadQueue_ModDownloadQueueFinishedDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction ModKit.ModDownloadQueue.ModDownloadAddToQueueDelegate__DelegateSignature
	 */
	struct UModDownloadQueue_ModDownloadAddToQueueDelegate__DelegateSignature_Params
	{
	public:
		struct FModObject                                          Mod;                                                     // 0x0000(0x02D8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadQueue.LoadModState
	 */
	struct UModDownloadQueue_LoadModState_Params
	{
	public:
		int64_t                                                    ModId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModObject                                          OutObject;                                               // 0x0008(0x02D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadQueue.IsModUpToDate
	 */
	struct UModDownloadQueue_IsModUpToDate_Params
	{
	public:
		struct FModObject                                          ModObject;                                               // 0x0000(0x02D8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadQueue.IsModOnDisk
	 */
	struct UModDownloadQueue_IsModOnDisk_Params
	{
	public:
		struct FModObject                                          ModObject;                                               // 0x0000(0x02D8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadQueue.IsModIdDownloadPending
	 */
	struct UModDownloadQueue_IsModIdDownloadPending_Params
	{
	public:
		int64_t                                                    ModId;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadQueue.IsModDownloadPending
	 */
	struct UModDownloadQueue_IsModDownloadPending_Params
	{
	public:
		struct FModObject                                          ModObject;                                               // 0x0000(0x02D8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadQueue.HasPendingTasks
	 */
	struct UModDownloadQueue_HasPendingTasks_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadQueue.HasActiveTask
	 */
	struct UModDownloadQueue_HasActiveTask_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadQueue.GetPathForModFile
	 */
	struct UModDownloadQueue_GetPathForModFile_Params
	{
	public:
		struct FModObject                                          ModObject;                                               // 0x0000(0x02D8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x02D8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadQueue.GetModRootForId
	 */
	struct UModDownloadQueue_GetModRootForId_Params
	{
	public:
		int64_t                                                    ModId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadQueue.GetModRoot
	 */
	struct UModDownloadQueue_GetModRoot_Params
	{
	public:
		struct FModObject                                          ModObject;                                               // 0x0000(0x02D8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x02D8(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadQueue.GetActiveTask
	 */
	struct UModDownloadQueue_GetActiveTask_Params
	{
	public:
		class UModDownloadTask*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadTask.IsReadyToDownload
	 */
	struct UModDownloadTask_IsReadyToDownload_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadTask.GetTotalBytes
	 */
	struct UModDownloadTask_GetTotalBytes_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadTask.GetTaskState
	 */
	struct UModDownloadTask_GetTaskState_Params
	{
	public:
		EDownloadTaskState                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadTask.GetDownloadProgress
	 */
	struct UModDownloadTask_GetDownloadProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModDownloadTask.GetBytesReceived
	 */
	struct UModDownloadTask_GetBytesReceived_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ModKit.ModIOClient.SimpleModioMessageDelegate__DelegateSignature
	 */
	struct UModIOClient_SimpleModioMessageDelegate__DelegateSignature_Params
	{
	public:
		struct FModIOMessage                                       Message;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModIOClient.SetUserAcceptedTerms
	 */
	struct UModIOClient_SetUserAcceptedTerms_Params
	{	};

	/**
	 * DelegateFunction ModKit.ModIOClient.ModioLoginSuccessDelegate__DelegateSignature
	 */
	struct UModIOClient_ModioLoginSuccessDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction ModKit.ModIOClient.ModioLoginFailedDelegate__DelegateSignature
	 */
	struct UModIOClient_ModioLoginFailedDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction ModKit.ModIOClient.ModioAcceptedTermsDelegate__DelegateSignature
	 */
	struct UModIOClient_ModioAcceptedTermsDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function ModKit.ModIOClient.Logout
	 */
	struct UModIOClient_Logout_Params
	{	};

	/**
	 * Function ModKit.ModIOClient.LoginEmailRequest
	 */
	struct UModIOClient_LoginEmailRequest_Params
	{
	public:
		class FString                                              Email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModIOClient.LoginEmailExchange
	 */
	struct UModIOClient_LoginEmailExchange_Params
	{
	public:
		class FString                                              SecurityCode;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModIOClient.IsAuthenticated
	 */
	struct UModIOClient_IsAuthenticated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModIOClient.HasUserAcceptedTerms
	 */
	struct UModIOClient_HasUserAcceptedTerms_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModIOClient.GetUrlForGameEndpoint
	 */
	struct UModIOClient_GetUrlForGameEndpoint_Params
	{
	public:
		class FString                                              Endpoint;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModIOClient.GetUrlForEndpoint
	 */
	struct UModIOClient_GetUrlForEndpoint_Params
	{
	public:
		class FString                                              Endpoint;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModIOClient.GetGameId
	 */
	struct UModIOClient_GetGameId_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.QueueSubscriptions
	 */
	struct UModKitSubsystem_QueueSubscriptions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.PassUserEmail
	 */
	struct UModKitSubsystem_PassUserEmail_Params
	{
	public:
		class FString                                              InEmailAddress;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.PassSecurityCode
	 */
	struct UModKitSubsystem_PassSecurityCode_Params
	{
	public:
		class FString                                              InSecurityCode;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ModKit.ModKitSubsystem.OnModSubscriptionsUpdatedDelegate__DelegateSignature
	 */
	struct UModKitSubsystem_OnModSubscriptionsUpdatedDelegate__DelegateSignature_Params
	{
	public:
		TArray<struct FModObject>                                  Mods;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ModKit.ModKitSubsystem.OnModEmailRequestedDelegate__DelegateSignature
	 */
	struct UModKitSubsystem_OnModEmailRequestedDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction ModKit.ModKitSubsystem.OnModDeactivatedDelegate__DelegateSignature
	 */
	struct UModKitSubsystem_OnModDeactivatedDelegate__DelegateSignature_Params
	{
	public:
		struct FModState                                           ModState;                                                // 0x0000(0x02F8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ModKit.ModKitSubsystem.OnModActivatedDelegate__DelegateSignature
	 */
	struct UModKitSubsystem_OnModActivatedDelegate__DelegateSignature_Params
	{
	public:
		struct FModState                                           ModState;                                                // 0x0000(0x02F8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bIsUpToDate;                                             // 0x02F8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.IsSubscribed
	 */
	struct UModKitSubsystem_IsSubscribed_Params
	{
	public:
		int64_t                                                    InModId;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.IsLoggedIn
	 */
	struct UModKitSubsystem_IsLoggedIn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.HasPendingDownloadTasks
	 */
	struct UModKitSubsystem_HasPendingDownloadTasks_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.HasActiveDownloadTask
	 */
	struct UModKitSubsystem_HasActiveDownloadTask_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.GetSettings
	 */
	struct UModKitSubsystem_GetSettings_Params
	{
	public:
		class UModKitSettings*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.GetRegistrationUrl
	 */
	struct UModKitSubsystem_GetRegistrationUrl_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.GetModIOClient
	 */
	struct UModKitSubsystem_GetModIOClient_Params
	{
	public:
		class UModIOClient*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.GetLoggedInUserProfileUrl
	 */
	struct UModKitSubsystem_GetLoggedInUserProfileUrl_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.GetLoggedInUsername
	 */
	struct UModKitSubsystem_GetLoggedInUsername_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.GetDownloadQueue
	 */
	struct UModKitSubsystem_GetDownloadQueue_Params
	{
	public:
		class UModDownloadQueue*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.ModKitSubsystem.GetCurrentAuthState
	 */
	struct UModKitSubsystem_GetCurrentAuthState_Params
	{
	public:
		EModPlatformAuthState                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.RateModAsync.RateModAsync
	 */
	struct URateModAsync_RateModAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    InModId;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InRating;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HRDA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URateModAsync*                                       ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ModKit.RateModAsync.OnModRatedDelegate__DelegateSignature
	 */
	struct URateModAsync_OnModRatedDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.SubscribeModAsync.SubscribeModAsync
	 */
	struct USubscribeModAsync_SubscribeModAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    InModId;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USubscribeModAsync*                                  ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModKit.UnsubscribeModAsync.UnsubscribeModAsync
	 */
	struct UUnsubscribeModAsync_UnsubscribeModAsync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    InModId;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUnsubscribeModAsync*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ModKit.UnsubscribeModAsync.OnUnsubscribedModDelegate__DelegateSignature
	 */
	struct UUnsubscribeModAsync_OnUnsubscribedModDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
