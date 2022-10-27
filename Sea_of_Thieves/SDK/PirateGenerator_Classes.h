#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class PirateGenerator.AnimationSwitchDataAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAnimationSwitchDataAsset : public UDataAsset
	{
	public:
		float                                                      Threshold;                                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ECAQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimationSwitchEntry>                       Entries;                                                 // 0x0030(0x0010) Edit, ZeroConstructor

	public:
		class UClass* GetAnimSetIdForDesc(const struct FPirateDescription& Desc);
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.CharacterMeshBakeFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCharacterMeshBakeFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_BakeCharacterMeshAsync(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, const class FScriptDelegate& AsyncResult);
		class USkeletalMesh* STATIC_BakeCharacterMesh(class UCharacterMeshBakeSpecification* CharacterMeshSpecification);
		void AsyncBakeResultDynamic__DelegateSignature(class USkeletalMesh* Mesh);
		void STATIC_AppendCharacterBlendShapes(class UCharacterMeshBakeSpecification* CharacterMeshSpecification, TArray<struct FIPGBlendShape> BlendShapes);
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.SkeletonsDataAsset
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class USkeletonsDataAsset : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_CWMW[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.CharacterMeshBakeSpecification
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UCharacterMeshBakeSpecification : public UObject
	{
	public:
		bool                                                       StripTopLOD;                                             // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3NL9[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       CharacterMesh;                                           // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       BaseMeshReferenceSkeleton;                               // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletonsDataAsset*                                 SourceSkeletons;                                         // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        SourceSkeletonNames;                                     // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<float>                                              SourceSkeletonWeights;                                   // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<struct FBlendedSubMeshSpecification>                BlendedSubMeshes;                                        // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<class USkeletalMesh*>                               UnblendedSubMeshes;                                      // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<struct FIPGBlendShape>                              BlendShapes;                                             // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.CharacterMeshBakeTestFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCharacterMeshBakeTestFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UCharacterMeshBakeSpecification* STATIC_MakeCharacterMeshSpecification();
		void STATIC_BlendMeshWithMeshPatchAssets(class USkeletalMesh* BaseMesh, float BaseMeshWeight, TArray<class UMeshPatchAsset*> MeshPatchAssets, TArray<float> MeshPatchAssetWeights, class USkeletalMesh** TargetMesh);
		class USkeletalMesh* STATIC_BakeCharacterMeshFromClassDefault(class UClass* CharacterMeshBakeSpecificationClass);
		bool STATIC_AreMeshesEquivalentByMeshPatchCriteria(class USkeletalMesh* MeshA, class USkeletalMesh* MeshB);
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.ColorTexture
	 * Size -> 0x0010 (FullSize[0x0148] - InheritedSize[0x0138])
	 */
	class UColorTexture : public UTexture
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.FileAccessFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFileAccessFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_GetMeshPatchAssetPathFromMeshPathAndTypeName(const class FString& MeshPath, const class FString& TypeName);
		class UMeshPatchAsset* STATIC_GetMeshPatchAssetForMeshFromTypeName(class USkeletalMesh* Mesh, const class FString& TypeName);
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.MaterialReferencesDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMaterialReferencesDataAsset : public UDataAsset
	{
	public:
		TArray<struct FMaterialReferencesEntry>                    MaterialReferences;                                      // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.PirateBodyShapeFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPirateBodyShapeFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_GetHighestWeighted(float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights, float Threshold);
		bool STATIC_FindBodyBlendsFromBodyShapeWheelRadialCoordinate(EIPGGender Gender, const struct FRadialCoordinate& BodyShapeWheelRadialCoordinate, float* BaseMeshBlendWeight, TArray<class FString>* BodyShapeBlendNames, TArray<float>* BodyShapeBlendWeights);
		struct FRadialCoordinate STATIC_ConvertToRadialCoordinate(const struct FVector2D& UV);
		struct FVector2D STATIC_ConvertFromRadialCoordinate(const struct FRadialCoordinate& Coord);
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.PirateGeneratorMaterials
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPirateGeneratorMaterials : public UObject
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0028(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.PirateGeneratorFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPirateGeneratorFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SavePirateDescription(const class FString& RelativePath, const struct FPirateDescription& InDesc);
		struct FRadialCoordinate STATIC_RandomBodyShape(int32_t Seed);
		class UWardrobeDataAsset* STATIC_LoadWardrobeDataAsset();
		bool STATIC_LoadPirateDescription(const class FString& RelativePath, struct FPirateDescription* OutDesc);
		void STATIC_K2_BakeFromDescriptionGameThread(const struct FPirateDescription& Desc, EPirateBakeFlags Flags, class USkeletalMesh** OutMesh, struct FPirateGeneratorAdditionalBakeInfo* OutAdditionalBakeInfo, struct FPirateDescription* OutDesc);
		int32_t STATIC_IPGLatestVersion();
		int32_t STATIC_GetSeedFromString(const class FString& RefName, const class FString& Str);
		void STATIC_GetAllTextureReferences(class USkeletalMesh* Mesh, TArray<struct FPirateGeneratorTextureReference>* OutReferences);
		TArray<class FString> STATIC_GetAllDescriptions();
		struct FPirateDescription STATIC_GenerateRandomPirateWithVersion(int32_t Seed, int32_t Version, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, EIPGGender SpecificGender, EIPGEthnicity SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<class FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters);
		struct FPirateDescription STATIC_GenerateRandomPirate(int32_t Seed, bool bOverrideBodyShape, const struct FRadialCoordinate& BodyShapeOverride, EIPGGender SpecificGender, EIPGEthnicity SpecificEthnicity, TArray<struct FIPGDynamicSlider> DynamicSliders, TArray<class FName> TextureReferences, TArray<struct FIPGScalarParameter> ScalarParameters);
		void STATIC_BakeMeshWithNewMaterial(const class FName& InMaterialName, const struct FPirateDescription& InPirateDesc, bool InFirstPerson, const class FScriptDelegate& Result);
		void STATIC_BakeFromDescriptionAsync(const struct FPirateDescription& Desc, EPirateBakeFlags Flags, const class FScriptDelegate& AsyncResult);
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.WardrobeExcludeDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UWardrobeExcludeDataAsset : public UDataAsset
	{
	public:
		TArray<class FName>                                        ExcludeItems;                                            // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.WardrobeDataAsset
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UWardrobeDataAsset : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_3ZBV[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMeshPatchEntry>                             AssetMap;                                                // 0x00C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst

	public:
		bool Rebuild(bool LoadAllAssets);
		int32_t GetNumNewAssets();
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.PirateGeneratorSettings
	 * Size -> 0x00F8 (FullSize[0x0130] - InheritedSize[0x0038])
	 */
	class UPirateGeneratorSettings : public UDeveloperSettings
	{
	public:
		struct FStringAssetReference                               WardrobeDataAsset;                                       // 0x0038(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		class FString                                              ConfigJson;                                              // 0x0048(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              PiratesFolder;                                           // 0x0058(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              WardrobeFolder;                                          // 0x0068(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FName>                                        DefaultWardrobeItems;                                    // 0x0078(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		struct FStringAssetReference                               MaterialReferencesDataAsset;                             // 0x0088(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		struct FStringAssetReference                               SkeletonsDataAsset;                                      // 0x0098(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		TArray<struct FStringAssetReference>                       BaseSkeletonMeshes;                                      // 0x00A8(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		TArray<struct FStringAssetReference>                       Characterization;                                        // 0x00B8(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		TArray<class FString>                                      SkeletonMeshFormats;                                     // 0x00C8(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		struct FStringAssetReference                               FirstPersonAnimations;                                   // 0x00D8(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		struct FStringAssetReference                               ThirdPersonAnimations;                                   // 0x00E8(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		TArray<float>                                              LODScreenSizes;                                          // 0x00F8(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		TArray<float>                                              LODHysteresis;                                           // 0x0108(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		TArray<struct FStringAssetReference>                       ExcludeDataAssets;                                       // 0x0118(0x0010) Edit, ZeroConstructor, Config, DisableEditOnInstance
		int32_t                                                    DefaultPirateGenerationSeed;                             // 0x0128(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NP67[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.PreparePirateMeshBakeTestFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPreparePirateMeshBakeTestFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_PopulateSkeletonBlendsInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, class USkeletalMesh* MeshWithBaseSkeleton, class USkeletonsDataAsset* SkeletonsDataAsset, const class FString& MeshTypeSkeletonFileFormat, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights);
		void STATIC_PopulateBlendedSubMeshesInCharacterMeshBakeSpecification(class UCharacterMeshBakeSpecification* CharacterMeshBakeSpecification, TArray<class USkeletalMesh*> SubMeshes, float BaseMeshBlendWeight, TArray<class FString> BodyShapeBlendNames, TArray<float> BodyShapeBlendWeights);
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.TextureSwitch
	 * Size -> 0x00E0 (FullSize[0x0220] - InheritedSize[0x0140])
	 */
	class UTextureSwitch : public UTextureProxy
	{
	public:
		unsigned char                                              UnknownData_D1C4[0x80];                                  // 0x0140(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDuplicated;                                             // 0x01C0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_5DIT[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextureSwitchParameters                            DefaultParameters;                                       // 0x01C8(0x0058) Edit, BlueprintVisible, BlueprintReadOnly

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.TextureSwitchBySeed
	 * Size -> 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
	 */
	class UTextureSwitchBySeed : public UTextureSwitch
	{
	public:
		class FName                                                HashSource;                                              // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FallbackProbability;                                     // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FallbackReferenceName;                                   // 0x022C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7HLL[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringAssetReference                               FallbackTexture;                                         // 0x0238(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<struct FTextureSwitchSeedEntry>                     Entries;                                                 // 0x0248(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.TextureSwitchByGender
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class UTextureSwitchByGender : public UTextureSwitch
	{
	public:
		TArray<struct FTextureSwitchGenderEntry>                   Entries;                                                 // 0x0220(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.TextureSwitchByEthnicity
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class UTextureSwitchByEthnicity : public UTextureSwitch
	{
	public:
		TArray<struct FTextureSwitchEthnicityEntry>                Entries;                                                 // 0x0220(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.TextureSwitchByBodyShape
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class UTextureSwitchByBodyShape : public UTextureSwitch
	{
	public:
		TArray<struct FTextureSwitchBodyShapeEntry>                Entries;                                                 // 0x0220(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.TextureSwitchByItem
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class UTextureSwitchByItem : public UTextureSwitch
	{
	public:
		struct FStringAssetReference                               FallbackTexture;                                         // 0x0220(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<struct FTextureSwitchItemEntry>                     Entries;                                                 // 0x0230(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.ColorTextureSwitchBySeed
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class UColorTextureSwitchBySeed : public UTextureSwitch
	{
	public:
		class FName                                                HashSource;                                              // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FColorTextureSwitchSeedEntry>                Entries;                                                 // 0x0228(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.WardrobeOutfitDataAsset
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UWardrobeOutfitDataAsset : public UDataAsset
	{
	public:
		TArray<class FName>                                        FemaleWardrobeItems;                                     // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<class FName>                                        MaleWardrobeItems;                                       // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<struct FWardrobeOutfitCategoryBias>                 BiasPerCategory;                                         // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor

	public:
		float GetBiasForCategory(const class FName& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class PirateGenerator.WardrobeFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWardrobeFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_PickOutfitAsync(TArray<class FName> ClothingItemNames, TArray<class FName> Tags, EIPGPirateType PirateType, EIPGGender Gender, const class FScriptDelegate& AsyncResult);
		bool STATIC_PickOutfit(TArray<class FName> ClothingItemNames, TArray<class FName> Tags, EIPGPirateType PirateType, EIPGGender Gender, struct FWardrobeOutfitResult* Result);
		TArray<class FName> STATIC_GetRandomWardrobeItemsWithBias(int32_t Seed, TArray<class FName> InputItems, TArray<struct FWardrobeOutfitCategoryBias> BiasPerCategory);
		TArray<class FName> STATIC_GetRandomWardrobeItems(int32_t Seed, TArray<class FName> InputItems);
		TArray<class FName> STATIC_GetRandomOutfit(class UWardrobeOutfitDataAsset* Outfit, int32_t Seed, EIPGGender Gender);
		TArray<class FName> STATIC_GetAllWardrobeTypes();
		TArray<class FName> STATIC_GetAllWardrobeItemsForType(const class FString& TypeName, EIPGPirateType PirateType, bool bWithExclusions);
		TArray<class FName> STATIC_GetAllWardrobeItems(EIPGPirateType PirateType);
		bool STATIC_CanLoadOutfit(TArray<class FName> ClothingItemNames, TArray<class FName> Tags, EIPGPirateType PirateType, EIPGGender Gender);
		void AsyncOutfitResultDynamic__DelegateSignature(bool Success, TArray<class USkeletalMesh*> Meshes);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
