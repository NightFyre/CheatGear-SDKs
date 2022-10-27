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
	 * Class MovieSceneTracks.MovieSceneTransformOrigin
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneTransformOrigin : public UInterface
	{
	public:
		struct FTransform BP_GetTransformOrigin();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DConstraintSection
	 * Size -> 0x0028 (FullSize[0x0108] - InheritedSize[0x00E0])
	 */
	class UMovieScene3DConstraintSection : public UMovieSceneSection
	{
	public:
		struct FGuid                                               ConstraintId;                                            // 0x00E0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMovieSceneObjectBindingID                          ConstraintBindingID;                                     // 0x00F0(0x0018) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);
		struct FMovieSceneObjectBindingID GetConstraintBindingID();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DAttachSection
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
	{
	public:
		class FName                                                AttachSocketName;                                        // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachComponentName;                                     // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AttachmentLocationRule;                                  // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AttachmentRotationRule;                                  // 0x0119(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AttachmentScaleRule;                                     // 0x011A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            DetachmentLocationRule;                                  // 0x011B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            DetachmentRotationRule;                                  // 0x011C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDetachmentRule                                            DetachmentScaleRule;                                     // 0x011D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW23[0x2];                                   // 0x011E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DConstraintTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieScene3DConstraintTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          ConstraintSections;                                      // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DAttachTrack
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DPathSection
	 * Size -> 0x00A8 (FullSize[0x01B0] - InheritedSize[0x0108])
	 */
	class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
	{
	public:
		struct FMovieSceneFloatChannel                             TimingCurve;                                             // 0x0108(0x00A0) NativeAccessSpecifierPublic
		EMovieScene3DPathSection_Axis                              FrontAxisEnum;                                           // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovieScene3DPathSection_Axis                              UpAxisEnum;                                              // 0x01A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SY4A[0x2];                                   // 0x01AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bFollow : 1;                                             // 0x01AC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReverse : 1;                                            // 0x01AC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bForceUpright : 1;                                       // 0x01AC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L7FZ[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DPathTrack
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DTransformSection
	 * Size -> 0x0650 (FullSize[0x0730] - InheritedSize[0x00E0])
	 */
	class UMovieScene3DTransformSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneTransformMask                            TransformMask;                                           // 0x00E0(0x0004) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_46MT[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             Translation[0x3];                                        // 0x00E8(0x01E0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             Rotation[0x3];                                           // 0x02C8(0x01E0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             Scale[0x3];                                              // 0x04A8(0x01E0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             ManualWeight;                                            // 0x0688(0x00A0) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U9TO[0x4];                                   // 0x0728(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseQuaternionInterpolation;                             // 0x072C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GLMC[0x3];                                   // 0x072D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePropertyTrack
	 * Size -> 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
	 */
	class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
	{
	public:
		class UMovieSceneSection*                                  SectionToKey;                                            // 0x0058(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                PropertyName;                                            // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              PropertyPath;                                            // 0x0068(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0078(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScene3DTransformTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneActorReferenceSection
	 * Size -> 0x0140 (FullSize[0x0220] - InheritedSize[0x00E0])
	 */
	class UMovieSceneActorReferenceSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneActorReferenceData                       ActorReferenceData;                                      // 0x00E0(0x00B0) NativeAccessSpecifierPrivate
		struct FIntegralCurve                                      ActorGuidIndexCurve;                                     // 0x0190(0x0080) Deprecated, NativeAccessSpecifierPrivate
		TArray<class FString>                                      ActorGuidStrings;                                        // 0x0210(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneActorReferenceTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneAudioSection
	 * Size -> 0x0250 (FullSize[0x0330] - InheritedSize[0x00E0])
	 */
	class UMovieSceneAudioSection : public UMovieSceneSection
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x00E8(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartOffset;                                             // 0x00EC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AudioStartTime;                                          // 0x00F0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AudioDilationFactor;                                     // 0x00F4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AudioVolume;                                             // 0x00F8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_17UR[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             SoundVolume;                                             // 0x0100(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             PitchMultiplier;                                         // 0x01A0(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneActorReferenceData                       AttachActorData;                                         // 0x0240(0x00B0) NativeAccessSpecifierPrivate
		bool                                                       bSuppressSubtitles;                                      // 0x02F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOverrideAttenuation;                                    // 0x02F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0SFA[0x6];                                   // 0x02F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x02F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptDelegate                                      OnQueueSubtitles;                                        // 0x0300(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnAudioFinished;                                         // 0x0310(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnAudioPlaybackPercent;                                  // 0x0320(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetStartOffset(const struct FFrameNumber& InStartOffset);
		void SetSound(class USoundBase* InSound);
		struct FFrameNumber GetStartOffset();
		class USoundBase* GetSound();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneAudioTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          AudioSections;                                           // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneBoolSection
	 * Size -> 0x0098 (FullSize[0x0178] - InheritedSize[0x00E0])
	 */
	class UMovieSceneBoolSection : public UMovieSceneSection
	{
	public:
		bool                                                       DefaultValue;                                            // 0x00E0(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OO2U[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneBoolChannel                              BoolCurve;                                               // 0x00E8(0x0090) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneBoolTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneByteSection
	 * Size -> 0x0098 (FullSize[0x0178] - InheritedSize[0x00E0])
	 */
	class UMovieSceneByteSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneByteChannel                              ByteCurve;                                               // 0x00E0(0x0098) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneByteTrack
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UMovieSceneByteTrack : public UMovieScenePropertyTrack
	{
	public:
		class UEnum*                                               Enum;                                                    // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraAnimSection
	 * Size -> 0x0040 (FullSize[0x0120] - InheritedSize[0x00E0])
	 */
	class UMovieSceneCameraAnimSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneCameraAnimSectionData                    AnimData;                                                // 0x00E0(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UCameraAnim*                                         CameraAnim;                                              // 0x0100(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlayRate;                                                // 0x0108(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlayScale;                                               // 0x010C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendInTime;                                             // 0x0110(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendOutTime;                                            // 0x0114(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLooping;                                                // 0x0118(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MR2T[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraAnimTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          CameraAnimSections;                                      // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraCutSection
	 * Size -> 0x0028 (FullSize[0x0108] - InheritedSize[0x00E0])
	 */
	class UMovieSceneCameraCutSection : public UMovieSceneSection
	{
	public:
		struct FGuid                                               CameraGuid;                                              // 0x00E0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneObjectBindingID                          CameraBindingID;                                         // 0x00F0(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID);
		struct FMovieSceneObjectBindingID GetCameraBindingID();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraCutTrack
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
	{
	public:
		bool                                                       bCanBlend;                                               // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BQU[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0060(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeSection
	 * Size -> 0x0040 (FullSize[0x0120] - InheritedSize[0x00E0])
	 */
	class UMovieSceneCameraShakeSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneCameraShakeSectionData                   ShakeData;                                               // 0x00E0(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              ShakeClass;                                              // 0x0100(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayScale;                                               // 0x0108(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECameraAnimPlaySpace                                       PlaySpace;                                               // 0x010C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHV2[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            UserDefinedPlaySpace;                                    // 0x0110(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DG45[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCameraShakeTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          CameraShakeSections;                                     // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCinematicShotSection
	 * Size -> 0x0028 (FullSize[0x0180] - InheritedSize[0x0158])
	 */
	class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
	{
	public:
		class FString                                              ShotDisplayName;                                         // 0x0158(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                DisplayName;                                             // 0x0168(0x0018) Deprecated, NativeAccessSpecifierPrivate

	public:
		void SetShotDisplayName(const class FString& InShotDisplayName);
		class FString GetShotDisplayName();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneCinematicShotTrack
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneColorSection
	 * Size -> 0x0280 (FullSize[0x0360] - InheritedSize[0x00E0])
	 */
	class UMovieSceneColorSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneFloatChannel                             RedCurve;                                                // 0x00E0(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             GreenCurve;                                              // 0x0180(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             BlueCurve;                                               // 0x0220(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             AlphaCurve;                                              // 0x02C0(0x00A0) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneColorTrack
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UMovieSceneColorTrack : public UMovieScenePropertyTrack
	{
	public:
		bool                                                       bIsSlateColor;                                           // 0x0088(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NRUT[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEnumSection
	 * Size -> 0x0098 (FullSize[0x0178] - InheritedSize[0x00E0])
	 */
	class UMovieSceneEnumSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneByteChannel                              EnumCurve;                                               // 0x00E0(0x0098) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEnumTrack
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
	{
	public:
		class UEnum*                                               Enum;                                                    // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEulerTransformTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventSectionBase
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UMovieSceneEventSectionBase : public UMovieSceneSection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventRepeaterSection
	 * Size -> 0x0028 (FullSize[0x0108] - InheritedSize[0x00E0])
	 */
	class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
	{
	public:
		struct FMovieSceneEvent                                    Event;                                                   // 0x00E0(0x0028) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventSection
	 * Size -> 0x0100 (FullSize[0x01E0] - InheritedSize[0x00E0])
	 */
	class UMovieSceneEventSection : public UMovieSceneSection
	{
	public:
		struct FNameCurve                                          Events;                                                  // 0x00E0(0x0078) Deprecated, NativeAccessSpecifierPrivate
		struct FMovieSceneEventSectionData                         EventData;                                               // 0x0158(0x0088) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventTrack
	 * Size -> 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
	 */
	class UMovieSceneEventTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              bFireEventsWhenForwards : 1;                             // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFireEventsWhenBackwards : 1;                            // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9EN[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFireEventsAtPosition                                      EventPosition;                                           // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQ3Z[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovieSceneObjectBindingID>                  EventReceivers;                                          // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0070(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneEventTriggerSection
	 * Size -> 0x0088 (FullSize[0x0168] - InheritedSize[0x00E0])
	 */
	class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
	{
	public:
		struct FMovieSceneEventChannel                             EventChannel;                                            // 0x00E0(0x0088) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFloatSection
	 * Size -> 0x00A0 (FullSize[0x0180] - InheritedSize[0x00E0])
	 */
	class UMovieSceneFloatSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneFloatChannel                             FloatCurve;                                              // 0x00E0(0x00A0) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFadeSection
	 * Size -> 0x0018 (FullSize[0x0198] - InheritedSize[0x0180])
	 */
	class UMovieSceneFadeSection : public UMovieSceneFloatSection
	{
	public:
		struct FLinearColor                                        FadeColor;                                               // 0x0180(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFadeAudio : 1;                                          // 0x0190(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9BX[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFloatTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneFadeTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneIntegerSection
	 * Size -> 0x0090 (FullSize[0x0170] - InheritedSize[0x00E0])
	 */
	class UMovieSceneIntegerSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneIntegerChannel                           IntegerCurve;                                            // 0x00E0(0x0090) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneIntegerTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneLevelVisibilitySection
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
	{
	public:
		ELevelVisibility                                           Visibility;                                              // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5834[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LevelNames;                                              // 0x00E8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetVisibility(ELevelVisibility InVisibility);
		void SetLevelNames(TArray<class FName> InLevelNames);
		ELevelVisibility GetVisibility();
		TArray<class FName> GetLevelNames();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneMaterialTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
	{
	public:
		class UMaterialParameterCollection*                        MPC;                                                     // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneComponentMaterialTrack
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
	{
	public:
		int32_t                                                    MaterialIndex;                                           // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6ZDS[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneObjectPropertySection
	 * Size -> 0x00C0 (FullSize[0x01A0] - InheritedSize[0x00E0])
	 */
	class UMovieSceneObjectPropertySection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneObjectPathChannel                        ObjectChannel;                                           // 0x00E0(0x00C0) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneObjectPropertyTrack
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
	{
	public:
		class UClass*                                              PropertyClass;                                           // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParameterSection
	 * Size -> 0x0060 (FullSize[0x0140] - InheritedSize[0x00E0])
	 */
	class UMovieSceneParameterSection : public UMovieSceneSection
	{
	public:
		TArray<struct FBoolParameterNameAndCurve>                  BoolParameterNamesAndCurves;                             // 0x00E0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FScalarParameterNameAndCurve>                ScalarParameterNamesAndCurves;                           // 0x00F0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FVector2DParameterNameAndCurves>             Vector2DParameterNamesAndCurves;                         // 0x0100(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FVectorParameterNameAndCurves>               VectorParameterNamesAndCurves;                           // 0x0110(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FColorParameterNameAndCurves>                ColorParameterNamesAndCurves;                            // 0x0120(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FTransformParameterNameAndCurves>            TransformParameterNamesAndCurves;                        // 0x0130(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParticleParameterTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParticleSection
	 * Size -> 0x0098 (FullSize[0x0178] - InheritedSize[0x00E0])
	 */
	class UMovieSceneParticleSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneParticleChannel                          ParticleKeys;                                            // 0x00E0(0x0098) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneParticleTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          ParticleSections;                                        // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
	 * Size -> 0x00C0 (FullSize[0x01A0] - InheritedSize[0x00E0])
	 */
	class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneObjectPathChannel                        MaterialChannel;                                         // 0x00E0(0x00C0) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
	{
	public:
		int32_t                                                    MaterialIndex;                                           // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHTX[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
	 * Size -> 0x0100 (FullSize[0x01E0] - InheritedSize[0x00E0])
	 */
	class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneSkeletalAnimationParams                  Params;                                                  // 0x00E0(0x00D8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UAnimSequence*                                       AnimSequence;                                            // 0x01B8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimSequenceBase*                                   Animation;                                               // 0x01C0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartOffset;                                             // 0x01C8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EndOffset;                                               // 0x01CC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlayRate;                                                // 0x01D0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bReverse : 1;                                            // 0x01D4(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NNUD[0x3];                                   // 0x01D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SlotName;                                                // 0x01D8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseLegacySectionIndexBlend;                             // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K4O2[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSlomoSection
	 * Size -> 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
	 */
	class UMovieSceneSlomoSection : public UMovieSceneFloatSection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSlomoTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSpawnSection
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UMovieSceneSpawnSection : public UMovieSceneBoolSection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneSpawnTrack
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	class UMovieSceneSpawnTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               ObjectGuid;                                              // 0x0068(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneStringSection
	 * Size -> 0x00A0 (FullSize[0x0180] - InheritedSize[0x00E0])
	 */
	class UMovieSceneStringSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneStringChannel                            StringCurve;                                             // 0x00E0(0x00A0) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneStringTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneStringTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneTransformTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneVectorSection
	 * Size -> 0x0288 (FullSize[0x0368] - InheritedSize[0x00E0])
	 */
	class UMovieSceneVectorSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneFloatChannel                             Curves[0x4];                                             // 0x00E0(0x0280) NativeAccessSpecifierPrivate
		int32_t                                                    ChannelsUsed;                                            // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NBPC[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneVectorTrack
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
	{
	public:
		int32_t                                                    NumChannelsUsed;                                         // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SU1C[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneTracks.MovieSceneVisibilityTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
