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
	 * Enum GbxAudio.EDistributedSoundDebugVisualizationMode
	 */
	enum class EDistributedSoundDebugVisualizationMode : uint8_t
	{
		Off             = 0,
		ActiveLocations = 1,
		Tree            = 2,
		LeafNodes       = 3,
		MAX             = 4
	};

	/**
	 * Enum GbxAudio.EWwiseNotifyComponentMethod
	 */
	enum class EWwiseNotifyComponentMethod : uint8_t
	{
		UseActorDefaultComponent = 0,
		FindComponentsByTag      = 1,
		SpawnComponentAtSocket   = 2,
		MAX                      = 3
	};

	/**
	 * Enum GbxAudio.EOcclusionVoxelThinningAlgorithm
	 */
	enum class EOcclusionVoxelThinningAlgorithm : uint8_t
	{
		Skeletal    = 0,
		MedialPlane = 1,
		MAX         = 2
	};

	/**
	 * Enum GbxAudio.EFilterResultOperation
	 */
	enum class EFilterResultOperation : uint8_t
	{
		AcceptAsNewResult = 0,
		Add               = 1,
		Subtract          = 2,
		MAX               = 3
	};

	/**
	 * Enum GbxAudio.ECharacterSoundType
	 */
	enum class ECharacterSoundType : uint8_t
	{
		SFX          = 0,
		Vocalization = 1,
		MAX          = 2
	};

	/**
	 * Enum GbxAudio.EDistributedSoundMode
	 */
	enum class EDistributedSoundMode : uint8_t
	{
		Point            = 0,
		VolumetricSphere = 1,
		MAX              = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxAudio.ActiveAmbientInstance
	 * Size -> 0x0040
	 */
	struct FActiveAmbientInstance
	{
	public:
		unsigned char                                              UnknownData_W5Q6[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAudio.FoleyEventParams
	 * Size -> 0x0048
	 */
	struct FFoleyEventParams
	{
	public:
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseSwitch*                                        OptionalMaterialSwitch;                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ComponentTags;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NF91[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAudio.ActiveLoopingSoundNotifyData
	 * Size -> 0x0010
	 */
	struct FActiveLoopingSoundNotifyData
	{
	public:
		TArray<struct FWwisePlaybackInstance>                      Instances;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAudio.ADMSubscriberData
	 * Size -> 0x0038
	 */
	struct FADMSubscriberData
	{
	public:
		unsigned char                                              Subscriber[0x10];                                        // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxAudio.ADMSubscriberData.Subscriber
		unsigned char                                              UnknownData_1GQU[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAudio.AudioPrepComponentFilter
	 * Size -> 0x00A8
	 */
	struct FAudioPrepComponentFilter
	{
	public:
		TArray<class FString>                                      AssetNameFilter;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EPhysicalSurface>                                   SurfaceTypeFilter;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              PhysMatFilter[0x10];                                     // 0x0020(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxAudio.AudioPrepComponentFilter.PhysMatFilter
		unsigned char                                              MaterialFilter[0x10];                                    // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxAudio.AudioPrepComponentFilter.MaterialFilter
		TArray<class FString>                                      MaterialName;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      WithinActorBoundsBlueprint;                              // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<TLazyObjectPtr<class AActor>>                       WithinActorBounds;                                       // 0x0060(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<TLazyObjectPtr<class AActor>>                       AttachedToActors;                                        // 0x0070(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class FString>                                      ActorClassName;                                          // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      ComponentClassName;                                      // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bOnlyWorldGeometry;                                      // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGG1[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAudio.CharacterSoundImplementation
	 * Size -> 0x0020
	 */
	struct FCharacterSoundImplementation
	{
	public:
		bool                                                       bOriginator;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D7H8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         DefaultWwiseEvent;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideWwiseEvent;                                     // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6WZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAudio.InheritableSoundMap
	 * Size -> 0x0050
	 */
	struct FInheritableSoundMap
	{
	public:
		TMap<class UCharacterSoundTag*, struct FCharacterSoundImplementation> CharacterSounds;                                         // 0x0000(0x0050) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAudio.CharacterVocalLoopImplementation
	 * Size -> 0x0078
	 */
	struct FCharacterVocalLoopImplementation
	{
	public:
		bool                                                       bOriginator;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26OY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LoopName;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPainLoop;                                               // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFN8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               LoopID;                                                  // 0x0014(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideConditions;                                     // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWT6[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ConditionID;                                             // 0x0028(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCondition*                                       Condition;                                               // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayOnce;                                               // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XB05[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StopTryingToRunAfterXSeconds;                            // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               WhileConditionID;                                        // 0x0048(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCondition*                                       WhileCondition;                                          // 0x0058(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAudio;                                          // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KTR5[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         StartEvent;                                              // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         StopEvent;                                               // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAudio.InheritableVocalLoopList
	 * Size -> 0x0010
	 */
	struct FInheritableVocalLoopList
	{
	public:
		TArray<struct FCharacterVocalLoopImplementation>           VocalLoops;                                              // 0x0000(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAudio.CurrentVocalization
	 * Size -> 0x0020
	 */
	struct FCurrentVocalization
	{
	public:
		class UCharacterSoundTag*                                  Tag;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWwisePlaybackInstance                              PlayingInstance;                                         // 0x0008(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAudio.CharacterSoundLoopDetails
	 * Size -> 0x0020
	 */
	struct FCharacterSoundLoopDetails
	{
	public:
		unsigned char                                              UnknownData_OYUA[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAudio.CurrentVocalLoopInfo
	 * Size -> 0x0048
	 */
	struct FCurrentVocalLoopInfo
	{
	public:
		struct FGuid                                               LoopID;                                                  // 0x0000(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWwisePlaybackInstance                              PlayingInstance;                                         // 0x0010(0x0018) NativeAccessSpecifierPublic
		struct FCharacterSoundLoopDetails                          Details;                                                 // 0x0028(0x0020) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAudio.ExtraFoleyParameter
	 * Size -> 0x0010
	 */
	struct FExtraFoleyParameter
	{
	public:
		class UWwiseRtpc*                                          RtpcParam;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJ9H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAudio.AudioPropHitFilter_DirectionLimit
	 * Size -> 0x0014
	 */
	struct FAudioPropHitFilter_DirectionLimit
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      DotProductLimits;                                        // 0x000C(0x0008) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAudio.AudioPrepHitResultFilter
	 * Size -> 0x0078
	 */
	struct FAudioPrepHitResultFilter
	{
	public:
		TArray<class FString>                                      HitAssetNameFilter;                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EPhysicalSurface>                                   SurfaceTypeFilter;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              PhysMatFilter[0x10];                                     // 0x0020(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxAudio.AudioPrepHitResultFilter.PhysMatFilter
		unsigned char                                              MaterialFilter[0x10];                                    // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxAudio.AudioPrepHitResultFilter.MaterialFilter
		TArray<class AActor*>                                      WithinActorBoundsBlueprint;                              // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<TLazyObjectPtr<class AActor>>                       WithinActorBounds;                                       // 0x0050(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FAudioPropHitFilter_DirectionLimit>          NormalDirectionLimits;                                   // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAllowHitsWithinGeometry;                                // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H723[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxAudio.WindLocalAxisSensitivity
	 * Size -> 0x0008
	 */
	struct FWindLocalAxisSensitivity
	{
	public:
		float                                                      PositiveDirectionSensitivity;                            // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NegativeDirectionSensitivity;                            // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAudio.WindDirectionalSensitivity
	 * Size -> 0x0018
	 */
	struct FWindDirectionalSensitivity
	{
	public:
		struct FWindLocalAxisSensitivity                           LocalX;                                                  // 0x0000(0x0008) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FWindLocalAxisSensitivity                           LocalY;                                                  // 0x0008(0x0008) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FWindLocalAxisSensitivity                           LocalZ;                                                  // 0x0010(0x0008) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAudio.ResultGridFilter
	 * Size -> 0x0018
	 */
	struct FResultGridFilter
	{
	public:
		int32_t                                                    Iterations;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFilterResultOperation                                     ResultOperation;                                         // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWDF[0x3];                                   // 0x0005(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<class FString>                                      StructuringElements;                                     // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxAudio.CharacterVocalLoop
	 * Size -> 0x0028
	 */
	struct FCharacterVocalLoop
	{
	public:
		class UWwiseEvent*                                         StartEvent;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         StopEvent;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCondition*                                       Condition;                                               // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxCondition*                                       WhileCondition;                                          // 0x0018(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPainLoop;                                               // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7IG[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
