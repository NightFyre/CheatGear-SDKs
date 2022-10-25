/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0140A8A0
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     AssetPtr                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(class UObject* AssetPtr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr");
		
		UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params params {};
		params.AssetPtr = AssetPtr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0140A730
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FAssetData                                  AssetData                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAssetData(const struct FAssetData& AssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData");
		
		UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params params {};
		params.AssetData = AssetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0140A650
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        AssetPathName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAsset(const class FName& AssetPathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset");
		
		UAssetTagsSubsystem_GetCollectionsContainingAsset_Params params {};
		params.AssetPathName = AssetPathName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0140A5D0
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.GetCollections
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class FName> UAssetTagsSubsystem::GetCollections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollections");
		
		UAssetTagsSubsystem_GetCollections_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0140A400
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FAssetData> UAssetTagsSubsystem::GetAssetsInCollection(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection");
		
		UAssetTagsSubsystem_GetAssetsInCollection_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0140A360
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.CollectionExists
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetTagsSubsystem::CollectionExists(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.CollectionExists");
		
		UAssetTagsSubsystem_CollectionExists_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetTagsSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetTagsSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AssetTags.AssetTagsSubsystem");
		return ptr;
	}

}


