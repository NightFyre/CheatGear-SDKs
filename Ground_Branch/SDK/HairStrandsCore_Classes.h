#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Class HairStrandsCore.GroomActor
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AGroomActor : public AActor
	{
	public:
		class UGroomComponent*                                     GroomComponent;                                          // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomAsset
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UGroomAsset : public UObject
	{
	public:
		unsigned char                                              UnknownData_HSXQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHairGroupInfoWithVisibility>                HairGroupsInfo;                                          // 0x0030(0x0010) Edit, EditFixedSize, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsRendering>                        HairGroupsRendering;                                     // 0x0040(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsPhysics>                          HairGroupsPhysics;                                       // 0x0050(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsInterpolation>                    HairGroupsInterpolation;                                 // 0x0060(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsLOD>                              HairGroupsLOD;                                           // 0x0070(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsCardsSourceDescription>           HairGroupsCards;                                         // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsMeshesSourceDescription>          HairGroupsMeshes;                                        // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsMaterial>                         HairGroupsMaterials;                                     // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41KP[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       EnableGlobalInterpolation;                               // 0x00C0(0x0001) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomInterpolationType                                    HairInterpolationType;                                   // 0x00C1(0x0001) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHairLODSelectionType                                      LODSelectionType;                                        // 0x00C2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B4SN[0x1];                                   // 0x00C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPerPlatformInt                                     MinLOD;                                                  // 0x00C4(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPerPlatformBool                                    DisableBelowMinLodStripping;                             // 0x00C8(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QSFM[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              EffectiveLODBias;                                        // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UAssetUserData*>                              AssetUserData;                                           // 0x00E0(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGMQ[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomAssetImportData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGroomAssetImportData : public UAssetImportData
	{
	public:
		class UGroomImportOptions*                                 ImportOptions;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomBindingAsset
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UGroomBindingAsset : public UObject
	{
	public:
		class UGroomAsset*                                         Groom;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SourceSkeletalMesh;                                      // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       TargetSkeletalMesh;                                      // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumInterpolationPoints;                                  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchingSection;                                         // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGoomBindingGroupInfo>                       GroupInfos;                                              // 0x0048(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIMK[0x48];                                  // 0x0058(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(const class FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection);
		class UGroomBindingAsset* CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection);
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomComponent
	 * Size -> 0x0118 (FullSize[0x0580] - InheritedSize[0x0468])
	 */
	class UGroomComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_6LQR[0x8];                                   // 0x0468(0x0008) Fix Super Size
		class UGroomAsset*                                         GroomAsset;                                              // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNiagaraComponent*>                           NiagaraComponents;                                       // 0x0478(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SourceSkeletalMesh;                                      // 0x0488(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGroomBindingAsset*                                  BindingAsset;                                            // 0x0490(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicsAsset*                                       PhysicsAsset;                                            // 0x0498(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Strands_DebugMaterial;                                   // 0x04A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Strands_DefaultMaterial;                                 // 0x04A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Cards_DefaultMaterial;                                   // 0x04B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Meshes_DefaultMaterial;                                  // 0x04B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNiagaraSystem*                                      AngularSpringsSystem;                                    // 0x04C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNiagaraSystem*                                      CosseratRodsSystem;                                      // 0x04C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttachmentName;                                          // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Interp, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OB5W[0x50];                                  // 0x04E0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHairGroupDesc>                              GroomGroupsDesc;                                         // 0x0530(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TK8[0x40];                                  // 0x0540(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetGroomAsset(class UGroomAsset* Asset);
		void SetBindingAsset(class UGroomBindingAsset* InBinding);
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomCreateBindingOptions
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGroomCreateBindingOptions : public UObject
	{
	public:
		class USkeletalMesh*                                       SourceSkeletalMesh;                                      // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       TargetSkeletalMesh;                                      // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumInterpolationPoints;                                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchingSection;                                         // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomCreateFollicleMaskOptions
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGroomCreateFollicleMaskOptions : public UObject
	{
	public:
		int32_t                                                    Resolution;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RootRadius;                                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFollicleMaskOptions>                        Grooms;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomCreateStrandsTexturesOptions
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UGroomCreateStrandsTexturesOptions : public UObject
	{
	public:
		int32_t                                                    Resolution;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStrandsTexturesTraceType                                  TraceType;                                               // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VCK[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceDistance;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStrandsTexturesMeshType                                   MeshType;                                                // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OJR[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODIndex;                                                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SectionIndex;                                            // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UVChannelIndex;                                          // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3CT[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            GroupIndex;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomImportOptions
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UGroomImportOptions : public UObject
	{
	public:
		struct FGroomConversionSettings                            ConversionSettings;                                      // 0x0028(0x0018) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsInterpolation>                    InterpolationSettings;                                   // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomHairGroupsPreview
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGroomHairGroupsPreview : public UObject
	{
	public:
		TArray<struct FGroomHairGroupPreview>                      Groups;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.NiagaraDataInterfaceHairStrands
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
	{
	public:
		class UGroomAsset*                                         DefaultSource;                                           // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              SourceActor;                                             // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSWI[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
	{
	public:
		class UPhysicsAsset*                                       DefaultSource;                                           // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              SourceActor;                                             // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUNT[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
	 * Size -> 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
	 */
	class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntVector                                          GridSize;                                                // 0x00D8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HKH[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.NiagaraDataInterfacePressureGrid
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
