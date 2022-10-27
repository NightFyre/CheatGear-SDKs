#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	 */
	struct UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AchievementId;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFoundID;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TSN3[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Progress;                                                // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	 */
	struct UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AchievementId;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFoundID;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XXEO[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Title;                                                   // 0x0020(0x0018)  (Parm, OutParm)
		class FText                                                LockedDescription;                                       // 0x0058(0x0018)  (Parm, OutParm)
		class FText                                                UnlockedDescription;                                     // 0x0090(0x0018)  (Parm, OutParm)
		bool                                                       bHidden;                                                 // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	 */
	struct UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInAppPurchaseProductRequest                        ProductRequest;                                          // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UInAppPurchaseCallbackProxy*                         ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	 */
	struct UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      ProductIdentifiers;                                      // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UInAppPurchaseQueryCallbackProxy*                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	 */
	struct UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInAppPurchaseRestoreCallbackProxy*                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	 */
	struct ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                StatName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StatValue;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	 */
	struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SessionName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULeaderboardFlushCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	 */
	struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                StatName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULeaderboardQueryCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	 */
	struct ULogoutCallbackProxy_Logout_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULogoutCallbackProxy*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	 */
	struct AOnlineBeaconClient_ClientOnConnected_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	 */
	struct APartyBeaconClient_ServerUpdateReservationRequest_Params
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FPartyReservation                                   ReservationUpdate;                                       // 0x0010(0x0030)  (ConstParm, Parm, ReferenceParm)
	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	 */
	struct APartyBeaconClient_ServerReservationRequest_Params
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FPartyReservation                                   Reservation;                                             // 0x0010(0x0030)  (ConstParm, Parm, ReferenceParm)
	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	 */
	struct APartyBeaconClient_ServerCancelReservationRequest_Params
	{
	public:
		struct FUniqueNetIdRepl                                    PartyLeader;                                             // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm)
	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	 */
	struct APartyBeaconClient_ClientSendReservationUpdates_Params
	{
	public:
		int32_t                                                    NumRemainingReservations;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	 */
	struct APartyBeaconClient_ClientReservationResponse_Params
	{
	public:
		EPartyReservationResult                                    ReservationResponse;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	 */
	struct ATestBeaconClient_ServerPong_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
	 */
	struct ATestBeaconClient_ClientPing_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.OnlineBlueprintCallProxyBase.Activate
	 */
	struct UOnlineBlueprintCallProxyBase_Activate_Params
	{	};

	/**
	 * Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	 */
	struct UAchievementQueryCallbackProxy_CacheAchievements_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAchievementQueryCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	 */
	struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAchievementQueryCallbackProxy*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	 */
	struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AchievementName;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Progress;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UserTag;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAchievementWriteCallbackProxy*                      ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	 */
	struct UConnectionCallbackProxy_ConnectToService_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UConnectionCallbackProxy*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	 */
	struct UCreateSessionCallbackProxy_CreateSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PublicConnections;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bUseLAN;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7BP5[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCreateSessionCallbackProxy*                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	 */
	struct UDestroySessionCallbackProxy_DestroySession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDestroySessionCallbackProxy*                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	 */
	struct UEndMatchCallbackProxy_EndMatch_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YXO3[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MatchID;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		EMPMatchOutcome                                            LocalPlayerOutcome;                                      // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMPMatchOutcome                                            OtherPlayersOutcome;                                     // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SJGG[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEndMatchCallbackProxy*                              ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	 */
	struct UEndTurnCallbackProxy_EndTurn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              MatchID;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N6ZT[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEndTurnCallbackProxy*                               ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	 */
	struct UFindSessionsCallbackProxy_GetServerName_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x00E0)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FString                                              ReturnValue;                                             // 0x00E0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	 */
	struct UFindSessionsCallbackProxy_GetPingInMs_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x00E0)  (ConstParm, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x00E0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	 */
	struct UFindSessionsCallbackProxy_GetMaxPlayers_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x00E0)  (ConstParm, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x00E0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	 */
	struct UFindSessionsCallbackProxy_GetCurrentPlayers_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x00E0)  (ConstParm, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x00E0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	 */
	struct UFindSessionsCallbackProxy_FindSessions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxResults;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bUseLAN;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LNPJ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFindSessionsCallbackProxy*                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	 */
	struct UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RFI7[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MinPlayers;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxPlayers;                                              // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerGroup;                                             // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowExistingMatches;                                     // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0HMA[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFindTurnBasedMatchCallbackProxy*                    ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	 */
	struct UJoinSessionCallbackProxy_JoinSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBlueprintSessionResult                             SearchResult;                                            // 0x0010(0x00E0)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UJoinSessionCallbackProxy*                           ReturnValue;                                             // 0x00F0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	 */
	struct UQuitMatchCallbackProxy_QuitMatch_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              MatchID;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		EMPMatchOutcome                                            Outcome;                                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KI65[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TurnTimeoutInSeconds;                                    // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UQuitMatchCallbackProxy*                             ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	 */
	struct UShowLoginUICallbackProxy_ShowExternalLoginUI_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   InPlayerController;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UShowLoginUICallbackProxy*                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	 */
	struct UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Object;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	 */
	struct UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              MatchID;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    PlayerIndex;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_383K[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PlayerDisplayName;                                       // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	 */
	struct UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              MatchID;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    PlayerIndex;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	 */
	struct UTurnBasedBlueprintLibrary_GetIsMyTurn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              MatchID;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsMyTurn;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
