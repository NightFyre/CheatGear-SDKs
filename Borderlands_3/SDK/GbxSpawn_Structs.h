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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GbxSpawn.ESpawnAnimNotifyAction
	 */
	enum class ESpawnAnimNotifyAction : uint8_t
	{
		Start = 0,
		Stop  = 1,
		MAX   = 2
	};

	/**
	 * Enum GbxSpawn.EScriptedWarmup
	 */
	enum class EScriptedWarmup : uint8_t
	{
		None      = 0,
		FirstWave = 1,
		AllWaves  = 2,
		MAX       = 3
	};

	/**
	 * Enum GbxSpawn.ESpawnerDrawStyle
	 */
	enum class ESpawnerDrawStyle : uint8_t
	{
		None         = 0,
		Wire         = 1,
		Solid        = 2,
		SolidAndWire = 3,
		MAX          = 4
	};

	/**
	 * Enum GbxSpawn.EScriptedWarmupState
	 */
	enum class EScriptedWarmupState : uint8_t
	{
		None      = 0,
		Activated = 1,
		Complete  = 2,
		MAX       = 3
	};

	/**
	 * Enum GbxSpawn.EEncounterAdvanceType
	 */
	enum class EEncounterAdvanceType : uint8_t
	{
		All = 0,
		Any = 1,
		MAX = 2
	};

	/**
	 * Enum GbxSpawn.ESpawnSystemStreamStyle
	 */
	enum class ESpawnSystemStreamStyle : uint8_t
	{
		MapStartSynchronous  = 0,
		MapStartAsynchronous = 1,
		MAX                  = 2
	};

	/**
	 * Enum GbxSpawn.ESpawnerType
	 */
	enum class ESpawnerType : uint8_t
	{
		None    = 0,
		Level   = 1,
		Static  = 2,
		Dynamic = 3,
		MAX     = 4
	};

	/**
	 * Enum GbxSpawn.ESpawnerActorState
	 */
	enum class ESpawnerActorState : uint8_t
	{
		Unborn    = 0,
		Alive     = 1,
		Suspended = 2,
		Dead      = 3,
		MAX       = 4
	};

	/**
	 * Enum GbxSpawn.ESpawnPointUseType
	 */
	enum class ESpawnPointUseType : uint8_t
	{
		Self         = 0,
		List         = 1,
		ManualGroup  = 2,
		ClusterGroup = 3,
		MAX          = 4
	};

	/**
	 * Enum GbxSpawn.ESpawnPointFilter
	 */
	enum class ESpawnPointFilter : uint8_t
	{
		Any    = 0,
		All    = 1,
		NotAny = 2,
		NotAll = 3,
		MAX    = 4
	};

	/**
	 * Enum GbxSpawn.ESpawnLimitType
	 */
	enum class ESpawnLimitType : uint8_t
	{
		None         = 0,
		Spawner      = 1,
		SpawnerGroup = 2,
		MAX          = 3
	};

	/**
	 * Enum GbxSpawn.ESpawnerCritical
	 */
	enum class ESpawnerCritical : uint8_t
	{
		NotCritical = 0,
		AlwaysSpawn = 1,
		Critical    = 2,
		MAX         = 3
	};

	/**
	 * Enum GbxSpawn.EIrrelevantAction
	 */
	enum class EIrrelevantAction : uint8_t
	{
		Suspend = 0,
		Remove  = 1,
		Nothing = 2,
		MAX     = 3
	};

	/**
	 * Enum GbxSpawn.ERespawnStyle
	 */
	enum class ERespawnStyle : uint8_t
	{
		Timed = 0,
		Level = 1,
		Never = 2,
		MAX   = 3
	};

	/**
	 * Enum GbxSpawn.ESpawnStretchType
	 */
	enum class ESpawnStretchType : uint8_t
	{
		None       = 0,
		StartPoint = 1,
		EndPoint   = 2,
		Dynamic    = 3,
		MAX        = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxSpawn.SpawnDetails
	 * Size -> 0x0007
	 */
	struct FSpawnDetails
	{
	public:
		ESpawnerCritical                                           Critical;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCritical;                                       // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERespawnStyle                                              RespawnStyle;                                            // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideRespawnStyle;                                   // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIrrelevantAction                                          IrrelevantAction;                                        // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideIrrelevantAction;                               // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCritical;                                               // 0x0006(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnLimitData
	 * Size -> 0x0158
	 */
	struct FSpawnLimitData
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0000(0x0020) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               DisallowedTypes;                                         // 0x0020(0x0020) Edit, NativeAccessSpecifierPublic
		ESpawnPointFilter                                          TagFilterType;                                           // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LHX[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           TotalLimit;                                              // 0x0048(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bLimitTotal;                                             // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9GR5[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           AliveLimit;                                              // 0x00D0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bLimitAlive;                                             // 0x0150(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayContainerMatchType                                TagMatchType;                                            // 0x0151(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5L4H[0x6];                                   // 0x0152(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnPointGroup
	 * Size -> 0x0030
	 */
	struct FSpawnPointGroup
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0008(0x0004) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WLWL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TerritoryActorForThisGroup;                              // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ASpawnPoint*>                                 SpawnPoints;                                             // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bRandomize;                                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCTI[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnerSoftPath
	 * Size -> 0x0018
	 */
	struct FSpawnerSoftPath
	{
	public:
		class FName                                                SpawnerPathName;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SpawnerSubPathString;                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnDLCGroupItem
	 * Size -> 0x0020
	 */
	struct FSpawnDLCGroupItem
	{
	public:
		TArray<struct FSpawnerSoftPath>                            SpawnerSoftPaths;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysEnabledDuringEvent;                               // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45V0[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnDLCGroup
	 * Size -> 0x0020
	 */
	struct FSpawnDLCGroup
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSpawnDLCGroupItem>                          Replacements;                                            // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnDLCScriptGroup
	 * Size -> 0x00C0
	 */
	struct FSpawnDLCScriptGroup
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxParam                                           MaximumScriptedSpawnersPerGroupOverride;                 // 0x0010(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FSpawnerSoftPath>                            SpawnerSoftPaths;                                        // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAlwaysEnabledDuringEvent;                               // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQ8H[0x1F];                                  // 0x00A1(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnDLCItem
	 * Size -> 0x0060
	 */
	struct FSpawnDLCItem
	{
	public:
		unsigned char                                              Data[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GbxSpawn.SpawnDLCItem.Data
		struct FAttributeInitializationData                        IsEnabled;                                               // 0x0028(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnManagerAsyncRequest
	 * Size -> 0x0068
	 */
	struct FSpawnManagerAsyncRequest
	{
	public:
		class AActor*                                              Context;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpawnFactory*                                       SpawnFactory;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpawnPointComponent*                                SpawnPointComponent;                                     // 0x0018(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpawnerComponent*                                   SpawnerComponent;                                        // 0x0020(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Spawned;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Failed;                                                  // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GF8[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Owner;                                                   // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSpawnDetails                                       SpawnDetails;                                            // 0x0060(0x0007) Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B279[0x1];                                   // 0x0067(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnerLinkData
	 * Size -> 0x0028
	 */
	struct FSpawnerLinkData
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASpawner*                                            Spawner;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTeamComponent*                                      TeamComp;                                                // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpawnerComponent*                                   SpawnerComp;                                             // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpawnerLinkComponent*                               LinkComp;                                                // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnBunchListItem
	 * Size -> 0x0090
	 */
	struct FSpawnBunchListItem
	{
	public:
		class USpawnOptionData*                                    SpawnOptions;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxParam                                           NumActorsParam;                                          // 0x0008(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FName                                                SpawnPointGroupName;                                     // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxSpawn.EncounterAdvanceData
	 * Size -> 0x0010
	 */
	struct FEncounterAdvanceData
	{
	public:
		EEncounterAdvanceType                                      Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTimer;                                               // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SG46[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timer;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePercent;                                             // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ENT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Percent;                                                 // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxSpawn.EncounterWave
	 * Size -> 0x0038
	 */
	struct FEncounterWave
	{
	public:
		class USpawnerStyle*                                       SpawnerStyle;                                            // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEncounterAdvanceData                               Advancement;                                             // 0x0008(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      WarmupTimer;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_50ZS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpawnLimitData>                             Limits;                                                  // 0x0020(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FName                                                SpawnPointGroupName;                                     // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnOptionDataSoftPath
	 * Size -> 0x0018
	 */
	struct FSpawnOptionDataSoftPath
	{
	public:
		class FName                                                SpawnOptionDataPathName;                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SpawnOptionDataSubPathString;                            // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnManagerAsyncRequestEntry
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	struct FSpawnManagerAsyncRequestEntry : public FSpawnManagerAsyncRequest
	{
	public:
		unsigned char                                              UnknownData_5RKE[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnerActorData
	 * Size -> 0x00A8
	 */
	struct FSpawnerActorData
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLZ8[0x48];                                  // 0x0008(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpawnFactory*                                       Factory;                                                 // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TDB[0x40];                                  // 0x0058(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Owner;                                                   // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DY5R[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnerData
	 * Size -> 0x0140
	 */
	struct FSpawnerData
	{
	public:
		class USpawnManager*                                       Manager;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TMXH[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Owner;                                                   // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASpawner*                                            Spawner;                                                 // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpawnerComponent*                                   SpawnerComp;                                             // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpawnerStyle*                                       SpawnerStyle;                                            // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B34S[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpawnerActorData>                           Actors;                                                  // 0x0070(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3SI4[0x48];                                  // 0x0080(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      DeadActors;                                              // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class USpawnDLCScript*>                             DLCScripts;                                              // 0x00D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EY3L[0x58];                                  // 0x00E8(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnFactoryData
	 * Size -> 0x0128
	 */
	struct FSpawnFactoryData
	{
	public:
		class USpawnFactory*                                       Factory;                                                 // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxParam                                           WeightParam;                                             // 0x0008(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FString                                              Probability;                                             // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpawnLimitType                                            AliveLimitType;                                          // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VCB[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           AliveLimitParam;                                         // 0x00A0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    AliveLimit;                                              // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GU3[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxSpawn.SpawnPreviewState
	 * Size -> 0x0018 (FullSize[0x00F0] - InheritedSize[0x00D8])
	 */
	struct FSpawnPreviewState : public FPreviewState
	{
	public:
		class USpawnPointComponent*                                SpawnPointComponent;                                     // 0x00D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USpawnFactory*>                               PreviewFactories;                                        // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GbxSpawn.ActionState_SpawnAnim
	 * Size -> 0x0000 (FullSize[0x04F8] - InheritedSize[0x04F8])
	 */
	struct FActionState_SpawnAnim : public FActionState_Anim
	{	};

	/**
	 * ScriptStruct GbxSpawn.PointWidget
	 * Size -> 0x0030
	 */
	struct FPointWidget
	{
	public:
		struct FTransform                                          Point;                                                   // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
