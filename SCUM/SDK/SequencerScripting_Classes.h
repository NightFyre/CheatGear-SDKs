#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Class SequencerScripting.MovieSceneBindingExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void SetParent(const struct FSequencerBindingProxy& InBinding, const struct FSequencerBindingProxy& InParentBinding);
		void SetName(const struct FSequencerBindingProxy& InBinding, const class FString& InName);
		void SetDisplayName(const struct FSequencerBindingProxy& InBinding, const class FText& InDisplayName);
		void RemoveTrack(const struct FSequencerBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);
		void Remove(const struct FSequencerBindingProxy& InBinding);
		void MoveBindingContents(const struct FSequencerBindingProxy& SourceBindingId, const struct FSequencerBindingProxy& DestinationBindingId);
		bool IsValid(const struct FSequencerBindingProxy& InBinding);
		TArray<class UMovieSceneTrack*> GetTracks(const struct FSequencerBindingProxy& InBinding);
		class UClass* GetPossessedObjectClass(const struct FSequencerBindingProxy& InBinding);
		struct FSequencerBindingProxy GetParent(const struct FSequencerBindingProxy& InBinding);
		class UObject* GetObjectTemplate(const struct FSequencerBindingProxy& InBinding);
		class FString GetName(const struct FSequencerBindingProxy& InBinding);
		struct FGuid GetId(const struct FSequencerBindingProxy& InBinding);
		class FText GetDisplayName(const struct FSequencerBindingProxy& InBinding);
		TArray<struct FSequencerBindingProxy> GetChildPossessables(const struct FSequencerBindingProxy& InBinding);
		TArray<class UMovieSceneTrack*> FindTracksByType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType);
		TArray<class UMovieSceneTrack*> FindTracksByExactType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType);
		class UMovieSceneTrack* AddTrack(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneEventTrackExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
	{
	public:
		class UMovieSceneEventTriggerSection* AddEventTriggerSection(class UMovieSceneEventTrack* InTrack);
		class UMovieSceneEventRepeaterSection* AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneFolderExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
	{
	public:
		bool SetFolderName(class UMovieSceneFolder* Folder, const class FName& InFolderName);
		bool SetFolderColor(class UMovieSceneFolder* Folder, const struct FColor& InFolderColor);
		bool RemoveChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding);
		bool RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack);
		bool RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove);
		class FName GetFolderName(class UMovieSceneFolder* Folder);
		struct FColor GetFolderColor(class UMovieSceneFolder* Folder);
		TArray<struct FSequencerBindingProxy> GetChildObjectBindings(class UMovieSceneFolder* Folder);
		TArray<class UMovieSceneTrack*> GetChildMasterTracks(class UMovieSceneFolder* Folder);
		TArray<class UMovieSceneFolder*> GetChildFolders(class UMovieSceneFolder* Folder);
		bool AddChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding);
		bool AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack);
		bool AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieScenePropertyTrackExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, const class FName& InPropertyName, const class FString& InPropertyPath);
		void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass);
		class FName GetUniqueTrackName(class UMovieScenePropertyTrack* Track);
		class FString GetPropertyPath(class UMovieScenePropertyTrack* Track);
		class FName GetPropertyName(class UMovieScenePropertyTrack* Track);
		class UClass* GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingKey
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMovieSceneScriptingKey : public UObject
	{
	public:
		unsigned char                                              UnknownData_3GHQ[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingActorReferenceKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
	{
	public:
		unsigned char                                              UnknownData_UETI[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(const struct FMovieSceneObjectBindingID& InNewValue);
		void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
		struct FMovieSceneObjectBindingID GetValue();
		struct FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingChannel
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMovieSceneScriptingChannel : public UObject
	{
	public:
		class FName                                                ChannelName;                                             // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
	{
	public:
		unsigned char                                              UnknownData_7T9N[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetDefault(const struct FMovieSceneObjectBindingID& InDefaultValue);
		void RemoveKey(class UMovieSceneScriptingKey* Key);
		void RemoveDefault();
		bool HasDefault();
		TArray<class UMovieSceneScriptingKey*> GetKeys();
		struct FMovieSceneObjectBindingID GetDefault();
		class UMovieSceneScriptingActorReferenceKey* AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneObjectBindingID& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingBoolKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
	{
	public:
		unsigned char                                              UnknownData_3S2D[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(bool InNewValue);
		void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
		bool GetValue();
		struct FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingBoolChannel
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
	{
	public:
		unsigned char                                              UnknownData_5U1Z[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetDefault(bool InDefaultValue);
		void RemoveKey(class UMovieSceneScriptingKey* Key);
		void RemoveDefault();
		bool HasDefault();
		int32_t GetNumKeys();
		TArray<class UMovieSceneScriptingKey*> GetKeys();
		bool GetDefault();
		TArray<bool> EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate);
		struct FSequencerScriptingRange ComputeEffectiveRange();
		class UMovieSceneScriptingBoolKey* AddKey(const struct FFrameNumber& InTime, bool NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingByteKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
	{
	public:
		unsigned char                                              UnknownData_PDUB[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(unsigned char InNewValue);
		void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
		unsigned char GetValue();
		struct FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingByteChannel
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
	{
	public:
		unsigned char                                              UnknownData_8JC1[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetDefault(unsigned char InDefaultValue);
		void RemoveKey(class UMovieSceneScriptingKey* Key);
		void RemoveDefault();
		bool HasDefault();
		TArray<class UMovieSceneScriptingKey*> GetKeys();
		unsigned char GetDefault();
		class UMovieSceneScriptingByteKey* AddKey(const struct FFrameNumber& InTime, unsigned char NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingEventKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
	{
	public:
		unsigned char                                              UnknownData_SLRH[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(const struct FMovieSceneEvent& InNewValue);
		void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
		struct FMovieSceneEvent GetValue();
		struct FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingEventChannel
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
	{
	public:
		unsigned char                                              UnknownData_ODOH[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		void RemoveKey(class UMovieSceneScriptingKey* Key);
		TArray<class UMovieSceneScriptingKey*> GetKeys();
		class UMovieSceneScriptingEventKey* AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneEvent& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingFloatKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
	{
	public:
		unsigned char                                              UnknownData_ORG4[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InNewValue);
		void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
		void SetTangentWeightMode(ERichCurveTangentWeightMode InNewValue);
		void SetTangentMode(ERichCurveTangentMode InNewValue);
		void SetLeaveTangentWeight(float InNewValue);
		void SetLeaveTangent(float InNewValue);
		void SetInterpolationMode(ERichCurveInterpMode InNewValue);
		void SetArriveTangentWeight(float InNewValue);
		void SetArriveTangent(float InNewValue);
		float GetValue();
		struct FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
		ERichCurveTangentWeightMode GetTangentWeightMode();
		ERichCurveTangentMode GetTangentMode();
		float GetLeaveTangentWeight();
		float GetLeaveTangent();
		ERichCurveInterpMode GetInterpolationMode();
		float GetArriveTangentWeight();
		float GetArriveTangent();
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingFloatChannel
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
	{
	public:
		unsigned char                                              UnknownData_MIYF[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetPreInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation);
		void SetPostInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation);
		void SetDefault(float InDefaultValue);
		void RemoveKey(class UMovieSceneScriptingKey* Key);
		void RemoveDefault();
		bool HasDefault();
		ERichCurveExtrapolation GetPreInfinityExtrapolation();
		ERichCurveExtrapolation GetPostInfinityExtrapolation();
		int32_t GetNumKeys();
		TArray<class UMovieSceneScriptingKey*> GetKeys();
		float GetDefault();
		TArray<float> EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate);
		struct FSequencerScriptingRange ComputeEffectiveRange();
		class UMovieSceneScriptingFloatKey* AddKey(const struct FFrameNumber& InTime, float NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingIntegerKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
	{
	public:
		unsigned char                                              UnknownData_CZSW[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(int32_t InNewValue);
		void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
		int32_t GetValue();
		struct FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingIntegerChannel
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
	{
	public:
		unsigned char                                              UnknownData_F2T2[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetDefault(int32_t InDefaultValue);
		void RemoveKey(class UMovieSceneScriptingKey* Key);
		void RemoveDefault();
		bool HasDefault();
		TArray<class UMovieSceneScriptingKey*> GetKeys();
		int32_t GetDefault();
		class UMovieSceneScriptingIntegerKey* AddKey(const struct FFrameNumber& InTime, int32_t NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingObjectPathKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
	{
	public:
		unsigned char                                              UnknownData_XZIJ[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(class UObject* InNewValue);
		void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
		class UObject* GetValue();
		struct FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingObjectPathChannel
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
	{
	public:
		unsigned char                                              UnknownData_R9OQ[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetDefault(class UObject* InDefaultValue);
		void RemoveKey(class UMovieSceneScriptingKey* Key);
		void RemoveDefault();
		bool HasDefault();
		TArray<class UMovieSceneScriptingKey*> GetKeys();
		class UObject* GetDefault();
		class UMovieSceneScriptingObjectPathKey* AddKey(const struct FFrameNumber& InTime, class UObject* NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingStringKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
	{
	public:
		unsigned char                                              UnknownData_KRO8[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(const class FString& InNewValue);
		void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
		class FString GetValue();
		struct FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingStringChannel
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
	{
	public:
		unsigned char                                              UnknownData_BG97[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetDefault(const class FString& InDefaultValue);
		void RemoveKey(class UMovieSceneScriptingKey* Key);
		void RemoveDefault();
		bool HasDefault();
		TArray<class UMovieSceneScriptingKey*> GetKeys();
		class FString GetDefault();
		class UMovieSceneScriptingStringKey* AddKey(const struct FFrameNumber& InTime, const class FString& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneSectionExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime);
		void SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);
		void SetStartFrame(class UMovieSceneSection* Section, int32_t StartFrame);
		void SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime);
		void SetRange(class UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame);
		void SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime);
		void SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);
		void SetEndFrame(class UMovieSceneSection* Section, int32_t EndFrame);
		bool HasStartFrame(class UMovieSceneSection* Section);
		bool HasEndFrame(class UMovieSceneSection* Section);
		float GetStartFrameSeconds(class UMovieSceneSection* Section);
		int32_t GetStartFrame(class UMovieSceneSection* Section);
		int32_t GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32_t InFrame, class UMovieSceneSequence* ParentSequence);
		float GetEndFrameSeconds(class UMovieSceneSection* Section);
		int32_t GetEndFrame(class UMovieSceneSection* Section);
		TArray<class UMovieSceneScriptingChannel*> GetChannels(class UMovieSceneSection* Section);
		TArray<class UMovieSceneScriptingChannel*> FindChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneSequenceExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void SortMarkedFrames(class UMovieSceneSequence* Sequence);
		void SetWorkRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);
		void SetWorkRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);
		void SetViewRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);
		void SetViewRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);
		void SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution);
		void SetTickResolution(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution);
		void SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly);
		void SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime);
		void SetPlaybackStart(class UMovieSceneSequence* Sequence, int32_t StartFrame);
		void SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime);
		void SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32_t EndFrame);
		void SetMarkedFrame(class UMovieSceneSequence* Sequence, int32_t InMarkIndex, const struct FFrameNumber& InFrameNumber);
		void SetEvaluationType(class UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType);
		void SetDisplayRate(class UMovieSceneSequence* Sequence, const struct FFrameRate& DisplayRate);
		void SetClockSource(class UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource);
		struct FSequencerBindingProxy ResolveBindingID(class UMovieSceneSequence* MasterSequence, const struct FMovieSceneObjectBindingID& InObjectBindingID);
		bool RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* MasterTrack);
		struct FSequencerScriptingRange MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration);
		struct FSequencerScriptingRange MakeRange(class UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration);
		struct FMovieSceneObjectBindingID MakeBindingID(class UMovieSceneSequence* MasterSequence, const struct FSequencerBindingProxy& InBinding, EMovieSceneObjectBindingSpace Space);
		TArray<class UObject*> LocateBoundObjects(class UMovieSceneSequence* Sequence, const struct FSequencerBindingProxy& InBinding, class UObject* Context);
		bool IsReadOnly(class UMovieSceneSequence* Sequence);
		float GetWorkRangeStart(class UMovieSceneSequence* InSequence);
		float GetWorkRangeEnd(class UMovieSceneSequence* InSequence);
		float GetViewRangeStart(class UMovieSceneSequence* InSequence);
		float GetViewRangeEnd(class UMovieSceneSequence* InSequence);
		struct FTimecode GetTimecodeSource(class UMovieSceneSequence* Sequence);
		struct FFrameRate GetTickResolution(class UMovieSceneSequence* Sequence);
		TArray<struct FSequencerBindingProxy> GetSpawnables(class UMovieSceneSequence* Sequence);
		TArray<class UMovieSceneFolder*> GetRootFoldersInSequence(class UMovieSceneSequence* Sequence);
		TArray<struct FSequencerBindingProxy> GetPossessables(class UMovieSceneSequence* Sequence);
		struct FMovieSceneObjectBindingID GetPortableBindingID(class UMovieSceneSequence* MasterSequence, class UMovieSceneSequence* DestinationSequence, const struct FSequencerBindingProxy& InBinding);
		float GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);
		int32_t GetPlaybackStart(class UMovieSceneSequence* Sequence);
		struct FSequencerScriptingRange GetPlaybackRange(class UMovieSceneSequence* Sequence);
		float GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);
		int32_t GetPlaybackEnd(class UMovieSceneSequence* Sequence);
		class UMovieScene* GetMovieScene(class UMovieSceneSequence* Sequence);
		TArray<class UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence* Sequence);
		TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames(class UMovieSceneSequence* Sequence);
		EMovieSceneEvaluationType GetEvaluationType(class UMovieSceneSequence* InSequence);
		struct FFrameRate GetDisplayRate(class UMovieSceneSequence* Sequence);
		EUpdateClockSource GetClockSource(class UMovieSceneSequence* InSequence);
		TArray<struct FSequencerBindingProxy> GetBindings(class UMovieSceneSequence* Sequence);
		struct FMovieSceneObjectBindingID GetBindingID(const struct FSequencerBindingProxy& InBinding);
		int32_t FindNextMarkedFrame(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber, bool bForward);
		TArray<class UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);
		TArray<class UMovieSceneTrack*> FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);
		int32_t FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, const class FString& InLabel);
		int32_t FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber);
		struct FSequencerBindingProxy FindBindingByName(class UMovieSceneSequence* Sequence, const class FString& Name);
		struct FSequencerBindingProxy FindBindingById(class UMovieSceneSequence* Sequence, const struct FGuid& BindingID);
		void DeleteMarkedFrames(class UMovieSceneSequence* Sequence);
		void DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32_t DeleteIndex);
		struct FSequencerBindingProxy AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn);
		struct FSequencerBindingProxy AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn);
		class UMovieSceneFolder* AddRootFolderToSequence(class UMovieSceneSequence* Sequence, const class FString& NewFolderName);
		struct FSequencerBindingProxy AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess);
		class UMovieSceneTrack* AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);
		int32_t AddMarkedFrame(class UMovieSceneSequence* Sequence, const struct FMovieSceneMarkedFrame& InMarkedFrame);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneTrackExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void SetSortingOrder(class UMovieSceneTrack* Track, int32_t SortingOrder);
		void SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);
		void SetDisplayName(class UMovieSceneTrack* Track, const class FText& InName);
		void SetColorTint(class UMovieSceneTrack* Track, const struct FColor& ColorTint);
		void RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);
		int32_t GetSortingOrder(class UMovieSceneTrack* Track);
		class UMovieSceneSection* GetSectionToKey(class UMovieSceneTrack* Track);
		TArray<class UMovieSceneSection*> GetSections(class UMovieSceneTrack* Track);
		class FText GetDisplayName(class UMovieSceneTrack* Track);
		struct FColor GetColorTint(class UMovieSceneTrack* Track);
		class UMovieSceneSection* AddSection(class UMovieSceneTrack* Track);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneVectorTrackExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneVectorTrackExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void SetNumChannelsUsed(class UMovieSceneVectorTrack* Track, int32_t InNumChannelsUsed);
		int32_t GetNumChannelsUsed(class UMovieSceneVectorTrack* Track);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.SequencerScriptingRangeExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void SetStartSeconds(struct FSequencerScriptingRange* Range, float Start);
		void SetStartFrame(struct FSequencerScriptingRange* Range, int32_t Start);
		void SetEndSeconds(struct FSequencerScriptingRange* Range, float End);
		void SetEndFrame(struct FSequencerScriptingRange* Range, int32_t End);
		void RemoveStart(struct FSequencerScriptingRange* Range);
		void RemoveEnd(struct FSequencerScriptingRange* Range);
		bool HasStart(const struct FSequencerScriptingRange& Range);
		bool HasEnd(const struct FSequencerScriptingRange& Range);
		float GetStartSeconds(const struct FSequencerScriptingRange& Range);
		int32_t GetStartFrame(const struct FSequencerScriptingRange& Range);
		float GetEndSeconds(const struct FSequencerScriptingRange& Range);
		int32_t GetEndFrame(const struct FSequencerScriptingRange& Range);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
