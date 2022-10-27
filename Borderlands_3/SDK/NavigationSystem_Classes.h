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
	 * Class NavigationSystem.NavigationSystemV1
	 * Size -> 0x0400 (FullSize[0x0428] - InheritedSize[0x0028])
	 */
	class UNavigationSystemV1 : public UNavigationSystemBase
	{
	public:
		class ANavigationData*                                     MainNavData;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ANavigationData*                                     AbstractNavData;                                         // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CrowdManagerClass;                                       // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAutoCreateNavigationData : 1;                           // 0x0040(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSpawnNavDataInNavBoundsLevel : 1;                       // 0x0040(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowClientSideNavigation : 1;                          // 0x0040(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bShouldDiscardSubLevelNavData : 1;                       // 0x0040(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bTickWhilePaused : 1;                                    // 0x0040(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSupportRebuilding : 1;                                  // 0x0040(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInitialBuildingLocked : 1;                              // 0x0040(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVNG : 1;                                    // 0x0040(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bSkipAgentHeightCheckWhenPickingNavData : 1;             // 0x0041(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QTBD[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENavDataGatheringModeConfig                                DataGatheringMode;                                       // 0x0044(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5J24[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bGenerateNavigationOnlyAroundNavigationInvokers : 1;     // 0x0048(0x0001) BIT_FIELD Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OJ12[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActiveTilesUpdateInterval;                               // 0x004C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FNavDataConfig>                              SupportedAgents;                                         // 0x0050(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		float                                                      DirtyAreasUpdateFreq;                                    // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJ2V[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ANavigationData*>                             NavDataSet;                                              // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class ANavigationData*>                             NavDataRegistrationQueue;                                // 0x0078(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPJ8[0x60];                                  // 0x0088(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNavDataRegisteredEvent;                                // 0x00E8(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNavigationGenerationFinishedDelegate;                  // 0x00F8(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6HD[0xCC];                                  // 0x0108(0x00CC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFNavigationSystemRunMode                                  OperationMode;                                           // 0x01D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YQRF[0x23B];                                 // 0x01D5(0x023B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      NavigationDataClassName;                                 // 0x0410(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
		void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
		struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
		void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
		bool STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
		bool STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationData
	 * Size -> 0x01C0 (FullSize[0x0618] - InheritedSize[0x0458])
	 */
	class ANavigationData : public AActor
	{
	public:
		unsigned char                                              UnknownData_QMLV[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 RenderingComp;                                           // 0x0460(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNavDataConfig                                      NavDataConfig;                                           // 0x0468(0x0068) Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bEnableDrawing : 1;                                      // 0x04D0(0x0001) BIT_FIELD Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bForceRebuildOnLoad : 1;                                 // 0x04D0(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanBeMainNavData : 1;                                   // 0x04D0(0x0001) BIT_FIELD Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanSpawnOnRebuild : 1;                                  // 0x04D0(0x0001) BIT_FIELD Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRebuildAtRuntime : 1;                                   // 0x04D0(0x0001) BIT_FIELD Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q5YU[0x3];                                   // 0x04D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ERuntimeGenerationType                                     RuntimeGeneration;                                       // 0x04D4(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z7SZ[0x3];                                   // 0x04D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ObservedPathsTickInterval;                               // 0x04D8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint32_t                                                   DataVersion;                                             // 0x04DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_82GW[0xD0];                                  // 0x04E0(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSupportedAreaData>                          SupportedAreas;                                          // 0x05B0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BSNP[0x58];                                  // 0x05C0(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.AbstractNavData
	 * Size -> 0x0000 (FullSize[0x0618] - InheritedSize[0x0618])
	 */
	class AAbstractNavData : public ANavigationData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.CrowdManagerBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCrowdManagerBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHavokNavData : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationQueryFilter
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UNavigationQueryFilter : public UObject
	{
	public:
		TArray<struct FNavigationFilterArea>                       Areas;                                                   // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FNavigationFilterFlags                              IncludeFlags;                                            // 0x0038(0x0004) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FNavigationFilterFlags                              ExcludeFlags;                                            // 0x003C(0x0004) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8V4[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavigationQueryFilter
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UHavokNavigationQueryFilter : public UNavigationQueryFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.GbxNavLayerBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxNavLayerBase : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavLayer
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UHavokNavLayer : public UHavokNavLayerBase
	{
	public:
		class UGbxNavLayerBase*                                    GbxNavLayer;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              DrawColor;                                               // 0x0030(0x0004) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQ3H[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavLayerRegistry
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UHavokNavLayerRegistry : public UObject
	{
	public:
		unsigned char                                              UnknownData_U6IS[0xE0];                                  // 0x0028(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavMesh
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UHavokNavMesh : public UHavokNavData
	{
	public:
		unsigned char                                              UnknownData_228A[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavTraversalData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UNavTraversalData : public UDataAsset
	{
	public:
		struct FHavokTraversalAnalysisSettings                     Settings;                                                // 0x0030(0x0020) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavMeshGenerationSettings
	 * Size -> 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
	 */
	class UHavokNavMeshGenerationSettings : public UObject
	{
	public:
		float                                                      QuantizationGridSize;                                    // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWalkableSlope;                                        // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DegenerateAreaThreshold;                                 // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DegeneratedWidthThreshold;                               // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConvexThreshold;                                         // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumEdgesPerFace;                                      // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHavokNavMeshEdgeMatchingSettings                   EdgeMatchingSettings;                                    // 0x0040(0x0028) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FHavokNavMeshEdgeMatchingSettings                   StreamEdgeMatchingSettings;                              // 0x0068(0x0028) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		EHavokNavMeshEdgeMatchingMetric                            EdgeMatchingMetric;                                      // 0x0090(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98R1[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EdgeConnectionIterations;                                // 0x0094(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHavokNavMeshRegionPruningSettings                  RegionPruningSettings;                                   // 0x0098(0x0014) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bFixupOverlappingTriangles : 1;                          // 0x00AC(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Z68[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHavokNavMeshOverlappingTrianglesSettings           OverlappingTrianglesSettings;                            // 0x00B0(0x000C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              bWeldInputVertices : 1;                                  // 0x00BC(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZ0Q[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeldThreshold;                                           // 0x00C0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableSimplification : 1;                               // 0x00C4(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JOQG[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHavokNavMeshSimplificationSettings                 SimplificationSettings;                                  // 0x00C8(0x007C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PASH[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHavokTraversalAnalysisSettings                     TraversalAnalysisSettings;                               // 0x0148(0x0020) Edit, Config, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TraversalSettingsName;                                   // 0x0168(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSaveInputSnapshot : 1;                                  // 0x0180(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IANH[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavMeshLayer
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UHavokNavMeshLayer : public UHavokNavLayer
	{
	public:
		float                                                      CharacterRadius;                                         // 0x0038(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CharacterHalfHeight;                                     // 0x003C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UserEdgeEntryDistance;                                   // 0x0040(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bErodeWidth;                                             // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JU2[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavMeshLayer_Default
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UHavokNavMeshLayer_Default : public UHavokNavMeshLayer
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavVolume
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UHavokNavVolume : public UHavokNavData
	{
	public:
		unsigned char                                              UnknownData_Q104[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavVolumeGenerationSettings
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UHavokNavVolumeGenerationSettings : public UObject
	{
	public:
		struct FHavokNavVolumeChunkSettings                        ChunkSettings;                                           // 0x0028(0x0008) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FHavokNavVolumeBorderSettings                       BorderSettings;                                          // 0x0030(0x0008) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FHavokNavVolumeMergingSettings                      MergingSettings;                                         // 0x0038(0x0020) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FHavokNavVolumePruningSettings                      PruningSettings;                                         // 0x0058(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSaveInputSnapshot;                                      // 0x0060(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5XD[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavVolumeLayer
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UHavokNavVolumeLayer : public UHavokNavLayer
	{
	public:
		float                                                      CharacterRadius;                                         // 0x0038(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellWidth;                                               // 0x003C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHavokNavVolumeCellWidthToResolutionRounding               ResolutionRoundingMode;                                  // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACCV[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokNavVolumeLayer_Default
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UHavokNavVolumeLayer_Default : public UHavokNavVolumeLayer
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokTraversalType
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UHavokTraversalType : public UObject
	{
	public:
		float                                                      MaxPlanarAngle;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRelativeSlopeAngle;                                   // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseCost;                                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXBN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGbxNavLayerBase*>                            AssociatedLayers;                                        // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UGbxUserEdgeBase*                                    GbxUserEdge;                                             // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              UserEdge;                                                // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokTraversalType_ClimbUp
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	class UHavokTraversalType_ClimbUp : public UHavokTraversalType
	{
	public:
		float                                                      MaxUnderhang;                                            // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinUpHeight;                                             // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxUpHeight;                                             // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrabAngle;                                               // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrabScanDepth;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrabMaxProfileAngle;                                     // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalLipHeight;                                       // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResolveHangExtraDist;                                    // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokTraversalType_DropDown
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UHavokTraversalType_DropDown : public UHavokTraversalType
	{
	public:
		float                                                      MinDropDistance;                                         // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDropDistance;                                         // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxUnderhang;                                            // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinUnderhang;                                            // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalLipHeight;                                       // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9M3C[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokTraversalType_Jump
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UHavokTraversalType_Jump : public UHavokTraversalType
	{
	public:
		float                                                      MaxHorizontalDistance;                                   // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHorizontalDistance;                                   // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxUpHeight;                                             // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDownHeight;                                           // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalApex;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3G4[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokTraversalType_Vault
	 * Size -> 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
	 */
	class UHavokTraversalType_Vault : public UHavokTraversalType
	{
	public:
		float                                                      MinWallWidth;                                            // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWallWidth;                                            // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinWallHeight;                                           // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWallHeight;                                           // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxUpHeight;                                             // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDownHeight;                                           // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalApex;                                            // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandPlantAngle;                                          // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandPlantLeftExtent;                                     // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandPlantRightExtent;                                    // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandPlantMaxProfileAngle;                                // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVGN[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.GbxUserEdgeBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxUserEdgeBase : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.HavokUserEdge
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UHavokUserEdge : public UObject
	{
	public:
		class UGbxUserEdgeBase*                                    GbxUserEdge;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ReverseEdge;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FColor                                              DrawColor;                                               // 0x0038(0x0004) Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAlignEdges;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLimitDistanceMin;                                       // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8KA8[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceMin;                                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLimitDistanceMax;                                       // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T599[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceMax;                                             // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLimitHeightMin;                                         // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9Y3H[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeightMin;                                               // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLimitHeightMax;                                         // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OW36[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeightMax;                                               // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bZeroWidthEntry;                                         // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bZeroWidthExit;                                          // 0x005D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTeleportEntry;                                          // 0x005E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTeleportExit;                                           // 0x005F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      TeleportEdges;                                           // 0x0060(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UNavArea : public UNavAreaBase
	{
	public:
		float                                                      DefaultCost;                                             // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FixedAreaEnteringCost;                                   // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FColor                                              DrawColor;                                               // 0x0038(0x0004) Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x003C(0x0004) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent0 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent1 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent2 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent3 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent4 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent5 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent6 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent7 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent8 : 1;                                     // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent9 : 1;                                     // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent10 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent11 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent12 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent13 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent14 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent15 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8LI5[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             GbxNavArea;                                              // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHavokNavMaterial                                          HavokNavMaterial;                                        // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MWVA[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGbxNavLayerBase*>                            IgnoreLayers;                                            // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UClass*                                              EffectiveArea;                                           // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_Default
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNavArea_Default : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_LowHeight
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNavArea_LowHeight : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_Null
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNavArea_Null : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_Obstacle
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNavArea_Obstacle : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavAreaMeta
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNavAreaMeta : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavAreaMeta_SwitchByAgent
	 * Size -> 0x0080 (FullSize[0x00F0] - InheritedSize[0x0070])
	 */
	class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
	{
	public:
		class UClass*                                              Agent0Area;                                              // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent1Area;                                              // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent2Area;                                              // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent3Area;                                              // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent4Area;                                              // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent5Area;                                              // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent6Area;                                              // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent7Area;                                              // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent8Area;                                              // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent9Area;                                              // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent10Area;                                             // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent11Area;                                             // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent12Area;                                             // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent13Area;                                             // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent14Area;                                             // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent15Area;                                             // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavCollision
	 * Size -> 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
	 */
	class UNavCollision : public UNavCollisionBase
	{
	public:
		unsigned char                                              UnknownData_TU8N[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNavCollisionCylinder>                       CylinderCollision;                                       // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNavCollisionBox>                            BoxCollision;                                            // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              AreaClass;                                               // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGatherConvexGeometry : 1;                               // 0x00A8(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BE9H[0x2F];                                  // 0x00A9(0x002F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationGraph
	 * Size -> 0x0000 (FullSize[0x0618] - InheritedSize[0x0618])
	 */
	class ANavigationGraph : public ANavigationData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationGraphNode
	 * Size -> 0x0000 (FullSize[0x0458] - InheritedSize[0x0458])
	 */
	class ANavigationGraphNode : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationGraphNodeComponent
	 * Size -> 0x0030 (FullSize[0x0300] - InheritedSize[0x02D0])
	 */
	class UNavigationGraphNodeComponent : public USceneComponent
	{
	public:
		struct FNavGraphNode                                       Node;                                                    // 0x02D0(0x0018) NativeAccessSpecifierPublic
		class UNavigationGraphNodeComponent*                       NextNodeComponent;                                       // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNavigationGraphNodeComponent*                       PrevNodeComponent;                                       // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XE1[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationInvokerComponent
	 * Size -> 0x0008 (FullSize[0x0180] - InheritedSize[0x0178])
	 */
	class UNavigationInvokerComponent : public UActorComponent
	{
	public:
		float                                                      TileGenerationRadius;                                    // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TileRemovalRadius;                                       // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationPath
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UNavigationPath : public UObject
	{
	public:
		class FScriptMulticastDelegate                             PathUpdatedNotifier;                                     // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PathPoints;                                              // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		ENavigationOptionFlag                                      RecalculateOnInvalidation;                               // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKTP[0x3F];                                  // 0x0049(0x003F) MISSED OFFSET (PADDING)

	public:
		bool IsValid();
		bool IsStringPulled();
		bool IsPartial();
		float GetPathLength();
		float GetPathCost();
		class FString GetDebugString();
		void EnableRecalculationOnInvalidation(ENavigationOptionFlag DoRecalculation);
		void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationPathGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavigationPathGenerator : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationSystemModuleConfig
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UNavigationSystemModuleConfig : public UNavigationSystemConfig
	{
	public:
		unsigned char                                              bStrictlyStatic : 1;                                     // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCreateOnClient : 1;                                     // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAutoSpawnMissingNavData : 1;                            // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSpawnNavDataInNavBoundsLevel : 1;                       // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GJUE[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationTestingActor
	 * Size -> 0x00E8 (FullSize[0x0540] - InheritedSize[0x0458])
	 */
	class ANavigationTestingActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_H41R[0x10];                                  // 0x0458(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   CapsuleComponent;                                        // 0x0468(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNavigationInvokerComponent*                         InvokerComponent;                                        // 0x0470(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bActAsNavigationInvoker : 1;                             // 0x0478(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KEQ9[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNavAgentProperties                                 NavAgentProps;                                           // 0x0480(0x0030) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             QueryingExtent;                                          // 0x04B0(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1RRX[0x4];                                   // 0x04BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANavigationData*                                     MyNavData;                                               // 0x04C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ProjectedLocation;                                       // 0x04C8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bProjectedLocationValid : 1;                             // 0x04D4(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSearchStart : 1;                                        // 0x04D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseHierarchicalPathfinding : 1;                         // 0x04D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGatherDetailedInfo : 1;                                 // 0x04D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawDistanceToWall : 1;                                 // 0x04D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowNodePool : 1;                                       // 0x04D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowBestPath : 1;                                       // 0x04D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowDiffWithPreviousStep : 1;                           // 0x04D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShouldBeVisibleInGame : 1;                              // 0x04D5(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OXT6[0x2];                                   // 0x04D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENavCostDisplay                                            CostDisplayMode;                                         // 0x04D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4KA[0x3];                                   // 0x04D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           TextCanvasOffset;                                        // 0x04DC(0x0008) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPathExist : 1;                                          // 0x04E4(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPathIsPartial : 1;                                      // 0x04E4(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPathSearchOutOfNodes : 1;                               // 0x04E4(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RR8A[0x3];                                   // 0x04E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PathfindingTime;                                         // 0x04E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PathCost;                                                // 0x04EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PathfindingSteps;                                        // 0x04F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUA3[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANavigationTestingActor*                             OtherActor;                                              // 0x04F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FilterClass;                                             // 0x0500(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShowStepIndex;                                           // 0x0508(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetFromCornersDistance;                               // 0x050C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22BX[0x30];                                  // 0x0510(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkComponent
	 * Size -> 0x0020 (FullSize[0x0710] - InheritedSize[0x06F0])
	 */
	class UNavLinkComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_R6LO[0x8];                                   // 0x06F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNavigationLink>                             Links;                                                   // 0x06F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LOT[0x8];                                   // 0x0708(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavRelevantComponent
	 * Size -> 0x0030 (FullSize[0x01A8] - InheritedSize[0x0178])
	 */
	class UNavRelevantComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_KPZO[0x24];                                  // 0x0178(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAttachToOwnersRoot : 1;                                 // 0x019C(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1HAJ[0x3];                                   // 0x019D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CachedNavParent;                                         // 0x01A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetNavigationRelevancy(bool bRelevant);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkCustomComponent
	 * Size -> 0x00A8 (FullSize[0x0250] - InheritedSize[0x01A8])
	 */
	class UNavLinkCustomComponent : public UNavRelevantComponent
	{
	public:
		unsigned char                                              UnknownData_DZKO[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   NavLinkUserId;                                           // 0x01B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S7F4[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              EnabledAreaClass;                                        // 0x01B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DisabledAreaClass;                                       // 0x01C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LinkRelativeStart;                                       // 0x01C8(0x000C) Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LinkRelativeEnd;                                         // 0x01D4(0x000C) Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENavLinkDirection                                          LinkDirection;                                           // 0x01E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H7R2[0x3];                                   // 0x01E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bLinkEnabled : 1;                                        // 0x01E4(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bNotifyWhenEnabled : 1;                                  // 0x01E4(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bNotifyWhenDisabled : 1;                                 // 0x01E4(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCreateBoxObstacle : 1;                                  // 0x01E4(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9ND0[0x3];                                   // 0x01E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ObstacleOffset;                                          // 0x01E8(0x000C) Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ObstacleExtent;                                          // 0x01F4(0x000C) Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ObstacleAreaClass;                                       // 0x0200(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BroadcastRadius;                                         // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BroadcastInterval;                                       // 0x020C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECollisionChannel                                          BroadcastChannel;                                        // 0x0210(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RPQA[0x3F];                                  // 0x0211(0x003F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkCustomInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavLinkCustomInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkHostInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavLinkHostInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkRenderingComponent
	 * Size -> 0x0000 (FullSize[0x06F0] - InheritedSize[0x06F0])
	 */
	class UNavLinkRenderingComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkTrivial
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UNavLinkTrivial : public UNavLinkDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavMeshBoundsVolume
	 * Size -> 0x0008 (FullSize[0x0498] - InheritedSize[0x0490])
	 */
	class ANavMeshBoundsVolume : public AVolume
	{
	public:
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x0490(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEWH[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavMeshRenderingComponent
	 * Size -> 0x0010 (FullSize[0x0700] - InheritedSize[0x06F0])
	 */
	class UNavMeshRenderingComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_ODZ5[0x10];                                  // 0x06F0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavModifierComponent
	 * Size -> 0x0028 (FullSize[0x01D0] - InheritedSize[0x01A8])
	 */
	class UNavModifierComponent : public UNavRelevantComponent
	{
	public:
		class UClass*                                              AreaClass;                                               // 0x01A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FailsafeExtent;                                          // 0x01B0(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIncludeAgentHeight : 1;                                 // 0x01BC(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YO4[0x13];                                  // 0x01BD(0x0013) MISSED OFFSET (PADDING)

	public:
		void SetAreaClass(class UClass* NewAreaClass);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavModifierVolume
	 * Size -> 0x0010 (FullSize[0x04A0] - InheritedSize[0x0490])
	 */
	class ANavModifierVolume : public AVolume
	{
	public:
		unsigned char                                              UnknownData_8JBE[0x8];                                   // 0x0490(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AreaClass;                                               // 0x0498(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetAreaClass(class UClass* NewAreaClass);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavNodeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavNodeInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavTestRenderingComponent
	 * Size -> 0x0000 (FullSize[0x06F0] - InheritedSize[0x06F0])
	 */
	class UNavTestRenderingComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.RecastFilter_UseDefaultArea
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.RecastNavMesh
	 * Size -> 0x0090 (FullSize[0x06A8] - InheritedSize[0x0618])
	 */
	class ARecastNavMesh : public ANavigationData
	{
	public:
		unsigned char                                              bDrawTriangleEdges : 1;                                  // 0x0618(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawPolyEdges : 1;                                      // 0x0618(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawFilledPolys : 1;                                    // 0x0618(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawNavMeshEdges : 1;                                   // 0x0618(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawTileBounds : 1;                                     // 0x0618(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawPathCollidingGeometry : 1;                          // 0x0618(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawTileLabels : 1;                                     // 0x0618(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawPolygonLabels : 1;                                  // 0x0618(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawDefaultPolygonCost : 1;                             // 0x0619(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawLabelsOnPathNodes : 1;                              // 0x0619(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawNavLinks : 1;                                       // 0x0619(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawFailedNavLinks : 1;                                 // 0x0619(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawClusters : 1;                                       // 0x0619(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawOctree : 1;                                         // 0x0619(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawOctreeDetails : 1;                                  // 0x0619(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDistinctlyDrawTilesBeingBuilt : 1;                      // 0x0619(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawNavMesh : 1;                                        // 0x061A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SD4T[0x1];                                   // 0x061B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawOffset;                                              // 0x061C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFixedTilePoolSize : 1;                                  // 0x0620(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VOQ[0x3];                                   // 0x0621(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TilePoolSize;                                            // 0x0624(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileSizeUU;                                              // 0x0628(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x062C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellHeight;                                              // 0x0630(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentRadius;                                             // 0x0634(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentHeight;                                             // 0x0638(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentMaxHeight;                                          // 0x063C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentMaxSlope;                                           // 0x0640(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentMaxStepHeight;                                      // 0x0644(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRegionArea;                                           // 0x0648(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MergeRegionSize;                                         // 0x064C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSimplificationError;                                  // 0x0650(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSimultaneousTileGenerationJobsCount;                  // 0x0654(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TileNumberHardLimit;                                     // 0x0658(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PolyRefTileBits;                                         // 0x065C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PolyRefNavPolyBits;                                      // 0x0660(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PolyRefSaltBits;                                         // 0x0664(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultDrawDistance;                                     // 0x0668(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultMaxSearchNodes;                                   // 0x066C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultMaxHierarchicalSearchNodes;                       // 0x0670(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERecastPartitioning                                        RegionPartitioning;                                      // 0x0674(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERecastPartitioning                                        LayerPartitioning;                                       // 0x0675(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92Y2[0x2];                                   // 0x0676(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RegionChunkSplits;                                       // 0x0678(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LayerChunkSplits;                                        // 0x067C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSortNavigationAreasByCost : 1;                          // 0x0680(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPerformVoxelFiltering : 1;                              // 0x0680(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMarkLowHeightAreas : 1;                                 // 0x0680(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFilterLowSpanSequences : 1;                             // 0x0680(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFilterLowSpanFromTileCache : 1;                         // 0x0680(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDoFullyAsyncNavDataGathering : 1;                       // 0x0680(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseBetterOffsetsFromCorners : 1;                        // 0x0680(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStoreEmptyTileLayers : 1;                               // 0x0680(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseVirtualFilters : 1;                                  // 0x0681(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowNavLinkAsPathEnd : 1;                              // 0x0681(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseVoxelCache : 1;                                      // 0x0681(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YZ7U[0x2];                                   // 0x0682(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TileSetUpdateInterval;                                   // 0x0684(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HeuristicScale;                                          // 0x0688(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalDeviationFromGroundCompensation;                 // 0x068C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NIUY[0x18];                                  // 0x0690(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.RecastNavMeshDataChunk
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URecastNavMeshDataChunk : public UNavigationDataChunk
	{
	public:
		unsigned char                                              UnknownData_WIXK[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
