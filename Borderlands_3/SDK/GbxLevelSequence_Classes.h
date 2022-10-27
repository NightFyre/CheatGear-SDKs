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
	 * Class GbxLevelSequence.GbxLevelSequence
	 * Size -> 0x0000 (FullSize[0x0490] - InheritedSize[0x0490])
	 */
	class UGbxLevelSequence : public ULevelSequence
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxLevelSequence.GbxLevelSequenceActor
	 * Size -> 0x00D0 (FullSize[0x0600] - InheritedSize[0x0530])
	 */
	class AGbxLevelSequenceActor : public ALevelSequenceActor
	{
	public:
		unsigned char                                              UnknownData_N8RP[0x20];                                  // 0x0530(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlay;                                                  // 0x0550(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPause;                                                 // 0x0560(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x0570(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStop;                                                  // 0x0580(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UGameplayTasksComponent*                             GameplayTasksComponent;                                  // 0x0590(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGbxLevelSequencePlayer*                             GbxLevelSequencePlayer;                                  // 0x0598(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGbxLevelSequenceBindingSlot>                BindingSlots;                                            // 0x05A0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReplicatedLevelSequence;                                 // 0x05B0(0x0018) Net, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovieScenePlayerStatus                                    ReplicatedPlaybackStatus;                                // 0x05C8(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicatedReversePlayback;                              // 0x05C9(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98WQ[0x2];                                   // 0x05CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReplicatedPlaybackPosition;                              // 0x05CC(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReplicatedPlaybackRate;                                  // 0x05D0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReplicatedLoopCount;                                     // 0x05D4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGbxLevelSequenceBoundActorSlot>             BoundActors;                                             // 0x05D8(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIgnoreReplicatedPlaybackState;                          // 0x05E8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LV0C[0x13];                                  // 0x05E9(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bPendingReplicatedCutsceneSkip;                          // 0x05FC(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasCutsceneSkipped;                                     // 0x05FD(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NH8R[0x2];                                   // 0x05FE(0x0002) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void SetPlayRate(float PlayRate);
		void PlayLooping(int32_t NumLoops);
		void PlayFromStart();
		void Play();
		void Pause();
		void OnRep_ReplicatedCutsceneSkip();
		void OnLevelSequenceStop();
		void OnLevelSequencePlay();
		void OnLevelSequencePause();
		void OnLevelSequenceFinished();
		bool IsPlaying();
		bool IsPaused();
		bool IsFinished();
		void GoToEndAndStop();
		float GetPlayRate();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxLevelSequence.GbxLevelSequencePlayer
	 * Size -> 0x0018 (FullSize[0x08A8] - InheritedSize[0x0890])
	 */
	class UGbxLevelSequencePlayer : public ULevelSequencePlayer
	{
	public:
		unsigned char                                              UnknownData_7PZZ[0x10];                                  // 0x0890(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGbxLevelSequenceActor*                              GbxLevelSequenceActor;                                   // 0x08A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnStarted();
		bool IsFinished();
		class UGbxLevelSequencePlayer* STATIC_CreateGbxLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, bool bPlay, const struct FMovieSceneSequencePlaybackSettings& Settings, class AGbxLevelSequenceActor** OutActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxLevelSequence.GbxLevelSequenceThrottleLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxLevelSequenceThrottleLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnlimitSequenceActor(class AGbxLevelSequenceActor* Player);
		bool STATIC_ShouldLimitSequenceGroup(const class FName& InGroup);
		void STATIC_LimitSequenceActor(class AGbxLevelSequenceActor* Player, const class FName& Group);
		void STATIC_ClearLimitGroup(const class FName& Group);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxLevelSequence.GbxMovieSceneBindingOverrides
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UGbxMovieSceneBindingOverrides : public UMovieSceneBindingOverrides
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
