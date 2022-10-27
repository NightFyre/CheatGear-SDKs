#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Class GbxTest.AssetTrait
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAssetTrait : public UDataAsset
	{
	public:
		class UAssetTrait*                                         TraitToWhitelist;                                        // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.AssetTraitMaterial
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAssetTraitMaterial : public UAssetTrait
	{
	public:
		struct FOptionalBool                                       UsedWithSkeletalMesh;                                    // 0x0038(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       UsedWithParticleSprites;                                 // 0x003A(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       UsedWithBeamTrails;                                      // 0x003C(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       UsedWithMeshParticles;                                   // 0x003E(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       UsedWithStaticLighting;                                  // 0x0040(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       UsedWithMorphTargets;                                    // 0x0042(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       UsedWithSplineMesh;                                      // 0x0044(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       UsedWithLandscape;                                       // 0x0046(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       UsedWithInstancedStaticMeshes;                           // 0x0048(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       UsedWithClothing;                                        // 0x004A(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       HasPhysMatSet;                                           // 0x004C(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D2EZ[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.AssetTraitMesh
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UAssetTraitMesh : public UAssetTrait
	{
	public:
		struct FOptionalInt32                                      LODMinCount;                                             // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      LODMaxCount;                                             // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxTriangleCount;                                        // 0x0048(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxVertexCount;                                          // 0x0050(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinTexCoordCount;                                        // 0x0058(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxTexCoordCount;                                        // 0x0060(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinSectionCount;                                         // 0x0068(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxSectionCount;                                         // 0x0070(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinSocketCount;                                          // 0x0078(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxSocketCount;                                          // 0x0080(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       HasSockets;                                              // 0x0088(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2KR[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.AssetTraitParticleSystem
	 * Size -> 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
	 */
	class UAssetTraitParticleSystem : public UAssetTrait
	{
	public:
		struct FOptionalInt32                                      MinEmitterCount;                                         // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxEmitterCount;                                         // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinModuleCount;                                          // 0x0048(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxModuleCount;                                          // 0x0050(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinLODCount;                                             // 0x0058(0x0008) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxLODCount;                                             // 0x0060(0x0008) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalFloat                                      MinLODDistanceCheckTime;                                 // 0x0068(0x0008) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalFloat                                      MaxLODDistanceCheckTime;                                 // 0x0070(0x0008) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalFloat                                      MinUpdateTime;                                           // 0x0078(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalFloat                                      MaxUpdateTime;                                           // 0x0080(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalFloat                                      MaxWarmupTime;                                           // 0x0088(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinDataAnimTrailCount;                                   // 0x0090(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxDataAnimTrailCount;                                   // 0x0098(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinDataGPUSpritesCount;                                  // 0x00A0(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxDataGPUSpritesCount;                                  // 0x00A8(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinDataMeshCount;                                        // 0x00B0(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxDataMeshCount;                                        // 0x00B8(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinDataRibbonOrBeamCount;                                // 0x00C0(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxDataRibbonOrBeamCount;                                // 0x00C8(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalFloat                                      MaxTemplateCost;                                         // 0x00D0(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       bHasDataAnimTrail;                                       // 0x00D8(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       bHasDataGPUSprites;                                      // 0x00DA(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       bHasDataMesh;                                            // 0x00DC(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       bHasDataRibbonOrBeam;                                    // 0x00DE(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxDrawCount;                                            // 0x00E0(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       bKillOnCompletedNotSet;                                  // 0x00E8(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXK1[0x2];                                   // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOptionalFloat                                      MinUnitScalar;                                           // 0x00EC(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       bUseInverseSquaredFalloffSet;                            // 0x00F4(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       bAllowInfiniteLifetimes;                                 // 0x00F6(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalFloat                                      MaxLifetime;                                             // 0x00F8(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.AssetTraitSkeletalMesh
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UAssetTraitSkeletalMesh : public UAssetTraitMesh
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.AssetTraitStaticMesh
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UAssetTraitStaticMesh : public UAssetTraitMesh
	{
	public:
		struct FOptionalInt32                                      MinPrimitiveCount;                                       // 0x0090(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxPrimitiveCount;                                       // 0x0098(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinLightmapResolution;                                   // 0x00A0(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxLightmapResolution;                                   // 0x00A8(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinLightMapIndex;                                        // 0x00B0(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxLightMapIndex;                                        // 0x00B8(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalLODGroup                                   LODGroup;                                                // 0x00C0(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       CastShadow;                                              // 0x00D0(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       EnableCollision;                                         // 0x00D2(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3NT[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.AssetTraitTexture
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UAssetTraitTexture : public UAssetTrait
	{
	public:
		struct FOptionalTextureCompressionMethod                   CompressionMethod;                                       // 0x0038(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalTextureLODGroup                            LODGroup;                                                // 0x0048(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MinLODBias;                                              // 0x0058(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalInt32                                      MaxLODBias;                                              // 0x0060(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       HasAlpha;                                                // 0x0068(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FOptionalBool                                       HassRGB;                                                 // 0x006A(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NE41[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.AutomationMenuHelper
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAutomationMenuHelper : public UObject
	{
	public:
		unsigned char                                              UnknownData_MKRH[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void PrevPage();
		class FName PageName();
		int32_t NumPages();
		void NextPage();
		void NextFocus(EAutomationUIDirection Direction);
		class FName MenuName();
		bool HasOpenMenu();
		class FName FocusName();
		struct FAutomationMenuFocusInfo FocusInfo();
		int32_t CurrentDepth();
		class UAutomationMenuHelper* STATIC_CreateAutomationMenuHelper(class AGbxPlayerController* PlayerController, bool SimulateAllInputs);
		void BackOut();
		void ActuateFocus(EAutomationUIAction Action);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.AutomationUILibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAutomationUILibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ForceDisableTutorials(bool ForceDisable);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.GbxTestContentAuditCommandlet
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UGbxTestContentAuditCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.GbxTestJiraCommandlet
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UGbxTestJiraCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.GbxTestContentAuditSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGbxTestContentAuditSettings : public UObject
	{
	public:
		TArray<class FString>                                      WhitelistDirectories;                                    // 0x0028(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.GbxTestParticleMaterialAuditCommandlet
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UGbxTestParticleMaterialAuditCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.GbxTestSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGbxTestSettings : public UObject
	{
	public:
		TArray<class FString>                                      TestContentPaths;                                        // 0x0028(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.PerfMapCapture
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPerfMapCapture : public UObject
	{
	public:
		void STATIC_SavePerfMapCapturesFromConfiguration(class UWorld* World, const class FString& Path, const struct FMapParameters& Configuration, const struct FLatentActionInfo& LatentInfo);
		bool STATIC_SavePerfMapCaptures(class UObject* World, const class FString& Path, float Density, bool bLighting, bool bSpecular, float Gamma, int32_t Width, int32_t Height, float VolumeX, float VolumeY, float VolumeZ, const class FString& OutputPattern);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.PerformanceSnapshotCollector
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPerformanceSnapshotCollector : public UBlueprintFunctionLibrary
	{
	public:
		unsigned char                                              UnknownData_16W5[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void ResetSnapshotProviders();
		class UPerformanceSnapshotCollector* STATIC_CreatePerformanceSnapshotCollector(const class FString& StatSection, ESnapshotExecOutput* ExecOut);
		void CollectSnapshot(class UObject* WorldContextObject, const class FString& ReportContext, const struct FLatentActionInfo& LatentInfo);
		void CollectProbeSnapshot(class UObject* WorldContextObject, const class FString& ReportContext, const struct FGbxProbeId& ProbeId, const class FString& Test, TArray<struct FGbxProbeExtraData> ExtraDataArray, const struct FLatentActionInfo& LatentInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.MatcherFunctionality
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UMatcherFunctionality : public UObject
	{
	public:
		unsigned char                                              UnknownData_95IO[0x80];                                  // 0x0028(0x0080) MISSED OFFSET (PADDING)

	public:
		int32_t Size();
		bool Ready();
		class FString GetSuffix();
		class FString GetPrefix();
		int32_t GetPosition(int32_t Start);
		class FString GetMatch(int32_t Index);
		int32_t GetLength();
		class FString GetAtIndex(int32_t Index);
		bool Empty();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.RegexFunctionality
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class URegexFunctionality : public UObject
	{
	public:
		struct FRegex                                              Regex;                                                   // 0x0028(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		bool STATIC_RegexSearch(const struct FRegex& Regex, class UMatcherFunctionality* Matcher, const class FString& Input);
		class FString STATIC_RegexRepleace(const struct FRegex& Regex, const class FString& Input, const class FString& Repleacement);
		bool STATIC_RegexMatch2(const struct FRegex& Regex, class UMatcherFunctionality* Matcher, const class FString& Input);
		bool STATIC_RegexMatch(const struct FRegex& Regex, const class FString& Input);
		void STATIC_FindAll(const struct FRegex& Regex, const class FString& String, TArray<class FString>* Return);
		void STATIC_Assign2(const struct FRegex& Regex, const class FString& Pattern, ESyntaxOption Flags);
		void STATIC_Assign(const struct FRegex& Regex, const class FString& Pattern);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.GbxTestHierarchicalCommands
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGbxTestHierarchicalCommands : public UDataAsset
	{
	public:
		TArray<struct FGbxTestHierarchicalCommandL1>               Commands;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.TestLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTestLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TakeScreenshot(const class FString& CustomFilename, const struct FVector2D& OverrideResolution, bool ShowUI, bool AddUniqueSuffix);
		TArray<class FString> STATIC_SortStrings(TArray<class FString> Values, bool Descending);
		TArray<class UObject*> STATIC_SortObjectsByName(TArray<class UObject*> Values, bool Descending);
		TArray<int32_t> STATIC_SortIntegers(TArray<int32_t> Values, bool Descending);
		TArray<float> STATIC_SortFloats(TArray<float> Values, bool Descending);
		void STATIC_SimulateInputKey(class APlayerController* PlayerController, const struct FKey& Key, EInputEvent EVENTTYPE, float AmountDepressed);
		void STATIC_SimulateInputAxis(class APlayerController* PlayerController, const struct FKey& Key, float Delta, float InterpTime, const struct FLatentActionInfo& LatentInfo);
		void STATIC_RemoveItemFromCollection(const class FString& CollectionName, const class FString& ObjectName);
		void STATIC_RemoveArrayFromCollection(const class FString& CollectionName, TArray<class FString>* objectNames);
		bool STATIC_ReadFromIni(const class FString& Section, const class FString& Key, TArray<class FString>* Values);
		void STATIC_MoveItemCollection(const class FString& fromCollection, const class FString& toCollection, const class FString& ObjectName);
		void STATIC_MoveArrayCollection(const class FString& fromCollection, const class FString& toCollection, TArray<class FString>* objectNames);
		void STATIC_LoadBlueprintAsset(const class FString& Path, class UObject** Object);
		void STATIC_LoadAsset(const class FString& Path, class UObject** Object);
		bool STATIC_IsEditorSession();
		bool STATIC_IsAssetInCollectionEx(const class FString& CollectionName, ECollectionType CollectionType, const class FString& ObjectName);
		bool STATIC_IsAssetInCollection(const class FString& CollectionName, const class FString& ObjectName);
		class UWorld* STATIC_GetWorldForActor(class AActor* Actor);
		void STATIC_GetTestDriversFromStrings(TArray<class FString> Strings, TArray<class UClass*>* TestDrivers, class FString* UndiscoveredItems);
		void STATIC_GetReferencedBlueprintClasses(class UObject* Object, class UClass* Class, TArray<class UClass*>* Classes);
		void STATIC_GetObjectTags(TArray<struct FObjectTag>* ObjectTags, class UObject* Asset);
		void STATIC_GetAssetPath(class UObject* Asset, class FString* AssetPath);
		void STATIC_GetAssetName(const class FString& AssetPath, class FString* AssetName);
		void STATIC_FilterDiscoveredAssets(TArray<class FString>* InPathNames, TArray<class FString>* InPrettyNames, TArray<class FString>* OutPathNames, TArray<class FString>* OutPrettyNames, const class FString& AssetNamePrefix, const class FString& AssetNamePostfix, const class FString& AssetNameContains, const class FString& AssetPathContains);
		void STATIC_DiscoverAssets(TArray<class FString>* PathNames, TArray<class FString>* PrettyNames, TArray<class FString> Directories, TArray<class UClass*> Classes, TArray<class UClass*> ExcludeRecursiveClasses, bool bRecursiveDirectories, bool bRecursiveClasses);
		class FString STATIC_CreateLocalCollection(const class FString& CollectionName, const class FString& ParentName);
		bool STATIC_ContainsSubPath(const class FString& Path, const class FString& SubPath);
		bool STATIC_ContainsObjectTag(TArray<struct FObjectTag>* ObjectTags, const class FString& Category, const class FString& Name, bool bExactCategory, bool bCaseSensitiveCategory, bool bExactName, bool bCaseSensitiveName);
		bool STATIC_CollectionExistsEx(const class FString& CollectionName, ECollectionType CollectionType);
		bool STATIC_CollectionExists(const class FString& CollectionName);
		void STATIC_AddItemToCollection(const class FString& CollectionName, const class FString& ObjectName);
		void STATIC_AddArrayToCollection(const class FString& CollectionName, TArray<class FString>* objectNames);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.TestLibraryContent
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTestLibraryContent : public UBlueprintFunctionLibrary
	{
	public:
		class UTexture* STATIC_LoadAssetTexture(const class FString& ObjectPath);
		class UStaticMesh* STATIC_LoadAssetStaticMesh(const class FString& ObjectPath);
		class USkeletalMesh* STATIC_LoadAssetSkeletalMesh(const class FString& ObjectPath);
		class UParticleSystem* STATIC_LoadAssetParticleSystem(const class FString& ObjectPath);
		class UMaterial* STATIC_LoadAssetMaterial(const class FString& ObjectPath);
		void STATIC_GetTestInfoTexture(class UTexture* Asset, struct FTestInfoTexture* Info);
		void STATIC_GetTestInfoStaticMeshLOD(class UStaticMesh* Asset, int32_t LODIndex, struct FTestInfoMeshLOD* Info);
		void STATIC_GetTestInfoStaticMesh(class UStaticMesh* Asset, struct FTestInfoMeshLODSummary* LODSummary, struct FTestInfoMesh* Mesh, struct FTestInfoStaticMesh* StaticMesh);
		void STATIC_GetTestInfoSkeletalMeshLOD(class USkeletalMesh* Asset, int32_t LODIndex, struct FTestInfoMeshLOD* Info);
		void STATIC_GetTestInfoSkeletalMesh(class USkeletalMesh* Asset, struct FTestInfoMeshLODSummary* LODSummary, struct FTestInfoMesh* Mesh, struct FTestInfoSkeletalMesh* SkeletalMesh);
		void STATIC_GetTestInfoParticleSystem(class UParticleSystem* Asset, struct FTestInfoParticleSystem* Info);
		void STATIC_GetTestInfoParticleEmitter(class UParticleSystem* Asset, int32_t EmitterIndex, struct FTestInfoParticleEmitter* Info);
		void STATIC_GetTestInfoMaterial(class UMaterial* Asset, struct FTestInfoMaterial* Info);
		void STATIC_GetAllPersistentGameMaps(TArray<class FString>* OutMapNames, bool ShortNamesOnly);
		TArray<class FString> STATIC_ContentAuditSingleObject(class UObject* Asset);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.TestLibraryPerformance
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTestLibraryPerformance : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_WaitForFrames(class UObject* WorldContextObject, int32_t NumFrames, const struct FLatentActionInfo& LatentInfo);
		void STATIC_GenerateLevelGrid(TArray<struct FVector>* GridLocations, class APawn* Pawn, float GridSize, bool bWalkableOnly);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.TestLibrarySimulation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTestLibrarySimulation : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TestIntInRangeFromPlayMap(int32_t Value, int32_t Min, int32_t Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void STATIC_TestIntCompareFromPlayMap(int32_t Value, int32_t Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void STATIC_TestFloatInRangeFromPlayMap(float Value, float Min, float Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void STATIC_TestFloatCompareFromPlayMap(float Value, float Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage, float Tolerance);
		void STATIC_TestBoolIsTrueFromPlayMap(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void STATIC_TestBoolIsFalseFromPlayMap(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void STATIC_StopPlayTest();
		void STATIC_SimulatePlayerInput(class UObject* WorldContextObject, class APlayerController** PlayerController, TArray<struct FGbxTestInputAction> InputDescription, float PreDelay, float PostDelay, const struct FLatentActionInfo& LatentInfo);
		void STATIC_SetReportContext(class UObject* WorldContextObject, TArray<struct FGbxProbeId> AssetContexts);
		bool STATIC_SetReceiveBackgroundInput(class APlayerController** PlayerController, bool AllowBackgroundInput);
		void STATIC_ResetTestTimeout();
		void STATIC_ReportResultFromPlayMap(bool bSucceeded, const class FString& IssueCategory, const class FString& IssueMessage, const struct FGbxProbeId& AssetContext, ETestIssueType FailedIssueType);
		void STATIC_ReportIssueFromPlayMap(ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void STATIC_PushWorldContext(class UObject* WorldContextObject);
		void STATIC_PushAssetContext(const struct FGbxProbeId& ID);
		void STATIC_PopWorldContext();
		void STATIC_PopAssetContext(const struct FGbxProbeId& ID);
		bool STATIC_IsPlayMapRunning();
		bool STATIC_IsHLQNoClipEnabled(class APlayerController** PlayerController);
		bool STATIC_IsGodEnabled(class APlayerController** PlayerController);
		bool STATIC_IsGhostEnabled(class APlayerController** PlayerController);
		bool STATIC_IsDemiGodEnabled(class APlayerController** PlayerController);
		class UTestPolicySimulation* STATIC_GetPolicyForPlayMap();
		bool STATIC_CanReceiveBackgroundInput(class APlayerController** PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.GbxTestPlanCommandlet
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UGbxTestPlanCommandlet : public UCommandlet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.TestPolicy
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UTestPolicy : public UObject
	{
	public:
		EDiscovery                                                 DiscoveryMethod;                                         // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEME[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              HierarchicalCommands[0x28];                              // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxTest.TestPolicy.HierarchicalCommands
		class FString                                              Contact;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxTestPlan                                               TestPlan;                                                // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLK3[0x47];                                  // 0x0069(0x0047) MISSED OFFSET (PADDING)

	public:
		void TestIntInRange(int32_t Value, int32_t Min, int32_t Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void TestIntCompare(int32_t Value, int32_t Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void TestFloatInRange(float Value, float Min, float Max, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void TestFloatCompare(float Value, float Other, ECompare Comparison, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage, float Tolerance);
		void TestBoolIsTrue(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void TestBoolIsFalse(bool Value, ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void TestAssetTraits(class UObject* Asset);
		void TestAssetAudit(class UObject* Asset);
		void SetReportContext(class UObject* WorldContextObject, TArray<struct FGbxProbeId> AssetContexts);
		void ReportResult(bool bSucceeded, const class FString& IssueCategory, const class FString& IssueMessage, const struct FGbxProbeId& AssetContext, ETestIssueType FailedIssueType);
		void ReportIssue(ETestIssueType IssueType, const class FString& IssueCategory, const class FString& IssueMessage);
		void PushAssetContext(const struct FGbxProbeId& ID);
		void PopAssetContext(const struct FGbxProbeId& ID);
		void OnRunTestCommand(const class FString& TestCommand);
		void OnGetTestCommands(TArray<class FString>* TestCommands, TArray<class FString>* PrettyNames);
		void ClearSavedTestCommand();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.TestPolicyContent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UTestPolicyContent : public UTestPolicy
	{
	public:
		void OnValidForImport(class UObject* ImportObject, bool* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxTest.TestPolicySimulation
	 * Size -> 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
	 */
	class UTestPolicySimulation : public UTestPolicy
	{
	public:
		unsigned char                                              UnknownData_2B7Z[0x90];                                  // 0x00B0(0x0090) MISSED OFFSET (PADDING)

	public:
		void StopPlay();
		void RunTestDrivers(TArray<class UClass*> TestDrivers, float Timeout, float TimeLimit);
		void PlayTestMap(const class FString& MapName, TArray<class UClass*> TestDrivers, float Timeout, float TimeLimit, bool bLoadMapOnce, bool bLoadMapIfNotLoaded);
		void PlayMap(const class FString& MapName, TArray<class UClass*> TestDrivers, float Timeout, float TimeLimit);
		void OnMapTraveled(class UWorld* NewWorld);
		void IntendToMapTravel(bool WillMapTravel);
		void AddTestDriver(class UClass* TestDriver);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
