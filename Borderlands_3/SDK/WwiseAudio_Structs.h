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
	 * Enum WwiseAudio.EWwiseTrackDirectionality
	 */
	enum class EWwiseTrackDirectionality : uint8_t
	{
		ForwardsAndBackwards = 0,
		OnlyForwards         = 1,
		OnlyBackwards        = 2,
		MAX                  = 3
	};

	/**
	 * Enum WwiseAudio.EWwiseAudioComponentPoolMode
	 */
	enum class EWwiseAudioComponentPoolMode : uint8_t
	{
		Fixed = 0,
		Steal = 1,
		MAX   = 2
	};

	/**
	 * Enum WwiseAudio.EWwisePlaybackConfiguration
	 */
	enum class EWwisePlaybackConfiguration : uint8_t
	{
		Hifi       = 0,
		Small      = 1,
		Headphones = 2,
		NightTime  = 3,
		Mono       = 4,
		Spatial    = 5,
		MAX        = 6
	};

	/**
	 * Enum WwiseAudio.EBankLoadState
	 */
	enum class EBankLoadState : uint8_t
	{
		Unloaded     = 0,
		AsyncLoading = 1,
		Loaded       = 2,
		MAX          = 3
	};

	/**
	 * Enum WwiseAudio.EAcousticsMode
	 */
	enum class EAcousticsMode : uint8_t
	{
		Disabled                       = 0,
		Enabled                        = 1,
		EnabledUnconditionalSampleMode = 2,
		EnabledOmnidirectional         = 3,
		UsePlayerLocationForAcoustics  = 4,
		MAX                            = 5
	};

	/**
	 * Enum WwiseAudio.EWwiseMultiPositionType
	 */
	enum class EWwiseMultiPositionType : uint8_t
	{
		MultiSources    = 0,
		MultiDirections = 1,
		MAX             = 2
	};

	/**
	 * Enum WwiseAudio.EWwiseCurveInterpolation
	 */
	enum class EWwiseCurveInterpolation : uint8_t
	{
		Log3      = 0,
		Sine      = 1,
		Log1      = 2,
		InvSCurve = 3,
		Linear    = 4,
		SCurve    = 5,
		Exp1      = 6,
		SineRecip = 7,
		Exp3      = 8,
		MAX       = 9
	};

	/**
	 * Enum WwiseAudio.EWwiseEventAction
	 */
	enum class EWwiseEventAction : uint8_t
	{
		Stop            = 0,
		Pause           = 1,
		Resume          = 2,
		Break           = 3,
		ReleaseEnvelope = 4,
		MAX             = 5
	};

	/**
	 * Enum WwiseAudio.EWwisePostEventFlags
	 */
	enum class EWwisePostEventFlags : uint8_t
	{
		MarkerCallbacks         = 0,
		SupportDuration         = 1,
		SupportPlaybackPosition = 2,
		MusicSyncCallbacks      = 3,
		MAX                     = 4
	};

	/**
	 * Enum WwiseAudio.EWwiseAudioComponentMixBehavior
	 */
	enum class EWwiseAudioComponentMixBehavior : uint8_t
	{
		Standard          = 0,
		DirectToMasterMix = 1,
		MixGroup          = 2,
		MAX               = 3
	};

	/**
	 * Enum WwiseAudio.EWwiseAudioComponentType
	 */
	enum class EWwiseAudioComponentType : uint8_t
	{
		Standard     = 0,
		ActorDefault = 1,
		Temporary    = 2,
		Pooled       = 3,
		MAX          = 4
	};

	/**
	 * Enum WwiseAudio.EWwiseEffectType
	 */
	enum class EWwiseEffectType : uint8_t
	{
		ListenerEnvironmentalEffect = 0,
		MAX                         = 1
	};

	/**
	 * Enum WwiseAudio.EWwiseDebugFlags
	 */
	enum class EWwiseDebugFlags : uint8_t
	{
		ShowOwner                 = 0,
		ShowComponentType         = 1,
		ShowEventNames            = 2,
		ShowDistanceToListener    = 3,
		HideActiveComponents      = 4,
		ShowHibernatingComponents = 5,
		ShowDetailedLocations     = 6,
		MAX                       = 7
	};

	/**
	 * Enum WwiseAudio.EWwiseAudioComponentSpriteSize
	 */
	enum class EWwiseAudioComponentSpriteSize : uint8_t
	{
		Large = 0,
		Small = 1,
		None  = 2,
		MAX   = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WwiseAudio.WwiseAudioEventTrackKey
	 * Size -> 0x0020
	 */
	struct FWwiseAudioEventTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MBJV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         AkAudioEvent;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseLocationOverride
	 * Size -> 0x0020
	 */
	struct FWwiseLocationOverride
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gain;                                                    // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseAudio.WwisePlaybackInstance
	 * Size -> 0x0018
	 */
	struct FWwisePlaybackInstance
	{
	public:
		unsigned char                                              UnknownData_XG1S[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseBankEfficiencyReportDatum
	 * Size -> 0x0068
	 */
	struct FWwiseBankEfficiencyReportDatum
	{
	public:
		class FString                                              BankName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalEvents;                                             // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5O7F[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LoadedEvents[0x50];                                      // 0x0018(0x0050) UNKNOWN PROPERTY: SetProperty WwiseAudio.WwiseBankEfficiencyReportDatum.LoadedEvents
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseMusicTiming
	 * Size -> 0x0014
	 */
	struct FWwiseMusicTiming
	{
	public:
		float                                                      CurrentPositionInBeats;                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeatDurationInSeconds;                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarLengthInBeats;                                        // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SegementLengthInBeats;                                   // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridLengthInBeats;                                       // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseAudio.MovieSceneWwiseSectionTemplateData
	 * Size -> 0x0038
	 */
	struct FMovieSceneWwiseSectionTemplateData
	{
	public:
		EWwiseTrackDirectionality                                  PlaybackDirection;                                       // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_09CX[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_JH1H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         WwiseEventStart;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         WwiseEventStop;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmitterRadius;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPlaythrough;                                       // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLoopingEvent;                                         // 0x001D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LT5S[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RowIdx;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionStartFrame;                                       // 0x0024(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionEndFrame;                                         // 0x0028(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameRate                                          CachedFrameRate;                                         // 0x002C(0x0008) HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIC2[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseAudio.MovieSceneWwiseSectionTemplate
	 * Size -> 0x0038 (FullSize[0x0058] - InheritedSize[0x0020])
	 */
	struct FMovieSceneWwiseSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneWwiseSectionTemplateData                 TemplateData;                                            // 0x0020(0x0038) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseAmbSoundCheckpointRecord
	 * Size -> 0x0001
	 */
	struct FWwiseAmbSoundCheckpointRecord
	{
	public:
		bool                                                       bCurrentlyPlaying;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseExternalSourceMediaInfo
	 * Size -> 0x000C
	 */
	struct FWwiseExternalSourceMediaInfo
	{
	public:
		uint32_t                                                   ExternalSourceCookie;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   FileID;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocalize;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQJE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseEventConfiguration
	 * Size -> 0x0018
	 */
	struct FWwiseEventConfiguration
	{
	public:
		class UWwiseEvent*                                         Event;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWwiseExternalSourceMediaInfo>               ExternalSourceMedia;                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseEmitterAcousticData
	 * Size -> 0x001C
	 */
	struct FWwiseEmitterAcousticData
	{
	public:
		float                                                      DryVolume;                                               // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ERVolume;                                                // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LRVolume;                                                // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LRDuration;                                              // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionAmbiX;                                          // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionAmbiY;                                          // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0S4[0x4];                                   // 0x0018(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseEffectInfo
	 * Size -> 0x000C
	 */
	struct FWwiseEffectInfo
	{
	public:
		int32_t                                                    EffectID;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetVolume;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryVolume;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseEmitter
	 * Size -> 0x02F0
	 */
	struct FWwiseEmitter
	{
	public:
		unsigned char                                              UnknownData_VU1R[0x2D8];                                 // 0x0000(0x02D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseAudioComponent*                                OwnerComponent;                                          // 0x02D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMN7[0x10];                                  // 0x02E0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseEmitterSource
	 * Size -> 0x0040
	 */
	struct FWwiseEmitterSource
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Gain;                                                    // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOK1[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseExternalAssetData
	 * Size -> 0x0030
	 */
	struct FWwiseExternalAssetData
	{
	public:
		unsigned char                                              WwiseEventPtr[0x28];                                     // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WwiseAudio.WwiseExternalAssetData.WwiseEventPtr
		float                                                      EstimatedDuration;                                       // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRW9[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseAcousticEmulationParameters
	 * Size -> 0x0018
	 */
	struct FWwiseAcousticEmulationParameters
	{
	public:
		int32_t                                                    EarlyReflectionsOffsetTimeMs;                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlobalWetnessScaleDB;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayDistance;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EarlyReflectionDecay;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LateReflectionDecay;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryVolumeCorrectionDistance;                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
