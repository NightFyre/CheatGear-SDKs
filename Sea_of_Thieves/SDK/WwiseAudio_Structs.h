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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum WwiseAudio.EAnimNotify_WwiseSound_PerspectiveRestriction
	 */
	enum class EAnimNotify_WwiseSound_PerspectiveRestriction : uint8_t
	{
		NoRestriction              = 0,
		FirstPersonOnly            = 1,
		ThirdPersonOnly            = 2,
		EAnimNotify_WwiseSound_MAX = 3
	};

	/**
	 * Enum WwiseAudio.EWwiseEventDurationType
	 */
	enum class EWwiseEventDurationType : uint8_t
	{
		OneShot  = 0,
		Mixed    = 1,
		Infinite = 2,
		Unknown  = 3,
		MAX      = 4
	};

	/**
	 * Enum WwiseAudio.EWwiseAsyncIOPriorityDisplay
	 */
	enum class EWwiseAsyncIOPriorityDisplay : uint8_t
	{
		Low         = 0,
		BelowNormal = 1,
		Normal      = 2,
		High        = 3,
		MAX         = 4
	};

	/**
	 * Enum WwiseAudio.EWwiseLanguageOrder
	 */
	enum class EWwiseLanguageOrder : uint8_t
	{
		English  = 0,
		French   = 1,
		Italian  = 2,
		German   = 3,
		Spanish  = 4,
		Mexican  = 5,
		Brazil   = 6,
		Russian  = 7,
		Japanese = 8,
		MAX      = 9
	};

	/**
	 * Enum WwiseAudio.EWwise7Point1Order
	 */
	enum class EWwise7Point1Order : uint8_t
	{
		Front_Left     = 0,
		Front_Right    = 1,
		Center         = 2,
		Left_Surround  = 3,
		Right_Surround = 4,
		Left_Side      = 5,
		Right_Side     = 6,
		LFE            = 7,
		Null_Channel   = 8,
		MAX            = 9
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WwiseAudio.MultiEmitterData
	 * Size -> 0x0028
	 */
	struct FMultiEmitterData
	{
	public:
		class UWwiseObjectPoolWrapper*                             PoolWrapper;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayEvent;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Name;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Offset;                                                  // 0x0018(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M7TD[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseAudio.ReverbPresetControllerSettings
	 * Size -> 0x0028
	 */
	struct FReverbPresetControllerSettings
	{
	public:
		uint32_t                                                   VectorsPerSegment;                                       // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   TracesPerSegmentPerFrame;                                // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   HorizontalSegments;                                      // 0x0008(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizontalConeSegmentElevationAngle;                     // 0x000C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UpwardsConeAngle;                                        // 0x0010(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TraceVectorLength;                                       // 0x0014(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToDiscardSample;                                     // 0x0018(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceToDiscardSample;                                 // 0x001C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BiasTowardsVerticalSegment;                              // 0x0020(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   MaxNumSampleFramesInHistory;                             // 0x0024(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseAudioReverbPresets
	 * Size -> 0x0064
	 */
	struct FWwiseAudioReverbPresets
	{
	public:
		class FName                                                ShortEarlyReflectionPresetName;                          // 0x0000(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LongEarlyReflectionPresetName;                           // 0x0008(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SpaceSizeRTPCName;                                       // 0x0010(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EnclosedRatioRTPCName;                                   // 0x0018(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MaterialThicknessRTPCName;                               // 0x0020(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MaterialReflectivityRTPCName;                            // 0x0028(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionChannel                                          EnvironmentTraceChannel;                                 // 0x0030(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O2O5[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinSpaceSizeWindowForEarlyReflections;                   // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSpaceSizeWindowforEarlyReflections;                   // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FReverbPresetControllerSettings                     SamplingSettings;                                        // 0x003C(0x0028) Edit, Config
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseBinkTrackMapping
	 * Size -> 0x0008
	 */
	struct FWwiseBinkTrackMapping
	{
	public:
		EWwise7Point1Order                                         mChannelMapping;                                         // 0x0000(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mRequired;                                               // 0x0001(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DXAC[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      mVolumeDb;                                               // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseBinkTrackMappings
	 * Size -> 0x0018
	 */
	struct FWwiseBinkTrackMappings
	{
	public:
		EWwiseLanguageOrder                                        mLanguage;                                               // 0x0000(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AZ58[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWwiseBinkTrackMapping>                      mChannels;                                               // 0x0008(0x0010) Edit, ZeroConstructor, Config
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseBinkSettings
	 * Size -> 0x0038
	 */
	struct FWwiseBinkSettings
	{
	public:
		struct FStringAssetReference                               PlayEvent;                                               // 0x0000(0x0010) Edit, ZeroConstructor, Config
		struct FStringAssetReference                               StopEvent;                                               // 0x0010(0x0010) Edit, ZeroConstructor, Config
		int32_t                                                    PreBufferCount;                                          // 0x0020(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MBT7[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWwiseBinkTrackMappings>                     Mappings;                                                // 0x0028(0x0010) Edit, ZeroConstructor, Config
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseIOPriorityMappingConfig
	 * Size -> 0x0008
	 */
	struct FWwiseIOPriorityMappingConfig
	{
	public:
		int32_t                                                    WwisePriority;                                           // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWwiseAsyncIOPriorityDisplay                               AsyncIOPriority;                                         // 0x0004(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MZIX[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseNetworkRelationship
	 * Size -> 0x0018
	 */
	struct FWwiseNetworkRelationship
	{
	public:
		class FName                                                SwitchGroupName;                                         // 0x0000(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RemotePlayerSwitchValue;                                 // 0x0008(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LocalPlayerSwitchValue;                                  // 0x0010(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseAudioGameStateSettings
	 * Size -> 0x00A0
	 */
	struct FWwiseAudioGameStateSettings
	{
	public:
		class FName                                                AudioGameStateGroupName;                                 // 0x0000(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AudioGameStateFrontend;                                  // 0x0008(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AudioGameStateLoading;                                   // 0x0010(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AudioGameStateIngame;                                    // 0x0018(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStringAssetReference>                       EventsToPlayOnLobbyStart;                                // 0x0020(0x0010) Edit, ZeroConstructor, Config
		TArray<struct FStringAssetReference>                       EventsToPlayOnLobbyEnd;                                  // 0x0030(0x0010) Edit, ZeroConstructor, Config
		TArray<struct FStringAssetReference>                       EventsToPlayOnEngageStart;                               // 0x0040(0x0010) Edit, ZeroConstructor, Config
		TArray<struct FStringAssetReference>                       EventsToPlayOnEngageEnd;                                 // 0x0050(0x0010) Edit, ZeroConstructor, Config
		TArray<struct FStringAssetReference>                       EventsToPlayOnLoadingStart;                              // 0x0060(0x0010) Edit, ZeroConstructor, Config
		TArray<struct FStringAssetReference>                       EventsToPlayOnLoadingEnd;                                // 0x0070(0x0010) Edit, ZeroConstructor, Config
		TArray<struct FStringAssetReference>                       EventsToPlayOnFrontEndOrLoadingStart;                    // 0x0080(0x0010) Edit, ZeroConstructor, Config
		TArray<struct FStringAssetReference>                       EventsToPlayOnFrontEndOrLoadingEnd;                      // 0x0090(0x0010) Edit, ZeroConstructor, Config
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseAudioAcousticSurfaceParams
	 * Size -> 0x0008
	 */
	struct FWwiseAudioAcousticSurfaceParams
	{
	public:
		float                                                      Thickness;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Reflectivity;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseEventParam
	 * Size -> 0x0018
	 */
	struct FWwiseEventParam
	{
	public:
		TWeakObjectPtr<class UWwiseEvent>                          WwiseEvent;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		class FName                                                SourcePath;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SourceObj;                                               // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseEmitterParams
	 * Size -> 0x0002
	 */
	struct FWwiseEmitterParams
	{
	public:
		bool                                                       bEnableObstructionAndOcclusion;                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEnableAccoustics;                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseListenerInfo
	 * Size -> 0x003C
	 */
	struct FWwiseListenerInfo
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Up;                                                      // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Right;                                                   // 0x0018(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Front;                                                   // 0x0024(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Velocity;                                                // 0x0030(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseNativeEmitterPoolDensityParams
	 * Size -> 0x0028
	 */
	struct FWwiseNativeEmitterPoolDensityParams
	{
	public:
		bool                                                       PlayPoolDensityAudio;                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YV1B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         PoolDensityAudioPlayEvent;                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PoolDensityAudioStopEvent;                               // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DensityRtpcName;                                         // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FullDensityAmount;                                       // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DensityDistance;                                         // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseExternalSource
	 * Size -> 0x0010
	 */
	struct FWwiseExternalSource
	{
	public:
		class FString                                              path;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WwiseAudio.WwiseSubtitle
	 * Size -> 0x0010
	 */
	struct FWwiseSubtitle
	{
	public:
		class FString                                              Subtitle;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WwiseAudio.MovieSceneAkAudioEventTemplate
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UMovieSceneAkAudioEventSection*                      Section;                                                 // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WwiseAudio.MovieSceneAkAudioRTPCTemplate
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UMovieSceneAkAudioRTPCSection*                       Section;                                                 // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct WwiseAudio.MovieSceneAkAudioRTPCSectionData
	 * Size -> 0x0088
	 */
	struct FMovieSceneAkAudioRTPCSectionData
	{
	public:
		class FString                                              RTPCName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FRichCurve                                          RTPCCurve;                                               // 0x0010(0x0078)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
