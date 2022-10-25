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
	 * Function PirateGenerator.AnimationSwitchDataAsset.GetAnimSetIdForDesc
	 */
	struct UAnimationSwitchDataAsset_GetAnimSetIdForDesc_Params
	{
	public:
		struct FPirateDescription                                  Desc;                                                    // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UClass*                                              ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMeshAsync
	 */
	struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMeshAsync_Params
	{
	public:
		class UCharacterMeshBakeSpecification*                     CharacterMeshSpecification;                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      AsyncResult;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PirateGenerator.CharacterMeshBakeFunctionLibrary.BakeCharacterMesh
	 */
	struct UCharacterMeshBakeFunctionLibrary_BakeCharacterMesh_Params
	{
	public:
		class UCharacterMeshBakeSpecification*                     CharacterMeshSpecification;                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * DelegateFunction PirateGenerator.CharacterMeshBakeFunctionLibrary.AsyncBakeResultDynamic__DelegateSignature
	 */
	struct UCharacterMeshBakeFunctionLibrary_AsyncBakeResultDynamic__DelegateSignature_Params
	{
	public:
		class USkeletalMesh*                                       Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.CharacterMeshBakeFunctionLibrary.AppendCharacterBlendShapes
	 */
	struct UCharacterMeshBakeFunctionLibrary_AppendCharacterBlendShapes_Params
	{
	public:
		class UCharacterMeshBakeSpecification*                     CharacterMeshSpecification;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FIPGBlendShape>                              BlendShapes;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.MakeCharacterMeshSpecification
	 */
	struct UCharacterMeshBakeTestFunctionLibrary_MakeCharacterMeshSpecification_Params
	{
	public:
		class UCharacterMeshBakeSpecification*                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BlendMeshWithMeshPatchAssets
	 */
	struct UCharacterMeshBakeTestFunctionLibrary_BlendMeshWithMeshPatchAssets_Params
	{
	public:
		class USkeletalMesh*                                       BaseMesh;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BaseMeshWeight;                                          // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8ETD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UMeshPatchAsset*>                             MeshPatchAssets;                                         // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              MeshPatchAssetWeights;                                   // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class USkeletalMesh*                                       TargetMesh;                                              // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.BakeCharacterMeshFromClassDefault
	 */
	struct UCharacterMeshBakeTestFunctionLibrary_BakeCharacterMeshFromClassDefault_Params
	{
	public:
		class UClass*                                              CharacterMeshBakeSpecificationClass;                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class USkeletalMesh*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.CharacterMeshBakeTestFunctionLibrary.AreMeshesEquivalentByMeshPatchCriteria
	 */
	struct UCharacterMeshBakeTestFunctionLibrary_AreMeshesEquivalentByMeshPatchCriteria_Params
	{
	public:
		class USkeletalMesh*                                       MeshA;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       MeshB;                                                   // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetPathFromMeshPathAndTypeName
	 */
	struct UFileAccessFunctionLibrary_GetMeshPatchAssetPathFromMeshPathAndTypeName_Params
	{
	public:
		class FString                                              MeshPath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              TypeName;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.FileAccessFunctionLibrary.GetMeshPatchAssetForMeshFromTypeName
	 */
	struct UFileAccessFunctionLibrary_GetMeshPatchAssetForMeshFromTypeName_Params
	{
	public:
		class USkeletalMesh*                                       Mesh;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              TypeName;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class UMeshPatchAsset*                                     ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.PirateBodyShapeFunctionLibrary.GetHighestWeighted
	 */
	struct UPirateBodyShapeFunctionLibrary_GetHighestWeighted_Params
	{
	public:
		float                                                      BaseMeshBlendWeight;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PCU2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      BodyShapeBlendNames;                                     // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              BodyShapeBlendWeights;                                   // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      Threshold;                                               // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WG51[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.PirateBodyShapeFunctionLibrary.FindBodyBlendsFromBodyShapeWheelRadialCoordinate
	 */
	struct UPirateBodyShapeFunctionLibrary_FindBodyBlendsFromBodyShapeWheelRadialCoordinate_Params
	{
	public:
		EIPGGender                                                 Gender;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IPMN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRadialCoordinate                                   BodyShapeWheelRadialCoordinate;                          // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
		float                                                      BaseMeshBlendWeight;                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      BodyShapeBlendNames;                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<float>                                              BodyShapeBlendWeights;                                   // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertToRadialCoordinate
	 */
	struct UPirateBodyShapeFunctionLibrary_ConvertToRadialCoordinate_Params
	{
	public:
		struct FVector2D                                           UV;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRadialCoordinate                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PirateGenerator.PirateBodyShapeFunctionLibrary.ConvertFromRadialCoordinate
	 */
	struct UPirateBodyShapeFunctionLibrary_ConvertFromRadialCoordinate_Params
	{
	public:
		struct FRadialCoordinate                                   Coord;                                                   // 0x0000(0x0008)  (Parm)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.SavePirateDescription
	 */
	struct UPirateGeneratorFunctionLibrary_SavePirateDescription_Params
	{
	public:
		class FString                                              RelativePath;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FPirateDescription                                  InDesc;                                                  // 0x0010(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.RandomBodyShape
	 */
	struct UPirateGeneratorFunctionLibrary_RandomBodyShape_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRadialCoordinate                                   ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadWardrobeDataAsset
	 */
	struct UPirateGeneratorFunctionLibrary_LoadWardrobeDataAsset_Params
	{
	public:
		class UWardrobeDataAsset*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.LoadPirateDescription
	 */
	struct UPirateGeneratorFunctionLibrary_LoadPirateDescription_Params
	{
	public:
		class FString                                              RelativePath;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FPirateDescription                                  OutDesc;                                                 // 0x0010(0x0080)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.K2_BakeFromDescriptionGameThread
	 */
	struct UPirateGeneratorFunctionLibrary_K2_BakeFromDescriptionGameThread_Params
	{
	public:
		struct FPirateDescription                                  Desc;                                                    // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm)
		EPirateBakeFlags                                           Flags;                                                   // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SJAF[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMesh*                                       OutMesh;                                                 // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPirateGeneratorAdditionalBakeInfo                  OutAdditionalBakeInfo;                                   // 0x0090(0x0020)  (Parm, OutParm)
		struct FPirateDescription                                  OutDesc;                                                 // 0x00B0(0x0080)  (Parm, OutParm)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.IPGLatestVersion
	 */
	struct UPirateGeneratorFunctionLibrary_IPGLatestVersion_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.GetSeedFromString
	 */
	struct UPirateGeneratorFunctionLibrary_GetSeedFromString_Params
	{
	public:
		class FString                                              RefName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Str;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllTextureReferences
	 */
	struct UPirateGeneratorFunctionLibrary_GetAllTextureReferences_Params
	{
	public:
		class USkeletalMesh*                                       Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FPirateGeneratorTextureReference>            OutReferences;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.GetAllDescriptions
	 */
	struct UPirateGeneratorFunctionLibrary_GetAllDescriptions_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirateWithVersion
	 */
	struct UPirateGeneratorFunctionLibrary_GenerateRandomPirateWithVersion_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Version;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOverrideBodyShape;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LS7I[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRadialCoordinate                                   BodyShapeOverride;                                       // 0x000C(0x0008)  (Parm)
		EIPGGender                                                 SpecificGender;                                          // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIPGEthnicity                                              SpecificEthnicity;                                       // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D36A[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FIPGDynamicSlider>                           DynamicSliders;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor)
		TArray<class FName>                                        TextureReferences;                                       // 0x0028(0x0010)  (Parm, ZeroConstructor)
		TArray<struct FIPGScalarParameter>                         ScalarParameters;                                        // 0x0038(0x0010)  (Parm, ZeroConstructor)
		struct FPirateDescription                                  ReturnValue;                                             // 0x0048(0x0080)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.GenerateRandomPirate
	 */
	struct UPirateGeneratorFunctionLibrary_GenerateRandomPirate_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOverrideBodyShape;                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3S64[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRadialCoordinate                                   BodyShapeOverride;                                       // 0x0008(0x0008)  (Parm)
		EIPGGender                                                 SpecificGender;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIPGEthnicity                                              SpecificEthnicity;                                       // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C69E[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FIPGDynamicSlider>                           DynamicSliders;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor)
		TArray<class FName>                                        TextureReferences;                                       // 0x0028(0x0010)  (Parm, ZeroConstructor)
		TArray<struct FIPGScalarParameter>                         ScalarParameters;                                        // 0x0038(0x0010)  (Parm, ZeroConstructor)
		struct FPirateDescription                                  ReturnValue;                                             // 0x0048(0x0080)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeMeshWithNewMaterial
	 */
	struct UPirateGeneratorFunctionLibrary_BakeMeshWithNewMaterial_Params
	{
	public:
		class FName                                                InMaterialName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPirateDescription                                  InPirateDesc;                                            // 0x0008(0x0080)  (Parm)
		bool                                                       InFirstPerson;                                           // 0x0088(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QOD0[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Result;                                                  // 0x008C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PirateGenerator.PirateGeneratorFunctionLibrary.BakeFromDescriptionAsync
	 */
	struct UPirateGeneratorFunctionLibrary_BakeFromDescriptionAsync_Params
	{
	public:
		struct FPirateDescription                                  Desc;                                                    // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm)
		EPirateBakeFlags                                           Flags;                                                   // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VAXG[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      AsyncResult;                                             // 0x0084(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PirateGenerator.WardrobeDataAsset.Rebuild
	 */
	struct UWardrobeDataAsset_Rebuild_Params
	{
	public:
		bool                                                       LoadAllAssets;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PirateGenerator.WardrobeDataAsset.GetNumNewAssets
	 */
	struct UWardrobeDataAsset_GetNumNewAssets_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateSkeletonBlendsInCharacterMeshBakeSpecification
	 */
	struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateSkeletonBlendsInCharacterMeshBakeSpecification_Params
	{
	public:
		class UCharacterMeshBakeSpecification*                     CharacterMeshBakeSpecification;                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       MeshWithBaseSkeleton;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletonsDataAsset*                                 SkeletonsDataAsset;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              MeshTypeSkeletonFileFormat;                              // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      BaseMeshBlendWeight;                                     // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JCK9[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      BodyShapeBlendNames;                                     // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              BodyShapeBlendWeights;                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary.PopulateBlendedSubMeshesInCharacterMeshBakeSpecification
	 */
	struct UPreparePirateMeshBakeTestFunctionLibrary_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification_Params
	{
	public:
		class UCharacterMeshBakeSpecification*                     CharacterMeshBakeSpecification;                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class USkeletalMesh*>                               SubMeshes;                                               // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      BaseMeshBlendWeight;                                     // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2EUU[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      BodyShapeBlendNames;                                     // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              BodyShapeBlendWeights;                                   // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function PirateGenerator.WardrobeOutfitDataAsset.GetBiasForCategory
	 */
	struct UWardrobeOutfitDataAsset_GetBiasForCategory_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PirateGenerator.WardrobeFunctionLibrary.PickOutfitAsync
	 */
	struct UWardrobeFunctionLibrary_PickOutfitAsync_Params
	{
	public:
		TArray<class FName>                                        ClothingItemNames;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FName>                                        Tags;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		EIPGPirateType                                             PirateType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIPGGender                                                 Gender;                                                  // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7MMP[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      AsyncResult;                                             // 0x0024(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PirateGenerator.WardrobeFunctionLibrary.PickOutfit
	 */
	struct UWardrobeFunctionLibrary_PickOutfit_Params
	{
	public:
		TArray<class FName>                                        ClothingItemNames;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FName>                                        Tags;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		EIPGPirateType                                             PirateType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIPGGender                                                 Gender;                                                  // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WQOT[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWardrobeOutfitResult                               Result;                                                  // 0x0028(0x0050)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItemsWithBias
	 */
	struct UWardrobeFunctionLibrary_GetRandomWardrobeItemsWithBias_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KD6X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        InputItems;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FWardrobeOutfitCategoryBias>                 BiasPerCategory;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FName>                                        ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PirateGenerator.WardrobeFunctionLibrary.GetRandomWardrobeItems
	 */
	struct UWardrobeFunctionLibrary_GetRandomWardrobeItems_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D0UD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        InputItems;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FName>                                        ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PirateGenerator.WardrobeFunctionLibrary.GetRandomOutfit
	 */
	struct UWardrobeFunctionLibrary_GetRandomOutfit_Params
	{
	public:
		class UWardrobeOutfitDataAsset*                            Outfit;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Seed;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIPGGender                                                 Gender;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G9J3[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeTypes
	 */
	struct UWardrobeFunctionLibrary_GetAllWardrobeTypes_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItemsForType
	 */
	struct UWardrobeFunctionLibrary_GetAllWardrobeItemsForType_Params
	{
	public:
		class FString                                              TypeName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		EIPGPirateType                                             PirateType;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWithExclusions;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GZKN[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PirateGenerator.WardrobeFunctionLibrary.GetAllWardrobeItems
	 */
	struct UWardrobeFunctionLibrary_GetAllWardrobeItems_Params
	{
	public:
		EIPGPirateType                                             PirateType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_39M4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PirateGenerator.WardrobeFunctionLibrary.CanLoadOutfit
	 */
	struct UWardrobeFunctionLibrary_CanLoadOutfit_Params
	{
	public:
		TArray<class FName>                                        ClothingItemNames;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FName>                                        Tags;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		EIPGPirateType                                             PirateType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIPGGender                                                 Gender;                                                  // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * DelegateFunction PirateGenerator.WardrobeFunctionLibrary.AsyncOutfitResultDynamic__DelegateSignature
	 */
	struct UWardrobeFunctionLibrary_AsyncOutfitResultDynamic__DelegateSignature_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y0CT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class USkeletalMesh*>                               Meshes;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
