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
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.GetModRatingsAsync.GetModRatingsMCDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetUserRatingsSchema                       Ratings                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UGetModRatingsAsync::GetModRatingsMCDelegate__DelegateSignature(bool bSuccess, const struct FGetUserRatingsSchema& Ratings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.GetModRatingsAsync.GetModRatingsMCDelegate__DelegateSignature");
		
		UGetModRatingsAsync_GetModRatingsMCDelegate__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.Ratings = Ratings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9220
	 * 		Name   -> Function ModKit.GetModRatingsAsync.GetModRatingsAsync
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGetModRatingsAsync* UGetModRatingsAsync::STATIC_GetModRatingsAsync(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.GetModRatingsAsync.GetModRatingsAsync");
		
		UGetModRatingsAsync_GetModRatingsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetModRatingsAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetModRatingsAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModKit.GetModRatingsAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9600
	 * 		Name   -> Function ModKit.GetModsAsync.GetModsByIdAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int64_t>                                    InModIds                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGetModsAsync* UGetModsAsync::STATIC_GetModsByIdAsync(class UObject* WorldContextObject, TArray<int64_t> InModIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.GetModsAsync.GetModsByIdAsync");
		
		UGetModsAsync_GetModsByIdAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InModIds = InModIds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9460
	 * 		Name   -> Function ModKit.GetModsAsync.GetModsAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetModsFilters                             InFilters                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UGetModsAsync* UGetModsAsync::STATIC_GetModsAsync(class UObject* WorldContextObject, const struct FGetModsFilters& InFilters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.GetModsAsync.GetModsAsync");
		
		UGetModsAsync_GetModsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InFilters = InFilters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetModsAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetModsAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModKit.GetModsAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9910
	 * 		Name   -> Function ModKit.GetSubscribedModsAsync.GetSubscribedModsFilteredAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetModsFilters                             InFilters                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UGetSubscribedModsAsync* UGetSubscribedModsAsync::STATIC_GetSubscribedModsFilteredAsync(class UObject* WorldContextObject, const struct FGetModsFilters& InFilters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.GetSubscribedModsAsync.GetSubscribedModsFilteredAsync");
		
		UGetSubscribedModsAsync_GetSubscribedModsFilteredAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InFilters = InFilters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9890
	 * 		Name   -> Function ModKit.GetSubscribedModsAsync.GetSubscribedModsAsync
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGetSubscribedModsAsync* UGetSubscribedModsAsync::STATIC_GetSubscribedModsAsync(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.GetSubscribedModsAsync.GetSubscribedModsAsync");
		
		UGetSubscribedModsAsync_GetSubscribedModsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetSubscribedModsAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetSubscribedModsAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModKit.GetSubscribedModsAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModDownloadQueue.ModDownloadStartDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FModObject                                  Mod                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UModDownloadQueue::ModDownloadStartDelegate__DelegateSignature(const struct FModObject& Mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModDownloadQueue.ModDownloadStartDelegate__DelegateSignature");
		
		UModDownloadQueue_ModDownloadStartDelegate__DelegateSignature_Params params {};
		params.Mod = Mod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModDownloadQueue.ModDownloadReadyDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FModObject                                  Mod                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UModDownloadQueue::ModDownloadReadyDelegate__DelegateSignature(const struct FModObject& Mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModDownloadQueue.ModDownloadReadyDelegate__DelegateSignature");
		
		UModDownloadQueue_ModDownloadReadyDelegate__DelegateSignature_Params params {};
		params.Mod = Mod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModDownloadQueue.ModDownloadQueueFinishedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UModDownloadQueue::ModDownloadQueueFinishedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModDownloadQueue.ModDownloadQueueFinishedDelegate__DelegateSignature");
		
		UModDownloadQueue_ModDownloadQueueFinishedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModDownloadQueue.ModDownloadAddToQueueDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FModObject                                  Mod                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UModDownloadQueue::ModDownloadAddToQueueDelegate__DelegateSignature(const struct FModObject& Mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModDownloadQueue.ModDownloadAddToQueueDelegate__DelegateSignature");
		
		UModDownloadQueue_ModDownloadAddToQueueDelegate__DelegateSignature_Params params {};
		params.Mod = Mod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA1B0
	 * 		Name   -> Function ModKit.ModDownloadQueue.LoadModState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModObject                                  OutObject                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UModDownloadQueue::STATIC_LoadModState(int64_t ModId, struct FModObject* OutObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadQueue.LoadModState");
		
		UModDownloadQueue_LoadModState_Params params {};
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutObject != nullptr)
			*OutObject = params.OutObject;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA040
	 * 		Name   -> Function ModKit.ModDownloadQueue.IsModUpToDate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FModObject                                  ModObject                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModDownloadQueue::STATIC_IsModUpToDate(const struct FModObject& ModObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadQueue.IsModUpToDate");
		
		UModDownloadQueue_IsModUpToDate_Params params {};
		params.ModObject = ModObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9F90
	 * 		Name   -> Function ModKit.ModDownloadQueue.IsModOnDisk
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FModObject                                  ModObject                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModDownloadQueue::STATIC_IsModOnDisk(const struct FModObject& ModObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadQueue.IsModOnDisk");
		
		UModDownloadQueue_IsModOnDisk_Params params {};
		params.ModObject = ModObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9F00
	 * 		Name   -> Function ModKit.ModDownloadQueue.IsModIdDownloadPending
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int64_t                                            ModId                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModDownloadQueue::IsModIdDownloadPending(int64_t ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadQueue.IsModIdDownloadPending");
		
		UModDownloadQueue_IsModIdDownloadPending_Params params {};
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9E40
	 * 		Name   -> Function ModKit.ModDownloadQueue.IsModDownloadPending
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FModObject                                  ModObject                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UModDownloadQueue::IsModDownloadPending(const struct FModObject& ModObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadQueue.IsModDownloadPending");
		
		UModDownloadQueue_IsModDownloadPending_Params params {};
		params.ModObject = ModObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9D80
	 * 		Name   -> Function ModKit.ModDownloadQueue.HasPendingTasks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UModDownloadQueue::HasPendingTasks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadQueue.HasPendingTasks");
		
		UModDownloadQueue_HasPendingTasks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9D20
	 * 		Name   -> Function ModKit.ModDownloadQueue.HasActiveTask
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UModDownloadQueue::HasActiveTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadQueue.HasActiveTask");
		
		UModDownloadQueue_HasActiveTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD96F0
	 * 		Name   -> Function ModKit.ModDownloadQueue.GetPathForModFile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FModObject                                  ModObject                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UModDownloadQueue::STATIC_GetPathForModFile(const struct FModObject& ModObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadQueue.GetPathForModFile");
		
		UModDownloadQueue_GetPathForModFile_Params params {};
		params.ModObject = ModObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9390
	 * 		Name   -> Function ModKit.ModDownloadQueue.GetModRootForId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int64_t                                            ModId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModDownloadQueue::STATIC_GetModRootForId(int64_t ModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadQueue.GetModRootForId");
		
		UModDownloadQueue_GetModRootForId_Params params {};
		params.ModId = ModId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD92A0
	 * 		Name   -> Function ModKit.ModDownloadQueue.GetModRoot
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FModObject                                  ModObject                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UModDownloadQueue::STATIC_GetModRoot(const struct FModObject& ModObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadQueue.GetModRoot");
		
		UModDownloadQueue_GetModRoot_Params params {};
		params.ModObject = ModObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8FB0
	 * 		Name   -> Function ModKit.ModDownloadQueue.GetActiveTask
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UModDownloadTask* UModDownloadQueue::GetActiveTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadQueue.GetActiveTask");
		
		UModDownloadQueue_GetActiveTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModDownloadQueue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModDownloadQueue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModKit.ModDownloadQueue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA0F0
	 * 		Name   -> Function ModKit.ModDownloadTask.IsReadyToDownload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UModDownloadTask::IsReadyToDownload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadTask.IsReadyToDownload");
		
		UModDownloadTask_IsReadyToDownload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9AE0
	 * 		Name   -> Function ModKit.ModDownloadTask.GetTotalBytes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int64_t UModDownloadTask::GetTotalBytes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadTask.GetTotalBytes");
		
		UModDownloadTask_GetTotalBytes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9AB0
	 * 		Name   -> Function ModKit.ModDownloadTask.GetTaskState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EDownloadTaskState UModDownloadTask::GetTaskState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadTask.GetTaskState");
		
		UModDownloadTask_GetTaskState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9040
	 * 		Name   -> Function ModKit.ModDownloadTask.GetDownloadProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UModDownloadTask::GetDownloadProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadTask.GetDownloadProgress");
		
		UModDownloadTask_GetDownloadProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8FE0
	 * 		Name   -> Function ModKit.ModDownloadTask.GetBytesReceived
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int64_t UModDownloadTask::GetBytesReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModDownloadTask.GetBytesReceived");
		
		UModDownloadTask_GetBytesReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModDownloadTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModDownloadTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModKit.ModDownloadTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModIOClient.SimpleModioMessageDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FModIOMessage                               Message                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UModIOClient::SimpleModioMessageDelegate__DelegateSignature(const struct FModIOMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModIOClient.SimpleModioMessageDelegate__DelegateSignature");
		
		UModIOClient_SimpleModioMessageDelegate__DelegateSignature_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA6A0
	 * 		Name   -> Function ModKit.ModIOClient.SetUserAcceptedTerms
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UModIOClient::SetUserAcceptedTerms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModIOClient.SetUserAcceptedTerms");
		
		UModIOClient_SetUserAcceptedTerms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModIOClient.ModioLoginSuccessDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UModIOClient::ModioLoginSuccessDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModIOClient.ModioLoginSuccessDelegate__DelegateSignature");
		
		UModIOClient_ModioLoginSuccessDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModIOClient.ModioLoginFailedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UModIOClient::ModioLoginFailedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModIOClient.ModioLoginFailedDelegate__DelegateSignature");
		
		UModIOClient_ModioLoginFailedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModIOClient.ModioAcceptedTermsDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UModIOClient::ModioAcceptedTermsDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModIOClient.ModioAcceptedTermsDelegate__DelegateSignature");
		
		UModIOClient_ModioAcceptedTermsDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA400
	 * 		Name   -> Function ModKit.ModIOClient.Logout
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UModIOClient::Logout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModIOClient.Logout");
		
		UModIOClient_Logout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA350
	 * 		Name   -> Function ModKit.ModIOClient.LoginEmailRequest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModIOClient::LoginEmailRequest(const class FString& Email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModIOClient.LoginEmailRequest");
		
		UModIOClient_LoginEmailRequest_Params params {};
		params.Email = Email;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA2A0
	 * 		Name   -> Function ModKit.ModIOClient.LoginEmailExchange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SecurityCode                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModIOClient::LoginEmailExchange(const class FString& SecurityCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModIOClient.LoginEmailExchange");
		
		UModIOClient_LoginEmailExchange_Params params {};
		params.SecurityCode = SecurityCode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9DE0
	 * 		Name   -> Function ModKit.ModIOClient.IsAuthenticated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UModIOClient::IsAuthenticated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModIOClient.IsAuthenticated");
		
		UModIOClient_IsAuthenticated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9DB0
	 * 		Name   -> Function ModKit.ModIOClient.HasUserAcceptedTerms
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UModIOClient::HasUserAcceptedTerms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModIOClient.HasUserAcceptedTerms");
		
		UModIOClient_HasUserAcceptedTerms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9C00
	 * 		Name   -> Function ModKit.ModIOClient.GetUrlForGameEndpoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      Endpoint                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModIOClient::GetUrlForGameEndpoint(const class FString& Endpoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModIOClient.GetUrlForGameEndpoint");
		
		UModIOClient_GetUrlForGameEndpoint_Params params {};
		params.Endpoint = Endpoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9B10
	 * 		Name   -> Function ModKit.ModIOClient.GetUrlForEndpoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      Endpoint                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UModIOClient::GetUrlForEndpoint(const class FString& Endpoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModIOClient.GetUrlForEndpoint");
		
		UModIOClient_GetUrlForEndpoint_Params params {};
		params.Endpoint = Endpoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD90A0
	 * 		Name   -> Function ModKit.ModIOClient.GetGameId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UModIOClient::GetGameId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModIOClient.GetGameId");
		
		UModIOClient_GetGameId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModIOClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModIOClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModKit.ModIOClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModKitSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModKitSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModKit.ModKitSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA580
	 * 		Name   -> Function ModKit.ModKitSubsystem.QueueSubscriptions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UModKitSubsystem::QueueSubscriptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.QueueSubscriptions");
		
		UModKitSubsystem_QueueSubscriptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA4D0
	 * 		Name   -> Function ModKit.ModKitSubsystem.PassUserEmail
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InEmailAddress                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModKitSubsystem::PassUserEmail(const class FString& InEmailAddress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.PassUserEmail");
		
		UModKitSubsystem_PassUserEmail_Params params {};
		params.InEmailAddress = InEmailAddress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA420
	 * 		Name   -> Function ModKit.ModKitSubsystem.PassSecurityCode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InSecurityCode                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModKitSubsystem::PassSecurityCode(const class FString& InSecurityCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.PassSecurityCode");
		
		UModKitSubsystem_PassSecurityCode_Params params {};
		params.InSecurityCode = InSecurityCode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModKitSubsystem.OnModSubscriptionsUpdatedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FModObject>                          Mods                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModKitSubsystem::OnModSubscriptionsUpdatedDelegate__DelegateSignature(TArray<struct FModObject> Mods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModKitSubsystem.OnModSubscriptionsUpdatedDelegate__DelegateSignature");
		
		UModKitSubsystem_OnModSubscriptionsUpdatedDelegate__DelegateSignature_Params params {};
		params.Mods = Mods;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModKitSubsystem.OnModEmailRequestedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UModKitSubsystem::OnModEmailRequestedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModKitSubsystem.OnModEmailRequestedDelegate__DelegateSignature");
		
		UModKitSubsystem_OnModEmailRequestedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModKitSubsystem.OnModDeactivatedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FModState                                   ModState                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UModKitSubsystem::OnModDeactivatedDelegate__DelegateSignature(const struct FModState& ModState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModKitSubsystem.OnModDeactivatedDelegate__DelegateSignature");
		
		UModKitSubsystem_OnModDeactivatedDelegate__DelegateSignature_Params params {};
		params.ModState = ModState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.ModKitSubsystem.OnModActivatedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FModState                                   ModState                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsUpToDate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModKitSubsystem::OnModActivatedDelegate__DelegateSignature(const struct FModState& ModState, bool bIsUpToDate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.ModKitSubsystem.OnModActivatedDelegate__DelegateSignature");
		
		UModKitSubsystem_OnModActivatedDelegate__DelegateSignature_Params params {};
		params.ModState = ModState;
		params.bIsUpToDate = bIsUpToDate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA120
	 * 		Name   -> Function ModKit.ModKitSubsystem.IsSubscribed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int64_t                                            InModId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModKitSubsystem::IsSubscribed(int64_t InModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.IsSubscribed");
		
		UModKitSubsystem_IsSubscribed_Params params {};
		params.InModId = InModId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9E10
	 * 		Name   -> Function ModKit.ModKitSubsystem.IsLoggedIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UModKitSubsystem::IsLoggedIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.IsLoggedIn");
		
		UModKitSubsystem_IsLoggedIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9D50
	 * 		Name   -> Function ModKit.ModKitSubsystem.HasPendingDownloadTasks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UModKitSubsystem::HasPendingDownloadTasks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.HasPendingDownloadTasks");
		
		UModKitSubsystem_HasPendingDownloadTasks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9CF0
	 * 		Name   -> Function ModKit.ModKitSubsystem.HasActiveDownloadTask
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UModKitSubsystem::HasActiveDownloadTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.HasActiveDownloadTask");
		
		UModKitSubsystem_HasActiveDownloadTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9860
	 * 		Name   -> Function ModKit.ModKitSubsystem.GetSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UModKitSettings* UModKitSubsystem::GetSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.GetSettings");
		
		UModKitSubsystem_GetSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD97E0
	 * 		Name   -> Function ModKit.ModKitSubsystem.GetRegistrationUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UModKitSubsystem::GetRegistrationUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.GetRegistrationUrl");
		
		UModKitSubsystem_GetRegistrationUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD91F0
	 * 		Name   -> Function ModKit.ModKitSubsystem.GetModIOClient
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UModIOClient* UModKitSubsystem::GetModIOClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.GetModIOClient");
		
		UModKitSubsystem_GetModIOClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD90D0
	 * 		Name   -> Function ModKit.ModKitSubsystem.GetLoggedInUserProfileUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UModKitSubsystem::GetLoggedInUserProfileUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.GetLoggedInUserProfileUrl");
		
		UModKitSubsystem_GetLoggedInUserProfileUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9150
	 * 		Name   -> Function ModKit.ModKitSubsystem.GetLoggedInUsername
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UModKitSubsystem::GetLoggedInUsername()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.GetLoggedInUsername");
		
		UModKitSubsystem_GetLoggedInUsername_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9070
	 * 		Name   -> Function ModKit.ModKitSubsystem.GetDownloadQueue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UModDownloadQueue* UModKitSubsystem::GetDownloadQueue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.GetDownloadQueue");
		
		UModKitSubsystem_GetDownloadQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9010
	 * 		Name   -> Function ModKit.ModKitSubsystem.GetCurrentAuthState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EModPlatformAuthState UModKitSubsystem::GetCurrentAuthState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.ModKitSubsystem.GetCurrentAuthState");
		
		UModKitSubsystem_GetCurrentAuthState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModKitSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModKitSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModKit.ModKitSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA5B0
	 * 		Name   -> Function ModKit.RateModAsync.RateModAsync
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            InModId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InRating                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URateModAsync* URateModAsync::STATIC_RateModAsync(class UObject* WorldContextObject, int64_t InModId, int32_t InRating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.RateModAsync.RateModAsync");
		
		URateModAsync_RateModAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InModId = InModId;
		params.InRating = InRating;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.RateModAsync.OnModRatedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URateModAsync::OnModRatedDelegate__DelegateSignature(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.RateModAsync.OnModRatedDelegate__DelegateSignature");
		
		URateModAsync_OnModRatedDelegate__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URateModAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URateModAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModKit.RateModAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA6C0
	 * 		Name   -> Function ModKit.SubscribeModAsync.SubscribeModAsync
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            InModId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USubscribeModAsync* USubscribeModAsync::STATIC_SubscribeModAsync(class UObject* WorldContextObject, int64_t InModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.SubscribeModAsync.SubscribeModAsync");
		
		USubscribeModAsync_SubscribeModAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InModId = InModId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubscribeModAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubscribeModAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModKit.SubscribeModAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CDA780
	 * 		Name   -> Function ModKit.UnsubscribeModAsync.UnsubscribeModAsync
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            InModId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUnsubscribeModAsync* UUnsubscribeModAsync::STATIC_UnsubscribeModAsync(class UObject* WorldContextObject, int64_t InModId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModKit.UnsubscribeModAsync.UnsubscribeModAsync");
		
		UUnsubscribeModAsync_UnsubscribeModAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InModId = InModId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ModKit.UnsubscribeModAsync.OnUnsubscribedModDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUnsubscribeModAsync::OnUnsubscribedModDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ModKit.UnsubscribeModAsync.OnUnsubscribedModDelegate__DelegateSignature");
		
		UUnsubscribeModAsync_OnUnsubscribedModDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnsubscribeModAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnsubscribeModAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModKit.UnsubscribeModAsync");
		return ptr;
	}

}


