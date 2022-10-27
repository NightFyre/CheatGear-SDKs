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
	 * Class RareAudio.WwiseEmitterComponent
	 * Size -> 0x0030 (FullSize[0x0310] - InheritedSize[0x02E0])
	 */
	class UWwiseEmitterComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_264R[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWwiseEmitter                                       Emitter;                                                 // 0x02E8(0x0020) BlueprintVisible, BlueprintReadOnly
		class UWwiseObjectPoolWrapper*                             WwiseObjectPoolWrapper;                                  // 0x0308(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.AnimNotifyWwiseEmitterComponent
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UAnimNotifyWwiseEmitterComponent : public UWwiseEmitterComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.AnimNotify_WwiseSound
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UAnimNotify_WwiseSound : public UAnimNotify
	{
	public:
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OwnedByWorld;                                            // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BI6Q[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OwnedByWorldEmitterOffset;                               // 0x0044(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		EAnimNotify_WwiseSound_PerspectiveRestriction              PerspectiveRestriction;                                  // 0x0050(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RVBA[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseObjectPoolWrapper*                             OwnedByWorldWisePoolToUse;                               // 0x0058(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F5R9[0x20];                                  // 0x0060(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.AnimNotify_WwiseSoundMeshSwitch
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UAnimNotify_WwiseSoundMeshSwitch : public UAnimNotify_WwiseSound
	{
	public:
		class FName                                                SkeletalMeshSwitchGroup;                                 // 0x0080(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAnimNotify_SoundSwitch>                     MeshOverrides;                                           // 0x0088(0x0010) Edit, BlueprintReadOnly, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.AnimNotifyState_WwiseSound
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UAnimNotifyState_WwiseSound : public UAnimNotifyState
	{
	public:
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         WwiseEventEnd;                                           // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D7QO[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.AudioEventToComponentMap
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class AAudioEventToComponentMap : public AActor
	{
	public:
		class UAudioEventToComponentMapComponent*                  AudioEventToComponentMapComponent;                       // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ClearMappings();
		void AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseEmitterComponent** WwiseEmitterComponent, class UWwiseObjectPoolWrapper* WwiseEmitterPool);
		void AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents, class UWwiseObjectPoolWrapper* WwiseEmitterPool);
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.AudioEventToComponentMapComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UAudioEventToComponentMapComponent : public UActorComponent
	{
	public:
		TArray<struct FEventToComponentMapping>                    LocalComponentMappings;                                  // 0x00C8(0x0010) ZeroConstructor, ContainsInstancedReference

	public:
		void ClearMappings();
		void AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseEmitterComponent** WwiseEmitterComponent, class UWwiseObjectPoolWrapper* WwiseEmitterPool);
		void AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents, class UWwiseObjectPoolWrapper* WwiseEmitterPool);
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.WwiseEmitterBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWwiseEmitterBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_WwiseStopGlobalEvent(class UWwiseEvent* Event, float FadeTime);
		void STATIC_WwiseSetState(const class FName& StateGroup, const class FName& StateValue);
		void STATIC_WwiseSetGlobalRTPC(const class FName& RTPCName, float RTPCValue);
		void STATIC_WwisePostOneShotOnOwner(class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FWwiseEmitterCreationParams& CreationParams, const struct FVector& Offset, EEmitterRelationship Relationship);
		int32_t STATIC_WwisePostGlobalEvent(class UWwiseEvent* Event);
		int32_t STATIC_WwisePostEventAtLocation(struct FWwiseEmitter* Emitter, class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, EEmitterRelationship Relationship);
		bool STATIC_WwiseIsGlobalEvent(class UWwiseEvent* Event);
		bool STATIC_WwiseGetListenerInfo(struct FWwiseListenerInfo* InfoOut, int32_t Viewport);
		bool STATIC_WwiseGetListenerEmitter(struct FWwiseEmitter* Emitter, class UObject* WorldContextObject, int32_t ListenerIndex, const class FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool);
		bool STATIC_WwiseGetGlobalRTPC(const class FName& RTPCName, float* RTPCValue);
		bool STATIC_WwiseEmitterWaitToComplete(const struct FWwiseEmitter& Emitter, int32_t PlayId, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		bool STATIC_WwiseEmitterStop(const struct FWwiseEmitter& Emitter, int32_t PlayId, float FadeTime);
		bool STATIC_WwiseEmitterSetSwitch(const struct FWwiseEmitter& Emitter, const class FName& SwitchGroup, const class FName& Value);
		bool STATIC_WwiseEmitterSetRTPCOnAll(TArray<struct FWwiseEmitter> Emitters, const class FName& Name, float Value);
		bool STATIC_WwiseEmitterSetRTPC(const struct FWwiseEmitter& Emitter, const class FName& Name, float Value);
		bool STATIC_WwiseEmitterSetParams(const struct FWwiseEmitter& Emitter, const struct FWwiseEmitterParams& Params);
		bool STATIC_WwiseEmitterSetLocation(const struct FWwiseEmitter& Emitter, const struct FVector& Location);
		TArray<int32_t> STATIC_WwiseEmitterPostEventOnAll(TArray<struct FWwiseEmitter> Emitters, class UWwiseEvent* WwiseEvent, EEmitterRelationship Relationship, const class FName& SourcePath, const class FName& SourceObj);
		int32_t STATIC_WwiseEmitterPostEvent(const struct FWwiseEmitter& Emitter, class UWwiseEvent* WwiseEvent, EEmitterRelationship Relationship, const class FName& SourcePath, const class FName& SourceObj);
		bool STATIC_WwiseEmitterIsValid(const struct FWwiseEmitter& Emitter);
		bool STATIC_WwiseEmitterIsPlaying(const struct FWwiseEmitter& Emitter, class UWwiseEvent* Event);
		bool STATIC_WwiseEmitterGetRTPC(const struct FWwiseEmitter& Emitter, const class FName& Name, float* Value);
		void STATIC_WwiseEmitterDestroy(struct FWwiseEmitter* Emitter);
		bool STATIC_WwiseEmitterComponentSetRTPCOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, const class FName& Name, float Value);
		bool STATIC_WwiseEmitterComponentSetRTPC(class UWwiseEmitterComponent* EmitterComponent, const class FName& Name, float Value);
		TArray<int32_t> STATIC_WwiseEmitterComponentPostEventOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, class UWwiseEvent* WwiseEvent, EEmitterRelationship Relationship, const class FName& SourcePath, const class FName& SourceObj);
		int32_t STATIC_WwiseEmitterComponentPostEvent(class UWwiseEmitterComponent* EmitterComponent, class UWwiseEvent* WwiseEvent, EEmitterRelationship Relationship, const class FName& SourcePath, const class FName& SourceObj);
		bool STATIC_WwiseCreateEmitter(struct FWwiseEmitter* Emitter, const class FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset);
		int32_t STATIC_WwiseCreateDetachedEmitter(struct FWwiseEmitter* Emitter, const class FName& Name, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Location, const struct FWwiseEmitterCreationParams& CreationParams, EEmitterRelationship Relationship, const struct FVector& Forward);
		bool STATIC_SeekOnEvent(const struct FWwiseEmitter& WwiseEmitter, class UWwiseEvent* in_eventID, int32_t in_iPosition, bool in_bSeekToNearestMarker, int32_t in_PlayingID);
		bool STATIC_GetPlaybackPosition(const struct FWwiseEmitter& WwiseEmitter, int32_t in_PlayingID, int32_t* PlaybackPositionInMs);
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.WwiseEmitterComponentBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWwiseEmitterComponentBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_GetNamedEmitter(struct FWwiseEmitter* OutEmitter, const class FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn);
		bool STATIC_GetClosestNEmitters(TArray<struct FWwiseEmitter>* OutEmitters, const struct FVector& InFromPosition, int32_t InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn);
		bool STATIC_GetClosestEmitter(struct FWwiseEmitter* OutEmitter, const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn);
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.WwiseObjectPoolWrapper
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UWwiseObjectPoolWrapper : public UObject
	{
	public:
		class FName                                                PoolName;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxResources;                                            // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableOcclusion;                                        // 0x0034(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DisableReverb;                                           // 0x0035(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6UH6[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWwiseNativeEmitterPoolDensityParams                PoolDensityParams;                                       // 0x0038(0x0028) Edit, BlueprintVisible, BlueprintReadOnly
		unsigned char                                              UnknownData_587D[0x18];                                  // 0x0060(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.AudioIslandStaticMeshAssociatorBase
	 * Size -> 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
	 */
	class AAudioIslandStaticMeshAssociatorBase : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.AudioSpaceComponent
	 * Size -> 0x0010 (FullSize[0x0630] - InheritedSize[0x0620])
	 */
	class UAudioSpaceComponent : public UStaticMeshComponent
	{
	public:
		class UAudioSpaceDataAsset*                                AudioSpace;                                              // 0x0620(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FN4Y[0x8];                                   // 0x0628(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.AudioSpaceDataAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAudioSpaceDataAsset : public UDataAsset
	{
	public:
		class FName                                                RtpcToUpdate;                                            // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         AmbienceToStart;                                         // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         AmbienceToStop;                                          // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FName GetRtpcName();
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.AudioSpaceTrackerComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UAudioSpaceTrackerComponent : public UActorComponent
	{
	public:
		TArray<class UAudioSpaceComponent*>                        CurrentSpaces;                                           // 0x00C8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference

	public:
		class UAudioSpaceDataAsset* GetCurrentSpace();
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.RareAudioHardwareDeviceService
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class URareAudioHardwareDeviceService : public UAudioHardwareDeviceService
	{
	public:
		unsigned char                                              UnknownData_4LLI[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.StaticMeshAudioDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UStaticMeshAudioDataAsset : public UDataAsset
	{
	public:
		TArray<struct FStaticMeshAudioAssociation>                 MeshToAudioAssociations;                                 // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.StaticMeshAudioEmittersComponent
	 * Size -> 0x0010 (FullSize[0x02F0] - InheritedSize[0x02E0])
	 */
	class UStaticMeshAudioEmittersComponent : public USceneComponent
	{
	public:
		TArray<struct FStaticMeshComponentAudioAssociation>        InstanceAssociations;                                    // 0x02E0(0x0010) ZeroConstructor

	public:
		void PopulateInstanceAssociations();
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.TritonAcousticMap
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UTritonAcousticMap : public UObject
	{
	public:
		class FString                                              TritonMapFilename;                                       // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VZRF[0x28];                                  // 0x0038(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.TritonComponent
	 * Size -> 0x0010 (FullSize[0x02F0] - InheritedSize[0x02E0])
	 */
	class UTritonComponent : public USceneComponent
	{
	public:
		class UTritonAcousticMap*                                  TritonMapAsset;                                          // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TritonEffectRadius;                                      // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WXPU[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RareAudio.TritonService
	 * Size -> 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
	 */
	class UTritonService : public UObject
	{
	public:
		unsigned char                                              UnknownData_OO01[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTritonComponent*>                            RegisteredTritonComponents;                              // 0x0038(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference
		unsigned char                                              UnknownData_V3XX[0xA8];                                  // 0x0048(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTritonComponent*                                    CachedListenerInfo;                                      // 0x00F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XVSU[0x38];                                  // 0x00F8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
