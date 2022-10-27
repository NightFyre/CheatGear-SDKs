/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x03699080
	 * 		Name   -> Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      InPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	struct FSocketId USocketIdTestFunctions::STATIC_MakeSocketIdWithInvalidName(const class FString& InPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName");
		
		USocketIdTestFunctions_MakeSocketIdWithInvalidName_Params params {};
		params.InPath = InPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03698FD0
	 * 		Name   -> Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        InSocketName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSocketId USocketIdTestFunctions::STATIC_MakeSocketIdWithEmptyPath(const class FName& InSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath");
		
		USocketIdTestFunctions_MakeSocketIdWithEmptyPath_Params params {};
		params.InSocketName = InSocketName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03698EB0
	 * 		Name   -> Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      InPath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        InSocketName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSocketId USocketIdTestFunctions::STATIC_MakeSocketId(const class FString& InPath, const class FName& InSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId");
		
		USocketIdTestFunctions_MakeSocketId_Params params {};
		params.InPath = InPath;
		params.InSocketName = InSocketName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocketIdTestFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocketIdTestFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaSocketLookup.SocketIdTestFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03698D50
	 * 		Name   -> Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSocketLookupCache                          InCache                                                    (Parm, OutParm, ReferenceParm)
	 * 		struct FSocketId                                   InSocketId                                                 (ConstParm, Parm)
	 */
	bool USocketLookupCacheTestFunctions::STATIC_IsInCache(struct FSocketLookupCache* InCache, const struct FSocketId& InSocketId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache");
		
		USocketLookupCacheTestFunctions_IsInCache_Params params {};
		params.InSocketId = InSocketId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InCache != nullptr)
			*InCache = params.InCache;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03698BA0
	 * 		Name   -> Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSocketLookupCache                          InCache                                                    (Parm, OutParm, ReferenceParm)
	 * 		struct FSocketId                                   InSocketId                                                 (ConstParm, Parm)
	 * 		class USceneComponent*                             InSceneComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool USocketLookupCacheTestFunctions::STATIC_AddToCache(struct FSocketLookupCache* InCache, const struct FSocketId& InSocketId, class USceneComponent* InSceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache");
		
		USocketLookupCacheTestFunctions_AddToCache_Params params {};
		params.InSocketId = InSocketId;
		params.InSceneComponent = InSceneComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InCache != nullptr)
			*InCache = params.InCache;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocketLookupCacheTestFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocketLookupCacheTestFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaSocketLookup.SocketLookupCacheTestFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03699600
	 * 		Name   -> Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSocketLookupCache                          Cache                                                      (Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      InActor                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSocketId                                   InSocketId                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	bool USocketLookupFunctions::STATIC_TryGetSocketTransformWithCache(struct FSocketLookupCache* Cache, class AActor* InActor, const struct FSocketId& InSocketId, struct FTransform* OutTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache");
		
		USocketLookupFunctions_TryGetSocketTransformWithCache_Params params {};
		params.InActor = InActor;
		params.InSocketId = InSocketId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Cache != nullptr)
			*Cache = params.Cache;
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03699420
	 * 		Name   -> Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSocketId                                   InSocketId                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		ERelativeTransformSpace                            Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool USocketLookupFunctions::STATIC_TryGetSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, struct FTransform* OutTransform, ERelativeTransformSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform");
		
		USocketLookupFunctions_TryGetSocketTransform_Params params {};
		params.InActor = InActor;
		params.InSocketId = InSocketId;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03699240
	 * 		Name   -> Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSocketId                                   InSocketId                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class USceneComponent*                             RelativeTo                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	bool USocketLookupFunctions::STATIC_TryGetRelativeSocketTransform(class AActor* InActor, const struct FSocketId& InSocketId, class USceneComponent* RelativeTo, struct FTransform* OutTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform");
		
		USocketLookupFunctions_TryGetRelativeSocketTransform_Params params {};
		params.InActor = InActor;
		params.InSocketId = InSocketId;
		params.RelativeTo = RelativeTo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03699150
	 * 		Name   -> Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSocketId                                   InSocketId                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class USceneComponent* USocketLookupFunctions::STATIC_TryFindSocketOwner(class AActor* InActor, const struct FSocketId& InSocketId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner");
		
		USocketLookupFunctions_TryFindSocketOwner_Params params {};
		params.InActor = InActor;
		params.InSocketId = InSocketId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocketLookupFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocketLookupFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaSocketLookup.SocketLookupFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AthenaSocketLookup.SocketLookupInterface.FindSocket
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSocketId                                   InSocketId                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	bool USocketLookupInterface::FindSocket(const struct FSocketId& InSocketId, struct FTransform* OutTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaSocketLookup.SocketLookupInterface.FindSocket");
		
		USocketLookupInterface_FindSocket_Params params {};
		params.InSocketId = InSocketId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocketLookupInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocketLookupInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaSocketLookup.SocketLookupInterface");
		return ptr;
	}

}


