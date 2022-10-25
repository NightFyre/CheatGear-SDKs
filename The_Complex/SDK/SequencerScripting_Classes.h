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
	 * Class SequencerScripting.MovieSceneBindingExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetParent(const struct FSequencerBindingProxy& InBinding, const struct FSequencerBindingProxy& InParentBinding);
		void STATIC_SetName(const struct FSequencerBindingProxy& InBinding, const class FString& InName);
		void STATIC_SetDisplayName(const struct FSequencerBindingProxy& InBinding, const class FText& InDisplayName);
		void STATIC_RemoveTrack(const struct FSequencerBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);
		void STATIC_Remove(const struct FSequencerBindingProxy& InBinding);
		void STATIC_MoveBindingContents(const struct FSequencerBindingProxy& SourceBindingId, const struct FSequencerBindingProxy& DestinationBindingId);
		bool STATIC_IsValid(const struct FSequencerBindingProxy& InBinding);
		TArray<class UMovieSceneTrack*> STATIC_GetTracks(const struct FSequencerBindingProxy& InBinding);
		class UClass* STATIC_GetPossessedObjectClass(const struct FSequencerBindingProxy& InBinding);
		struct FSequencerBindingProxy STATIC_GetParent(const struct FSequencerBindingProxy& InBinding);
		class UObject* STATIC_GetObjectTemplate(const struct FSequencerBindingProxy& InBinding);
		class FString STATIC_GetName(const struct FSequencerBindingProxy& InBinding);
		struct FGuid STATIC_GetId(const struct FSequencerBindingProxy& InBinding);
		class FText STATIC_GetDisplayName(const struct FSequencerBindingProxy& InBinding);
		TArray<struct FSequencerBindingProxy> STATIC_GetChildPossessables(const struct FSequencerBindingProxy& InBinding);
		TArray<class UMovieSceneTrack*> STATIC_FindTracksByType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType);
		TArray<class UMovieSceneTrack*> STATIC_FindTracksByExactType(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType);
		class UMovieSceneTrack* STATIC_AddTrack(const struct FSequencerBindingProxy& InBinding, class UClass* TrackType);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneEventTrackExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
	{
	public:
		class UClass* STATIC_GetBoundObjectPropertyClass(const struct FMovieSceneEvent& EventKey);
		class UMovieSceneEventTriggerSection* STATIC_AddEventTriggerSection(class UMovieSceneEventTrack* InTrack);
		class UMovieSceneEventRepeaterSection* STATIC_AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneFolderExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SetFolderName(class UMovieSceneFolder* Folder, const class FName& InFolderName);
		bool STATIC_SetFolderColor(class UMovieSceneFolder* Folder, const struct FColor& InFolderColor);
		bool STATIC_RemoveChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding);
		bool STATIC_RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack);
		bool STATIC_RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove);
		class FName STATIC_GetFolderName(class UMovieSceneFolder* Folder);
		struct FColor STATIC_GetFolderColor(class UMovieSceneFolder* Folder);
		TArray<struct FSequencerBindingProxy> STATIC_GetChildObjectBindings(class UMovieSceneFolder* Folder);
		TArray<class UMovieSceneTrack*> STATIC_GetChildMasterTracks(class UMovieSceneFolder* Folder);
		TArray<class UMovieSceneFolder*> STATIC_GetChildFolders(class UMovieSceneFolder* Folder);
		bool STATIC_AddChildObjectBinding(class UMovieSceneFolder* Folder, const struct FSequencerBindingProxy& InObjectBinding);
		bool STATIC_AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InMasterTrack);
		bool STATIC_AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieScenePropertyTrackExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, const class FName& InPropertyName, const class FString& InPropertyPath);
		void STATIC_SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass);
		class FName STATIC_GetUniqueTrackName(class UMovieScenePropertyTrack* Track);
		class FString STATIC_GetPropertyPath(class UMovieScenePropertyTrack* Track);
		class FName STATIC_GetPropertyName(class UMovieScenePropertyTrack* Track);
		class UClass* STATIC_GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingKey
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMovieSceneScriptingKey : public UObject
	{
	public:
		unsigned char                                              UnknownData_ME60[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_OK94[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_EAA9[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_JHWK[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_M6NV[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_2J5F[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_WGFK[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

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
	 * Class SequencerScripting.MovieSceneScriptingDoubleKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
	{
	public:
		unsigned char                                              UnknownData_MQ0K[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(double InNewValue);
		void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
		void SetTangentWeightMode(ERichCurveTangentWeightMode InNewValue);
		void SetTangentMode(ERichCurveTangentMode InNewValue);
		void SetLeaveTangentWeight(float InNewValue);
		void SetLeaveTangent(float InNewValue);
		void SetInterpolationMode(ERichCurveInterpMode InNewValue);
		void SetArriveTangentWeight(float InNewValue);
		void SetArriveTangent(float InNewValue);
		double GetValue();
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
	 * Class SequencerScripting.MovieSceneScriptingDoubleChannel
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
	{
	public:
		unsigned char                                              UnknownData_6C7P[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetPreInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation);
		void SetPostInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation);
		void SetDefault(double InDefaultValue);
		void RemoveKey(class UMovieSceneScriptingKey* Key);
		void RemoveDefault();
		bool HasDefault();
		ERichCurveExtrapolation GetPreInfinityExtrapolation();
		ERichCurveExtrapolation GetPostInfinityExtrapolation();
		int32_t GetNumKeys();
		TArray<class UMovieSceneScriptingKey*> GetKeys();
		double GetDefault();
		TArray<double> EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate);
		struct FSequencerScriptingRange ComputeEffectiveRange();
		class UMovieSceneScriptingDoubleKey* AddKey(const struct FFrameNumber& InTime, double NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingEventKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
	{
	public:
		unsigned char                                              UnknownData_KXSC[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_08VX[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		void RemoveKey(class UMovieSceneScriptingKey* Key);
		TArray<class UMovieSceneScriptingKey*> GetKeys();
		class UMovieSceneScriptingEventKey* AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneEvent& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingFloatKey
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
	{
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
	 * Class SequencerScripting.MovieSceneScriptingActualFloatKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey
	{
	public:
		unsigned char                                              UnknownData_3N6W[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
	{
	public:
		unsigned char                                              UnknownData_ABNH[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneScriptingFloatChannel
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
	{
	public:
		unsigned char                                              UnknownData_M8EC[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_TRZI[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_YY7A[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_Q0EK[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_2AXK[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_XYJ7[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_SYRG[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

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
		void STATIC_SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime);
		void STATIC_SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);
		void STATIC_SetStartFrame(class UMovieSceneSection* Section, int32_t StartFrame);
		void STATIC_SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime);
		void STATIC_SetRange(class UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame);
		void STATIC_SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime);
		void STATIC_SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);
		void STATIC_SetEndFrame(class UMovieSceneSection* Section, int32_t EndFrame);
		bool STATIC_HasStartFrame(class UMovieSceneSection* Section);
		bool STATIC_HasEndFrame(class UMovieSceneSection* Section);
		float STATIC_GetStartFrameSeconds(class UMovieSceneSection* Section);
		int32_t STATIC_GetStartFrame(class UMovieSceneSection* Section);
		int32_t STATIC_GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32_t InFrame, class UMovieSceneSequence* ParentSequence);
		float STATIC_GetEndFrameSeconds(class UMovieSceneSection* Section);
		int32_t STATIC_GetEndFrame(class UMovieSceneSection* Section);
		TArray<class UMovieSceneScriptingChannel*> STATIC_GetChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType);
		TArray<class UMovieSceneScriptingChannel*> STATIC_GetChannels(class UMovieSceneSection* Section);
		TArray<class UMovieSceneScriptingChannel*> STATIC_GetAllChannels(class UMovieSceneSection* Section);
		TArray<class UMovieSceneScriptingChannel*> STATIC_FindChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneSequenceExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SortMarkedFrames(class UMovieSceneSequence* Sequence);
		void STATIC_SetWorkRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);
		void STATIC_SetWorkRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);
		void STATIC_SetViewRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds);
		void STATIC_SetViewRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds);
		void STATIC_SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution);
		void STATIC_SetTickResolution(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution);
		void STATIC_SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly);
		void STATIC_SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime);
		void STATIC_SetPlaybackStart(class UMovieSceneSequence* Sequence, int32_t StartFrame);
		void STATIC_SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime);
		void STATIC_SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32_t EndFrame);
		void STATIC_SetMarkedFrame(class UMovieSceneSequence* Sequence, int32_t InMarkIndex, const struct FFrameNumber& InFrameNumber);
		void STATIC_SetEvaluationType(class UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType);
		void STATIC_SetDisplayRate(class UMovieSceneSequence* Sequence, const struct FFrameRate& DisplayRate);
		void STATIC_SetClockSource(class UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource);
		struct FSequencerBindingProxy STATIC_ResolveBindingID(class UMovieSceneSequence* MasterSequence, const struct FMovieSceneObjectBindingID& InObjectBindingID);
		bool STATIC_RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* MasterTrack);
		struct FSequencerScriptingRange STATIC_MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration);
		struct FSequencerScriptingRange STATIC_MakeRange(class UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration);
		struct FMovieSceneObjectBindingID STATIC_MakeBindingID(class UMovieSceneSequence* MasterSequence, const struct FSequencerBindingProxy& InBinding, EMovieSceneObjectBindingSpace Space);
		TArray<class UObject*> STATIC_LocateBoundObjects(class UMovieSceneSequence* Sequence, const struct FSequencerBindingProxy& InBinding, class UObject* Context);
		bool STATIC_IsReadOnly(class UMovieSceneSequence* Sequence);
		float STATIC_GetWorkRangeStart(class UMovieSceneSequence* InSequence);
		float STATIC_GetWorkRangeEnd(class UMovieSceneSequence* InSequence);
		float STATIC_GetViewRangeStart(class UMovieSceneSequence* InSequence);
		float STATIC_GetViewRangeEnd(class UMovieSceneSequence* InSequence);
		struct FTimecode STATIC_GetTimecodeSource(class UMovieSceneSequence* Sequence);
		struct FFrameRate STATIC_GetTickResolution(class UMovieSceneSequence* Sequence);
		TArray<struct FSequencerBindingProxy> STATIC_GetSpawnables(class UMovieSceneSequence* Sequence);
		TArray<class UMovieSceneFolder*> STATIC_GetRootFoldersInSequence(class UMovieSceneSequence* Sequence);
		TArray<struct FSequencerBindingProxy> STATIC_GetPossessables(class UMovieSceneSequence* Sequence);
		struct FMovieSceneObjectBindingID STATIC_GetPortableBindingID(class UMovieSceneSequence* MasterSequence, class UMovieSceneSequence* DestinationSequence, const struct FSequencerBindingProxy& InBinding);
		float STATIC_GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);
		int32_t STATIC_GetPlaybackStart(class UMovieSceneSequence* Sequence);
		struct FSequencerScriptingRange STATIC_GetPlaybackRange(class UMovieSceneSequence* Sequence);
		float STATIC_GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);
		int32_t STATIC_GetPlaybackEnd(class UMovieSceneSequence* Sequence);
		class UMovieScene* STATIC_GetMovieScene(class UMovieSceneSequence* Sequence);
		TArray<class UMovieSceneTrack*> STATIC_GetMasterTracks(class UMovieSceneSequence* Sequence);
		TArray<struct FMovieSceneMarkedFrame> STATIC_GetMarkedFrames(class UMovieSceneSequence* Sequence);
		EMovieSceneEvaluationType STATIC_GetEvaluationType(class UMovieSceneSequence* InSequence);
		struct FFrameRate STATIC_GetDisplayRate(class UMovieSceneSequence* Sequence);
		EUpdateClockSource STATIC_GetClockSource(class UMovieSceneSequence* InSequence);
		TArray<struct FSequencerBindingProxy> STATIC_GetBindings(class UMovieSceneSequence* Sequence);
		struct FMovieSceneObjectBindingID STATIC_GetBindingID(const struct FSequencerBindingProxy& InBinding);
		int32_t STATIC_FindNextMarkedFrame(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber, bool bForward);
		TArray<class UMovieSceneTrack*> STATIC_FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);
		TArray<class UMovieSceneTrack*> STATIC_FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);
		int32_t STATIC_FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, const class FString& InLabel);
		int32_t STATIC_FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber);
		struct FSequencerBindingProxy STATIC_FindBindingByName(class UMovieSceneSequence* Sequence, const class FString& Name);
		struct FSequencerBindingProxy STATIC_FindBindingById(class UMovieSceneSequence* Sequence, const struct FGuid& BindingID);
		void STATIC_DeleteMarkedFrames(class UMovieSceneSequence* Sequence);
		void STATIC_DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32_t DeleteIndex);
		struct FSequencerBindingProxy STATIC_AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn);
		struct FSequencerBindingProxy STATIC_AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn);
		class UMovieSceneFolder* STATIC_AddRootFolderToSequence(class UMovieSceneSequence* Sequence, const class FString& NewFolderName);
		struct FSequencerBindingProxy STATIC_AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess);
		class UMovieSceneTrack* STATIC_AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);
		int32_t STATIC_AddMarkedFrame(class UMovieSceneSequence* Sequence, const struct FMovieSceneMarkedFrame& InMarkedFrame);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneTrackExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetTrackRowDisplayName(class UMovieSceneTrack* Track, const class FText& InName, int32_t RowIndex);
		void STATIC_SetSortingOrder(class UMovieSceneTrack* Track, int32_t SortingOrder);
		void STATIC_SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);
		void STATIC_SetDisplayName(class UMovieSceneTrack* Track, const class FText& InName);
		void STATIC_SetColorTint(class UMovieSceneTrack* Track, const struct FColor& ColorTint);
		void STATIC_RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);
		class FText STATIC_GetTrackRowDisplayName(class UMovieSceneTrack* Track, int32_t RowIndex);
		int32_t STATIC_GetSortingOrder(class UMovieSceneTrack* Track);
		class UMovieSceneSection* STATIC_GetSectionToKey(class UMovieSceneTrack* Track);
		TArray<class UMovieSceneSection*> STATIC_GetSections(class UMovieSceneTrack* Track);
		class FText STATIC_GetDisplayName(class UMovieSceneTrack* Track);
		struct FColor STATIC_GetColorTint(class UMovieSceneTrack* Track);
		class UMovieSceneSection* STATIC_AddSection(class UMovieSceneTrack* Track);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed);
		int32_t STATIC_GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed);
		int32_t STATIC_GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track);
		static UClass* StaticClass();
	};

	/**
	 * Class SequencerScripting.SequencerScriptingRangeExtensions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetStartSeconds(struct FSequencerScriptingRange* Range, float Start);
		void STATIC_SetStartFrame(struct FSequencerScriptingRange* Range, int32_t Start);
		void STATIC_SetEndSeconds(struct FSequencerScriptingRange* Range, float End);
		void STATIC_SetEndFrame(struct FSequencerScriptingRange* Range, int32_t End);
		void STATIC_RemoveStart(struct FSequencerScriptingRange* Range);
		void STATIC_RemoveEnd(struct FSequencerScriptingRange* Range);
		bool STATIC_HasStart(const struct FSequencerScriptingRange& Range);
		bool STATIC_HasEnd(const struct FSequencerScriptingRange& Range);
		float STATIC_GetStartSeconds(const struct FSequencerScriptingRange& Range);
		int32_t STATIC_GetStartFrame(const struct FSequencerScriptingRange& Range);
		float STATIC_GetEndSeconds(const struct FSequencerScriptingRange& Range);
		int32_t STATIC_GetEndFrame(const struct FSequencerScriptingRange& Range);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
