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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LevelSequence.LevelSequence
	 * Size -> 0x0148 (FullSize[0x0490] - InheritedSize[0x0348])
	 */
	class ULevelSequence : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLevelSequenceObjectReferenceMap                    ObjectReferences;                                        // 0x0350(0x0050) Protected, NativeAccessSpecifierProtected
		struct FLevelSequenceBindingReferences                     BindingReferences;                                       // 0x03A0(0x00A0) Protected, NativeAccessSpecifierProtected
		TMap<class FString, struct FLevelSequenceObject>           PossessedObjects;                                        // 0x0440(0x0050) ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceActor
	 * Size -> 0x00D8 (FullSize[0x0530] - InheritedSize[0x0458])
	 */
	class ALevelSequenceActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_SP8O[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAutoPlay;                                               // 0x0460(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2OH[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x0468(0x0048) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x04B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     LevelSequence;                                           // 0x04B8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      AdditionalEventReceivers;                                // 0x04D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class ULevelSequenceBurnInOptions*                         BurnInOptions;                                           // 0x04E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMovieSceneBindingOverrides*                         BindingOverrides;                                        // 0x04E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideInstanceData;                                   // 0x04F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X2LE[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             DefaultInstanceData;                                     // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequenceBurnIn*                                BurnInInstance;                                          // 0x0500(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L5Y8[0x28];                                  // 0x0508(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetSequence(class ULevelSequence* InSequence);
		void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
		void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
		void ResetBindings();
		void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
		void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
		void OnRequestStopTicking();
		void OnCancelStopTicking();
		class ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
		void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequencePlayer
	 * Size -> 0x00A0 (FullSize[0x0890] - InheritedSize[0x07F0])
	 */
	class ULevelSequencePlayer : public UMovieSceneSequencePlayer
	{
	public:
		class FScriptMulticastDelegate                             OnCameraCut;                                             // 0x07F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYCV[0x30];                                  // 0x0800(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     AdditionalEventReceivers;                                // 0x0830(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZJY0[0x50];                                  // 0x0840(0x0050) MISSED OFFSET (PADDING)

	public:
		class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.DefaultLevelSequenceInstanceData
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UDefaultLevelSequenceInstanceData : public UObject
	{
	public:
		unsigned char                                              UnknownData_G5VX[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TransformOriginActor;                                    // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FC4I[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TransformOrigin;                                         // 0x0040(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnInInitSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULevelSequenceBurnInInitSettings : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnInOptions
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class ULevelSequenceBurnInOptions : public UObject
	{
	public:
		bool                                                       bUseBurnIn;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8TZ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      BurnInClass;                                             // 0x0030(0x0018) Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequenceBurnInInitSettings*                    Settings;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnIn
	 * Size -> 0x0060 (FullSize[0x0268] - InheritedSize[0x0208])
	 */
	class ULevelSequenceBurnIn : public UUserWidget
	{
	public:
		struct FLevelSequencePlayerSnapshot                        FrameInformation;                                        // 0x0208(0x0058) BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class ALevelSequenceActor*                                 LevelSequenceActor;                                      // 0x0260(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSettings(class UObject* InSettings);
		class UClass* GetSettingsClass();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
