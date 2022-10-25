/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0082F690
	 * 		Name   -> Function PrefabricatorRuntime.PrefabActor.SavePrefab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void APrefabActor::SavePrefab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.SavePrefab");
		
		APrefabActor_SavePrefab_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082F5C0
	 * 		Name   -> Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRandomStream                               InRandom                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APrefabActor::RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.RandomizeSeed");
		
		APrefabActor_RandomizeSeed_Params params {};
		params.InRandom = InRandom;
		params.bRecursive = bRecursive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082F3D0
	 * 		Name   -> Function PrefabricatorRuntime.PrefabActor.LoadPrefab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void APrefabActor::LoadPrefab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.LoadPrefab");
		
		APrefabActor_LoadPrefab_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082F3A0
	 * 		Name   -> Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool APrefabActor::IsPrefabOutdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated");
		
		APrefabActor_IsPrefabOutdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082F370
	 * 		Name   -> Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UPrefabricatorAsset* APrefabActor::GetPrefabAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset");
		
		APrefabActor_GetPrefabAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrefabActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrefabActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AReplicablePrefabActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AReplicablePrefabActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.ReplicablePrefabActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrefabDebugActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrefabDebugActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabDebugActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082F480
	 * 		Name   -> Function PrefabricatorRuntime.PrefabRandomizer.Randomize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InSeed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APrefabRandomizer::Randomize(int32_t InSeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabRandomizer.Randomize");
		
		APrefabRandomizer_Randomize_Params params {};
		params.InSeed = InSeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrefabRandomizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrefabRandomizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabRandomizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabricatorProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabricatorProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082F3F0
	 * 		Name   -> Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APrefabActor*                                Prefab                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPrefabricatorEventListener::PostSpawn(class APrefabActor* Prefab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn");
		
		UPrefabricatorEventListener_PostSpawn_Params params {};
		params.Prefab = Prefab;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabricatorEventListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabricatorEventListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorEventListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabricatorAssetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabricatorAssetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabricatorAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabricatorAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabricatorAssetCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabricatorAssetCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabricatorAssetUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabricatorAssetUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082F950
	 * 		Name   -> Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.UnlinkPrefab
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APrefabActor*                                PrefabActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPrefabricatorBlueprintLibrary::STATIC_UnlinkPrefab(class APrefabActor* PrefabActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.UnlinkPrefab");
		
		UPrefabricatorBlueprintLibrary_UnlinkPrefab_Params params {};
		params.PrefabActor = PrefabActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082F7B0
	 * 		Name   -> Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrefabricatorAssetInterface*                Prefab                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APrefabActor* UPrefabricatorBlueprintLibrary::STATIC_SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab");
		
		UPrefabricatorBlueprintLibrary_SpawnPrefab_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Prefab = Prefab;
		params.Transform = Transform;
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082F6B0
	 * 		Name   -> Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SetPrefabAsset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APrefabActor*                                PrefabActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrefabricatorAssetInterface*                Prefab                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReloadPrefab                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPrefabricatorBlueprintLibrary::STATIC_SetPrefabAsset(class APrefabActor* PrefabActor, class UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SetPrefabAsset");
		
		UPrefabricatorBlueprintLibrary_SetPrefabAsset_Params params {};
		params.PrefabActor = PrefabActor;
		params.Prefab = Prefab;
		params.bReloadPrefab = bReloadPrefab;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082F500
	 * 		Name   -> Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class APrefabActor*                                PrefabActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRandomStream                               InRandom                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPrefabricatorBlueprintLibrary::STATIC_RandomizePrefab(class APrefabActor* PrefabActor, const struct FRandomStream& InRandom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab");
		
		UPrefabricatorBlueprintLibrary_RandomizePrefab_Params params {};
		params.PrefabActor = PrefabActor;
		params.InRandom = InRandom;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082F290
	 * 		Name   -> Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Prefab                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              AttachedActors                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPrefabricatorBlueprintLibrary::STATIC_GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors");
		
		UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Params params {};
		params.Prefab = Prefab;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachedActors != nullptr)
			*AttachedActors = params.AttachedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabricatorBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabricatorBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabricatorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabricatorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrefabSeedLinkerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrefabSeedLinkerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabSeedLinkerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrefabSeedLinker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrefabSeedLinker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabSeedLinker");
		return ptr;
	}

}


