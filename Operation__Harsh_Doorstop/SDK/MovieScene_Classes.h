﻿#pragma once

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
	 * Class MovieScene.MovieSceneSignedObject
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UMovieSceneSignedObject : public UObject
	{
	public:
		struct FGuid                                               Signature;                                               // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N78F[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSection
	 * Size -> 0x0090 (FullSize[0x00E0] - InheritedSize[0x0050])
	 */
	class UMovieSceneSection : public UMovieSceneSignedObject
	{
	public:
		struct FMovieSceneSectionEvalOptions                       EvalOptions;                                             // 0x0050(0x0002) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCHT[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEasingSettings                           Easing;                                                  // 0x0058(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               SectionRange;                                            // 0x0090(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFrameNumber                                        PreRollFrames;                                           // 0x00A0(0x0004) Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumber                                        PostRollFrames;                                          // 0x00A4(0x0004) Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    RowIndex;                                                // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    OverlapPriority;                                         // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bIsActive : 1;                                           // 0x00B0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bIsLocked : 1;                                           // 0x00B0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FXR6[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTime;                                               // 0x00B4(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EndTime;                                                 // 0x00B8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PrerollTime;                                             // 0x00BC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PostrollTime;                                            // 0x00C0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsInfinite : 1;                                         // 0x00C4(0x0001) BIT_FIELD Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XM20[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSupportsInfiniteRange;                                  // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FOptionalMovieSceneBlendType                        BlendType;                                               // 0x00C9(0x0002) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VSO3[0x15];                                  // 0x00CB(0x0015) MISSED OFFSET (PADDING)

	public:
		void SetRowIndex(int32_t NewRowIndex);
		void SetPreRollFrames(int32_t InPreRollFrames);
		void SetPostRollFrames(int32_t InPostRollFrames);
		void SetOverlapPriority(int32_t NewPriority);
		void SetIsLocked(bool bInIsLocked);
		void SetIsActive(bool bInIsActive);
		void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
		void SetBlendType(EMovieSceneBlendType InBlendType);
		bool IsLocked();
		bool IsActive();
		int32_t GetRowIndex();
		int32_t GetPreRollFrames();
		int32_t GetPostRollFrames();
		int32_t GetOverlapPriority();
		EMovieSceneCompletionMode GetCompletionMode();
		struct FOptionalMovieSceneBlendType GetBlendType();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneTrack
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UMovieSceneTrack : public UMovieSceneSignedObject
	{
	public:
		struct FMovieSceneTrackEvalOptions                         EvalOptions;                                             // 0x0050(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2W8Q[0x1];                                   // 0x0054(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsEvalDisabled;                                         // 0x0055(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YMVC[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneNameableTrack
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneNameableTrack : public UMovieSceneTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSequence
	 * Size -> 0x02F8 (FullSize[0x0348] - InheritedSize[0x0050])
	 */
	class UMovieSceneSequence : public UMovieSceneSignedObject
	{
	public:
		struct FMovieSceneEvaluationTemplate                       PrecompiledEvaluationTemplate;                           // 0x0050(0x02F0) ContainsInstancedReference, NativeAccessSpecifierPublic
		EMovieSceneCompletionMode                                  DefaultCompletionMode;                                   // 0x0340(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParentContextsAreSignificant;                           // 0x0341(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlayableDirectly;                                       // 0x0342(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L9XU[0x5];                                   // 0x0343(0x0005) MISSED OFFSET (PADDING)

	public:
		TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(const class FName& InBindingName);
		struct FMovieSceneObjectBindingID FindBindingByTag(const class FName& InBindingName);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSequencePlayer
	 * Size -> 0x0860 (FullSize[0x0888] - InheritedSize[0x0028])
	 */
	class UMovieSceneSequencePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_SB6V[0x3E0];                                 // 0x0028(0x03E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlay;                                                  // 0x0408(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayReverse;                                           // 0x0418(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStop;                                                  // 0x0428(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPause;                                                 // 0x0438(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x0448(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EMovieScenePlayerStatus                                    Status;                                                  // 0x0458(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DSRU[0x3];                                   // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bReversePlayback : 1;                                    // 0x045C(0x0001) BIT_FIELD Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q56W[0x3];                                   // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0460(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FFrameNumber                                        StartTime;                                               // 0x0468(0x0004) Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DurationFrames;                                          // 0x046C(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentNumLoops;                                         // 0x0470(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D5WT[0x14];                                  // 0x0474(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x0488(0x0014) Net, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EQBX[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneRootEvaluationTemplateInstance           RootTemplateInstance;                                    // 0x04A0(0x0320) Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AIR1[0x68];                                  // 0x07C0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequenceReplProperties                   NetSyncProps;                                            // 0x0828(0x0010) Net, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              PlaybackClient[0x10];                                    // 0x0838(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_IDU0[0x40];                                  // 0x0848(0x0040) MISSED OFFSET (PADDING)

	public:
		void StopAtCurrentTime();
		void Stop();
		void SetTimeRange(float StartTime, float Duration);
		void SetPlayRate(float PlayRate);
		void SetPlaybackRange(float NewStartTime, float NewEndTime);
		void SetPlaybackPosition(float NewPlaybackPosition);
		void SetFrameRate(const struct FFrameRate& FrameRate);
		void SetFrameRange(int32_t StartFrame, int32_t Duration);
		void SetDisableCameraCuts(bool bInDisableCameraCuts);
		void ScrubToSeconds(float TimeInSeconds);
		bool ScrubToMarkedFrame(const class FString& InLabel);
		void ScrubToFrame(const struct FFrameTime& NewPosition);
		void Scrub();
		void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
		void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
		void PlayToSeconds(float TimeInSeconds);
		bool PlayToMarkedFrame(const class FString& InLabel);
		void PlayToFrame(const struct FFrameTime& NewPosition);
		void PlayReverse();
		void PlayLooping(int32_t NumLoops);
		void Play();
		void Pause();
		void JumpToSeconds(float TimeInSeconds);
		void JumpToPosition(float NewPlaybackPosition);
		bool JumpToMarkedFrame(const class FString& InLabel);
		void JumpToFrame(const struct FFrameTime& NewPosition);
		bool IsReversed();
		bool IsPlaying();
		bool IsPaused();
		void GoToEndAndStop();
		struct FQualifiedFrameTime GetStartTime();
		float GetPlayRate();
		float GetPlaybackStart();
		float GetPlaybackPosition();
		float GetPlaybackEnd();
		TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
		float GetLength();
		struct FFrameRate GetFrameRate();
		int32_t GetFrameDuration();
		struct FQualifiedFrameTime GetEndTime();
		struct FQualifiedFrameTime GetDuration();
		bool GetDisableCameraCuts();
		struct FQualifiedFrameTime GetCurrentTime();
		TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
		void ChangePlaybackDirection();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSubSection
	 * Size -> 0x0078 (FullSize[0x0158] - InheritedSize[0x00E0])
	 */
	class UMovieSceneSubSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneSectionParameters                        Parameters;                                              // 0x00E0(0x0024) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      StartOffset;                                             // 0x0104(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TimeScale;                                               // 0x0108(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PrerollTime;                                             // 0x010C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieSceneSequence*                                 SubSequence;                                             // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TLazyObjectPtr<class AActor>                               ActorToRecord;                                           // 0x0118(0x001C) Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LIGK[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TargetSequenceName;                                      // 0x0138(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDirectoryPath                                      TargetPathToRecordTo;                                    // 0x0148(0x0010) Edit, Protected, NativeAccessSpecifierProtected

	public:
		void SetSequence(class UMovieSceneSequence* Sequence);
		class UMovieSceneSequence* GetSequence();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneSubTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneSubTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneCustomClockSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneCustomClockSource : public UInterface
	{
	public:
		void OnTick(float DeltaSeconds, float InPlayRate);
		void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime);
		void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime);
		struct FFrameTime OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieScenePlaybackClient
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieScenePlaybackClient : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieScene
	 * Size -> 0x00F8 (FullSize[0x0148] - InheritedSize[0x0050])
	 */
	class UMovieScene : public UMovieSceneSignedObject
	{
	public:
		TArray<struct FMovieSceneSpawnable>                        Spawnables;                                              // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FMovieScenePossessable>                      Possessables;                                            // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneBinding>                          ObjectBindings;                                          // 0x0070(0x0010) ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, struct FMovieSceneObjectBindingIDs>      BindingGroups;                                           // 0x0080(0x0050) NativeAccessSpecifierPrivate
		TArray<class UMovieSceneTrack*>                            MasterTracks;                                            // 0x00D0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieSceneTrack*                                    CameraCutTrack;                                          // 0x00E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneFrameRange                               SelectionRange;                                          // 0x00E8(0x0010) NoDestructor, NativeAccessSpecifierPrivate
		struct FMovieSceneFrameRange                               PlaybackRange;                                           // 0x00F8(0x0010) NoDestructor, NativeAccessSpecifierPrivate
		struct FFrameRate                                          TickResolution;                                          // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameRate                                          DisplayRate;                                             // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMovieSceneEvaluationType                                  EvaluationType;                                          // 0x0118(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EUpdateClockSource                                         ClockSource;                                             // 0x0119(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HXMC[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     CustomClockSourcePath;                                   // 0x0120(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneMarkedFrame>                      MarkedFrames;                                            // 0x0138(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneBindingOverrides
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UMovieSceneBindingOverrides : public UObject
	{
	public:
		TArray<struct FMovieSceneBindingOverrideData>              BindingData;                                             // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G8DS[0x58];                                  // 0x0038(0x0058) MISSED OFFSET (PADDING)

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
	 * Class MovieScene.MovieSceneBuiltInEasingFunction
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMovieSceneBuiltInEasingFunction : public UObject
	{
	public:
		unsigned char                                              UnknownData_SKYX[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMovieSceneBuiltInEasing                                   Type;                                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8RT[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneEasingExternalCurve
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMovieSceneEasingExternalCurve : public UObject
	{
	public:
		unsigned char                                              UnknownData_A225[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         Curve;                                                   // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneEasingFunction
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneEasingFunction : public UInterface
	{
	public:
		float OnEvaluate(float Interp);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneFolder
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UMovieSceneFolder : public UObject
	{
	public:
		class FName                                                FolderName;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMovieSceneFolder*>                           ChildFolders;                                            // 0x0030(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMovieSceneTrack*>                            ChildMasterTracks;                                       // 0x0040(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FString>                                      ChildObjectBindingStrings;                               // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W5A4[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.MovieSceneKeyProxy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneKeyProxy : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneTrack
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UTestMovieSceneTrack : public UMovieSceneTrack
	{
	public:
		bool                                                       bHighPassFilter;                                         // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y21E[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          SectionArray;                                            // 0x0060(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneSection
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UTestMovieSceneSection : public UMovieSceneSection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneSequence
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class UTestMovieSceneSequence : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneSubTrack
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          SectionArray;                                            // 0x0068(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieScene.TestMovieSceneSubSection
	 * Size -> 0x0000 (FullSize[0x0158] - InheritedSize[0x0158])
	 */
	class UTestMovieSceneSubSection : public UMovieSceneSubSection
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
