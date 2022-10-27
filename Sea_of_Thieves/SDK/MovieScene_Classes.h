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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MovieScene.MovieSceneSignedObject
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UMovieSceneSignedObject : public UObject
	{
	public:
		struct FGuid                                               Signature;                                               // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9D97[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieScene
	 * Size -> 0x0080 (FullSize[0x0100] - InheritedSize[0x0080])
	 */
	class UMovieScene : public UMovieSceneSignedObject
	{
	public:
		TArray<struct FMovieSceneSpawnable>                        Spawnables;                                              // 0x0080(0x0010) ZeroConstructor
		TArray<struct FMovieScenePossessable>                      Possessables;                                            // 0x0090(0x0010) ZeroConstructor
		TArray<struct FMovieSceneBinding>                          ObjectBindings;                                          // 0x00A0(0x0010) ZeroConstructor, ContainsInstancedReference
		TArray<class UMovieSceneTrack*>                            MasterTracks;                                            // 0x00B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference
		class UMovieSceneTrack*                                    CameraCutTrack;                                          // 0x00C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FFloatRange                                         SelectionRange;                                          // 0x00C8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         PlaybackRange;                                           // 0x00D8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bForceFixedFrameIntervalPlayback;                        // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G12H[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FixedFrameInterval;                                      // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InTime;                                                  // 0x00F0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OutTime;                                                 // 0x00F4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartTime;                                               // 0x00F8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndTime;                                                 // 0x00FC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneBindingOverridesInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneBindingOverridesInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneBindingOverrides
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UMovieSceneBindingOverrides : public UObject
	{
	public:
		unsigned char                                              UnknownData_7YGJ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovieSceneBindingOverrideData>              BindingData;                                             // 0x0030(0x0010) Edit, ZeroConstructor
		unsigned char                                              UnknownData_TCAB[0x58];                                  // 0x0040(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneBindingOwnerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneBindingOwnerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneCameraDockingInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneCameraDockingInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneFolder
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UMovieSceneFolder : public UObject
	{
	public:
		class FName                                                FolderName;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMovieSceneFolder*>                           ChildFolders;                                            // 0x0030(0x0010) ZeroConstructor
		TArray<class UMovieSceneTrack*>                            ChildMasterTracks;                                       // 0x0040(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference
		TArray<class FString>                                      ChildObjectBindingStrings;                               // 0x0050(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_TTOW[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSequencePlayer
	 * Size -> 0x05E0 (FullSize[0x0608] - InheritedSize[0x0028])
	 */
	class UMovieSceneSequencePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_R4H9[0x368];                                 // 0x0028(0x0368) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlay;                                                  // 0x0390(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnStop;                                                  // 0x03A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnPause;                                                 // 0x03B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		unsigned char                                              bIsPlaying : 1;                                          // 0x03C0(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              bReversePlayback : 1;                                    // 0x03C0(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              bPendingFirstUpdate : 1;                                 // 0x03C0(0x0001) BIT_FIELD NoDestructor, Protected
		unsigned char                                              UnknownData_75GB[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieSceneSequence*                                 Sequence;                                                // 0x03C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      TimeCursorPosition;                                      // 0x03D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      StartTime;                                               // 0x03D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      EndTime;                                                 // 0x03D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		int32_t                                                    CurrentNumLoops;                                         // 0x03DC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_9XXB[0x10];                                  // 0x03E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x03F0(0x0028) Protected
		unsigned char                                              UnknownData_NCL1[0x1D0];                                 // 0x0418(0x01D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACharacter*                                          InteractingCharacter;                                    // 0x05E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_OR20[0x18];                                  // 0x05F0(0x0018) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void StartPlayingNextTick();
		void SetPlayRate(float PlayRate);
		void SetPlaybackRange(float NewStartTime, float NewEndTime);
		void SetPlaybackPosition(float NewPlaybackPosition);
		void SetOverridePlaybackSettings(const struct FMovieSceneSequencePlaybackSettings& InSettings);
		void PlayReverse();
		void PlayLooping(int32_t NumLoops);
		void Play(class ACharacter* OptionalInteractingCharacter);
		void Pause();
		bool IsPlaying();
		float GetPlayRate();
		float GetPlaybackStart();
		float GetPlaybackPosition();
		float GetPlaybackEnd();
		float GetLength();
		void ChangePlaybackDirection();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSection
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UMovieSceneSection : public UMovieSceneSignedObject
	{
	public:
		struct FMovieSceneSectionEvalOptions                       EvalOptions;                                             // 0x0080(0x0002) Edit
		unsigned char                                              UnknownData_HU53[0x2];                                   // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTime;                                               // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndTime;                                                 // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RowIndex;                                                // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OverlapPriority;                                         // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bIsActive : 1;                                           // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bIsLocked : 1;                                           // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              bIsInfinite : 1;                                         // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor
		unsigned char                                              UnknownData_7E0H[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneTrack
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UMovieSceneTrack : public UMovieSceneSignedObject
	{
	public:
		struct FMovieSceneTrackEvalOptions                         EvalOptions;                                             // 0x0080(0x0004) Edit
		unsigned char                                              UnknownData_5NAJ[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSequence
	 * Size -> 0x0228 (FullSize[0x02A8] - InheritedSize[0x0080])
	 */
	class UMovieSceneSequence : public UMovieSceneSignedObject
	{
	public:
		struct FCachedMovieSceneEvaluationTemplate                 EvaluationTemplate;                                      // 0x0080(0x0220)
		struct FMovieSceneTrackCompilationParams                   TemplateParameters;                                      // 0x02A0(0x0001)
		bool                                                       bParentContextsAreSignificant;                           // 0x02A1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_1213[0x6];                                   // 0x02A2(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneNameableTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMovieSceneNameableTrack : public UMovieSceneTrack
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
