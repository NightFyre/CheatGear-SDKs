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
	 * Class AkAudio.AkPortalComponent
	 * Size -> 0x00C8 (FullSize[0x02C0] - InheritedSize[0x01F8])
	 */
	class UAkPortalComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_9BBX[0x4];                                   // 0x01F8(0x0004) Fix Super Size
		float                                                      ObstructionRefreshInterval;                              // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          ObstructionCollisionChannel;                             // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QXE[0xBF];                                  // 0x0201(0x00BF) MISSED OFFSET (PADDING)

	public:
		bool PortalPlacementValid();
		void OpenPortal();
		class UPrimitiveComponent* GetPrimitiveParent();
		EAkAcousticPortalState GetCurrentState();
		void ClosePortal();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAcousticPortal
	 * Size -> 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
	 */
	class AAkAcousticPortal : public AVolume
	{
	public:
		class UAkPortalComponent*                                  Portal;                                                  // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkAcousticPortalState                                     InitialState;                                            // 0x0260(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRequiresStateMigration;                                 // 0x0261(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_35OJ[0x6];                                   // 0x0262(0x0006) MISSED OFFSET (PADDING)

	public:
		void OpenPortal();
		EAkAcousticPortalState GetCurrentState();
		void ClosePortal();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioType
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAkAudioType : public UObject
	{
	public:
		uint32_t                                                   ShortID;                                                 // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIT7[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     UserData;                                                // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAcousticTexture
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAkAcousticTexture : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAcousticTextureSetComponent
	 * Size -> 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
	 */
	class UAkAcousticTextureSetComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_3HM9[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_NCND[0x10];                                  // 0x0200(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAmbientSound
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class AAkAmbientSound : public AActor
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0220(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkComponent*                                        AkComponent;                                             // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StopWhenOwnerIsDestroyed;                                // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoPost;                                                // 0x0231(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWVZ[0x2E];                                  // 0x0232(0x002E) MISSED OFFSET (PADDING)

	public:
		void StopAmbientSound();
		void StartAmbientSound();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAndroidInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkAndroidInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_K66G[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAndroidAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPlatformInfo
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UAkPlatformInfo : public UObject
	{
	public:
		unsigned char                                              UnknownData_MK7X[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAndroidPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkAndroidPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetBase
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAkAssetBase : public UAkAudioType
	{
	public:
		class UAkAssetPlatformData*                                PlatformAssetData;                                       // 0x0040(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6K6M[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAkAssetData : public UObject
	{
	public:
		uint32_t                                                   CachedHash;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOTH[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BankLanguage;                                            // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35FX[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataWithMedia
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class UAkAssetDataWithMedia : public UAkAssetData
	{
	public:
		TArray<class UAkMediaAsset*>                               MediaList;                                               // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetPlatformData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAkAssetPlatformData : public UObject
	{
	public:
		class UAkAssetData*                                        CurrentAssetData;                                        // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataSwitchContainerData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAkAssetDataSwitchContainerData : public UObject
	{
	public:
		unsigned char                                              GroupValue[0x28];                                        // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAkGroupValue*                                       DefaultGroupValue;                                       // 0x0050(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAkMediaAsset*>                               MediaList;                                               // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UAkAssetDataSwitchContainerData*>             Children;                                                // 0x0068(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataSwitchContainer
	 * Size -> 0x0068 (FullSize[0x00F0] - InheritedSize[0x0088])
	 */
	class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
	{
	public:
		TArray<class UAkAssetDataSwitchContainerData*>             SwitchContainers;                                        // 0x0088(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class UAkGroupValue*                                       DefaultGroupValue;                                       // 0x0098(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTE2[0x50];                                  // 0x00A0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioEventData
	 * Size -> 0x01A0 (FullSize[0x0290] - InheritedSize[0x00F0])
	 */
	class UAkAudioEventData : public UAkAssetDataSwitchContainer
	{
	public:
		float                                                      MaxAttenuationRadius;                                    // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInfinite;                                              // 0x00F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IYL1[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDuration;                                         // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDuration;                                         // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class UAkAssetDataSwitchContainer*>    LocalizedMedia;                                          // 0x0100(0x0050) Deprecated, NativeAccessSpecifierPublic
		unsigned char                                              PostedEvents[0x50];                                      // 0x0150(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UserDefinedSends[0x50];                                  // 0x01A0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              PostedTriggers[0x50];                                    // 0x01F0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              GroupValues[0x50];                                       // 0x0240(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioBank
	 * Size -> 0x00C8 (FullSize[0x0118] - InheritedSize[0x0050])
	 */
	class UAkAudioBank : public UAkAssetBase
	{
	public:
		bool                                                       AutoLoad;                                                // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUEC[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UAkAssetPlatformData*>           LocalizedPlatformAssetDataMap;                           // 0x0058(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              LinkedAkEvents[0x50];                                    // 0x00A8(0x0050) UNKNOWN PROPERTY: SetProperty
		class UAkAssetPlatformData*                                CurrentLocalizedPlatformAssetData;                       // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DUUT[0x18];                                  // 0x0100(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioEvent
	 * Size -> 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
	 */
	class UAkAudioEvent : public UAkAssetBase
	{
	public:
		TMap<class FString, class UAkAssetPlatformData*>           LocalizedPlatformAssetDataMap;                           // 0x0050(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		class UAkAudioBank*                                        RequiredBank;                                            // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGEY[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAssetPlatformData*                                CurrentLocalizedPlatformData;                            // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxAttenuationRadius;                                    // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       IsInfinite;                                              // 0x00BC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_603I[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDuration;                                         // 0x00C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaximumDuration;                                         // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NUSH[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetMinimumDuration();
		float GetMaximumDuration();
		float GetMaxAttenuationRadius();
		bool GetIsInfinite();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGameObject
	 * Size -> 0x0028 (FullSize[0x0220] - InheritedSize[0x01F8])
	 */
	class UAkGameObject : public USceneComponent
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0200(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q35F[0x10];                                  // 0x0210(0x0010) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, const class FString& RTPC);
		void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int32_t* PlayingID);
		int32_t PostAssociatedAkEvent(int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources);
		void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* akEvent, int32_t* PlayingID, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEvent(class UAkAudioEvent* akEvent, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& in_EventName);
		void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, const class FString& RTPC, int32_t PlayingID);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkComponent
	 * Size -> 0x01C0 (FullSize[0x03E0] - InheritedSize[0x0220])
	 */
	class UAkComponent : public UAkGameObject
	{
	public:
		ECollisionChannel                                          OcclusionCollisionChannel;                               // 0x0220(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPS2[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              EnableSpotReflectors : 1;                                // 0x0224(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GQA[0x3];                                   // 0x0225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OuterRadius;                                             // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerRadius;                                             // 0x022C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAuxBus*                                           EarlyReflectionAuxBus;                                   // 0x0230(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              EarlyReflectionAuxBusName;                               // 0x0238(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    EarlyReflectionOrder;                                    // 0x0248(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EarlyReflectionBusSendGain;                              // 0x024C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EarlyReflectionMaxPathLength;                            // 0x0250(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      roomReverbAuxBusGain;                                    // 0x0254(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    diffractionMaxEdges;                                     // 0x0258(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    diffractionMaxPaths;                                     // 0x025C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      diffractionMaxPathLength;                                // 0x0260(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              DrawFirstOrderReflections : 1;                           // 0x0264(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DrawSecondOrderReflections : 1;                          // 0x0264(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DrawHigherOrderReflections : 1;                          // 0x0264(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DrawDiffraction : 1;                                     // 0x0264(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1RPU[0x3];                                   // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       StopWhenOwnerDestroyed;                                  // 0x0268(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GOHP[0x3];                                   // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttenuationScalingFactor;                                // 0x026C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionRefreshInterval;                                // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseReverbVolumes;                                       // 0x0274(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFNZ[0x16B];                                 // 0x0275(0x016B) MISSED OFFSET (PADDING)

	public:
		void UseReverbVolumes(bool inUseReverbVolumes);
		void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
		void SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState);
		void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
		void SetOutputBusVolume(float BusVolume);
		void SetListeners(TArray<class UAkComponent*> Listeners);
		void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);
		void SetEarlyReflectionsVolume(float SendVolume);
		void SetEarlyReflectionsAuxBus(const class FString& AuxBusName);
		void SetAttenuationScalingFactor(float Value);
		void PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger);
		void PostAssociatedAkEventAndWaitForEndAsync(int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEventByName(const class FString& in_EventName);
		void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* akEvent, int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* akEvent, const class FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		float GetAttenuationRadius();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioInputComponent
	 * Size -> 0x0030 (FullSize[0x0410] - InheritedSize[0x03E0])
	 */
	class UAkAudioInputComponent : public UAkComponent
	{
	public:
		unsigned char                                              UnknownData_EWSN[0x30];                                  // 0x03E0(0x0030) MISSED OFFSET (PADDING)

	public:
		int32_t PostAssociatedAudioInputEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAuxBus
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UAkAuxBus : public UAkAssetBase
	{
	public:
		class UAkAudioBank*                                        RequiredBank;                                            // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkCheckBox
	 * Size -> 0x09B8 (FullSize[0x0AD8] - InheritedSize[0x0120])
	 */
	class UAkCheckBox : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_CQGY[0x348];                                 // 0x0120(0x0348) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECheckBoxState                                             CheckedState;                                            // 0x0468(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4CW[0x3];                                   // 0x0469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CheckedStateDelegate;                                    // 0x046C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQFX[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCheckBoxStyle                                      WidgetStyle;                                             // 0x0480(0x0580) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0A00(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0A01(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDA3[0x6];                                   // 0x0A02(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkBoolPropertyToControl                            ThePropertyToControl;                                    // 0x0A08(0x0010) Edit, NativeAccessSpecifierPublic
		struct FAkWwiseItemToControl                               ItemToControl;                                           // 0x0A18(0x0040) Edit, Config, EditConst, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AkOnCheckStateChanged;                                   // 0x0A58(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x0A68(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDropped;                                       // 0x0A78(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZ9P[0x50];                                  // 0x0A88(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetIsChecked(bool InIsChecked);
		void SetCheckedState(ECheckBoxState InCheckedState);
		void SetAkItemId(const struct FGuid& ItemId);
		void SetAkBoolProperty(const class FString& ItemProperty);
		bool IsPressed();
		bool IsChecked();
		ECheckBoxState GetCheckedState();
		class FString GetAkProperty();
		struct FGuid GetAkItemId();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.DrawPortalComponent
	 * Size -> 0x0000 (FullSize[0x0450] - InheritedSize[0x0450])
	 */
	class UDrawPortalComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.DrawRoomComponent
	 * Size -> 0x0000 (FullSize[0x0450] - InheritedSize[0x0450])
	 */
	class UDrawRoomComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkFolder
	 * Size -> 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
	 */
	class UAkFolder : public UAkAudioType
	{
	public:
		class FString                                              UnrealFolderPath;                                        // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WwiseFolderPath;                                         // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMND[0x58];                                  // 0x0060(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGameplayStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkGameplayStatics : public UBlueprintFunctionLibrary
	{
	public:
		void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
		void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
		void UnloadBankByName(const class FString& BankName);
		void UnloadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankUnloadedCallback);
		void UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		void StopProfilerCapture();
		void StopOutputCapture();
		void StopAllAmbientSounds(class UObject* WorldContextObject);
		void StopAll();
		void StopActor(class AActor* Actor);
		void StartProfilerCapture(const class FString& Filename);
		void StartOutputCapture(const class FString& Filename);
		void StartAllAmbientSounds(class UObject* WorldContextObject);
		class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* akEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy);
		void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, const class FName& SwitchGroup, const class FName& SwitchState);
		void SetState(class UAkStateValue* StateValue, const class FName& StateGroup, const class FName& State);
		void SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const class FString& DeviceShareset);
		void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC);
		void SetReflectionsOrder(int32_t Order, bool RefreshPaths);
		void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue);
		void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);
		void SetPanningRule(EPanningRule PanRule);
		void SetOutputBusVolume(float BusVolume, class AActor* Actor);
		void SetOcclusionScalingFactor(float ScalingFactor);
		void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
		void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue);
		void SetCurrentAudioCultureAsync(const class FString& AudioCulture, const class FScriptDelegate& Completed);
		void SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		void SetBusConfig(const class FString& BusName, EAkChannelConfiguration ChannelConfiguration);
		void ResetRTPCValue(class UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC);
		void ReplaceMainOutput(const struct FAkOutputSettings& MainOutputSettings);
		void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, const class FName& Trigger);
		void PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
		int32_t PostEventAttached(class UAkAudioEvent* akEvent, class AActor* Actor, const class FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
		void PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
		int32_t PostEventAtLocation(class UAkAudioEvent* akEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject);
		int32_t PostEvent(class UAkAudioEvent* akEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
		void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* akEvent, class AActor* Actor, int32_t* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAndWaitForEndOfEvent(class UAkAudioEvent* akEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo);
		void LoadInitBank();
		void LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
		void LoadBankByName(const class FString& BankName);
		void LoadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankLoadedCallback);
		void LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		bool IsGame(class UObject* WorldContextObject);
		bool IsEditor();
		void GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset);
		void GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, class AActor* Actor, const class FName& RTPC);
		float GetOcclusionScalingFactor();
		class FString GetCurrentAudioCulture();
		TArray<class FString> GetAvailableAudioCultures();
		class UObject* GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type);
		class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, const class FName& AttachPointName, const struct FVector& Location, EAttachLocation LocationType);
		class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);
		void ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve);
		void ExecuteActionOnEvent(class UAkAudioEvent* akEvent, EAkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID);
		void ClearBanks();
		void CancelEventCallback(const class FScriptDelegate& PostEventCallback);
		void AddOutputCaptureMarker(const class FString& MarkerText);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkCallbackInfo
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAkCallbackInfo : public UObject
	{
	public:
		class UAkComponent*                                        AkComponent;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkEventCallbackInfo
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAkEventCallbackInfo : public UAkCallbackInfo
	{
	public:
		int32_t                                                    PlayingID;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventId;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMIDIEventCallbackInfo
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_Y3CT[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		EAkMidiEventType GetType();
		bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
		bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
		bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
		bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
		bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
		bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
		bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
		unsigned char GetChannel();
		bool GetCc(struct FAkMidiCc* AsCc);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMarkerCallbackInfo
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		int32_t                                                    Identifier;                                              // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    position;                                                // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Label;                                                   // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkDurationCallbackInfo
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAkDurationCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		float                                                      Duration;                                                // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EstimatedDuration;                                       // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AudioNodeID;                                             // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MediaID;                                                 // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStreaming;                                              // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZR8D[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMusicSyncCallbackInfo
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
	{
	public:
		int32_t                                                    PlayingID;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkSegmentInfo                                      SegmentInfo;                                             // 0x0034(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		EAkCallbackType                                            MusicSyncType;                                           // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R0PY[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserCueName;                                             // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGeometryComponent
	 * Size -> 0x0190 (FullSize[0x03A0] - InheritedSize[0x0210])
	 */
	class UAkGeometryComponent : public UAkAcousticTextureSetComponent
	{
	public:
		EAkMeshType                                                MeshType;                                                // 0x0210(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K7RJ[0x3];                                   // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LOD;                                                     // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeldingThreshold;                                        // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SY1[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                               // 0x0220(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAkGeometrySurfaceOverride                          CollisionMeshSurfaceOverride;                            // 0x0270(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDiffraction : 1;                                  // 0x0288(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDiffractionOnBoundaryEdges : 1;                   // 0x0288(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WXU[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AssociatedRoom;                                          // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZK8E[0x10];                                  // 0x0298(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkGeometryData                                     GeometryData;                                            // 0x02A8(0x0050) NativeAccessSpecifierPrivate
		TMap<int32_t, double>                                      SurfaceAreas;                                            // 0x02F8(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZL8T[0x58];                                  // 0x0348(0x0058) MISSED OFFSET (PADDING)

	public:
		void UpdateGeometry();
		void SendGeometry();
		void RemoveGeometry();
		void ConvertMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGroupValue
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAkGroupValue : public UAkAudioType
	{
	public:
		unsigned char                                              MediaDependencies[0x10];                                 // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty
		uint32_t                                                   GroupShortID;                                            // 0x0050(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CAD[0x14];                                  // 0x0054(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkHololensInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkHololensInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_ODSK[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkHololensAdvancedInitializationSettings           AdvancedSettings;                                        // 0x00C0(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P58F[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkHololensPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkHololensPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkInitBankAssetData
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UAkInitBankAssetData : public UAkAssetDataWithMedia
	{
	public:
		TArray<struct FAkPluginInfo>                               PluginInfos;                                             // 0x0088(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkInitBank
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UAkInitBank : public UAkAssetBase
	{
	public:
		TArray<class FString>                                      AvailableAudioCultures;                                  // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FString                                              DefaultLanguage;                                         // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkIOSInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkIOSInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_J0EU[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAudioSession                                     AudioSession;                                            // 0x0098(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIRX[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x00A8(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettings                   AdvancedSettings;                                        // 0x00D0(0x002C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q93D[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkIOSPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkIOSPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemBoolPropertiesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
		class FString Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemBoolProperties
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	class UAkItemBoolProperties : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDragged;                                       // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAEH[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& newText);
		class FString GetSelectedProperty();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemPropertiesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);
		class FString Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemProperties
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	class UAkItemProperties : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDragged;                                       // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LI4[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& newText);
		class FString GetSelectedProperty();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLateReverbComponent
	 * Size -> 0x0088 (FullSize[0x0280] - InheritedSize[0x01F8])
	 */
	class UAkLateReverbComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_4CJI[0x4];                                   // 0x01F8(0x0004) Fix Super Size
		float                                                      SendLevel;                                               // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeRate;                                                // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoAssignAuxBus;                                        // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6PS[0x7];                                   // 0x0209(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBus;                                                  // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuxBusName;                                              // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6JV[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBusManual;                                            // 0x0230(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AI5D[0x48];                                  // 0x0238(0x0048) MISSED OFFSET (PADDING)

	public:
		void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLinuxInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkLinuxInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_02SP[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0030) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLinuxPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkLinuxPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMacInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkMacInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_Z6ZM[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0030) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMacPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkMacPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMediaAssetData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAkMediaAssetData : public UObject
	{
	public:
		bool                                                       IsStreamed;                                              // 0x0028(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseDeviceMemory;                                         // 0x0029(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HRQL[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Language;                                                // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AssetPlatform;                                           // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97HS[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMediaAsset
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAkMediaAsset : public UObject
	{
	public:
		uint32_t                                                   ID;                                                      // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E1LM[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MediaName;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoLoad;                                                // 0x0040(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56ET[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     UserData;                                                // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Language;                                                // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkMediaAssetData*                                   CurrentMediaAssetData;                                   // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1EMB[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLocalizedMediaAsset
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UAkLocalizedMediaAsset : public UAkMediaAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkExternalMediaAsset
	 * Size -> 0x0060 (FullSize[0x00D8] - InheritedSize[0x0078])
	 */
	class UAkExternalMediaAsset : public UAkMediaAsset
	{
	public:
		unsigned char                                              UnknownData_Y3BL[0x60];                                  // 0x0078(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPlatformInitialisationSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkPlatformInitialisationSettingsBase : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS4InitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkPS4InitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_9X7E[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkPS4AdvancedInitializationSettings                AdvancedSettings;                                        // 0x00B8(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS4PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkPS4PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS5InitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkPS5InitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_HMDQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkPS5AdvancedInitializationSettings                AdvancedSettings;                                        // 0x00B8(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GCX[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkDPXInitializationSettings
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS5PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkPS5PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkReverbVolume
	 * Size -> 0x0038 (FullSize[0x0290] - InheritedSize[0x0258])
	 */
	class AAkReverbVolume : public AVolume
	{
	public:
		unsigned char                                              bEnabled : 1;                                            // 0x0258(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8AL[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBus;                                                  // 0x0260(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuxBusName;                                              // 0x0268(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SendLevel;                                               // 0x0278(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeRate;                                                // 0x027C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0280(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2U8S[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkLateReverbComponent*                              LateReverbComponent;                                     // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkRoomComponent
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class UAkRoomComponent : public UAkGameObject
	{
	public:
		float                                                      Priority;                                                // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallOcclusion;                                           // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AuxSendLevel;                                            // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoPost;                                                // 0x022C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLMS[0xB];                                   // 0x022D(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAcousticTextureSetComponent*                      GeometryComponent;                                       // 0x0238(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S7N5[0x10];                                  // 0x0240(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetGeometryComponent(class UAkAcousticTextureSetComponent* textureSetComponent);
		class UPrimitiveComponent* GetPrimitiveParent();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkRtpc
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAkRtpc : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSettings
	 * Size -> 0x02B8 (FullSize[0x02E0] - InheritedSize[0x0028])
	 */
	class UAkSettings : public UObject
	{
	public:
		unsigned char                                              MaxSimultaneousReverbVolumes;                            // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SZZ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           WwiseProjectPath;                                        // 0x0030(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      WwiseSoundDataFolder;                                    // 0x0040(0x0010) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       bAutoConnectToWAAPI;                                     // 0x0050(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          DefaultOcclusionCollisionChannel;                        // 0x0051(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          DefaultFitToGeometryCollisionChannel;                    // 0x0052(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHSC[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AkGeometryMap[0x50];                                     // 0x0058(0x0050) UNKNOWN PROPERTY: MapProperty
		float                                                      GlobalDecayAbsorption;                                   // 0x00A8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTDS[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultReverbAuxBus[0x28];                               // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EnvironmentDecayAuxBusMap[0x50];                         // 0x00D8(0x0050) UNKNOWN PROPERTY: MapProperty
		class FString                                              HFDampingName;                                           // 0x0128(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DecayEstimateName;                                       // 0x0138(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TimeToFirstReflectionName;                               // 0x0148(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HFDampingRTPC[0x28];                                     // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DecayEstimateRTPC[0x28];                                 // 0x0180(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TimeToFirstReflectionRTPC[0x28];                         // 0x01A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AudioInputEvent[0x28];                                   // 0x01D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<struct FGuid, struct FAkAcousticTextureParams>        AcousticTextureParamsMap;                                // 0x01F8(0x0050) Config, NativeAccessSpecifierPublic
		bool                                                       SplitSwitchContainerMedia;                               // 0x0248(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SplitMediaPerFolder;                                     // 0x0249(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseEventBasedPackaging;                                  // 0x024A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableAutomaticAssetSynchronization;                     // 0x024B(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFG7[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CommandletCommitMessage;                                 // 0x0250(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         UnrealCultureToWwiseCulture;                             // 0x0260(0x0050) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       AskedToUseNewAssetManagement;                            // 0x02B0(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMultiCoreRendering;                               // 0x02B1(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MigratedEnableMultiCoreRendering;                        // 0x02B2(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FixupRedirectorsDuringMigration;                         // 0x02B3(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DLRP[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      WwiseWindowsInstallationPath;                            // 0x02B8(0x0010) Config, Deprecated, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseMacInstallationPath;                                // 0x02C8(0x0010) Config, Deprecated, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YGJ[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSettingsPerUser
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UAkSettingsPerUser : public UObject
	{
	public:
		struct FDirectoryPath                                      WwiseWindowsInstallationPath;                            // 0x0028(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseMacInstallationPath;                                // 0x0038(0x0010) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       EnableAutomaticAssetSynchronization;                     // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TM3W[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WaapiIPAddress;                                          // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   WaapiPort;                                               // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoConnectToWAAPI;                                     // 0x0064(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoSyncSelection;                                       // 0x0065(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SuppressWwiseProjectPathWarnings;                        // 0x0066(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SoundDataGenerationSkipLanguage;                         // 0x0067(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0ZD[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSlider
	 * Size -> 0x0428 (FullSize[0x0530] - InheritedSize[0x0108])
	 */
	class UAkSlider : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x010C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M97H[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderStyle                                        WidgetStyle;                                             // 0x0120(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0460(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MGMT[0x3];                                   // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SliderBarColor;                                          // 0x0464(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x0474(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x0484(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x0485(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGLC[0x2];                                   // 0x0486(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepSize;                                                // 0x0488(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x048C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D8F6[0x3];                                   // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkPropertyToControl                                ThePropertyToControl;                                    // 0x0490(0x0010) Edit, EditConst, NativeAccessSpecifierPublic
		struct FAkWwiseItemToControl                               ItemToControl;                                           // 0x04A0(0x0040) Edit, Config, EditConst, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x04E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDropped;                                       // 0x0500(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YUJ[0x20];                                  // 0x0510(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InValue);
		void SetStepSize(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetLocked(bool InValue);
		void SetIndentHandle(bool InValue);
		void SetAkSliderItemProperty(const class FString& ItemProperty);
		void SetAkSliderItemId(const struct FGuid& ItemId);
		float GetValue();
		class FString GetAkSliderItemProperty();
		struct FGuid GetAkSliderItemId();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSpatialAudioVolume
	 * Size -> 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
	 */
	class AAkSpatialAudioVolume : public AVolume
	{
	public:
		class UAkSurfaceReflectorSetComponent*                     SurfaceReflectorSet;                                     // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkLateReverbComponent*                              LateReverb;                                              // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkRoomComponent*                                    Room;                                                    // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSpotReflector
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class AAkSpotReflector : public AActor
	{
	public:
		class UAkAuxBus*                                           EarlyReflectionAuxBus;                                   // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EarlyReflectionAuxBusName;                               // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAcousticTexture*                                  AcousticTexture;                                         // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceScalingFactor;                                   // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Level;                                                   // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkStadiaInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkStadiaInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_H6ZZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0030) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkQuailInitializationSettings
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAkQuailInitializationSettings : public UAkStadiaInitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkStadiaPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkStadiaPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkQuailPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkQuailPlatformInfo : public UAkStadiaPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkStateValue
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UAkStateValue : public UAkGroupValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSubmixInputComponent
	 * Size -> 0x0060 (FullSize[0x0470] - InheritedSize[0x0410])
	 */
	class UAkSubmixInputComponent : public UAkAudioInputComponent
	{
	public:
		unsigned char                                              UnknownData_CO4O[0x8];                                   // 0x0410(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundSubmix*                                        SubmixToRecord;                                          // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z6UZ[0x50];                                  // 0x0420(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSurfaceReflectorSetComponent
	 * Size -> 0x0030 (FullSize[0x0240] - InheritedSize[0x0210])
	 */
	class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
	{
	public:
		unsigned char                                              bEnableSurfaceReflectors : 1;                            // 0x0210(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DW3T[0x7];                                   // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkSurfacePoly>                              AcousticPolys;                                           // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDiffraction : 1;                                  // 0x0228(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDiffractionOnBoundaryEdges : 1;                   // 0x0228(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBPX[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AssociatedRoom;                                          // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SSS[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateSurfaceReflectorSet();
		void SendSurfaceReflectorSet();
		void RemoveSurfaceReflectorSet();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkSwitchInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_BX9J[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithCommSelection           CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0030) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkSwitchPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchValue
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UAkSwitchValue : public UAkGroupValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTrigger
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAkTrigger : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTVOSInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkTVOSInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_F0PO[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAudioSession                                     AudioSession;                                            // 0x0098(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6XZ[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x00A8(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettings                   AdvancedSettings;                                        // 0x00D0(0x002C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVSL[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTVOSPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkTVOSPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiCalls
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiCalls : public UBlueprintFunctionLibrary
	{
	public:
		struct FAKWaapiJsonObject Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
		struct FAKWaapiJsonObject SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const class FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
		void SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int32_t ID);
		bool RegisterWaapiProjectLoadedCallback(const class FScriptDelegate& Callback);
		bool RegisterWaapiConnectionLostCallback(const class FScriptDelegate& Callback);
		int32_t GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
		class FText Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
		class FString Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
		struct FAKWaapiJsonObject CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.SAkWaapiFieldNamesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
		class FString Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiJsonManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
	{
	public:
		struct FAKWaapiJsonObject SetStringField(const struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<class FString> FieldStringValues, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target);
		class FString GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		float GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		int32_t GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		bool GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		TArray<struct FAKWaapiJsonObject> GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		class FText Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
		class FString Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiUriConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiUriConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);
		class FString Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWindowsInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkWindowsInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_2ZWJ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkWindowsAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWin32PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWin32PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWin64PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWin64PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWindowsPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWinGDKInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkWinGDKInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_GI3Q[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkWinGDKAdvancedInitializationSettings             AdvancedSettings;                                        // 0x00C0(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JRK[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWinAnvilInitializationSettings
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWinGDKPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWinGDKPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWinAnvilPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWwiseTree
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	class UAkWwiseTree : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDragged;                                           // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O605[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& newText);
		struct FAkWwiseObjectDetails GetSelectedItem();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWwiseTreeSelector
	 * Size -> 0x0060 (FullSize[0x0168] - InheritedSize[0x0108])
	 */
	class UAkWwiseTreeSelector : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDragged;                                           // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VCU[0x40];                                  // 0x0128(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneGDKInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkXboxOneGDKInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_IT2W[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneGDKApuHeapInitializationSettings          ApuHeapSettings;                                         // 0x0090(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneGDKAdvancedInitializationSettings         AdvancedSettings;                                        // 0x00C0(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPX6[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneAnvilInitializationSettings
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXB1InitializationSettings
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UAkXB1InitializationSettings : public UAkXboxOneGDKInitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneGDKPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneAnvilPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXB1PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXB1PlatformInfo : public UAkXboxOneGDKPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkXboxOneInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZF7V[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneApuHeapInitializationSettings             ApuHeapSettings;                                         // 0x0090(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFX3[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOnePlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXboxOnePlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXSXInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkXSXInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_U7CA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXSXApuHeapInitializationSettings                 ApuHeapSettings;                                         // 0x0090(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXSXAdvancedInitializationSettings                AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMPXInitializationSettings
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXSXPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXSXPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioEventSection
	 * Size -> 0x00E8 (FullSize[0x01D0] - InheritedSize[0x00E8])
	 */
	class UMovieSceneAkAudioEventSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_KUC1[0x40];                                  // 0x00E8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       Event;                                                   // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       RetriggerEvent;                                          // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8ALV[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScrubTailLengthMs;                                       // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       StopAtSectionEnd;                                        // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B4D0[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EventName;                                               // 0x0140(0x0010) Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4UH0[0x20];                                  // 0x0150(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSourceDuration;                                       // 0x0170(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_348T[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MaxDurationSourceID;                                     // 0x0178(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_95RQ[0x48];                                  // 0x0188(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneAkTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0090(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bIsAMasterTrack : 1;                                     // 0x00A0(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3EA3[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioEventTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
	{
	public:
		unsigned char                                              UnknownData_GE9D[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioRTPCSection
	 * Size -> 0x0168 (FullSize[0x0250] - InheritedSize[0x00E8])
	 */
	class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
	{
	public:
		class UAkRtpc*                                             RTPC;                                                    // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Name;                                                    // 0x00F0(0x0010) Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRichCurve                                          FloatCurve;                                              // 0x0100(0x0080) Protected, NativeAccessSpecifierProtected
		struct FMovieSceneFloatChannelSerializationHelper          FloatChannelSerializationHelper;                         // 0x0180(0x0030) Protected, NativeAccessSpecifierProtected
		struct FMovieSceneFloatChannel                             RTPCChannel;                                             // 0x01B0(0x00A0) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioRTPCTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
	{
	public:
		unsigned char                                              UnknownData_S2C9[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.PostEventAsync
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UPostEventAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HS3L[0x60];                                  // 0x0040(0x0060) MISSED OFFSET (PADDING)

	public:
		class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* akEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed);
		void PollPostEventFuture();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.PostEventAtLocationAsync
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PIS[0x40];                                  // 0x0040(0x0040) MISSED OFFSET (PADDING)

	public:
		class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* akEvent, const struct FVector& Location, const struct FRotator& Orientation);
		void PollPostEventFuture();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
