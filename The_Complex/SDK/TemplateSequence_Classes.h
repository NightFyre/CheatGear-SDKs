#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Class TemplateSequence.TemplateSequence
	 * Size -> 0x00A8 (FullSize[0x0108] - InheritedSize[0x0060])
	 */
	class UTemplateSequence : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0060(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BoundActorClass[0x28];                                   // 0x0068(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              BoundPreviewActor[0x28];                                 // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<struct FGuid, class FName>                            BoundActorComponents;                                    // 0x00B8(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.CameraAnimationSequence
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UCameraAnimationSequence : public UTemplateSequence
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.CameraAnimationSequenceCameraStandIn
	 * Size -> 0x07E8 (FullSize[0x0810] - InheritedSize[0x0028])
	 */
	class UCameraAnimationSequenceCameraStandIn : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZB8S[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FieldOfView;                                             // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bConstrainAspectRatio : 1;                               // 0x0034(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWN9[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AspectRatio;                                             // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPM5[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                PostProcessSettings;                                     // 0x0040(0x06C0) NativeAccessSpecifierPublic
		float                                                      PostProcessBlendWeight;                                  // 0x0700(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCameraFilmbackSettings                             Filmback;                                                // 0x0704(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FCameraLensSettings                                 LensSettings;                                            // 0x0710(0x0018) NoDestructor, NativeAccessSpecifierPublic
		struct FCameraFocusSettings                                FocusSettings;                                           // 0x0728(0x0068) NativeAccessSpecifierPublic
		float                                                      CurrentFocalLength;                                      // 0x0790(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentAperture;                                         // 0x0794(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentFocusDistance;                                    // 0x0798(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUQS[0x74];                                  // 0x079C(0x0074) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.CameraAnimationSequencePlayer
	 * Size -> 0x03D0 (FullSize[0x03F8] - InheritedSize[0x0028])
	 */
	class UCameraAnimationSequencePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_7X44[0x280];                                 // 0x0028(0x0280) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             BoundObjectOverride;                                     // 0x02A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieSceneSequence*                                 Sequence;                                                // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneRootEvaluationTemplateInstance           RootTemplateInstance;                                    // 0x02B8(0x00E0) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A1MZ[0x60];                                  // 0x0398(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.CameraAnimationSequenceSubsystem
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
	{
	public:
		class UMovieSceneEntitySystemLinker*                       Linker;                                                  // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_41SE[0x68];                                  // 0x0038(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.SequenceCameraShakePattern
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class USequenceCameraShakePattern : public UCameraShakePattern
	{
	public:
		class UCameraAnimationSequence*                            Sequence;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomSegmentDuration;                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomSegment;                                          // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKZ7[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraAnimationSequencePlayer*                      Player;                                                  // 0x0048(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCameraAnimationSequenceCameraStandIn*               CameraStandIn;                                           // 0x0050(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.SequenceCameraShakeTestUtil
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_GetPostProcessBlendCache(class APlayerController* PlayerController, int32_t PPIndex, struct FPostProcessSettings* OutPPSettings, float* OutPPBlendWeight);
		struct FMinimalViewInfo STATIC_GetLastFrameCameraCachePOV(class APlayerController* PlayerController);
		struct FMinimalViewInfo STATIC_GetCameraCachePOV(class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceActor
	 * Size -> 0x0058 (FullSize[0x02D0] - InheritedSize[0x0278])
	 */
	class ATemplateSequenceActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_7J14[0x10];                                  // 0x0278(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x0288(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M299[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTemplateSequencePlayer*                             SequencePlayer;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TemplateSequence;                                        // 0x02A8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTemplateSequenceBindingOverrideData                BindingOverride;                                         // 0x02C0(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKUW[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSequence(class UTemplateSequence* InSequence);
		void SetBinding(class AActor* Actor, bool bOverridesDefault);
		class UTemplateSequence* LoadSequence();
		class UTemplateSequencePlayer* GetSequencePlayer();
		class UTemplateSequence* GetSequence();
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequencePlayer
	 * Size -> 0x0008 (FullSize[0x04D8] - InheritedSize[0x04D0])
	 */
	class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
	{
	public:
		unsigned char                                              UnknownData_QDF3[0x8];                                   // 0x04D0(0x0008) MISSED OFFSET (PADDING)

	public:
		class UTemplateSequencePlayer* STATIC_CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceSection
	 * Size -> 0x0018 (FullSize[0x0140] - InheritedSize[0x0128])
	 */
	class UTemplateSequenceSection : public UMovieSceneSubSection
	{
	public:
		unsigned char                                              UnknownData_TMXA[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTemplateSectionPropertyScale>               PropertyScales;                                          // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceSystem
	 * Size -> 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
	 */
	class UTemplateSequenceSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_4FYI[0x70];                                  // 0x0040(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
	 * Size -> 0x0058 (FullSize[0x0098] - InheritedSize[0x0040])
	 */
	class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_VGF1[0x58];                                  // 0x0040(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_PCHU[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceTrack
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UTemplateSequenceTrack : public UMovieSceneSubTrack
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
