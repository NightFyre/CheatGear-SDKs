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
	 * Class WwiseAudio.AudioParametersProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioParametersProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.AudioPositioningProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioPositioningProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.InterpTrackInstWwiseAudioEvent
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInterpTrackInstWwiseAudioEvent : public UInterpTrackInst
	{
	public:
		float                                                      LastUpdatePosition;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6VC[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.InterpTrackInstWwiseAudioRTPC
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInterpTrackInstWwiseAudioRTPC : public UInterpTrackInst
	{
	public:
		float                                                      LastUpdatePosition;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FDB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.InterpTrackWwiseAudioEvent
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UInterpTrackWwiseAudioEvent : public UInterpTrackVectorBase
	{
	public:
		TArray<struct FWwiseAudioEventTrackKey>                    Events;                                                  // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bContinueEventOnMatineeEnd : 1;                          // 0x00A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GK1G[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.InterpTrackWwiseAudioRTPC
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UInterpTrackWwiseAudioRTPC : public UInterpTrackFloatBase
	{
	public:
		class UWwiseRtpc*                                          RTPC;                                                    // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlayOnReverse : 1;                                      // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bContinueRTPCOnMatineeEnd : 1;                           // 0x0098(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ2I[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.MovieSceneWwiseTrack
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UMovieSceneWwiseTrack : public UMovieSceneNameableTrack
	{
	public:
		bool                                                       bAllowRename;                                            // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4QO[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          WwiseSections;                                           // 0x0060(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.MovieSceneWwiseEventSection
	 * Size -> 0x0038 (FullSize[0x0118] - InheritedSize[0x00E0])
	 */
	class UMovieSceneWwiseEventSection : public UMovieSceneSection
	{
	public:
		EWwiseTrackDirectionality                                  PlaybackDirection;                                       // 0x00E0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AYD[0x3];                                   // 0x00E1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_1W3Z[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         WwiseEventStart;                                         // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         WwiseEventStop;                                          // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmitterRadius;                                           // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPlaythrough;                                       // 0x00FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLoopingEvent;                                         // 0x00FD(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PH3Z[0x1A];                                  // 0x00FE(0x001A) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseAmbientSound
	 * Size -> 0x00E0 (FullSize[0x0538] - InheritedSize[0x0458])
	 */
	class AWwiseAmbientSound : public AActor
	{
	public:
		unsigned char                                              UnknownData_P7H0[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseAudioComponent*                                AkComponent;                                             // 0x0460(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0468(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartAutomatically;                                     // 0x0470(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0S2F[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AWwiseAmbientSound*>                          ChildEmitters;                                           // 0x0478(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AWwiseAmbientSound*>                          SuppressEmitters;                                        // 0x0488(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bOnlyEmitWhenContainingListener;                         // 0x0498(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOrientToPlayer;                                         // 0x0499(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1D6D[0x2];                                   // 0x049A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumetricEmitterRadius;                                 // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumetricEmitterGain;                                   // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G9IX[0x4];                                   // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseRtpc*                                          VolumetricAttenuationRTPC;                               // 0x04A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumetricAttenuationMaxDistance;                        // 0x04B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBGQ[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AWwiseAmbientSound*>                          ExternalActiveRTPCAttenuationPortals;                    // 0x04B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AWwiseAmbientSound*>                          ActiveSuppressors;                                       // 0x04C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              SuppressorPortals[0x50];                                 // 0x04D8(0x0050) UNKNOWN PROPERTY: SetProperty WwiseAudio.WwiseAmbientSound.SuppressorPortals
		unsigned char                                              UnknownData_CNBR[0x10];                                  // 0x0528(0x0010) MISSED OFFSET (PADDING)

	public:
		void ToggleAmbientSound();
		void StopAmbientSound();
		void StartAmbientSound();
		struct FVector GetAudioEmitterLocation(const struct FVector& ListenerLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseAssetSyncDestination
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UWwiseAssetSyncDestination : public UObject
	{
	public:
		struct FGuid                                               WwiseObjectID;                                           // 0x0028(0x0010) Edit, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SyncPath;                                                // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseGameObjectComponent
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class UWwiseGameObjectComponent : public USceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseAudioComponent
	 * Size -> 0x0170 (FullSize[0x0440] - InheritedSize[0x02D0])
	 */
	class UWwiseAudioComponent : public UWwiseGameObjectComponent
	{
	public:
		class UWwiseEvent*                                         OnAttachEvent;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseEvent*                                         OptionalBodySwitchStopEvent;                             // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWwiseAudioComponentType                                   WwiseComponentType;                                      // 0x02E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3A93[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EmitterGain;                                             // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWwiseLocationOverride>                      OverrideLocations;                                       // 0x02E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bOverrideLocationsAreRelative;                           // 0x02F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0BB[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AudioParametersProvider[0x10];                           // 0x0300(0x0010) UNKNOWN PROPERTY: InterfaceProperty WwiseAudio.WwiseAudioComponent.AudioParametersProvider
		EWwiseAudioComponentMixBehavior                            WwiseMixBehavior;                                        // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAcousticsMode                                             AcousticsMode;                                           // 0x0311(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FUM8[0x2];                                   // 0x0312(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReverbBoost;                                             // 0x0314(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnStartedNewAudio;                                       // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMusicPlayStarted;                                      // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMusicBeat;                                             // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMusicSyncPoint;                                        // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRtpcSync;                                              // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlaybackEnded;                                         // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXVE[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PositioningProvider[0x10];                               // 0x0380(0x0010) UNKNOWN PROPERTY: InterfaceProperty WwiseAudio.WwiseAudioComponent.PositioningProvider
		struct FVector                                             PreviousRotationVector;                                  // 0x0390(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZG9Z[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint32_t, float>                                      RtpcCallbackValues;                                      // 0x03A0(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVG8[0x40];                                  // 0x03F0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWwiseMultiPositionType                                    MultiPositionType;                                       // 0x0430(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SD6[0xF];                                   // 0x0431(0x000F) MISSED OFFSET (PADDING)

	public:
		void StopManagedLoop(class UWwiseEvent* OptionalStopEvent);
		void StopAll();
		void StartManagedLoop(class UWwiseEvent* NewLoopEvent);
		void SetSwitch(class UWwiseSwitch* WwiseSwitch);
		void SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve);
		void SetEmitterLocations(TArray<struct FWwiseLocationOverride> NewLocations, EWwiseMultiPositionType MultiPositionType, bool bLocationsAreRelative);
		void ScaleToRadius(float Radius);
		void ScaleAttenuation(float ScalingFactor);
		void RegisterRtpcValueCallback(TArray<class UWwiseRtpc*> CallbackRtpcs);
		struct FWwisePlaybackInstance PostWwiseEvent(class UWwiseEvent* WwiseEvent, int32_t Flags);
		void PostTrigger(class UWwiseTrigger* Trigger);
		void MakeMidiNote(int32_t NoteNum, int32_t Velocity, int32_t Channel, float Duration, float StartTime, class UWwiseEvent* AssociatedEvent);
		void Jettison();
		bool IsPossiblyAudible(class UWwiseEvent* WwiseEvent, float EventAttenuationScale);
		bool IsPlaying();
		float GetRtpcValue(class UWwiseRtpc* RTPC);
		float GetRadius();
		TArray<struct FWwisePlaybackInstance> GetPlayingInstances();
		float GetMaxAttenuationRadius();
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseWorldComponentPool
	 * Size -> 0x0018 (FullSize[0x0190] - InheritedSize[0x0178])
	 */
	class UWwiseWorldComponentPool : public UActorComponent
	{
	public:
		int32_t                                                    DesiredPoolSize;                                         // 0x0178(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    CurrentPoolSize;                                         // 0x017C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UWwiseAudioComponent*>                        PooledComponents;                                        // 0x0180(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseAudioComponentPool
	 * Size -> 0x0028 (FullSize[0x01A0] - InheritedSize[0x0178])
	 */
	class UWwiseAudioComponentPool : public UActorComponent
	{
	public:
		int32_t                                                    MaxPoolSize;                                             // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWwiseAudioComponentPoolMode                               PoolMode;                                                // 0x017C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecycleComponents;                                      // 0x017D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KSYR[0x2];                                   // 0x017E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWwiseAudioComponent*>                        ReservedComponents;                                      // 0x0180(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UWwiseAudioComponent*>                        ActiveComponents;                                        // 0x0190(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		class UWwiseAudioComponent* GetPooledComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseObject
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UWwiseObject : public UObject
	{
	public:
		uint32_t                                                   ShortID;                                                 // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLV9[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseEvent
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UWwiseEvent : public UWwiseObject
	{
	public:
		class UWwiseBank*                                          RequiredBank;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAttenuationRadius;                                    // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEcho;                                                   // 0x003C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V748[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ClosedCaptionName;                                       // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      DurationRange;                                           // 0x0048(0x0008) Edit, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UWwiseSwitch*>                                ActionSetSwitches;                                       // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bOneShot : 1;                                            // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSimple : 1;                                             // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHighImportance : 1;                                     // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLocalizedVoice : 1;                                     // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUsesSpeedParameter : 1;                                 // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUsesApproachSpeedParameter : 1;                         // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUsesRotationalSpeedParameter : 1;                       // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUsesComponentRelativeSpeedParameter : 1;                // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUsesPhysicalMaterialSwitch : 1;                         // 0x0061(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsLiveVoice : 1;                                  // 0x0061(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsEchoVoice : 1;                                  // 0x0061(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEchoWasForcedOff : 1;                                   // 0x0061(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUsesPerspectiveParameter : 1;                           // 0x0061(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXDQ[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PrepareEventRefCount;                                    // 0x0064(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPrepareEventDidLoadAllGameSyncs;                        // 0x0068(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XVYE[0x57];                                  // 0x0069(0x0057) MISSED OFFSET (PADDING)

	public:
		float GetMaxDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseAudioInputEvent
	 * Size -> 0x0090 (FullSize[0x0150] - InheritedSize[0x00C0])
	 */
	class UWwiseAudioInputEvent : public UWwiseEvent
	{
	public:
		unsigned char                                              UnknownData_68FT[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseEvent*                                         BaseWwiseEvent;                                          // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OverflowProtectionLimitInFrames;                         // 0x00D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XMXB[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ConnectedSourceID;                                       // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FWwisePlaybackInstance>                      PlayingInstances;                                        // 0x00E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RZZ5[0x58];                                  // 0x00F8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseAuxBus
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UWwiseAuxBus : public UWwiseObject
	{
	public:
		class UWwiseBank*                                          RequiredBank;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseBank
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UWwiseBank : public UWwiseObject
	{
	public:
		bool                                                       bAutoLoad;                                               // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QLPL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWwiseBank*>                                  MediaSourceBanks;                                        // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		uint16_t                                                   IncludedEventCount;                                      // 0x0048(0x0002) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesPrepareEvent;                                       // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoPrepareEvents;                                      // 0x004B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U516[0xC];                                   // 0x004C(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseAudioEffect
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UWwiseAudioEffect : public UObject
	{
	public:
		class UWwiseAuxBus*                                        AuxBus;                                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectStrengh;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X1OX[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		void DeactivateEffect();
		void ActivateEffect();
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseListenerEnvironmentalEffect
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UWwiseListenerEnvironmentalEffect : public UWwiseAudioEffect
	{
	public:
		unsigned char                                              UnknownData_KY5Z[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseZoneAudioEffect
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UWwiseZoneAudioEffect : public UWwiseAudioEffect
	{
	public:
		unsigned char                                              UnknownData_ZTTL[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             EffectLocation;                                          // 0x0048(0x000C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectSize;                                              // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectFadeDistance;                                      // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GF8[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseEffectProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWwiseEffectProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseEnvironmentalEffectProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWwiseEnvironmentalEffectProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseExternalSourcesEditorData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UWwiseExternalSourcesEditorData : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseExternalSourceDebugData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UWwiseExternalSourceDebugData : public UDataAsset
	{
	public:
		TMap<uint32_t, class FString>                              UniqueIdToFilename;                                      // 0x0030(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseGameplayStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWwiseGameplayStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_WaitForAudioPlayback(const struct FWwisePlaybackInstance& PlaybackInstance, const struct FLatentActionInfo& LatentInfo);
		void STATIC_WaitForAudioInputConnection(class UObject* WorldContextObject, class UWwiseAudioInputEvent* AudioInputEvent, const struct FLatentActionInfo& LatentInfo, float MaxWaitTime);
		void STATIC_UnloadBank(class UWwiseBank* Bank);
		void STATIC_StopProfilerCapture();
		void STATIC_StopOutputCapture();
		void STATIC_StopAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
		void STATIC_StartProfilerCapture(const class FString& Filename);
		void STATIC_StartOutputCapture(const class FString& Filename);
		class UWwiseAudioComponent* STATIC_SpawnWwiseComponentAtLocation(class UObject* WorldContextObject, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation, bool IsTemporaryComponent);
		class UWwiseAudioComponent* STATIC_SpawnAttachedWwiseComponent(class AActor* Actor, const class FName& SocketName, bool IsTemporaryComponent, class USceneComponent* AttachmentComponent);
		void STATIC_SetGlobalState(class UWwiseState* State);
		void STATIC_SetGlobalRTPCValue(class UWwiseRtpc* GameParameter, float Value, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
		void STATIC_SetAudioPlaybackPosition(const struct FWwisePlaybackInstance& PlaybackInstance, float PlaybackPosition);
		void STATIC_ResumeAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
		struct FWwisePlaybackInstance STATIC_PostEventAtMultipleLocations(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, TArray<struct FWwiseLocationOverride> NewLocations, EWwiseMultiPositionType MultiPositionType);
		struct FWwisePlaybackInstance STATIC_PostEventAtLocation(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation);
		struct FWwisePlaybackInstance STATIC_PostAttachedEvent(class UWwiseEvent* WwiseEvent, class AActor* AttachToActor, class USceneComponent* AttachToComponent, const class FName& SocketName, float EmitterRadius);
		void STATIC_PauseAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
		void STATIC_LoadBank(class UWwiseBank* Bank);
		bool STATIC_IsPossiblyAudible(class UObject* WorldContextObject, class UWwiseEvent* inWwiseEvent, const struct FVector& Location, float AttenuationScale, float EmitterRadius);
		bool STATIC_IsAudioPlaying(const struct FWwisePlaybackInstance& PlaybackInstance);
		bool STATIC_IsAudioPaused(const struct FWwisePlaybackInstance& PlaybackInstance);
		void STATIC_GetWwiseBankEfficiencyReport(TArray<struct FWwiseBankEfficiencyReportDatum>* ReportData);
		class UWwiseEvent* STATIC_GetPlayingEvent(const struct FWwisePlaybackInstance& PlaybackInstance);
		float STATIC_GetEstimatedAudioDuration(const struct FWwisePlaybackInstance& PlaybackInstance);
		class UWwiseAudioComponent* STATIC_GetDefaultWwiseComponent(class AActor* Actor, bool bCreateIfNotFound);
		void STATIC_GetClosestListenerLocation(class UObject* WorldContextObject, const struct FVector& TestPosition, struct FVector* ClosestLocation, bool* bSuccess);
		float STATIC_GetAudioPlaybackPosition(const struct FWwisePlaybackInstance& PlaybackInstance, bool bExtrapolateSubFrameTime);
		class UWwiseAudioComponent* STATIC_GetAudioComponentFromPlaybackInstance(const struct FWwisePlaybackInstance& PlaybackInstance, bool bCreateIfNotFound);
		void STATIC_ExecuteActionOnAudioInstance(const struct FWwisePlaybackInstance& PlaybackInstance, EWwiseEventAction Action, float TransitionDuration, EWwiseCurveInterpolation FadeCurve);
		class UWwiseZoneAudioEffect* STATIC_CreateZoneAudioEffect(class UObject* WorldContextObject, class UWwiseAuxBus* AuxBus, const struct FVector& EffectLocation, float EffectSize, float EffectAttenuationDistance);
		class UWwiseListenerEnvironmentalEffect* STATIC_CreateListenerAudioEffect(class UWwiseAuxBus* AuxBus, class AActor* TargetActor, float WetAmount);
		class UWwiseAudioEffect* STATIC_CreateAudioEffect(class UWwiseAuxBus* AuxBus, EWwiseEffectType EffectType, float WetAmount, class AActor* TargetActor);
		TArray<struct FWwiseLocationOverride> STATIC_ConvertLocationsToWwiseLocationOverrides(TArray<struct FVector> Locations, const struct FRotator& Orientation, float Gain, float Radius);
		void STATIC_AddOutputCaptureMarker(const class FString& MarkerText);
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseImplementerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWwiseImplementerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseListenerComponent
	 * Size -> 0x0040 (FullSize[0x0310] - InheritedSize[0x02D0])
	 */
	class UWwiseListenerComponent : public UWwiseGameObjectComponent
	{
	public:
		unsigned char                                              UnknownData_SE40[0x40];                                  // 0x02D0(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetBusRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve);
		class UWwiseListenerComponent* STATIC_FindAssociatedListener(class AActor* TargetActor);
		void ConfigureListener(class UWwiseEvent* WwiseEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseMediaAudioSinkProvider
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UWwiseMediaAudioSinkProvider : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_14UT[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseAudioInputEvent*                               AudioInputPlayEvent;                                     // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoPlayOnLocalPlayer;                                  // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K7OJ[0x2F];                                  // 0x0041(0x002F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseRtpc
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UWwiseRtpc : public UWwiseObject
	{
	public:
		struct FFloatInterval                                      ValueRange;                                              // 0x0030(0x0008) Edit, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultValue;                                            // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KR3[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseSettings
	 * Size -> 0x01A0 (FullSize[0x01C8] - InheritedSize[0x0028])
	 */
	class UWwiseSettings : public UObject
	{
	public:
		struct FDirectoryPath                                      WwiseWindowsInstallationPath;                            // 0x0028(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseMacInstallationPath;                                // 0x0038(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseProjectPath;                                        // 0x0048(0x0010) Edit, Config, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         WwiseLocalizationEquivalents;                            // 0x0058(0x0050) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TMap<class FString, uint32_t>                              LocalizedAudioChunks;                                    // 0x00A8(0x0050) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ExternalSourcesDebugData;                                // 0x00F8(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWwiseExternalSourceDebugData*                       pExternalSourcesDebugData;                               // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WorldPoolSize;                                           // 0x0118(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWwisePlaybackConfiguration                                DefaultPlaybackConfiguration;                            // 0x011C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAIH[0x3];                                   // 0x011D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<float>                                              DefaultSpeakerAngles;                                    // 0x0120(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class FString                                              PlaybackConfigurationRtpcName;                           // 0x0130(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinVolumeForCaptionDB;                                   // 0x0140(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxMemoryPoolsEditor;                                    // 0x0144(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxMemoryPoolsCooked;                                    // 0x0148(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StreamManagerPoolSizeMB;                                 // 0x014C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IOMemoryPoolSizeMB;                                      // 0x0150(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   IODeviceGranularityB;                                    // 0x0154(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStreamCache;                                      // 0x0158(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RXQ[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultPoolSizeEditorMB;                                 // 0x015C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultPoolSizeCookedMB;                                 // 0x0160(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LowerEngineDefaultPoolSizeMB;                            // 0x0164(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MonitorPoolSizeMB;                                       // 0x0168(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MonitorQueuePoolSizeMB;                                  // 0x016C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrepareEventPoolSizeMB;                                  // 0x0170(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrepareEventPoolSizeEditorMB;                            // 0x0174(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultPoolLowMemoryModeThreshold;                       // 0x0178(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LowerEnginePoolLowMemoryModeThreshold;                   // 0x017C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHardwareXMADecoding;                              // 0x0180(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04JH[0x3];                                   // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      APUCachedHeapSizeMB;                                     // 0x0184(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      APUNoncachedHeapSizeMB;                                  // 0x0188(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxHardwareAcceleratedXMAVoices;                         // 0x018C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJIH[0x38];                                  // 0x0190(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseUserSettings
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UWwiseUserSettings : public UObject
	{
	public:
		EWwiseAudioComponentSpriteSize                             SpriteSize;                                              // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWwiseAudioComponents;                               // 0x0029(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QE61[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   WwiseDebugFlags;                                         // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ActiveComponentColor;                                    // 0x0030(0x0004) Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              HibernatingComponentColor;                               // 0x0034(0x0004) Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ComponentHighlightColor;                                 // 0x0038(0x0004) Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              SelectionHighlightColor;                                 // 0x003C(0x0004) Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelectionLineThickness;                                  // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawAudioThresholdManagerDebug;                         // 0x0044(0x0001) Edit, ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGGN[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseState
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UWwiseState : public UWwiseObject
	{
	public:
		class UWwiseStateGroup*                                    StateGroup;                                              // 0x0030(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseStateGroup
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UWwiseStateGroup : public UWwiseObject
	{
	public:
		TArray<class UWwiseState*>                                 ChildStates;                                             // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class UWwiseState*                                         NoneState;                                               // 0x0040(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseSwitch
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UWwiseSwitch : public UWwiseObject
	{
	public:
		class UWwiseSwitchGroup*                                   SwitchGroup;                                             // 0x0030(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseSwitchGroup
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UWwiseSwitchGroup : public UWwiseObject
	{
	public:
		TArray<class UWwiseSwitch*>                                ChildSwitches;                                           // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WwiseAudio.WwiseTrigger
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UWwiseTrigger : public UWwiseObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
