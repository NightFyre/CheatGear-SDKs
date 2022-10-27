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
	 * 		RVA    -> 0x0159E1B0
	 * 		Name   -> Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPirateDescription                          Desc                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class UClass* UAnimationSwitchDataAsset::GetAnimSetIdForDesc(const struct FPirateDescription& Desc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc");
		
		UAnimationSwitchDataAsset_GetAnimSetIdForDesc_Params params {};
		params.Desc = Desc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationSwitchDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationSwitchDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.AnimationSwitchDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159C7F0
	 * 		Name   -> Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCharacterMeshBakeSpecification*             CharacterMeshSpecification                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              AsyncResult                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UCharacterMeshBakeFunctionLibrary::STATIC_BakeCharacterMeshAsync(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, const class FScriptDelegate& AsyncResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync");
		
		UCharacterMeshBakeFunctionLibrary_BakeCharacterMeshAsync_Params params {};
		params.CharacterMeshSpecification = CharacterMeshSpecification;
		params.AsyncResult = AsyncResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159C770
	 * 		Name   -> Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCharacterMeshBakeSpecification*             CharacterMeshSpecification                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USkeletalMesh* UCharacterMeshBakeFunctionLibrary::STATIC_BakeCharacterMesh(class UCharacterMeshBakeSpecification* CharacterMeshSpecification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh");
		
		UCharacterMeshBakeFunctionLibrary_BakeCharacterMesh_Params params {};
		params.CharacterMeshSpecification = CharacterMeshSpecification;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class USkeletalMesh*                               Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterMeshBakeFunctionLibrary::AsyncBakeResultDynamic__DelegateSignature(class USkeletalMesh* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature");
		
		UCharacterMeshBakeFunctionLibrary_AsyncBakeResultDynamic__DelegateSignature_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159C5D0
	 * 		Name   -> Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCharacterMeshBakeSpecification*             CharacterMeshSpecification                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FIPGBlendShape>                      BlendShapes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UCharacterMeshBakeFunctionLibrary::STATIC_AppendCharacterBlendShapes(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, TArray<struct FIPGBlendShape> BlendShapes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes");
		
		UCharacterMeshBakeFunctionLibrary_AppendCharacterBlendShapes_Params params {};
		params.CharacterMeshSpecification = CharacterMeshSpecification;
		params.BlendShapes = BlendShapes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterMeshBakeFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterMeshBakeFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.CharacterMeshBakeFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkeletonsDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkeletonsDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.SkeletonsDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterMeshBakeSpecification.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterMeshBakeSpecification::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.CharacterMeshBakeSpecification");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159F1D0
	 * 		Name   -> Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UCharacterMeshBakeSpecification* UCharacterMeshBakeTestFunctionLibrary::STATIC_MakeCharacterMeshSpecification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification");
		
		UCharacterMeshBakeTestFunctionLibrary_MakeCharacterMeshSpecification_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159CDD0
	 * 		Name   -> Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMesh*                               BaseMesh                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BaseMeshWeight                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMeshPatchAsset*>                     MeshPatchAssets                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      MeshPatchAssetWeights                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class USkeletalMesh*                               TargetMesh                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterMeshBakeTestFunctionLibrary::STATIC_BlendMeshWithMeshPatchAssets(class USkeletalMesh* BaseMesh, float BaseMeshWeight, TArray<class UMeshPatchAsset*> MeshPatchAssets, TArray<float> MeshPatchAssetWeights, class USkeletalMesh** TargetMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets");
		
		UCharacterMeshBakeTestFunctionLibrary_BlendMeshWithMeshPatchAssets_Params params {};
		params.BaseMesh = BaseMesh;
		params.BaseMeshWeight = BaseMeshWeight;
		params.MeshPatchAssets = MeshPatchAssets;
		params.MeshPatchAssetWeights = MeshPatchAssetWeights;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetMesh != nullptr)
			*TargetMesh = params.TargetMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159C8E0
	 * 		Name   -> Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      CharacterMeshBakeSpecificationClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	class USkeletalMesh* UCharacterMeshBakeTestFunctionLibrary::STATIC_BakeCharacterMeshFromClassDefault(class UClass* CharacterMeshBakeSpecificationClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault");
		
		UCharacterMeshBakeTestFunctionLibrary_BakeCharacterMeshFromClassDefault_Params params {};
		params.CharacterMeshBakeSpecificationClass = CharacterMeshBakeSpecificationClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159C6B0
	 * 		Name   -> Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMesh*                               MeshA                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               MeshB                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UCharacterMeshBakeTestFunctionLibrary::STATIC_AreMeshesEquivalentByMeshPatchCriteria(class USkeletalMesh* MeshA, class USkeletalMesh* MeshB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria");
		
		UCharacterMeshBakeTestFunctionLibrary_AreMeshesEquivalentByMeshPatchCriteria_Params params {};
		params.MeshA = MeshA;
		params.MeshB = MeshB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterMeshBakeTestFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterMeshBakeTestFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.CharacterMeshBakeTestFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UColorTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UColorTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.ColorTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159E690
	 * 		Name   -> Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MeshPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      TypeName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class FString UFileAccessFunctionLibrary::STATIC_GetMeshPatchAssetPathFromMeshPathAndTypeName(const class FString& MeshPath, const class FString& TypeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName");
		
		UFileAccessFunctionLibrary_GetMeshPatchAssetPathFromMeshPathAndTypeName_Params params {};
		params.MeshPath = MeshPath;
		params.TypeName = TypeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159E5B0
	 * 		Name   -> Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMesh*                               Mesh                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      TypeName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UMeshPatchAsset* UFileAccessFunctionLibrary::STATIC_GetMeshPatchAssetForMeshFromTypeName(class USkeletalMesh* Mesh, const class FString& TypeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName");
		
		UFileAccessFunctionLibrary_GetMeshPatchAssetForMeshFromTypeName_Params params {};
		params.Mesh = Mesh;
		params.TypeName = TypeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFileAccessFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFileAccessFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.FileAccessFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialReferencesDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialReferencesDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.MaterialReferencesDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159E390
	 * 		Name   -> Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BaseMeshBlendWeight                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              BodyShapeBlendNames                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      BodyShapeBlendWeights                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		float                                              Threshold                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UPirateBodyShapeFunctionLibrary::STATIC_GetHighestWeighted(float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights, float Threshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted");
		
		UPirateBodyShapeFunctionLibrary_GetHighestWeighted_Params params {};
		params.BaseMeshBlendWeight = BaseMeshBlendWeight;
		params.BodyShapeBlendNames = BodyShapeBlendNames;
		params.BodyShapeBlendWeights = BodyShapeBlendWeights;
		params.Threshold = Threshold;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159D290
	 * 		Name   -> Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EIPGGender                                         Gender                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRadialCoordinate                           BodyShapeWheelRadialCoordinate                             (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		float                                              BaseMeshBlendWeight                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              BodyShapeBlendNames                                        (Parm, OutParm, ZeroConstructor)
	 * 		TArray<float>                                      BodyShapeBlendWeights                                      (Parm, OutParm, ZeroConstructor)
	 */
	bool UPirateBodyShapeFunctionLibrary::STATIC_FindBodyBlendsFromBodyShapeWheelRadialCoordinate(EIPGGender Gender, const struct FRadialCoordinate& BodyShapeWheelRadialCoordinate, float* BaseMeshBlendWeight, TArray<class FString>* BodyShapeBlendNames, TArray<float>* BodyShapeBlendWeights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate");
		
		UPirateBodyShapeFunctionLibrary_FindBodyBlendsFromBodyShapeWheelRadialCoordinate_Params params {};
		params.Gender = Gender;
		params.BodyShapeWheelRadialCoordinate = BodyShapeWheelRadialCoordinate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseMeshBlendWeight != nullptr)
			*BaseMeshBlendWeight = params.BaseMeshBlendWeight;
		if (BodyShapeBlendNames != nullptr)
			*BodyShapeBlendNames = params.BodyShapeBlendNames;
		if (BodyShapeBlendWeights != nullptr)
			*BodyShapeBlendWeights = params.BodyShapeBlendWeights;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159D210
	 * 		Name   -> Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   UV                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRadialCoordinate UPirateBodyShapeFunctionLibrary::STATIC_ConvertToRadialCoordinate(const struct FVector2D& UV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate");
		
		UPirateBodyShapeFunctionLibrary_ConvertToRadialCoordinate_Params params {};
		params.UV = UV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159D180
	 * 		Name   -> Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRadialCoordinate                           Coord                                                      (Parm)
	 */
	struct FVector2D UPirateBodyShapeFunctionLibrary::STATIC_ConvertFromRadialCoordinate(const struct FRadialCoordinate& Coord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate");
		
		UPirateBodyShapeFunctionLibrary_ConvertFromRadialCoordinate_Params params {};
		params.Coord = Coord;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPirateBodyShapeFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPirateBodyShapeFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.PirateBodyShapeFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPirateGeneratorMaterials.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPirateGeneratorMaterials::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.PirateGeneratorMaterials");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159FC20
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RelativePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FPirateDescription                          InDesc                                                     (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool UPirateGeneratorFunctionLibrary::STATIC_SavePirateDescription(const class FString& RelativePath, const struct FPirateDescription& InDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription");
		
		UPirateGeneratorFunctionLibrary_SavePirateDescription_Params params {};
		params.RelativePath = RelativePath;
		params.InDesc = InDesc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159FB00
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FRadialCoordinate UPirateGeneratorFunctionLibrary::STATIC_RandomBodyShape(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape");
		
		UPirateGeneratorFunctionLibrary_RandomBodyShape_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159F1A0
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadWardrobeDataAsset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UWardrobeDataAsset* UPirateGeneratorFunctionLibrary::STATIC_LoadWardrobeDataAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadWardrobeDataAsset");
		
		UPirateGeneratorFunctionLibrary_LoadWardrobeDataAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159F050
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RelativePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FPirateDescription                          OutDesc                                                    (Parm, OutParm)
	 */
	bool UPirateGeneratorFunctionLibrary::STATIC_LoadPirateDescription(const class FString& RelativePath, struct FPirateDescription* OutDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription");
		
		UPirateGeneratorFunctionLibrary_LoadPirateDescription_Params params {};
		params.RelativePath = RelativePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDesc != nullptr)
			*OutDesc = params.OutDesc;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159ED80
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPirateDescription                          Desc                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		EPirateBakeFlags                                   Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               OutMesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPirateGeneratorAdditionalBakeInfo          OutAdditionalBakeInfo                                      (Parm, OutParm)
	 * 		struct FPirateDescription                          OutDesc                                                    (Parm, OutParm)
	 */
	void UPirateGeneratorFunctionLibrary::STATIC_K2_BakeFromDescriptionGameThread(const struct FPirateDescription& Desc, EPirateBakeFlags Flags, class USkeletalMesh** OutMesh, struct FPirateGeneratorAdditionalBakeInfo* OutAdditionalBakeInfo, struct FPirateDescription* OutDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread");
		
		UPirateGeneratorFunctionLibrary_K2_BakeFromDescriptionGameThread_Params params {};
		params.Desc = Desc;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMesh != nullptr)
			*OutMesh = params.OutMesh;
		if (OutAdditionalBakeInfo != nullptr)
			*OutAdditionalBakeInfo = params.OutAdditionalBakeInfo;
		if (OutDesc != nullptr)
			*OutDesc = params.OutDesc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159ED50
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UPirateGeneratorFunctionLibrary::STATIC_IPGLatestVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion");
		
		UPirateGeneratorFunctionLibrary_IPGLatestVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159EC50
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      RefName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	int32_t UPirateGeneratorFunctionLibrary::STATIC_GetSeedFromString(const class FString& RefName, const class FString& Str)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString");
		
		UPirateGeneratorFunctionLibrary_GetSeedFromString_Params params {};
		params.RefName = RefName;
		params.Str = Str;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159DDA0
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMesh*                               Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FPirateGeneratorTextureReference>    OutReferences                                              (Parm, OutParm, ZeroConstructor)
	 */
	void UPirateGeneratorFunctionLibrary::STATIC_GetAllTextureReferences(class USkeletalMesh* Mesh, TArray<struct FPirateGeneratorTextureReference>* OutReferences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences");
		
		UPirateGeneratorFunctionLibrary_GetAllTextureReferences_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutReferences != nullptr)
			*OutReferences = params.OutReferences;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159DC90
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FString> UPirateGeneratorFunctionLibrary::STATIC_GetAllDescriptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions");
		
		UPirateGeneratorFunctionLibrary_GetAllDescriptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159D880
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Version                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOverrideBodyShape                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRadialCoordinate                           BodyShapeOverride                                          (Parm)
	 * 		EIPGGender                                         SpecificGender                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIPGEthnicity                                      SpecificEthnicity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FIPGDynamicSlider>                   DynamicSliders                                             (Parm, ZeroConstructor)
	 * 		TArray<class FName>                                TextureReferences                                          (Parm, ZeroConstructor)
	 * 		TArray<struct FIPGScalarParameter>                 ScalarParameters                                           (Parm, ZeroConstructor)
	 */
	struct FPirateDescription UPirateGeneratorFunctionLibrary::STATIC_GenerateRandomPirateWithVersion(int32_t Seed, int32_t Version, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, EIPGGender SpecificGender, EIPGEthnicity SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<class FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion");
		
		UPirateGeneratorFunctionLibrary_GenerateRandomPirateWithVersion_Params params {};
		params.Seed = Seed;
		params.Version = Version;
		params.bOverrideBodyShape = bOverrideBodyShape;
		params.BodyShapeOverride = BodyShapeOverride;
		params.SpecificGender = SpecificGender;
		params.SpecificEthnicity = SpecificEthnicity;
		params.DynamicSliders = DynamicSliders;
		params.TextureReferences = TextureReferences;
		params.ScalarParameters = ScalarParameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159D4B0
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOverrideBodyShape                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRadialCoordinate                           BodyShapeOverride                                          (Parm)
	 * 		EIPGGender                                         SpecificGender                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIPGEthnicity                                      SpecificEthnicity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FIPGDynamicSlider>                   DynamicSliders                                             (Parm, ZeroConstructor)
	 * 		TArray<class FName>                                TextureReferences                                          (Parm, ZeroConstructor)
	 * 		TArray<struct FIPGScalarParameter>                 ScalarParameters                                           (Parm, ZeroConstructor)
	 */
	struct FPirateDescription UPirateGeneratorFunctionLibrary::STATIC_GenerateRandomPirate(int32_t Seed, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, EIPGGender SpecificGender, EIPGEthnicity SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<class FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate");
		
		UPirateGeneratorFunctionLibrary_GenerateRandomPirate_Params params {};
		params.Seed = Seed;
		params.bOverrideBodyShape = bOverrideBodyShape;
		params.BodyShapeOverride = BodyShapeOverride;
		params.SpecificGender = SpecificGender;
		params.SpecificEthnicity = SpecificEthnicity;
		params.DynamicSliders = DynamicSliders;
		params.TextureReferences = TextureReferences;
		params.ScalarParameters = ScalarParameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159CB00
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeMeshWithNewMaterial
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InMaterialName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPirateDescription                          InPirateDesc                                               (Parm)
	 * 		bool                                               InFirstPerson                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FScriptDelegate                              Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UPirateGeneratorFunctionLibrary::STATIC_BakeMeshWithNewMaterial(const class FName& InMaterialName, const struct FPirateDescription& InPirateDesc, bool InFirstPerson, const class FScriptDelegate& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeMeshWithNewMaterial");
		
		UPirateGeneratorFunctionLibrary_BakeMeshWithNewMaterial_Params params {};
		params.InMaterialName = InMaterialName;
		params.InPirateDesc = InPirateDesc;
		params.InFirstPerson = InFirstPerson;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159C960
	 * 		Name   -> Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPirateDescription                          Desc                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		EPirateBakeFlags                                   Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              AsyncResult                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UPirateGeneratorFunctionLibrary::STATIC_BakeFromDescriptionAsync(const struct FPirateDescription& Desc, EPirateBakeFlags Flags, const class FScriptDelegate& AsyncResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync");
		
		UPirateGeneratorFunctionLibrary_BakeFromDescriptionAsync_Params params {};
		params.Desc = Desc;
		params.Flags = Flags;
		params.AsyncResult = AsyncResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPirateGeneratorFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPirateGeneratorFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.PirateGeneratorFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWardrobeExcludeDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWardrobeExcludeDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.WardrobeExcludeDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159FB90
	 * 		Name   -> Function PirateGenerator.WardrobeDataAsset.Rebuild
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               LoadAllAssets                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UWardrobeDataAsset::Rebuild(bool LoadAllAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeDataAsset.Rebuild");
		
		UWardrobeDataAsset_Rebuild_Params params {};
		params.LoadAllAssets = LoadAllAssets;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159E7E0
	 * 		Name   -> Function PirateGenerator.WardrobeDataAsset.GetNumNewAssets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UWardrobeDataAsset::GetNumNewAssets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeDataAsset.GetNumNewAssets");
		
		UWardrobeDataAsset_GetNumNewAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWardrobeDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWardrobeDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.WardrobeDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPirateGeneratorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPirateGeneratorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.PirateGeneratorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159F860
	 * 		Name   -> Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               MeshWithBaseSkeleton                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletonsDataAsset*                         SkeletonsDataAsset                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      MeshTypeSkeletonFileFormat                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              BaseMeshBlendWeight                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              BodyShapeBlendNames                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      BodyShapeBlendWeights                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UPreparePirateMeshBakeTestFunctionLibrary::STATIC_PopulateSkeletonBlendsInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, class USkeletalMesh* MeshWithBaseSkeleton, class USkeletonsDataAsset* SkeletonsDataAsset, const class FString& MeshTypeSkeletonFileFormat, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification");
		
		UPreparePirateMeshBakeTestFunctionLibrary_PopulateSkeletonBlendsInCharacterMeshBakeSpecification_Params params {};
		params.CharacterMeshBakeSpecification = CharacterMeshBakeSpecification;
		params.MeshWithBaseSkeleton = MeshWithBaseSkeleton;
		params.SkeletonsDataAsset = SkeletonsDataAsset;
		params.MeshTypeSkeletonFileFormat = MeshTypeSkeletonFileFormat;
		params.BaseMeshBlendWeight = BaseMeshBlendWeight;
		params.BodyShapeBlendNames = BodyShapeBlendNames;
		params.BodyShapeBlendWeights = BodyShapeBlendWeights;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159F630
	 * 		Name   -> Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UCharacterMeshBakeSpecification*             CharacterMeshBakeSpecification                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class USkeletalMesh*>                       SubMeshes                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		float                                              BaseMeshBlendWeight                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              BodyShapeBlendNames                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      BodyShapeBlendWeights                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UPreparePirateMeshBakeTestFunctionLibrary::STATIC_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, TArray<class USkeletalMesh*> SubMeshes, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification");
		
		UPreparePirateMeshBakeTestFunctionLibrary_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification_Params params {};
		params.CharacterMeshBakeSpecification = CharacterMeshBakeSpecification;
		params.SubMeshes = SubMeshes;
		params.BaseMeshBlendWeight = BaseMeshBlendWeight;
		params.BodyShapeBlendNames = BodyShapeBlendNames;
		params.BodyShapeBlendWeights = BodyShapeBlendWeights;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreparePirateMeshBakeTestFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreparePirateMeshBakeTestFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextureSwitch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextureSwitch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.TextureSwitch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextureSwitchBySeed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextureSwitchBySeed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.TextureSwitchBySeed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextureSwitchByGender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextureSwitchByGender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.TextureSwitchByGender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextureSwitchByEthnicity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextureSwitchByEthnicity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.TextureSwitchByEthnicity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextureSwitchByBodyShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextureSwitchByBodyShape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.TextureSwitchByBodyShape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextureSwitchByItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextureSwitchByItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.TextureSwitchByItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UColorTextureSwitchBySeed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UColorTextureSwitchBySeed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.ColorTextureSwitchBySeed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159E2B0
	 * 		Name   -> Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UWardrobeOutfitDataAsset::GetBiasForCategory(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory");
		
		UWardrobeOutfitDataAsset_GetBiasForCategory_Params params {};
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
	 * 		Name   -> PredefinedFunction UWardrobeOutfitDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWardrobeOutfitDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.WardrobeOutfitDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159F420
	 * 		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FName>                                ClothingItemNames                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class FName>                                Tags                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		EIPGPirateType                                     PirateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIPGGender                                         Gender                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              AsyncResult                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UWardrobeFunctionLibrary::STATIC_PickOutfitAsync(TArray<class FName> ClothingItemNames, TArray<class FName> Tags, EIPGPirateType PirateType, EIPGGender Gender, const class FScriptDelegate& AsyncResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync");
		
		UWardrobeFunctionLibrary_PickOutfitAsync_Params params {};
		params.ClothingItemNames = ClothingItemNames;
		params.Tags = Tags;
		params.PirateType = PirateType;
		params.Gender = Gender;
		params.AsyncResult = AsyncResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159F200
	 * 		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FName>                                ClothingItemNames                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class FName>                                Tags                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		EIPGPirateType                                     PirateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIPGGender                                         Gender                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWardrobeOutfitResult                       Result                                                     (Parm, OutParm)
	 */
	bool UWardrobeFunctionLibrary::STATIC_PickOutfit(TArray<class FName> ClothingItemNames, TArray<class FName> Tags, EIPGPirateType PirateType, EIPGGender Gender, struct FWardrobeOutfitResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit");
		
		UWardrobeFunctionLibrary_PickOutfit_Params params {};
		params.ClothingItemNames = ClothingItemNames;
		params.Tags = Tags;
		params.PirateType = PirateType;
		params.Gender = Gender;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159EAA0
	 * 		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                InputItems                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FWardrobeOutfitCategoryBias>         BiasPerCategory                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<class FName> UWardrobeFunctionLibrary::STATIC_GetRandomWardrobeItemsWithBias(int32_t Seed, TArray<class FName> InputItems, TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias");
		
		UWardrobeFunctionLibrary_GetRandomWardrobeItemsWithBias_Params params {};
		params.Seed = Seed;
		params.InputItems = InputItems;
		params.BiasPerCategory = BiasPerCategory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159E960
	 * 		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                InputItems                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<class FName> UWardrobeFunctionLibrary::STATIC_GetRandomWardrobeItems(int32_t Seed, TArray<class FName> InputItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems");
		
		UWardrobeFunctionLibrary_GetRandomWardrobeItems_Params params {};
		params.Seed = Seed;
		params.InputItems = InputItems;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159E810
	 * 		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWardrobeOutfitDataAsset*                    Outfit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIPGGender                                         Gender                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<class FName> UWardrobeFunctionLibrary::STATIC_GetRandomOutfit(class UWardrobeOutfitDataAsset* Outfit, int32_t Seed, EIPGGender Gender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit");
		
		UWardrobeFunctionLibrary_GetRandomOutfit_Params params {};
		params.Outfit = Outfit;
		params.Seed = Seed;
		params.Gender = Gender;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159E110
	 * 		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FName> UWardrobeFunctionLibrary::STATIC_GetAllWardrobeTypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes");
		
		UWardrobeFunctionLibrary_GetAllWardrobeTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159DFA0
	 * 		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      TypeName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EIPGPirateType                                     PirateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWithExclusions                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	TArray<class FName> UWardrobeFunctionLibrary::STATIC_GetAllWardrobeItemsForType(const class FString& TypeName, EIPGPirateType PirateType, bool bWithExclusions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType");
		
		UWardrobeFunctionLibrary_GetAllWardrobeItemsForType_Params params {};
		params.TypeName = TypeName;
		params.PirateType = PirateType;
		params.bWithExclusions = bWithExclusions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159DEC0
	 * 		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EIPGPirateType                                     PirateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<class FName> UWardrobeFunctionLibrary::STATIC_GetAllWardrobeItems(EIPGPirateType PirateType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems");
		
		UWardrobeFunctionLibrary_GetAllWardrobeItems_Params params {};
		params.PirateType = PirateType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0159CFC0
	 * 		Name   -> Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FName>                                ClothingItemNames                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class FName>                                Tags                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		EIPGPirateType                                     PirateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIPGGender                                         Gender                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWardrobeFunctionLibrary::STATIC_CanLoadOutfit(TArray<class FName> ClothingItemNames, TArray<class FName> Tags, EIPGPirateType PirateType, EIPGGender Gender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit");
		
		UWardrobeFunctionLibrary_CanLoadOutfit_Params params {};
		params.ClothingItemNames = ClothingItemNames;
		params.Tags = Tags;
		params.PirateType = PirateType;
		params.Gender = Gender;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class USkeletalMesh*>                       Meshes                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UWardrobeFunctionLibrary::AsyncOutfitResultDynamic__DelegateSignature(bool Success, TArray<class USkeletalMesh*> Meshes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature");
		
		UWardrobeFunctionLibrary_AsyncOutfitResultDynamic__DelegateSignature_Params params {};
		params.Success = Success;
		params.Meshes = Meshes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWardrobeFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWardrobeFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PirateGenerator.WardrobeFunctionLibrary");
		return ptr;
	}

}


