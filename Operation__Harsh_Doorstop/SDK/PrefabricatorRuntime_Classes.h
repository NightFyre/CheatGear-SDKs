#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Class PrefabricatorRuntime.PrefabActor
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class APrefabActor : public AActor
	{
	public:
		class UPrefabComponent*                                    PrefabComponent;                                         // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               LastUpdateID;                                            // 0x0228(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0238(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5JL[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SavePrefab();
		void RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive);
		void LoadPrefab();
		bool IsPrefabOutdated();
		class UPrefabricatorAsset* GetPrefabAsset();
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.ReplicablePrefabActor
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class AReplicablePrefabActor : public APrefabActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabComponent
	 * Size -> 0x0030 (FullSize[0x0220] - InheritedSize[0x01F0])
	 */
	class UPrefabComponent : public USceneComponent
	{
	public:
		unsigned char                                              PrefabAssetInterface[0x28];                              // 0x01F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_TPFG[0x8];                                   // 0x0218(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabDebugActor
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class APrefabDebugActor : public AActor
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ActorData;                                               // 0x0228(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabRandomizer
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class APrefabRandomizer : public AActor
	{
	public:
		bool                                                       bRandomizeOnBeginPlay;                                   // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N48U[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SeedOffset;                                              // 0x0224(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBuildTimePerFrame;                                    // 0x0228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_57CY[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRandomizationComplete;                                 // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bFastSyncBuild;                                          // 0x0240(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLD9[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrefabActor*>                                ActorsToRandomize;                                       // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1DK[0x18];                                  // 0x0258(0x0018) MISSED OFFSET (PADDING)

	public:
		void Randomize(int32_t InSeed);
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabricatorProperty
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UPrefabricatorProperty : public UObject
	{
	public:
		class FString                                              PropertyName;                                            // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExportedValue;                                           // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrefabricatorPropertyAssetMapping>          AssetSoftReferenceMappings;                              // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCrossReferencedActor;                                 // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKMJ[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               CrossReferencePrefabActorId;                             // 0x005C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IF4Q[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabricatorEventListener
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrefabricatorEventListener : public UObject
	{
	public:
		void PostSpawn(class APrefabActor* Prefab);
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabricatorAssetInterface
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPrefabricatorAssetInterface : public UObject
	{
	public:
		class UClass*                                              EventListener;                                           // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicates;                                             // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YO57[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabricatorAsset
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UPrefabricatorAsset : public UPrefabricatorAssetInterface
	{
	public:
		TArray<struct FPrefabricatorActorData>                     ActorData;                                               // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComponentMobility                                         PrefabMobility;                                          // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKPB[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               LastUpdateID;                                            // 0x004C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSJ4[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UThumbnailInfo*                                      ThumbnailInfo;                                           // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Version;                                                 // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7R5[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabricatorAssetCollection
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface
	{
	public:
		TArray<struct FPrefabricatorAssetCollectionItem>           Prefabs;                                                 // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Version;                                                 // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8543[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabricatorAssetUserData
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UPrefabricatorAssetUserData : public UAssetUserData
	{
	public:
		TWeakObjectPtr<class APrefabActor>                         PrefabActor;                                             // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ItemId;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnlinkPrefab(class APrefabActor* PrefabActor);
		class APrefabActor* STATIC_SpawnPrefab(class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int32_t Seed);
		void STATIC_SetPrefabAsset(class APrefabActor* PrefabActor, class UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab);
		void STATIC_RandomizePrefab(class APrefabActor* PrefabActor, const struct FRandomStream& InRandom);
		void STATIC_GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors);
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabricatorSettings
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UPrefabricatorSettings : public UDeveloperSettings
	{
	public:
		EPrefabricatorPivotPosition                                PivotPosition;                                           // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDynamicUpdate;                                     // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W73L[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              IgnoreBoundingBoxForObjects[0x50];                       // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      DefaultThumbnailPitch;                                   // 0x0090(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultThumbnailYaw;                                     // 0x0094(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultThumbnailZoom;                                    // 0x0098(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6P1C[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabSeedLinkerComponent
	 * Size -> 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
	 */
	class UPrefabSeedLinkerComponent : public USceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrefabricatorRuntime.PrefabSeedLinker
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class APrefabSeedLinker : public AActor
	{
	public:
		TArray<TWeakObjectPtr<class APrefabActor>>                 LinkedActors;                                            // 0x0220(0x0010) Edit, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrefabSeedLinkerComponent*                          SeedLinkerComponent;                                     // 0x0230(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
