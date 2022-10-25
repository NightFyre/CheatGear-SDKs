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
	 * Function Hydra5.Hydra5AbstractDataService.SetOwnDataArray
	 */
	struct UHydra5AbstractDataService_SetOwnDataArray_Params
	{
	public:
		TArray<struct FAbstractDataContainerRecord>                Containers;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5AbstractDataService.SetOwnData
	 */
	struct UHydra5AbstractDataService_SetOwnData_Params
	{
	public:
		class FString                                              ContainerName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAbstractDataRecord                                 AbstractDataRecord;                                      // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5AbstractDataService.SetData
	 */
	struct UHydra5AbstractDataService_SetData_Params
	{
	public:
		TArray<struct FAbstractDataKeyRecord>                      KeyRecords;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5AbstractDataService.ServerSetData
	 */
	struct UHydra5AbstractDataService_ServerSetData_Params
	{
	public:
		TArray<struct FAbstractDataKeyRecord>                      KeyRecords;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5AbstractDataService.ServerRequestData
	 */
	struct UHydra5AbstractDataService_ServerRequestData_Params
	{
	public:
		TArray<struct FAbstractDataGetRequestRecord>               RequestRecords;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5AbstractDataService.RequestOwnDataArray
	 */
	struct UHydra5AbstractDataService_RequestOwnDataArray_Params
	{
	public:
		TArray<class FString>                                      ContainerNames;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5AbstractDataService.RequestOwnData
	 */
	struct UHydra5AbstractDataService_RequestOwnData_Params
	{
	public:
		class FString                                              ContainerName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5AbstractDataService.RequestData
	 */
	struct UHydra5AbstractDataService_RequestData_Params
	{
	public:
		TArray<struct FAbstractDataGetRequestRecord>               RequestRecords;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5AbstractDataService.Get
	 */
	struct UHydra5AbstractDataService_Get_Params
	{
	public:
		class UHydra5AbstractDataService*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5DiagnosticsService.GetCrashReporterUserToken
	 */
	struct UHydra5DiagnosticsService_GetCrashReporterUserToken_Params
	{
	public:
		class FString                                              OutReporterToken;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5DiagnosticsService.Get
	 */
	struct UHydra5DiagnosticsService_Get_Params
	{
	public:
		class UHydra5DiagnosticsService*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5DiagnosticsService.CrashDumpUploadUserToken
	 */
	struct UHydra5DiagnosticsService_CrashDumpUploadUserToken_Params
	{
	public:
		class FString                                              Token;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDiagnosticsCrashDumpData                           Data;                                                    // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5DiagnosticsService.CrashDumpUpload
	 */
	struct UHydra5DiagnosticsService_CrashDumpUpload_Params
	{
	public:
		struct FDiagnosticsCrashDumpData                           Data;                                                    // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5EconomyService.ZenSendPlaytimeEvents
	 */
	struct UHydra5EconomyService_ZenSendPlaytimeEvents_Params
	{
	public:
		TArray<struct FEconomyZenEventPlaytime>                    Events;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5EconomyService.ZenApplyOffer
	 */
	struct UHydra5EconomyService_ZenApplyOffer_Params
	{
	public:
		TArray<struct FZenDiscountOfferItem>                       Items;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5EconomyService.ProcessPlatformEntitlements
	 */
	struct UHydra5EconomyService_ProcessPlatformEntitlements_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5EconomyService.GetUserTransactions
	 */
	struct UHydra5EconomyService_GetUserTransactions_Params
	{
	public:
		int64_t                                                    FromTransactionId;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    Count;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5EconomyService.GetLastTransactionId
	 */
	struct UHydra5EconomyService_GetLastTransactionId_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5EconomyService.GetCachedStates
	 */
	struct UHydra5EconomyService_GetCachedStates_Params
	{
	public:
		struct FEconomyUserStates                                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5EconomyService.GetCachedState
	 */
	struct UHydra5EconomyService_GetCachedState_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEconomyUserState                                   OutState;                                                // 0x0010(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5EconomyService.Get
	 */
	struct UHydra5EconomyService_Get_Params
	{
	public:
		class UHydra5EconomyService*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5EconomyService.Disconnect
	 */
	struct UHydra5EconomyService_Disconnect_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5EconomyService.Connect
	 */
	struct UHydra5EconomyService_Connect_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5EconomyService.CleanupConnectCallbacks
	 */
	struct UHydra5EconomyService_CleanupConnectCallbacks_Params
	{	};

	/**
	 * Function Hydra5.Hydra5EconomyService.ApplyOffer
	 */
	struct UHydra5EconomyService_ApplyOffer_Params
	{
	public:
		TArray<struct FOfferItem>                                  Items;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.Update
	 */
	struct UHydra5Interface_Update_Params
	{	};

	/**
	 * Function Hydra5.Hydra5Interface.Terminate
	 */
	struct UHydra5Interface_Terminate_Params
	{	};

	/**
	 * Function Hydra5.Hydra5Interface.TelemetryTypedEvent
	 */
	struct UHydra5Interface_TelemetryTypedEvent_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Version;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VRXE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Params;                                                  // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.SimpleLog
	 */
	struct UHydra5Interface_SimpleLog_Params
	{
	public:
		class FString                                              Category;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraLogLevel                                             Level;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_226R[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Log;                                                     // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.IsInitialized
	 */
	struct UHydra5Interface_IsInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.IsHydraBackendTimeSynced
	 */
	struct UHydra5Interface_IsHydraBackendTimeSynced_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.InitUsingConfig
	 */
	struct UHydra5Interface_InitUsingConfig_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.Init
	 */
	struct UHydra5Interface_Init_Params
	{
	public:
		class FString                                              TitleName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              TitleId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              TitleSecret;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Version;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetXboxXstoreCustomDevString
	 */
	struct UHydra5Interface_GetXboxXstoreCustomDevString_Params
	{
	public:
		class FString                                              XboxToken;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              XboxSignature;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetUserIdByEpicOnlineServicesUserId
	 */
	struct UHydra5Interface_GetUserIdByEpicOnlineServicesUserId_Params
	{
	public:
		TArray<class FString>                                      EosIds;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetSdkVersion
	 */
	struct UHydra5Interface_GetSdkVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetKernelSessionIdVisualAlias
	 */
	struct UHydra5Interface_GetKernelSessionIdVisualAlias_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetKernelSessionIdString
	 */
	struct UHydra5Interface_GetKernelSessionIdString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetHydraUserId
	 */
	struct UHydra5Interface_GetHydraUserId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetHydraUserExternalIdentityToken
	 */
	struct UHydra5Interface_GetHydraUserExternalIdentityToken_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetHydraDebugInfo
	 */
	struct UHydra5Interface_GetHydraDebugInfo_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetHydraBackendTimeOffset
	 */
	struct UHydra5Interface_GetHydraBackendTimeOffset_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetHydraBackendTime
	 */
	struct UHydra5Interface_GetHydraBackendTime_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetGameConfiguration
	 */
	struct UHydra5Interface_GetGameConfiguration_Params
	{
	public:
		TArray<struct FLayerProperties>                            Layers;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetErrorMessage
	 */
	struct UHydra5Interface_GetErrorMessage_Params
	{
	public:
		EHydraErrorCode                                            ErrorCode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q476[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetEpicOnlineServicesUserIdByUserId
	 */
	struct UHydra5Interface_GetEpicOnlineServicesUserIdByUserId_Params
	{
	public:
		TArray<class FString>                                      Hydra5UserIds;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetConnectionStateStr
	 */
	struct UHydra5Interface_GetConnectionStateStr_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GetConnectionState
	 */
	struct UHydra5Interface_GetConnectionState_Params
	{
	public:
		EHydraConnectionState                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.Get
	 */
	struct UHydra5Interface_Get_Params
	{
	public:
		class UHydra5Interface*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GameConfigurationInitializeLayers
	 */
	struct UHydra5Interface_GameConfigurationInitializeLayers_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.GameConfigurationGetLayersInfo
	 */
	struct UHydra5Interface_GameConfigurationGetLayersInfo_Params
	{
	public:
		struct FLayerInfoArray                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.Disconnect
	 */
	struct UHydra5Interface_Disconnect_Params
	{	};

	/**
	 * Function Hydra5.Hydra5Interface.ConnectXboxXstore
	 */
	struct UHydra5Interface_ConnectXboxXstore_Params
	{
	public:
		class FString                                              XboxToken;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              XboxSignature;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              XstoreLicenseToken;                                      // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.ConnectXbox
	 */
	struct UHydra5Interface_ConnectXbox_Params
	{
	public:
		class FString                                              XboxToken;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              XboxSignature;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.ConnectSteam
	 */
	struct UHydra5Interface_ConnectSteam_Params
	{
	public:
		class FString                                              SteamAuthSessionTicket;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.ConnectStadia
	 */
	struct UHydra5Interface_ConnectStadia_Params
	{
	public:
		class FString                                              PlayerJwt;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.ConnectPsnToken
	 */
	struct UHydra5Interface_ConnectPsnToken_Params
	{
	public:
		class FString                                              IdToken;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.ConnectPsnCode
	 */
	struct UHydra5Interface_ConnectPsnCode_Params
	{
	public:
		class FString                                              AuthCode;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    IssuerId;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.ConnectOculus
	 */
	struct UHydra5Interface_ConnectOculus_Params
	{
	public:
		class FString                                              Nonce;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    UserId;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.ConnectNintendo
	 */
	struct UHydra5Interface_ConnectNintendo_Params
	{
	public:
		class FString                                              IdentityToken;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.ConnectEpicOnlineServices
	 */
	struct UHydra5Interface_ConnectEpicOnlineServices_Params
	{
	public:
		class FString                                              AuthAccessToken;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5Interface.ConnectDeveloper
	 */
	struct UHydra5Interface_ConnectDeveloper_Params
	{
	public:
		class FString                                              UserLogin;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5LeaderboardsService.ServerLeaderboardsUpdate
	 */
	struct UHydra5LeaderboardsService_ServerLeaderboardsUpdate_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLeaderboardEntry>                           Entries;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5LeaderboardsService.LeaderboardsUpdate
	 */
	struct UHydra5LeaderboardsService_LeaderboardsUpdate_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLeaderboardEntry>                           Entries;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5LeaderboardsService.LeaderboardsGet
	 */
	struct UHydra5LeaderboardsService_LeaderboardsGet_Params
	{
	public:
		TArray<struct FLeaderboardGetRequest>                      Leaderboards;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5LeaderboardsService.LeaderboardsFilteredGet
	 */
	struct UHydra5LeaderboardsService_LeaderboardsFilteredGet_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      FilterItems;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5LeaderboardsService.Get
	 */
	struct UHydra5LeaderboardsService_Get_Params
	{
	public:
		class UHydra5LeaderboardsService*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PresenceRetreiveCachedUserPresenceData
	 */
	struct UHydra5PresenceService_PresenceRetreiveCachedUserPresenceData_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPresenceUserPresenceData                           OutData;                                                 // 0x0010(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PresenceGetUsersPresenceData
	 */
	struct UHydra5PresenceService_PresenceGetUsersPresenceData_Params
	{
	public:
		TArray<class FString>                                      UserIds;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartySetSettings
	 */
	struct UHydra5PresenceService_PartySetSettings_Params
	{
	public:
		struct FPartySettingsHydra                                 Settings;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartySetMemberData
	 */
	struct UHydra5PresenceService_PartySetMemberData_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartySetLeader
	 */
	struct UHydra5PresenceService_PartySetLeader_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartySetData
	 */
	struct UHydra5PresenceService_PartySetData_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyRemoveMember
	 */
	struct UHydra5PresenceService_PartyRemoveMember_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyLeave
	 */
	struct UHydra5PresenceService_PartyLeave_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyJoinCodeUse
	 */
	struct UHydra5PresenceService_PartyJoinCodeUse_Params
	{
	public:
		class FString                                              JoinCode;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyJoinCodeReset
	 */
	struct UHydra5PresenceService_PartyJoinCodeReset_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyJoinCodeGenerate
	 */
	struct UHydra5PresenceService_PartyJoinCodeGenerate_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyJoin
	 */
	struct UHydra5PresenceService_PartyJoin_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyInviteSend
	 */
	struct UHydra5PresenceService_PartyInviteSend_Params
	{
	public:
		class FString                                              UserIdTo;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyInviteRevoke
	 */
	struct UHydra5PresenceService_PartyInviteRevoke_Params
	{
	public:
		class FString                                              UserIdTo;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyInviteReject
	 */
	struct UHydra5PresenceService_PartyInviteReject_Params
	{
	public:
		class FString                                              UserIdFrom;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyInviteAccept
	 */
	struct UHydra5PresenceService_PartyInviteAccept_Params
	{
	public:
		class FString                                              UserIdFrom;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyGetStatus
	 */
	struct UHydra5PresenceService_PartyGetStatus_Params
	{
	public:
		struct FPartyStatus                                        ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyGetReceivedInvites
	 */
	struct UHydra5PresenceService_PartyGetReceivedInvites_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyGetInvitedUsers
	 */
	struct UHydra5PresenceService_PartyGetInvitedUsers_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyDisband
	 */
	struct UHydra5PresenceService_PartyDisband_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.PartyCreate
	 */
	struct UHydra5PresenceService_PartyCreate_Params
	{
	public:
		struct FPartyCreateData                                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeStop
	 */
	struct UHydra5PresenceService_MatchmakeStop_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeStart
	 */
	struct UHydra5PresenceService_MatchmakeStart_Params
	{
	public:
		struct FMatchmakeQueueOptions                              Options;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetVariants
	 */
	struct UHydra5PresenceService_MatchmakeSessionSetVariants_Params
	{
	public:
		TArray<struct FMatchmakeSessionVariant>                    Variants;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetSettings
	 */
	struct UHydra5PresenceService_MatchmakeSessionSetSettings_Params
	{
	public:
		struct FMatchmakeSessionSettings                           Settings;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetOwner
	 */
	struct UHydra5PresenceService_MatchmakeSessionSetOwner_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetMemberData
	 */
	struct UHydra5PresenceService_MatchmakeSessionSetMemberData_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetData
	 */
	struct UHydra5PresenceService_MatchmakeSessionSetData_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeSessionRemoveMembers
	 */
	struct UHydra5PresenceService_MatchmakeSessionRemoveMembers_Params
	{
	public:
		TArray<class FString>                                      UserIds;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeSessionLeave
	 */
	struct UHydra5PresenceService_MatchmakeSessionLeave_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeSessionJoin
	 */
	struct UHydra5PresenceService_MatchmakeSessionJoin_Params
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeSessionGetStatus
	 */
	struct UHydra5PresenceService_MatchmakeSessionGetStatus_Params
	{
	public:
		struct FMatchmakeSessionStatus                             ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.MatchmakeSessionCreate
	 */
	struct UHydra5PresenceService_MatchmakeSessionCreate_Params
	{
	public:
		struct FMatchmakeSessionCreateOptions                      Options;                                                 // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.Get
	 */
	struct UHydra5PresenceService_Get_Params
	{
	public:
		class UHydra5PresenceService*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5PresenceService.Disconnect
	 */
	struct UHydra5PresenceService_Disconnect_Params
	{	};

	/**
	 * Function Hydra5.Hydra5PresenceService.Connect
	 */
	struct UHydra5PresenceService_Connect_Params
	{
	public:
		class FString                                              StaticData;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5RatingsService.ServerRatingsUpdate
	 */
	struct UHydra5RatingsService_ServerRatingsUpdate_Params
	{
	public:
		class FString                                              RatingId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FRatingsUpdateEntry>                         Entries;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5RatingsService.ServerRatingsGet
	 */
	struct UHydra5RatingsService_ServerRatingsGet_Params
	{
	public:
		class FString                                              RatingId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      EntryIds;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5RatingsService.RatingsUpdate
	 */
	struct UHydra5RatingsService_RatingsUpdate_Params
	{
	public:
		class FString                                              RatingId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SessionId;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FRatingsUpdateEntry>                         Entries;                                                 // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5RatingsService.RatingsGet
	 */
	struct UHydra5RatingsService_RatingsGet_Params
	{
	public:
		class FString                                              RatingId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      EntryIds;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5RatingsService.Get
	 */
	struct UHydra5RatingsService_Get_Params
	{
	public:
		class UHydra5RatingsService*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5ServerService.Get
	 */
	struct UHydra5ServerService_Get_Params
	{
	public:
		class UHydra5ServerService*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5ServerService.FinishSession
	 */
	struct UHydra5ServerService_FinishSession_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5ServerService.ClientReject
	 */
	struct UHydra5ServerService_ClientReject_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5ServerService.ClientAccept
	 */
	struct UHydra5ServerService_ClientAccept_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5ServerService.ActivateVdsm
	 */
	struct UHydra5ServerService_ActivateVdsm_Params
	{
	public:
		struct FServerSimpleInitOptions                            Options;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5ServerService.ActivateTicket
	 */
	struct UHydra5ServerService_ActivateTicket_Params
	{
	public:
		struct FServerSimpleInitOptions                            Options;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FServerTicket                                       ticket;                                                  // 0x0020(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5SessionControlService.TryToCreateSession
	 */
	struct UHydra5SessionControlService_TryToCreateSession_Params
	{
	public:
		class FString                                              DataCenterId;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ServerData;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStartPoling;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5SessionControlService.StopPollingServer
	 */
	struct UHydra5SessionControlService_StopPollingServer_Params
	{
	public:
		class FString                                              GameSessionId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5SessionControlService.StartPollingServer
	 */
	struct UHydra5SessionControlService_StartPollingServer_Params
	{
	public:
		class FString                                              GameSessionId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHydraErrorCode                                            ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5SessionControlService.GetState
	 */
	struct UHydra5SessionControlService_GetState_Params
	{
	public:
		EHydraServiceState                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5SessionControlService.GetCachedPolingServerResult
	 */
	struct UHydra5SessionControlService_GetCachedPolingServerResult_Params
	{
	public:
		class FString                                              GameSessionId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSessionControlAcceptClientResult                   ReturnValue;                                             // 0x0010(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5SessionControlService.GetAvailableDataCenters
	 */
	struct UHydra5SessionControlService_GetAvailableDataCenters_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5SessionControlService.GetAllDataCenters
	 */
	struct UHydra5SessionControlService_GetAllDataCenters_Params
	{
	public:
		EHydraErrorCode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5SessionControlService.Get
	 */
	struct UHydra5SessionControlService_Get_Params
	{
	public:
		class UHydra5SessionControlService*                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Hydra5.Hydra5SessionControlService.Disconnect
	 */
	struct UHydra5SessionControlService_Disconnect_Params
	{	};

	/**
	 * Function Hydra5.Hydra5SessionControlService.Connect
	 */
	struct UHydra5SessionControlService_Connect_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
