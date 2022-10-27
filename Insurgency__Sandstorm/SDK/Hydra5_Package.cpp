/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00E48440
	 * 		Name   -> Function Hydra5.Hydra5AbstractDataService.SetOwnDataArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAbstractDataContainerRecord>        Containers                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5AbstractDataService::SetOwnDataArray(TArray<struct FAbstractDataContainerRecord> Containers, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5AbstractDataService.SetOwnDataArray");
		
		UHydra5AbstractDataService_SetOwnDataArray_Params params {};
		params.Containers = Containers;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E482B0
	 * 		Name   -> Function Hydra5.Hydra5AbstractDataService.SetOwnData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ContainerName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAbstractDataRecord                         AbstractDataRecord                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5AbstractDataService::SetOwnData(const class FString& ContainerName, const struct FAbstractDataRecord& AbstractDataRecord, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5AbstractDataService.SetOwnData");
		
		UHydra5AbstractDataService_SetOwnData_Params params {};
		params.ContainerName = ContainerName;
		params.AbstractDataRecord = AbstractDataRecord;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E48150
	 * 		Name   -> Function Hydra5.Hydra5AbstractDataService.SetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAbstractDataKeyRecord>              KeyRecords                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5AbstractDataService::SetData(TArray<struct FAbstractDataKeyRecord> KeyRecords, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5AbstractDataService.SetData");
		
		UHydra5AbstractDataService_SetData_Params params {};
		params.KeyRecords = KeyRecords;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47FF0
	 * 		Name   -> Function Hydra5.Hydra5AbstractDataService.ServerSetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAbstractDataKeyRecord>              KeyRecords                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5AbstractDataService::ServerSetData(TArray<struct FAbstractDataKeyRecord> KeyRecords, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5AbstractDataService.ServerSetData");
		
		UHydra5AbstractDataService_ServerSetData_Params params {};
		params.KeyRecords = KeyRecords;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47E60
	 * 		Name   -> Function Hydra5.Hydra5AbstractDataService.ServerRequestData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAbstractDataGetRequestRecord>       RequestRecords                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5AbstractDataService::ServerRequestData(TArray<struct FAbstractDataGetRequestRecord> RequestRecords, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5AbstractDataService.ServerRequestData");
		
		UHydra5AbstractDataService_ServerRequestData_Params params {};
		params.RequestRecords = RequestRecords;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47D10
	 * 		Name   -> Function Hydra5.Hydra5AbstractDataService.RequestOwnDataArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              ContainerNames                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5AbstractDataService::RequestOwnDataArray(TArray<class FString> ContainerNames, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5AbstractDataService.RequestOwnDataArray");
		
		UHydra5AbstractDataService_RequestOwnDataArray_Params params {};
		params.ContainerNames = ContainerNames;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47C00
	 * 		Name   -> Function Hydra5.Hydra5AbstractDataService.RequestOwnData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ContainerName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5AbstractDataService::RequestOwnData(const class FString& ContainerName, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5AbstractDataService.RequestOwnData");
		
		UHydra5AbstractDataService_RequestOwnData_Params params {};
		params.ContainerName = ContainerName;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47A70
	 * 		Name   -> Function Hydra5.Hydra5AbstractDataService.RequestData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAbstractDataGetRequestRecord>       RequestRecords                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5AbstractDataService::RequestData(TArray<struct FAbstractDataGetRequestRecord> RequestRecords, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5AbstractDataService.RequestData");
		
		UHydra5AbstractDataService_RequestData_Params params {};
		params.RequestRecords = RequestRecords;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E469D0
	 * 		Name   -> Function Hydra5.Hydra5AbstractDataService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UHydra5AbstractDataService* UHydra5AbstractDataService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5AbstractDataService.Get");
		
		UHydra5AbstractDataService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHydra5AbstractDataService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHydra5AbstractDataService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hydra5.Hydra5AbstractDataService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46D60
	 * 		Name   -> Function Hydra5.Hydra5DiagnosticsService.GetCrashReporterUserToken
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      OutReporterToken                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5DiagnosticsService::GetCrashReporterUserToken(class FString* OutReporterToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5DiagnosticsService.GetCrashReporterUserToken");
		
		UHydra5DiagnosticsService_GetCrashReporterUserToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutReporterToken != nullptr)
			*OutReporterToken = params.OutReporterToken;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46A00
	 * 		Name   -> Function Hydra5.Hydra5DiagnosticsService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UHydra5DiagnosticsService* UHydra5DiagnosticsService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5DiagnosticsService.Get");
		
		UHydra5DiagnosticsService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E466C0
	 * 		Name   -> Function Hydra5.Hydra5DiagnosticsService.CrashDumpUploadUserToken
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Token                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDiagnosticsCrashDumpData                   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5DiagnosticsService::CrashDumpUploadUserToken(const class FString& Token, const struct FDiagnosticsCrashDumpData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5DiagnosticsService.CrashDumpUploadUserToken");
		
		UHydra5DiagnosticsService_CrashDumpUploadUserToken_Params params {};
		params.Token = Token;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E465B0
	 * 		Name   -> Function Hydra5.Hydra5DiagnosticsService.CrashDumpUpload
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDiagnosticsCrashDumpData                   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5DiagnosticsService::CrashDumpUpload(const struct FDiagnosticsCrashDumpData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5DiagnosticsService.CrashDumpUpload");
		
		UHydra5DiagnosticsService_CrashDumpUpload_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHydra5DiagnosticsService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHydra5DiagnosticsService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hydra5.Hydra5DiagnosticsService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E489F0
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.ZenSendPlaytimeEvents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FEconomyZenEventPlaytime>            Events                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5EconomyService::ZenSendPlaytimeEvents(TArray<struct FEconomyZenEventPlaytime> Events, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.ZenSendPlaytimeEvents");
		
		UHydra5EconomyService_ZenSendPlaytimeEvents_Params params {};
		params.Events = Events;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E48850
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.ZenApplyOffer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FZenDiscountOfferItem>               Items                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5EconomyService::ZenApplyOffer(TArray<struct FZenDiscountOfferItem> Items, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.ZenApplyOffer");
		
		UHydra5EconomyService_ZenApplyOffer_Params params {};
		params.Items = Items;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E479B0
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.ProcessPlatformEntitlements
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5EconomyService::ProcessPlatformEntitlements(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.ProcessPlatformEntitlements");
		
		UHydra5EconomyService_ProcessPlatformEntitlements_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47550
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.GetUserTransactions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            FromTransactionId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5EconomyService::GetUserTransactions(int64_t FromTransactionId, int64_t Count, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.GetUserTransactions");
		
		UHydra5EconomyService_GetUserTransactions_Params params {};
		params.FromTransactionId = FromTransactionId;
		params.Count = Count;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E473C0
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.GetLastTransactionId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int64_t UHydra5EconomyService::GetLastTransactionId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.GetLastTransactionId");
		
		UHydra5EconomyService_GetLastTransactionId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46BF0
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.GetCachedStates
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FEconomyUserStates UHydra5EconomyService::GetCachedStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.GetCachedStates");
		
		UHydra5EconomyService_GetCachedStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46A90
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.GetCachedState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEconomyUserState                           OutState                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UHydra5EconomyService::GetCachedState(const class FString& ID, struct FEconomyUserState* OutState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.GetCachedState");
		
		UHydra5EconomyService_GetCachedState_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutState != nullptr)
			*OutState = params.OutState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46A30
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UHydra5EconomyService* UHydra5EconomyService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.Get");
		
		UHydra5EconomyService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46830
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.Disconnect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5EconomyService::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.Disconnect");
		
		UHydra5EconomyService_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E45D30
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.Connect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5EconomyService::Connect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.Connect");
		
		UHydra5EconomyService_Connect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E45D10
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.CleanupConnectCallbacks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHydra5EconomyService::CleanupConnectCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.CleanupConnectCallbacks");
		
		UHydra5EconomyService_CleanupConnectCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E45BA0
	 * 		Name   -> Function Hydra5.Hydra5EconomyService.ApplyOffer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FOfferItem>                          Items                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5EconomyService::ApplyOffer(TArray<struct FOfferItem> Items, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5EconomyService.ApplyOffer");
		
		UHydra5EconomyService_ApplyOffer_Params params {};
		params.Items = Items;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHydra5EconomyService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHydra5EconomyService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hydra5.Hydra5EconomyService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E48830
	 * 		Name   -> Function Hydra5.Hydra5Interface.Update
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHydra5Interface::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.Update");
		
		UHydra5Interface_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E48810
	 * 		Name   -> Function Hydra5.Hydra5Interface.Terminate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHydra5Interface::Terminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.Terminate");
		
		UHydra5Interface_Terminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E486E0
	 * 		Name   -> Function Hydra5.Hydra5Interface.TelemetryTypedEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Type                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Version                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHydra5Interface::TelemetryTypedEvent(const class FString& Type, int32_t Version, const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.TelemetryTypedEvent");
		
		UHydra5Interface_TelemetryTypedEvent_Params params {};
		params.Type = Type;
		params.Version = Version;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E485B0
	 * 		Name   -> Function Hydra5.Hydra5Interface.SimpleLog
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Category                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHydraLogLevel                                     Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Log                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHydra5Interface::SimpleLog(const class FString& Category, EHydraLogLevel Level, const class FString& Log)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.SimpleLog");
		
		UHydra5Interface_SimpleLog_Params params {};
		params.Category = Category;
		params.Level = Level;
		params.Log = Log;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47980
	 * 		Name   -> Function Hydra5.Hydra5Interface.IsInitialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHydra5Interface::IsInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.IsInitialized");
		
		UHydra5Interface_IsInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47950
	 * 		Name   -> Function Hydra5.Hydra5Interface.IsHydraBackendTimeSynced
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHydra5Interface::IsHydraBackendTimeSynced()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.IsHydraBackendTimeSynced");
		
		UHydra5Interface_IsHydraBackendTimeSynced_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47920
	 * 		Name   -> Function Hydra5.Hydra5Interface.InitUsingConfig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHydra5Interface::InitUsingConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.InitUsingConfig");
		
		UHydra5Interface_InitUsingConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47780
	 * 		Name   -> Function Hydra5.Hydra5Interface.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      TitleName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TitleId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TitleSecret                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Version                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHydra5Interface::Init(const class FString& TitleName, const class FString& TitleId, const class FString& TitleSecret, const class FString& Version)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.Init");
		
		UHydra5Interface_Init_Params params {};
		params.TitleName = TitleName;
		params.TitleId = TitleId;
		params.TitleSecret = TitleSecret;
		params.Version = Version;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47680
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetXboxXstoreCustomDevString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      XboxToken                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      XboxSignature                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::GetXboxXstoreCustomDevString(const class FString& XboxToken, const class FString& XboxSignature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetXboxXstoreCustomDevString");
		
		UHydra5Interface_GetXboxXstoreCustomDevString_Params params {};
		params.XboxToken = XboxToken;
		params.XboxSignature = XboxSignature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47470
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetUserIdByEpicOnlineServicesUserId
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              EosIds                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::GetUserIdByEpicOnlineServicesUserId(TArray<class FString> EosIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetUserIdByEpicOnlineServicesUserId");
		
		UHydra5Interface_GetUserIdByEpicOnlineServicesUserId_Params params {};
		params.EosIds = EosIds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E473F0
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetSdkVersion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UHydra5Interface::GetSdkVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetSdkVersion");
		
		UHydra5Interface_GetSdkVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47340
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetKernelSessionIdVisualAlias
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UHydra5Interface::GetKernelSessionIdVisualAlias()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetKernelSessionIdVisualAlias");
		
		UHydra5Interface_GetKernelSessionIdVisualAlias_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E472C0
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetKernelSessionIdString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UHydra5Interface::GetKernelSessionIdString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetKernelSessionIdString");
		
		UHydra5Interface_GetKernelSessionIdString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47240
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetHydraUserId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UHydra5Interface::GetHydraUserId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetHydraUserId");
		
		UHydra5Interface_GetHydraUserId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E471C0
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetHydraUserExternalIdentityToken
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UHydra5Interface::GetHydraUserExternalIdentityToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetHydraUserExternalIdentityToken");
		
		UHydra5Interface_GetHydraUserExternalIdentityToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47140
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetHydraDebugInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UHydra5Interface::GetHydraDebugInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetHydraDebugInfo");
		
		UHydra5Interface_GetHydraDebugInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E47100
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetHydraBackendTimeOffset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	struct FDateTime UHydra5Interface::GetHydraBackendTimeOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetHydraBackendTimeOffset");
		
		UHydra5Interface_GetHydraBackendTimeOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E470C0
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetHydraBackendTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	struct FDateTime UHydra5Interface::GetHydraBackendTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetHydraBackendTime");
		
		UHydra5Interface_GetHydraBackendTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46FD0
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetGameConfiguration
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FLayerProperties>                    Layers                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::GetGameConfiguration(TArray<struct FLayerProperties> Layers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetGameConfiguration");
		
		UHydra5Interface_GetGameConfiguration_Params params {};
		params.Layers = Layers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46F00
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetErrorMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHydraErrorCode                                    ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UHydra5Interface::GetErrorMessage(EHydraErrorCode ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetErrorMessage");
		
		UHydra5Interface_GetErrorMessage_Params params {};
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46E20
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetEpicOnlineServicesUserIdByUserId
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Hydra5UserIds                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::GetEpicOnlineServicesUserIdByUserId(TArray<class FString> Hydra5UserIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetEpicOnlineServicesUserIdByUserId");
		
		UHydra5Interface_GetEpicOnlineServicesUserIdByUserId_Params params {};
		params.Hydra5UserIds = Hydra5UserIds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46CE0
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetConnectionStateStr
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UHydra5Interface::GetConnectionStateStr()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetConnectionStateStr");
		
		UHydra5Interface_GetConnectionStateStr_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46CB0
	 * 		Name   -> Function Hydra5.Hydra5Interface.GetConnectionState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraConnectionState UHydra5Interface::GetConnectionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GetConnectionState");
		
		UHydra5Interface_GetConnectionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46A60
	 * 		Name   -> Function Hydra5.Hydra5Interface.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UHydra5Interface* UHydra5Interface::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.Get");
		
		UHydra5Interface_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E469A0
	 * 		Name   -> Function Hydra5.Hydra5Interface.GameConfigurationInitializeLayers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5Interface::GameConfigurationInitializeLayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GameConfigurationInitializeLayers");
		
		UHydra5Interface_GameConfigurationInitializeLayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46880
	 * 		Name   -> Function Hydra5.Hydra5Interface.GameConfigurationGetLayersInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FLayerInfoArray UHydra5Interface::GameConfigurationGetLayersInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.GameConfigurationGetLayersInfo");
		
		UHydra5Interface_GameConfigurationGetLayersInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46860
	 * 		Name   -> Function Hydra5.Hydra5Interface.Disconnect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHydra5Interface::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.Disconnect");
		
		UHydra5Interface_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46460
	 * 		Name   -> Function Hydra5.Hydra5Interface.ConnectXboxXstore
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      XboxToken                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      XboxSignature                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      XstoreLicenseToken                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::ConnectXboxXstore(const class FString& XboxToken, const class FString& XboxSignature, const class FString& XstoreLicenseToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.ConnectXboxXstore");
		
		UHydra5Interface_ConnectXboxXstore_Params params {};
		params.XboxToken = XboxToken;
		params.XboxSignature = XboxSignature;
		params.XstoreLicenseToken = XstoreLicenseToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46360
	 * 		Name   -> Function Hydra5.Hydra5Interface.ConnectXbox
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      XboxToken                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      XboxSignature                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::ConnectXbox(const class FString& XboxToken, const class FString& XboxSignature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.ConnectXbox");
		
		UHydra5Interface_ConnectXbox_Params params {};
		params.XboxToken = XboxToken;
		params.XboxSignature = XboxSignature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E462B0
	 * 		Name   -> Function Hydra5.Hydra5Interface.ConnectSteam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SteamAuthSessionTicket                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::ConnectSteam(const class FString& SteamAuthSessionTicket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.ConnectSteam");
		
		UHydra5Interface_ConnectSteam_Params params {};
		params.SteamAuthSessionTicket = SteamAuthSessionTicket;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46200
	 * 		Name   -> Function Hydra5.Hydra5Interface.ConnectStadia
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PlayerJwt                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::ConnectStadia(const class FString& PlayerJwt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.ConnectStadia");
		
		UHydra5Interface_ConnectStadia_Params params {};
		params.PlayerJwt = PlayerJwt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46150
	 * 		Name   -> Function Hydra5.Hydra5Interface.ConnectPsnToken
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IdToken                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::ConnectPsnToken(const class FString& IdToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.ConnectPsnToken");
		
		UHydra5Interface_ConnectPsnToken_Params params {};
		params.IdToken = IdToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E46060
	 * 		Name   -> Function Hydra5.Hydra5Interface.ConnectPsnCode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      AuthCode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IssuerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::ConnectPsnCode(const class FString& AuthCode, int32_t IssuerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.ConnectPsnCode");
		
		UHydra5Interface_ConnectPsnCode_Params params {};
		params.AuthCode = AuthCode;
		params.IssuerId = IssuerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E45F70
	 * 		Name   -> Function Hydra5.Hydra5Interface.ConnectOculus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            UserId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::ConnectOculus(const class FString& Nonce, int64_t UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.ConnectOculus");
		
		UHydra5Interface_ConnectOculus_Params params {};
		params.Nonce = Nonce;
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E45EC0
	 * 		Name   -> Function Hydra5.Hydra5Interface.ConnectNintendo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IdentityToken                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::ConnectNintendo(const class FString& IdentityToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.ConnectNintendo");
		
		UHydra5Interface_ConnectNintendo_Params params {};
		params.IdentityToken = IdentityToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E45E10
	 * 		Name   -> Function Hydra5.Hydra5Interface.ConnectEpicOnlineServices
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      AuthAccessToken                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::ConnectEpicOnlineServices(const class FString& AuthAccessToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.ConnectEpicOnlineServices");
		
		UHydra5Interface_ConnectEpicOnlineServices_Params params {};
		params.AuthAccessToken = AuthAccessToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E45D60
	 * 		Name   -> Function Hydra5.Hydra5Interface.ConnectDeveloper
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserLogin                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5Interface::ConnectDeveloper(const class FString& UserLogin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5Interface.ConnectDeveloper");
		
		UHydra5Interface_ConnectDeveloper_Params params {};
		params.UserLogin = UserLogin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHydra5Interface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHydra5Interface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hydra5.Hydra5Interface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHydraSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHydraSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hydra5.HydraSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E50350
	 * 		Name   -> Function Hydra5.Hydra5LeaderboardsService.ServerLeaderboardsUpdate
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLeaderboardEntry>                   Entries                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5LeaderboardsService::ServerLeaderboardsUpdate(const class FString& ID, TArray<struct FLeaderboardEntry> Entries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5LeaderboardsService.ServerLeaderboardsUpdate");
		
		UHydra5LeaderboardsService_ServerLeaderboardsUpdate_Params params {};
		params.ID = ID;
		params.Entries = Entries;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4EBB0
	 * 		Name   -> Function Hydra5.Hydra5LeaderboardsService.LeaderboardsUpdate
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLeaderboardEntry>                   Entries                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5LeaderboardsService::LeaderboardsUpdate(const class FString& ID, TArray<struct FLeaderboardEntry> Entries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5LeaderboardsService.LeaderboardsUpdate");
		
		UHydra5LeaderboardsService_LeaderboardsUpdate_Params params {};
		params.ID = ID;
		params.Entries = Entries;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4EAD0
	 * 		Name   -> Function Hydra5.Hydra5LeaderboardsService.LeaderboardsGet
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FLeaderboardGetRequest>              Leaderboards                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5LeaderboardsService::LeaderboardsGet(TArray<struct FLeaderboardGetRequest> Leaderboards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5LeaderboardsService.LeaderboardsGet");
		
		UHydra5LeaderboardsService_LeaderboardsGet_Params params {};
		params.Leaderboards = Leaderboards;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4E9A0
	 * 		Name   -> Function Hydra5.Hydra5LeaderboardsService.LeaderboardsFilteredGet
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              FilterItems                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5LeaderboardsService::LeaderboardsFilteredGet(const class FString& ID, TArray<class FString> FilterItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5LeaderboardsService.LeaderboardsFilteredGet");
		
		UHydra5LeaderboardsService_LeaderboardsFilteredGet_Params params {};
		params.ID = ID;
		params.FilterItems = FilterItems;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4E940
	 * 		Name   -> Function Hydra5.Hydra5LeaderboardsService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UHydra5LeaderboardsService* UHydra5LeaderboardsService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5LeaderboardsService.Get");
		
		UHydra5LeaderboardsService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHydra5LeaderboardsService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHydra5LeaderboardsService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hydra5.Hydra5LeaderboardsService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E50140
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PresenceRetreiveCachedUserPresenceData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPresenceUserPresenceData                   OutData                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UHydra5PresenceService::PresenceRetreiveCachedUserPresenceData(const class FString& UserId, struct FPresenceUserPresenceData* OutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PresenceRetreiveCachedUserPresenceData");
		
		UHydra5PresenceService_PresenceRetreiveCachedUserPresenceData_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutData != nullptr)
			*OutData = params.OutData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E50060
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PresenceGetUsersPresenceData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              UserIds                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PresenceGetUsersPresenceData(TArray<class FString> UserIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PresenceGetUsersPresenceData");
		
		UHydra5PresenceService_PresenceGetUsersPresenceData_Params params {};
		params.UserIds = UserIds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4FFB0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartySetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPartySettingsHydra                         Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartySetSettings(const struct FPartySettingsHydra& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartySetSettings");
		
		UHydra5PresenceService_PartySetSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4FF00
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartySetMemberData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartySetMemberData(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartySetMemberData");
		
		UHydra5PresenceService_PartySetMemberData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4FE50
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartySetLeader
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartySetLeader(const class FString& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartySetLeader");
		
		UHydra5PresenceService_PartySetLeader_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4FDA0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartySetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartySetData(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartySetData");
		
		UHydra5PresenceService_PartySetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4FCF0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyRemoveMember
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyRemoveMember(const class FString& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyRemoveMember");
		
		UHydra5PresenceService_PartyRemoveMember_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4FCC0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyLeave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyLeave");
		
		UHydra5PresenceService_PartyLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4FC10
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyJoinCodeUse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      JoinCode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyJoinCodeUse(const class FString& JoinCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyJoinCodeUse");
		
		UHydra5PresenceService_PartyJoinCodeUse_Params params {};
		params.JoinCode = JoinCode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4FBE0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyJoinCodeReset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyJoinCodeReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyJoinCodeReset");
		
		UHydra5PresenceService_PartyJoinCodeReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4FBB0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyJoinCodeGenerate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyJoinCodeGenerate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyJoinCodeGenerate");
		
		UHydra5PresenceService_PartyJoinCodeGenerate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4FB00
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyJoin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyJoin(const class FString& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyJoin");
		
		UHydra5PresenceService_PartyJoin_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4FA50
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyInviteSend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserIdTo                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyInviteSend(const class FString& UserIdTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyInviteSend");
		
		UHydra5PresenceService_PartyInviteSend_Params params {};
		params.UserIdTo = UserIdTo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F9A0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyInviteRevoke
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserIdTo                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyInviteRevoke(const class FString& UserIdTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyInviteRevoke");
		
		UHydra5PresenceService_PartyInviteRevoke_Params params {};
		params.UserIdTo = UserIdTo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F8F0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyInviteReject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserIdFrom                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyInviteReject(const class FString& UserIdFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyInviteReject");
		
		UHydra5PresenceService_PartyInviteReject_Params params {};
		params.UserIdFrom = UserIdFrom;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F840
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyInviteAccept
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserIdFrom                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyInviteAccept(const class FString& UserIdFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyInviteAccept");
		
		UHydra5PresenceService_PartyInviteAccept_Params params {};
		params.UserIdFrom = UserIdFrom;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F7D0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyGetStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FPartyStatus UHydra5PresenceService::PartyGetStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyGetStatus");
		
		UHydra5PresenceService_PartyGetStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F750
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyGetReceivedInvites
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class FString> UHydra5PresenceService::PartyGetReceivedInvites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyGetReceivedInvites");
		
		UHydra5PresenceService_PartyGetReceivedInvites_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F6D0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyGetInvitedUsers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class FString> UHydra5PresenceService::PartyGetInvitedUsers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyGetInvitedUsers");
		
		UHydra5PresenceService_PartyGetInvitedUsers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F6A0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyDisband
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyDisband()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyDisband");
		
		UHydra5PresenceService_PartyDisband_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F5D0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.PartyCreate
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPartyCreateData                            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::PartyCreate(const struct FPartyCreateData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.PartyCreate");
		
		UHydra5PresenceService_PartyCreate_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F5A0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeStop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5PresenceService::MatchmakeStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeStop");
		
		UHydra5PresenceService_MatchmakeStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F430
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeStart
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMatchmakeQueueOptions                      Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::MatchmakeStart(const struct FMatchmakeQueueOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeStart");
		
		UHydra5PresenceService_MatchmakeStart_Params params {};
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F340
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetVariants
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FMatchmakeSessionVariant>            Variants                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::MatchmakeSessionSetVariants(TArray<struct FMatchmakeSessionVariant> Variants)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetVariants");
		
		UHydra5PresenceService_MatchmakeSessionSetVariants_Params params {};
		params.Variants = Variants;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F290
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMatchmakeSessionSettings                   Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::MatchmakeSessionSetSettings(const struct FMatchmakeSessionSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetSettings");
		
		UHydra5PresenceService_MatchmakeSessionSetSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F1E0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::MatchmakeSessionSetOwner(const class FString& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetOwner");
		
		UHydra5PresenceService_MatchmakeSessionSetOwner_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F130
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetMemberData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::MatchmakeSessionSetMemberData(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetMemberData");
		
		UHydra5PresenceService_MatchmakeSessionSetMemberData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4F080
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::MatchmakeSessionSetData(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeSessionSetData");
		
		UHydra5PresenceService_MatchmakeSessionSetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4EFA0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeSessionRemoveMembers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              UserIds                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::MatchmakeSessionRemoveMembers(TArray<class FString> UserIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeSessionRemoveMembers");
		
		UHydra5PresenceService_MatchmakeSessionRemoveMembers_Params params {};
		params.UserIds = UserIds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4EF70
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeSessionLeave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5PresenceService::MatchmakeSessionLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeSessionLeave");
		
		UHydra5PresenceService_MatchmakeSessionLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4EEC0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeSessionJoin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SessionId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::MatchmakeSessionJoin(const class FString& SessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeSessionJoin");
		
		UHydra5PresenceService_MatchmakeSessionJoin_Params params {};
		params.SessionId = SessionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4EE40
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeSessionGetStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FMatchmakeSessionStatus UHydra5PresenceService::MatchmakeSessionGetStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeSessionGetStatus");
		
		UHydra5PresenceService_MatchmakeSessionGetStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4ECF0
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.MatchmakeSessionCreate
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMatchmakeSessionCreateOptions              Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5PresenceService::MatchmakeSessionCreate(const struct FMatchmakeSessionCreateOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.MatchmakeSessionCreate");
		
		UHydra5PresenceService_MatchmakeSessionCreate_Params params {};
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4E970
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UHydra5PresenceService* UHydra5PresenceService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.Get");
		
		UHydra5PresenceService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4E920
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.Disconnect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHydra5PresenceService::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.Disconnect");
		
		UHydra5PresenceService_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E4E880
	 * 		Name   -> Function Hydra5.Hydra5PresenceService.Connect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StaticData                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHydra5PresenceService::Connect(const class FString& StaticData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5PresenceService.Connect");
		
		UHydra5PresenceService_Connect_Params params {};
		params.StaticData = StaticData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHydra5PresenceService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHydra5PresenceService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hydra5.Hydra5PresenceService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53AA0
	 * 		Name   -> Function Hydra5.Hydra5RatingsService.ServerRatingsUpdate
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RatingId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRatingsUpdateEntry>                 Entries                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5RatingsService::ServerRatingsUpdate(const class FString& RatingId, TArray<struct FRatingsUpdateEntry> Entries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5RatingsService.ServerRatingsUpdate");
		
		UHydra5RatingsService_ServerRatingsUpdate_Params params {};
		params.RatingId = RatingId;
		params.Entries = Entries;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53970
	 * 		Name   -> Function Hydra5.Hydra5RatingsService.ServerRatingsGet
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RatingId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              EntryIds                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5RatingsService::ServerRatingsGet(const class FString& RatingId, TArray<class FString> EntryIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5RatingsService.ServerRatingsGet");
		
		UHydra5RatingsService_ServerRatingsGet_Params params {};
		params.RatingId = RatingId;
		params.EntryIds = EntryIds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E537E0
	 * 		Name   -> Function Hydra5.Hydra5RatingsService.RatingsUpdate
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RatingId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRatingsUpdateEntry>                 Entries                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5RatingsService::RatingsUpdate(const class FString& RatingId, const class FString& SessionId, TArray<struct FRatingsUpdateEntry> Entries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5RatingsService.RatingsUpdate");
		
		UHydra5RatingsService_RatingsUpdate_Params params {};
		params.RatingId = RatingId;
		params.SessionId = SessionId;
		params.Entries = Entries;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E536B0
	 * 		Name   -> Function Hydra5.Hydra5RatingsService.RatingsGet
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RatingId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              EntryIds                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5RatingsService::RatingsGet(const class FString& RatingId, TArray<class FString> EntryIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5RatingsService.RatingsGet");
		
		UHydra5RatingsService_RatingsGet_Params params {};
		params.RatingId = RatingId;
		params.EntryIds = EntryIds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53460
	 * 		Name   -> Function Hydra5.Hydra5RatingsService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UHydra5RatingsService* UHydra5RatingsService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5RatingsService.Get");
		
		UHydra5RatingsService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHydra5RatingsService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHydra5RatingsService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hydra5.Hydra5RatingsService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53490
	 * 		Name   -> Function Hydra5.Hydra5ServerService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UHydra5ServerService* UHydra5ServerService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5ServerService.Get");
		
		UHydra5ServerService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53430
	 * 		Name   -> Function Hydra5.Hydra5ServerService.FinishSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5ServerService::FinishSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5ServerService.FinishSession");
		
		UHydra5ServerService_FinishSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53350
	 * 		Name   -> Function Hydra5.Hydra5ServerService.ClientReject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHydra5ServerService::ClientReject(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5ServerService.ClientReject");
		
		UHydra5ServerService_ClientReject_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E532B0
	 * 		Name   -> Function Hydra5.Hydra5ServerService.ClientAccept
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHydra5ServerService::ClientAccept(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5ServerService.ClientAccept");
		
		UHydra5ServerService_ClientAccept_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E531E0
	 * 		Name   -> Function Hydra5.Hydra5ServerService.ActivateVdsm
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FServerSimpleInitOptions                    Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5ServerService::ActivateVdsm(const struct FServerSimpleInitOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5ServerService.ActivateVdsm");
		
		UHydra5ServerService_ActivateVdsm_Params params {};
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53070
	 * 		Name   -> Function Hydra5.Hydra5ServerService.ActivateTicket
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FServerSimpleInitOptions                    Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FServerTicket                               ticket                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5ServerService::ActivateTicket(const struct FServerSimpleInitOptions& Options, const struct FServerTicket& ticket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5ServerService.ActivateTicket");
		
		UHydra5ServerService_ActivateTicket_Params params {};
		params.Options = Options;
		params.ticket = ticket;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHydra5ServerService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHydra5ServerService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hydra5.Hydra5ServerService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53D40
	 * 		Name   -> Function Hydra5.Hydra5SessionControlService.TryToCreateSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      DataCenterId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ServerData                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStartPoling                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5SessionControlService::TryToCreateSession(const class FString& DataCenterId, const class FString& ServerData, bool bStartPoling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5SessionControlService.TryToCreateSession");
		
		UHydra5SessionControlService_TryToCreateSession_Params params {};
		params.DataCenterId = DataCenterId;
		params.ServerData = ServerData;
		params.bStartPoling = bStartPoling;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53C90
	 * 		Name   -> Function Hydra5.Hydra5SessionControlService.StopPollingServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameSessionId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5SessionControlService::StopPollingServer(const class FString& GameSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5SessionControlService.StopPollingServer");
		
		UHydra5SessionControlService_StopPollingServer_Params params {};
		params.GameSessionId = GameSessionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53BE0
	 * 		Name   -> Function Hydra5.Hydra5SessionControlService.StartPollingServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameSessionId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHydraErrorCode UHydra5SessionControlService::StartPollingServer(const class FString& GameSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5SessionControlService.StartPollingServer");
		
		UHydra5SessionControlService_StartPollingServer_Params params {};
		params.GameSessionId = GameSessionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53680
	 * 		Name   -> Function Hydra5.Hydra5SessionControlService.GetState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraServiceState UHydra5SessionControlService::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5SessionControlService.GetState");
		
		UHydra5SessionControlService_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53550
	 * 		Name   -> Function Hydra5.Hydra5SessionControlService.GetCachedPolingServerResult
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameSessionId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionControlAcceptClientResult UHydra5SessionControlService::GetCachedPolingServerResult(const class FString& GameSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5SessionControlService.GetCachedPolingServerResult");
		
		UHydra5SessionControlService_GetCachedPolingServerResult_Params params {};
		params.GameSessionId = GameSessionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53520
	 * 		Name   -> Function Hydra5.Hydra5SessionControlService.GetAvailableDataCenters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5SessionControlService::GetAvailableDataCenters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5SessionControlService.GetAvailableDataCenters");
		
		UHydra5SessionControlService_GetAvailableDataCenters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E534F0
	 * 		Name   -> Function Hydra5.Hydra5SessionControlService.GetAllDataCenters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EHydraErrorCode UHydra5SessionControlService::GetAllDataCenters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5SessionControlService.GetAllDataCenters");
		
		UHydra5SessionControlService_GetAllDataCenters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E534C0
	 * 		Name   -> Function Hydra5.Hydra5SessionControlService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UHydra5SessionControlService* UHydra5SessionControlService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5SessionControlService.Get");
		
		UHydra5SessionControlService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E53410
	 * 		Name   -> Function Hydra5.Hydra5SessionControlService.Disconnect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHydra5SessionControlService::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5SessionControlService.Disconnect");
		
		UHydra5SessionControlService_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E533F0
	 * 		Name   -> Function Hydra5.Hydra5SessionControlService.Connect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHydra5SessionControlService::Connect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hydra5.Hydra5SessionControlService.Connect");
		
		UHydra5SessionControlService_Connect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHydra5SessionControlService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHydra5SessionControlService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hydra5.Hydra5SessionControlService");
		return ptr;
	}

}


