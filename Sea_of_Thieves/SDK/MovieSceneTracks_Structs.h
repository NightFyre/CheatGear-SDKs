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
	 * Enum MovieSceneTracks.MovieScene3DPathSection_Axis
	 */
	enum class EMovieScene3DPathSection_Axis : uint8_t
	{
		MovieScene3DPathSection_Axis_X                           = 0,
		MovieScene3DPathSection_Axis_Y                           = 1,
		MovieScene3DPathSection_Axis_Z                           = 2,
		MovieScene3DPathSection_Axis_NEG_X                       = 3,
		MovieScene3DPathSection_Axis_NEG_Y                       = 4,
		MovieScene3DPathSection_Axis_NEG_Z                       = 5,
		MovieScene3DPathSection_Axis_MovieScene3DPathSection_MAX = 6
	};

	/**
	 * Enum MovieSceneTracks.EShow3DTrajectory
	 */
	enum class EShow3DTrajectory : uint8_t
	{
		EST_OnlyWhenSelected = 0,
		EST_Always           = 1,
		EST_Never            = 2,
		EST_MAX              = 3
	};

	/**
	 * Enum MovieSceneTracks.ELevelVisibility
	 */
	enum class ELevelVisibility : uint8_t
	{
		Visible = 0,
		Hidden  = 1,
		MAX     = 2
	};

	/**
	 * Enum MovieSceneTracks.EParticleKey
	 */
	enum class EParticleKey : uint8_t
	{
		Activate   = 0,
		Deactivate = 1,
		Trigger    = 2,
		MAX        = 3
	};

	/**
	 * Enum MovieSceneTracks.EAnimationTrackSubtype
	 */
	enum class EAnimationTrackSubtype : uint8_t
	{
		None                     = 0,
		CameraDockable_1stPerson = 1,
		CameraDockable_3rdPerson = 2,
		MAX                      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
	 * Size -> 0x0020
	 */
	struct FMovieSceneCameraAnimSectionData
	{
	public:
		class UCameraAnim*                                         CameraAnim;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayRate;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayScale;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendInTime;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendOutTime;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLooping;                                                // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UZTZ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
	 * Size -> 0x0020
	 */
	struct FMovieSceneCameraShakeSectionData
	{
	public:
		class UClass*                                              ShakeClass;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      PlayScale;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECameraAnimPlaySpace                                       PlaySpace;                                               // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z5GV[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            UserDefinedPlaySpace;                                    // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QQFY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneEventParameters
	 * Size -> 0x0018
	 */
	struct FMovieSceneEventParameters
	{
	public:
		unsigned char                                              UnknownData_P89R[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.EventPayload
	 * Size -> 0x0030
	 */
	struct FEventPayload
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSubtitleEvent;                                         // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JH08[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ActorNumber;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SubtitleIndex;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JC3U[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEventParameters                          Parameters;                                              // 0x0018(0x0018) Edit
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
	 * Size -> 0x0020
	 */
	struct FMovieSceneEventSectionData
	{
	public:
		TArray<float>                                              KeyTimes;                                                // 0x0000(0x0010) ZeroConstructor
		TArray<struct FEventPayload>                               KeyValues;                                               // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
	 * Size -> 0x0088
	 */
	struct FScalarParameterNameAndCurve
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Index;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GNT3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          ParameterCurve;                                          // 0x0010(0x0078)
	};

	/**
	 * ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
	 * Size -> 0x0178
	 */
	struct FVectorParameterNameAndCurves
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Index;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NDKV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          XCurve;                                                  // 0x0010(0x0078)
		struct FRichCurve                                          YCurve;                                                  // 0x0088(0x0078)
		struct FRichCurve                                          ZCurve;                                                  // 0x0100(0x0078)
	};

	/**
	 * ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
	 * Size -> 0x01F0
	 */
	struct FColorParameterNameAndCurves
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Index;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q7MV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          RedCurve;                                                // 0x0010(0x0078)
		struct FRichCurve                                          GreenCurve;                                              // 0x0088(0x0078)
		struct FRichCurve                                          BlueCurve;                                               // 0x0100(0x0078)
		struct FRichCurve                                          AlphaCurve;                                              // 0x0178(0x0078)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
	 * Size -> 0x0098
	 */
	struct FMovieSceneSkeletalAnimationParams
	{
	public:
		class UAnimSequenceBase*                                   Animation;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartOffset;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndOffset;                                               // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayRate;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bReverse : 1;                                            // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_2I4B[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SlotName;                                                // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRichCurve                                          Weight;                                                  // 0x0020(0x0078) Edit
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
	{
	public:
		struct FVector                                             Location;                                                // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Scale;                                                   // 0x0020(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M5LZ[0x4C];                                  // 0x002C(0x004C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JMVI[0x1C];                                  // 0x0014(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PD2K[0x1C];                                  // 0x0014(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
	{
	public:
		struct FVector                                             Location;                                                // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6V2V[0x1C];                                  // 0x0014(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BU9O[0x40];                                  // 0x0018(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
	{
	public:
		unsigned char                                              UnknownData_KZCT[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
	{
	public:
		unsigned char                                              UnknownData_2U8P[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            Vector;                                                  // 0x0050(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0048(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OEM4[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
	{
	public:
		struct FVector2D                                           Vector;                                                  // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		TArray<struct FScalarParameterNameAndCurve>                Scalars;                                                 // 0x0018(0x0010) ZeroConstructor
		TArray<struct FVectorParameterNameAndCurves>               Vectors;                                                 // 0x0028(0x0010) ZeroConstructor
		TArray<struct FColorParameterNameAndCurves>                Colors;                                                  // 0x0038(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
	{
	public:
		int32_t                                                    MaterialIndex;                                           // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E9KB[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
	 * Size -> 0x0070 (FullSize[0x0088] - InheritedSize[0x0018])
	 */
	struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FIntegralCurve                                      Curve;                                                   // 0x0018(0x0070)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FGuid                                               AttachGuid;                                              // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                AttachSocketName;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AttachComponentName;                                     // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FGuid                                               PathGuid;                                                // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRichCurve                                          TimingCurve;                                             // 0x0028(0x0078)
		EMovieScene3DPathSection_Axis                              FrontAxisEnum;                                           // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovieScene3DPathSection_Axis                              UpAxisEnum;                                              // 0x00A1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NUUR[0x2];                                   // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bFollow : 1;                                             // 0x00A4(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bReverse : 1;                                            // 0x00A4(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bForceUpright : 1;                                       // 0x00A4(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_M82M[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieScene3DTransformSectionTemplate
	 * Size -> 0x0438 (FullSize[0x0450] - InheritedSize[0x0018])
	 */
	struct FMovieScene3DTransformSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FRichCurve                                          TranslationCurve[0x3];                                   // 0x0018(0x0168)
		struct FRichCurve                                          RotationCurve[0x3];                                      // 0x0180(0x0168)
		struct FRichCurve                                          ScaleCurve[0x3];                                         // 0x02E8(0x0168)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
	 * Size -> 0x00A0 (FullSize[0x00B8] - InheritedSize[0x0018])
	 */
	struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0018(0x0020)
		struct FIntegralCurve                                      ActorGuidIndexCurve;                                     // 0x0038(0x0070)
		TArray<struct FGuid>                                       ActorGuids;                                              // 0x00A8(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
	 * Size -> 0x0118
	 */
	struct FMovieSceneAudioSectionTemplateData
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AudioStartOffset;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         AudioRange;                                              // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DLIB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          AudioPitchMultiplierCurve;                               // 0x0020(0x0078)
		struct FRichCurve                                          AudioVolumeCurve;                                        // 0x0098(0x0078)
		int32_t                                                    RowIndex;                                                // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NM7U[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
	 * Size -> 0x0118 (FullSize[0x0130] - InheritedSize[0x0018])
	 */
	struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneAudioSectionTemplateData                 AudioData;                                               // 0x0018(0x0118)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTrackTemplate
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMovieSceneAdditiveCameraAnimationTrackTemplate : public FMovieSceneEvalTemplate
	{	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
	{	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
	{
	public:
		struct FMovieSceneCameraShakeSectionData                   SourceData;                                              // 0x0018(0x0020)
		float                                                      SectionStartTime;                                        // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PFLA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
	{
	public:
		struct FMovieSceneCameraAnimSectionData                    SourceData;                                              // 0x0018(0x0020)
		float                                                      SectionStartTime;                                        // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FU8V[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FGuid                                               CameraGuid;                                              // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
	 * Size -> 0x01F8 (FullSize[0x0210] - InheritedSize[0x0018])
	 */
	struct FMovieSceneColorSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class FName                                                PropertyName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PropertyPath;                                            // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FRichCurve                                          Curves[0x4];                                             // 0x0030(0x01E0)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneEventSectionData                         EventData;                                               // 0x0018(0x0020)
		unsigned char                                              bFireEventsWhenForwards : 1;                             // 0x0038(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bFireEventsWhenBackwards : 1;                            // 0x0038(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_0XGM[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FRichCurve                                          FadeCurve;                                               // 0x0018(0x0078)
		struct FLinearColor                                        FadeColor;                                               // 0x0090(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              bFadeAudio : 1;                                          // 0x00A0(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_TB1U[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySharedTrack
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMovieSceneLevelVisibilitySharedTrack : public FMovieSceneEvalTemplate
	{	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		ELevelVisibility                                           Visibility;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZTO2[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LevelNames;                                              // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
	{	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
	 * Size -> 0x0070 (FullSize[0x0088] - InheritedSize[0x0018])
	 */
	struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FIntegralCurve                                      ParticleKeys;                                            // 0x0018(0x0070)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
	 * Size -> 0x0208 (FullSize[0x0220] - InheritedSize[0x0018])
	 */
	struct FMovieSceneVectorPropertySectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0018(0x0020) Protected
		struct FRichCurve                                          ComponentCurves[0x4];                                    // 0x0038(0x01E0) Protected
		int32_t                                                    NumChannelsUsed;                                         // 0x0218(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_JR5B[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
	 * Size -> 0x0098 (FullSize[0x00B0] - InheritedSize[0x0018])
	 */
	struct FMovieSceneStringPropertySectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0018(0x0020) Protected
		struct FStringCurve                                        StringCurve;                                             // 0x0038(0x0078) Protected
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMovieSceneIntegerPropertySectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0018(0x0020) Protected
		struct FIntegralCurve                                      IntegerCurve;                                            // 0x0038(0x0070) Protected
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMovieSceneEnumPropertySectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0018(0x0020) Protected
		struct FIntegralCurve                                      EnumCurve;                                               // 0x0038(0x0070) Protected
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMovieSceneBytePropertySectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0018(0x0020) Protected
		struct FIntegralCurve                                      ByteCurve;                                               // 0x0038(0x0070) Protected
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
	 * Size -> 0x0098 (FullSize[0x00B0] - InheritedSize[0x0018])
	 */
	struct FMovieSceneFloatPropertySectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0018(0x0020) Protected
		struct FRichCurve                                          FloatCurve;                                              // 0x0038(0x0078) Protected
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMovieSceneBoolPropertySectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0018(0x0020) Protected
		struct FIntegralCurve                                      BoolCurve;                                               // 0x0038(0x0070) Protected
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSharedTrack
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMovieSceneSkeletalAnimationSharedTrack : public FMovieSceneEvalTemplate
	{	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
	{
	public:
		float                                                      SectionStartTime;                                        // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SectionEndTime;                                          // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
	 * Size -> 0x00A8 (FullSize[0x00C0] - InheritedSize[0x0018])
	 */
	struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                                  // 0x0018(0x00A0)
		EAnimationTrackSubtype                                     AnimationSubtype;                                        // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TQ6I[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
	 * Size -> 0x0078 (FullSize[0x0090] - InheritedSize[0x0018])
	 */
	struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FRichCurve                                          SlomoCurve;                                              // 0x0018(0x0078)
	};

	/**
	 * ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
	{
	public:
		bool                                                       bTemporarilyHiddenInGame;                                // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ORNH[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
