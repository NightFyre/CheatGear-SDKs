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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGroomActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGroomActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomAssetImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomAssetImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomAssetImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomBindingAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomBindingAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomBindingAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A66C40
	 * 		Name   -> Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDesiredPackagePath                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGroomAsset*                                 InGroomAsset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               InSkeletalMesh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InNumInterpolationPoints                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               InSourceSkeletalMeshForTransfer                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InMatchingSection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGroomBindingAsset* UGroomBlueprintLibrary::STATIC_CreateNewGroomBindingAssetWithPath(const class FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath");
		
		UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Params params {};
		params.InDesiredPackagePath = InDesiredPackagePath;
		params.InGroomAsset = InGroomAsset;
		params.InSkeletalMesh = InSkeletalMesh;
		params.InNumInterpolationPoints = InNumInterpolationPoints;
		params.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
		params.InMatchingSection = InMatchingSection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A66AB0
	 * 		Name   -> Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGroomAsset*                                 InGroomAsset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               InSkeletalMesh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InNumInterpolationPoints                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               InSourceSkeletalMeshForTransfer                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InMatchingSection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGroomBindingAsset* UGroomBlueprintLibrary::STATIC_CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset");
		
		UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params params {};
		params.InGroomAsset = InGroomAsset;
		params.InSkeletalMesh = InSkeletalMesh;
		params.InNumInterpolationPoints = InNumInterpolationPoints;
		params.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
		params.InMatchingSection = InMatchingSection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A66C40
	 * 		Name   -> Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      DesiredPackagePath                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGroomAsset*                                 GroomAsset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryCache*                              GeometryCache                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumInterpolationPoints                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryCache*                              SourceGeometryCacheForTransfer                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MatchingSection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGroomBindingAsset* UGroomBlueprintLibrary::STATIC_CreateNewGeometryCacheGroomBindingAssetWithPath(const class FString& DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath");
		
		UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Params params {};
		params.DesiredPackagePath = DesiredPackagePath;
		params.GroomAsset = GroomAsset;
		params.GeometryCache = GeometryCache;
		params.NumInterpolationPoints = NumInterpolationPoints;
		params.SourceGeometryCacheForTransfer = SourceGeometryCacheForTransfer;
		params.MatchingSection = MatchingSection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A66AB0
	 * 		Name   -> Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGroomAsset*                                 GroomAsset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryCache*                              GeometryCache                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumInterpolationPoints                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGeometryCache*                              SourceGeometryCacheForTransfer                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MatchingSection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGroomBindingAsset* UGroomBlueprintLibrary::STATIC_CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset");
		
		UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Params params {};
		params.GroomAsset = GroomAsset;
		params.GeometryCache = GeometryCache;
		params.NumInterpolationPoints = NumInterpolationPoints;
		params.SourceGeometryCacheForTransfer = SourceGeometryCacheForTransfer;
		params.MatchingSection = MatchingSection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomCacheImportOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomCacheImportOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomCacheImportOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomCacheImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomCacheImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomCacheImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A67150
	 * 		Name   -> Function HairStrandsCore.GroomComponent.SetPhysicsAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPhysicsAsset*                               InPhysicsAsset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGroomComponent::SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.SetPhysicsAsset");
		
		UGroomComponent_SetPhysicsAsset_Params params {};
		params.InPhysicsAsset = InPhysicsAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A670C0
	 * 		Name   -> Function HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGroomComponent::SetHairLengthScaleEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.SetHairLengthScaleEnable");
		
		UGroomComponent_SetHairLengthScaleEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A67040
	 * 		Name   -> Function HairStrandsCore.GroomComponent.SetHairLengthScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGroomComponent::SetHairLengthScale(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.SetHairLengthScale");
		
		UGroomComponent_SetHairLengthScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A66FB0
	 * 		Name   -> Function HairStrandsCore.GroomComponent.SetGroomAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGroomAsset*                                 Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGroomComponent::SetGroomAsset(class UGroomAsset* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.SetGroomAsset");
		
		UGroomComponent_SetGroomAsset_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A66F20
	 * 		Name   -> Function HairStrandsCore.GroomComponent.SetEnableSimulation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInEnableSimulation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGroomComponent::SetEnableSimulation(bool bInEnableSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.SetEnableSimulation");
		
		UGroomComponent_SetEnableSimulation_Params params {};
		params.bInEnableSimulation = bInEnableSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A66E90
	 * 		Name   -> Function HairStrandsCore.GroomComponent.SetBindingAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGroomBindingAsset*                          InBinding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGroomComponent::SetBindingAsset(class UGroomBindingAsset* InBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.SetBindingAsset");
		
		UGroomComponent_SetBindingAsset_Params params {};
		params.InBinding = InBinding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A66E70
	 * 		Name   -> Function HairStrandsCore.GroomComponent.ResetSimulation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGroomComponent::ResetSimulation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.ResetSimulation");
		
		UGroomComponent_ResetSimulation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A66E50
	 * 		Name   -> Function HairStrandsCore.GroomComponent.ResetCollisionComponents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGroomComponent::ResetCollisionComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.ResetCollisionComponents");
		
		UGroomComponent_ResetCollisionComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A66E20
	 * 		Name   -> Function HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGroomComponent::GetIsHairLengthScaleEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled");
		
		UGroomComponent_GetIsHairLengthScaleEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A66A20
	 * 		Name   -> Function HairStrandsCore.GroomComponent.AddCollisionComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGroomComponent::AddCollisionComponent(class USkeletalMeshComponent* SkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.AddCollisionComponent");
		
		UGroomComponent_AddCollisionComponent_Params params {};
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomCreateBindingOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomCreateBindingOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomCreateBindingOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomCreateFollicleMaskOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomCreateFollicleMaskOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomCreateFollicleMaskOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomCreateStrandsTexturesOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomCreateStrandsTexturesOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomCreateStrandsTexturesOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomImportOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomImportOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomImportOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomHairGroupsPreview.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomHairGroupsPreview::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomHairGroupsPreview");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroomPluginSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroomPluginSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomPluginSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneGroomCacheSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneGroomCacheSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.MovieSceneGroomCacheSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneGroomCacheTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneGroomCacheTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.MovieSceneGroomCacheTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceHairStrands.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceHairStrands::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.NiagaraDataInterfaceHairStrands");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfacePhysicsAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfacePhysicsAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceVelocityGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceVelocityGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfacePressureGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfacePressureGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.NiagaraDataInterfacePressureGrid");
		return ptr;
	}

}


