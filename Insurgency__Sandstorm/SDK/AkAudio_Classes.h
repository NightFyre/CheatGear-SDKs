#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Class AkAudio.AkAcousticPortal
	 * Size -> 0x0090 (FullSize[0x02E8] - InheritedSize[0x0258])
	 */
	class AAkAcousticPortal : public AVolume
	{
	public:
		EAkAcousticPortalState                                     InitialState;                                            // 0x0258(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3P5N[0x3];                                   // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ObstructionRefreshInterval;                              // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          ObstructionCollisionChannel;                             // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6D7[0x87];                                  // 0x0261(0x0087) MISSED OFFSET (PADDING)

	public:
		void OpenPortal();
		EAkAcousticPortalState GetCurrentState();
		void ClosePortal();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPortalComponent
	 * Size -> 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
	 */
	class UAkPortalComponent : public USceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioType
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAkAudioType : public UObject
	{
	public:
		uint32_t                                                   ShortID;                                                 // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AOI[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     UserData;                                                // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

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
		unsigned char                                              UnknownData_06HS[0x2E];                                  // 0x0232(0x002E) MISSED OFFSET (PADDING)

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
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0028(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAndroidAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00B8(0x0040) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

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
		unsigned char                                              UnknownData_VGN4[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

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
	 * Class AkAudio.AkAssetData
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAkAssetData : public UObject
	{
	public:
		unsigned char                                              UnknownData_TW4G[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataWithMedia
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	class UAkAssetDataWithMedia : public UAkAssetData
	{
	public:
		unsigned char                                              MediaList[0x10];                                         // 0x0058(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              UnknownData_DM3A[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)

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
		class UAkAssetData*                                        CurrentAssetData;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetBase
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAkAssetBase : public UAkAudioType
	{
	public:
		class UAkAssetPlatformData*                                PlatformAssetData;                                       // 0x0040(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioBank
	 * Size -> 0x0070 (FullSize[0x00B8] - InheritedSize[0x0048])
	 */
	class UAkAudioBank : public UAkAssetBase
	{
	public:
		bool                                                       AutoLoad;                                                // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6PC[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LocalizedPlatformAssetDataMap[0x50];                     // 0x0050(0x0050) UNKNOWN PROPERTY: MapProperty
		class UAkAssetPlatformData*                                CurrentLocalizedPlatformAssetData;                       // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YD67[0x10];                                  // 0x00A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataSwitchContainerData
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UAkAssetDataSwitchContainerData : public UObject
	{
	public:
		unsigned char                                              GroupValue[0x28];                                        // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MediaList[0x10];                                         // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class UAkAssetDataSwitchContainerData*>             Children;                                                // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22Q1[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataSwitchContainer
	 * Size -> 0x0020 (FullSize[0x0098] - InheritedSize[0x0078])
	 */
	class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
	{
	public:
		TArray<class UAkAssetDataSwitchContainerData*>             SwitchContainers;                                        // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7O7[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioEventData
	 * Size -> 0x0088 (FullSize[0x0120] - InheritedSize[0x0098])
	 */
	class UAkAudioEventData : public UAkAssetDataSwitchContainer
	{
	public:
		float                                                      MaxAttenuationRadius;                                    // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInfinite;                                              // 0x009C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_38A6[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDuration;                                         // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDuration;                                         // 0x00A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class UAkAssetDataSwitchContainer*>    LocalizedMedia;                                          // 0x00A8(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPR1[0x28];                                  // 0x00F8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioEvent
	 * Size -> 0x0070 (FullSize[0x00B8] - InheritedSize[0x0048])
	 */
	class UAkAudioEvent : public UAkAssetBase
	{
	public:
		unsigned char                                              LocalizedPlatformAssetDataMap[0x50];                     // 0x0048(0x0050) UNKNOWN PROPERTY: MapProperty
		class UAkAudioBank*                                        RequiredBank;                                            // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAssetPlatformData*                                CurrentLocalizedPlatformData;                            // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_757Q[0x10];                                  // 0x00A8(0x0010) MISSED OFFSET (PADDING)

	public:
		float MinimumDuration();
		float MaximumDuration();
		float MaxAttenuationRadius();
		bool IsInfinite();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGameObject
	 * Size -> 0x0020 (FullSize[0x0210] - InheritedSize[0x01F0])
	 */
	class UAkGameObject : public USceneComponent
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5AI[0x8];                                   // 0x0208(0x0008) MISSED OFFSET (PADDING)

	public:
		void Stop();
		int32_t PostAssociatedAkEvent(int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources);
		int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& in_EventName);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkComponent
	 * Size -> 0x01C0 (FullSize[0x03D0] - InheritedSize[0x0210])
	 */
	class UAkComponent : public UAkGameObject
	{
	public:
		bool                                                       bUseSpatialAudio;                                        // 0x0210(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1U8G[0x7];                                   // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECollisionChannel                                          OcclusionCollisionChannel;                               // 0x0218(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPXE[0x3];                                   // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              EnableSpotReflectors : 1;                                // 0x021C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18KK[0x3];                                   // 0x021D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           EarlyReflectionAuxBus;                                   // 0x0220(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              EarlyReflectionAuxBusName;                               // 0x0228(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    EarlyReflectionOrder;                                    // 0x0238(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EarlyReflectionBusSendGain;                              // 0x023C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EarlyReflectionMaxPathLength;                            // 0x0240(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      roomReverbAuxBusGain;                                    // 0x0244(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    diffractionMaxEdges;                                     // 0x0248(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    diffractionMaxPaths;                                     // 0x024C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      diffractionMaxPathLength;                                // 0x0250(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              DrawFirstOrderReflections : 1;                           // 0x0254(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DrawSecondOrderReflections : 1;                          // 0x0254(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DrawHigherOrderReflections : 1;                          // 0x0254(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DrawDiffraction : 1;                                     // 0x0254(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1LY[0x3];                                   // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       StopWhenOwnerDestroyed;                                  // 0x0258(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AJG5[0x3];                                   // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttenuationScalingFactor;                                // 0x025C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionRefreshInterval;                                // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseReverbVolumes;                                       // 0x0264(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EOX3[0x16B];                                 // 0x0265(0x016B) MISSED OFFSET (PADDING)

	public:
		void UseReverbVolumes(bool inUseReverbVolumes);
		void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
		void SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState);
		void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
		void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, const class FString& RTPC);
		void SetOutputBusVolume(float BusVolume);
		void SetListeners(TArray<class UAkComponent*> Listeners);
		void SetEarlyReflectionsVolume(float SendVolume);
		void SetEarlyReflectionsAuxBus(const class FString& AuxBusName);
		void SetAttenuationScalingFactor(float Value);
		void SeekOnEventPercentage(class UAkAudioEvent* AkEvent, float Percentage, bool bNearestMarker);
		void PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger);
		int32_t PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEventByName(const class FString& in_EventName);
		int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, const class FString& RTPC, int32_t PlayingID);
		float GetAttenuationRadius();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioInputComponent
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class UAkAudioInputComponent : public UAkComponent
	{
	public:
		unsigned char                                              UnknownData_PDRT[0x10];                                  // 0x03D0(0x0010) MISSED OFFSET (PADDING)

	public:
		int32_t PostAssociatedAudioInputEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAuxBus
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UAkAuxBus : public UAkAssetBase
	{
	public:
		class UAkAudioBank*                                        RequiredBank;                                            // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkCheckBox
	 * Size -> 0x0A00 (FullSize[0x0B20] - InheritedSize[0x0120])
	 */
	class UAkCheckBox : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_0ZIE[0x390];                                 // 0x0120(0x0390) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECheckBoxState                                             CheckedState;                                            // 0x04B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PY40[0x3];                                   // 0x04B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CheckedStateDelegate;                                    // 0x04B4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CEJ6[0x4];                                   // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCheckBoxStyle                                      WidgetStyle;                                             // 0x04C8(0x0580) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0A48(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0A49(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8IC[0x6];                                   // 0x0A4A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkBoolPropertyToControl                            ThePropertyToControl;                                    // 0x0A50(0x0010) Edit, NativeAccessSpecifierPublic
		struct FAkWwiseItemToControl                               ItemToControl;                                           // 0x0A60(0x0040) Edit, Config, EditConst, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AkOnCheckStateChanged;                                   // 0x0AA0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x0AB0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDropped;                                       // 0x0AC0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVR8[0x50];                                  // 0x0AD0(0x0050) MISSED OFFSET (PADDING)

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
	 * Class AkAudio.AkGameplayStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkGameplayStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
		void STATIC_UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
		void STATIC_UnloadBankByName(const class FString& BankName);
		void STATIC_UnloadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankUnloadedCallback);
		void STATIC_UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		void STATIC_StopProfilerCapture();
		void STATIC_StopOutputCapture();
		void STATIC_StopAllAmbientSounds(class UObject* WorldContextObject);
		void STATIC_StopAll();
		void STATIC_StopActor(class AActor* Actor);
		void STATIC_StartProfilerCapture(const class FString& Filename);
		void STATIC_StartOutputCapture(const class FString& Filename);
		void STATIC_StartAllAmbientSounds(class UObject* WorldContextObject);
		class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy);
		void STATIC_SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, const class FName& SwitchGroup, const class FName& SwitchState);
		void STATIC_SetState(class UAkStateValue* StateValue, const class FName& StateGroup, const class FName& State);
		void STATIC_SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const class FString& DeviceShareset);
		void STATIC_SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC);
		void STATIC_SetReflectionsOrder(int32_t Order, bool RefreshPaths);
		void STATIC_SetPanningRule(EPanningRule PanRule);
		void STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor);
		void STATIC_SetOcclusionScalingFactor(float ScalingFactor);
		void STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
		void STATIC_SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void STATIC_SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void STATIC_SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void STATIC_SetCurrentAudioCultureAsync(const class FString& AudioCulture, const class FScriptDelegate& Completed);
		void STATIC_SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		void STATIC_SetBusConfig(const class FString& BusName, EAkChannelConfiguration ChannelConfiguration);
		void STATIC_PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, const class FName& Trigger);
		void STATIC_PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
		int32_t STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const class FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
		void STATIC_PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
		int32_t STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject);
		int32_t STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
		int32_t STATIC_PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo);
		void STATIC_LoadInitBank();
		void STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
		void STATIC_LoadBankByName(const class FString& BankName);
		void STATIC_LoadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankLoadedCallback);
		void STATIC_LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		bool STATIC_IsGame(class UObject* WorldContextObject);
		bool STATIC_IsEditor();
		void STATIC_GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset);
		void STATIC_GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, class AActor* Actor, const class FName& RTPC);
		float STATIC_GetOcclusionScalingFactor();
		class FString STATIC_GetCurrentAudioCulture();
		TArray<class FString> STATIC_GetAvailableAudioCultures();
		class UObject* STATIC_GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type);
		class UAkComponent* STATIC_GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, const class FName& AttachPointName, const struct FVector& Location, EAttachLocation LocationType);
		class UObject* STATIC_GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);
		void STATIC_ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve);
		void STATIC_ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID);
		void STATIC_ClearBanks();
		void STATIC_CancelEventCallback(const class FScriptDelegate& PostEventCallback);
		void STATIC_AddOutputCaptureMarker(const class FString& MarkerText);
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
		int32_t                                                    EventID;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMIDIEventCallbackInfo
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_MWQW[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

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
		int32_t                                                    Position;                                                // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
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
		unsigned char                                              UnknownData_CLUY[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_ESD7[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserCueName;                                             // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGeometryComponent
	 * Size -> 0x0120 (FullSize[0x0310] - InheritedSize[0x01F0])
	 */
	class UAkGeometryComponent : public USceneComponent
	{
	public:
		EAkMeshType                                                MeshType;                                                // 0x01F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZ5P[0x3];                                   // 0x01F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LOD;                                                     // 0x01F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                               // 0x01F8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAkGeometrySurfaceOverride                          CollisionMeshSurfaceOverride;                            // 0x0248(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDiffraction : 1;                                  // 0x0258(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDiffractionOnBoundaryEdges : 1;                   // 0x0258(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPRJ[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AssociatedRoom;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KO2D[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkGeometryData                                     GeometryData;                                            // 0x0270(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1I7L[0x50];                                  // 0x02C0(0x0050) MISSED OFFSET (PADDING)

	public:
		void UpdateGeometry();
		void RemoveGeometry();
		void ConvertMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGroupValue
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UAkGroupValue : public UAkAudioType
	{
	public:
		uint32_t                                                   GroupShortID;                                            // 0x0040(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7O8[0x14];                                  // 0x0044(0x0014) MISSED OFFSET (PADDING)

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
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0028(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkHololensAdvancedInitializationSettings           AdvancedSettings;                                        // 0x00B8(0x0040) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

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
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class UAkInitBankAssetData : public UAkAssetDataWithMedia
	{
	public:
		TArray<struct FAkPluginInfo>                               PluginInfos;                                             // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkInitBank
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UAkInitBank : public UAkAssetBase
	{
	public:
		TArray<class FString>                                      AvailableAudioCultures;                                  // 0x0048(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultLanguage;                                         // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

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
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0028(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAudioSession                                     AudioSession;                                            // 0x0090(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NKT[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x00A0(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettings                   AdvancedSettings;                                        // 0x00C8(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGWI[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

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
		class FText STATIC_Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
		class FString STATIC_Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
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
		unsigned char                                              UnknownData_88YA[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (PADDING)

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
		class FText STATIC_Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);
		class FString STATIC_Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
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
		unsigned char                                              UnknownData_9GR3[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& newText);
		class FString GetSelectedProperty();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLateReverbComponent
	 * Size -> 0x0040 (FullSize[0x0230] - InheritedSize[0x01F0])
	 */
	class UAkLateReverbComponent : public USceneComponent
	{
	public:
		unsigned char                                              bEnable : 1;                                             // 0x01F0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80IR[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBus;                                                  // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuxBusName;                                              // 0x0200(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SendLevel;                                               // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeRate;                                                // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LS29[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkLateReverbComponent*                              NextLowerPriorityComponent;                              // 0x0220(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZFCK[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLinuxInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkLinuxInitializationSettings : public UObject
	{
	public:
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0028(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00B8(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

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
	 * Class AkAudio.AkLuminInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkLuminInitializationSettings : public UObject
	{
	public:
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0028(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00B8(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLuminPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkLuminPlatformInfo : public UAkPlatformInfo
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
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0028(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00B8(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

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
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAkMediaAssetData : public UObject
	{
	public:
		bool                                                       IsStreamed;                                              // 0x0028(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseDeviceMemory;                                         // 0x0029(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNP7[0x16];                                  // 0x002A(0x0016) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMediaAsset
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UAkMediaAsset : public UObject
	{
	public:
		uint32_t                                                   ID;                                                      // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZRU[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     UserData;                                                // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkMediaAssetData*                                   CurrentMediaAssetData;                                   // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VDKO[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLocalizedMediaAsset
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UAkLocalizedMediaAsset : public UAkMediaAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkExternalMediaAsset
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UAkExternalMediaAsset : public UAkMediaAsset
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
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0028(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0088(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkPS4AdvancedInitializationSettings                AdvancedSettings;                                        // 0x00B0(0x0040) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

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
	 * Class AkAudio.AkReverbVolume
	 * Size -> 0x0038 (FullSize[0x0290] - InheritedSize[0x0258])
	 */
	class AAkReverbVolume : public AVolume
	{
	public:
		unsigned char                                              bEnabled : 1;                                            // 0x0258(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UJ7O[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBus;                                                  // 0x0260(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuxBusName;                                              // 0x0268(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SendLevel;                                               // 0x0278(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeRate;                                                // 0x027C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0280(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XCU[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkLateReverbComponent*                              LateReverbComponent;                                     // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkRoomComponent
	 * Size -> 0x0030 (FullSize[0x0240] - InheritedSize[0x0210])
	 */
	class UAkRoomComponent : public UAkGameObject
	{
	public:
		unsigned char                                              bEnable : 1;                                             // 0x0210(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YISP[0x7];                                   // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkRoomComponent*                                    NextLowerPriorityComponent;                              // 0x0218(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallOcclusion;                                           // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AuxSendLevel;                                            // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoPost;                                                // 0x022C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8NM[0x13];                                  // 0x022D(0x0013) MISSED OFFSET (PADDING)

	public:
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
	 * Size -> 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
	 */
	class UAkSettings : public UObject
	{
	public:
		unsigned char                                              MaxSimultaneousReverbVolumes;                            // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5V3[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           WwiseProjectPath;                                        // 0x0030(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      WwiseSoundDataFolder;                                    // 0x0040(0x0010) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       bAutoConnectToWAAPI;                                     // 0x0050(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          DefaultOcclusionCollisionChannel;                        // 0x0051(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_90PO[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AkGeometryMap[0x50];                                     // 0x0058(0x0050) UNKNOWN PROPERTY: MapProperty
		bool                                                       SplitSwitchContainerMedia;                               // 0x00A8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseEventBasedPackaging;                                  // 0x00A9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableAutomaticAssetSynchronization;                     // 0x00AA(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X134[0x5];                                   // 0x00AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CommandletCommitMessage;                                 // 0x00B0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         UnrealCultureToWwiseCulture;                             // 0x00C0(0x0050) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       AskedToUseNewAssetManagement;                            // 0x0110(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMultiCoreRendering;                               // 0x0111(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MigratedEnableMultiCoreRendering;                        // 0x0112(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYRP[0x5];                                   // 0x0113(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      WwiseWindowsInstallationPath;                            // 0x0118(0x0010) Config, Deprecated, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseMacInstallationPath;                                // 0x0128(0x0010) Config, Deprecated, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBRT[0x20];                                  // 0x0138(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSettingsPerUser
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAkSettingsPerUser : public UObject
	{
	public:
		struct FDirectoryPath                                      WwiseWindowsInstallationPath;                            // 0x0028(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseMacInstallationPath;                                // 0x0038(0x0010) Edit, Config, NativeAccessSpecifierPublic
		class FString                                              WaapiIPAddress;                                          // 0x0048(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   WaapiPort;                                               // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoSyncSelection;                                       // 0x005C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SuppressWwiseProjectPathWarnings;                        // 0x005D(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SoundDataGenerationSkipLanguage;                         // 0x005E(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F4SJ[0x1];                                   // 0x005F(0x0001) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_BJRB[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderStyle                                        WidgetStyle;                                             // 0x0120(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0460(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7RU[0x3];                                   // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SliderBarColor;                                          // 0x0464(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x0474(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x0484(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x0485(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0HL[0x2];                                   // 0x0486(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepSize;                                                // 0x0488(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x048C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJA3[0x3];                                   // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkPropertyToControl                                ThePropertyToControl;                                    // 0x0490(0x0010) Edit, EditConst, NativeAccessSpecifierPublic
		struct FAkWwiseItemToControl                               ItemToControl;                                           // 0x04A0(0x0040) Edit, Config, EditConst, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x04E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDropped;                                       // 0x0500(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDIU[0x20];                                  // 0x0510(0x0020) MISSED OFFSET (PADDING)

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
	 * Class AkAudio.AkStateValue
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UAkStateValue : public UAkGroupValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSurfaceReflectorSetComponent
	 * Size -> 0x0040 (FullSize[0x0230] - InheritedSize[0x01F0])
	 */
	class UAkSurfaceReflectorSetComponent : public USceneComponent
	{
	public:
		unsigned char                                              bEnableSurfaceReflectors : 1;                            // 0x01F0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W103[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkPoly>                                     AcousticPolys;                                           // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDiffraction : 1;                                  // 0x0208(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDiffractionOnBoundaryEdges : 1;                   // 0x0208(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTBT[0x7];                                   // 0x0209(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AssociatedRoom;                                          // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RW9J[0x18];                                  // 0x0218(0x0018) MISSED OFFSET (PADDING)

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
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0028(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithCommSelection           CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00B8(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

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
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
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
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0028(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAudioSession                                     AudioSession;                                            // 0x0090(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAR0[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x00A0(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettings                   AdvancedSettings;                                        // 0x00C8(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0NV[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

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
		struct FAKWaapiJsonObject STATIC_Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
		struct FAKWaapiJsonObject STATIC_SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const class FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
		void STATIC_SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int32_t ID);
		bool STATIC_RegisterWaapiProjectLoadedCallback(const class FScriptDelegate& Callback);
		bool STATIC_RegisterWaapiConnectionLostCallback(const class FScriptDelegate& Callback);
		int32_t STATIC_GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
		class FText STATIC_Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
		class FString STATIC_Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
		struct FAKWaapiJsonObject STATIC_CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.SAkWaapiFieldNamesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
		class FString STATIC_Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiJsonManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
	{
	public:
		struct FAKWaapiJsonObject STATIC_SetStringField(const struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<class FString> FieldStringValues, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target);
		class FString STATIC_GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		float STATIC_GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		int32_t STATIC_GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		bool STATIC_GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		TArray<struct FAKWaapiJsonObject> STATIC_GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		class FText STATIC_Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
		class FString STATIC_Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiUriConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiUriConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);
		class FString STATIC_Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWindowsInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkWindowsInitializationSettings : public UObject
	{
	public:
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0028(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkWindowsAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00B8(0x0040) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

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
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0028(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkWinGDKAdvancedInitializationSettings             AdvancedSettings;                                        // 0x00B8(0x0040) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

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
		unsigned char                                              UnknownData_O3C4[0x20];                                  // 0x0128(0x0020) MISSED OFFSET (PADDING)

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
		unsigned char                                              UnknownData_NR02[0x40];                                  // 0x0128(0x0040) MISSED OFFSET (PADDING)

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
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0028(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneGDKApuHeapInitializationSettings          ApuHeapSettings;                                         // 0x0088(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneGDKAdvancedInitializationSettings         AdvancedSettings;                                        // 0x00B8(0x003C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9UQ[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

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
	 * Class AkAudio.AkXboxOneInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkXboxOneInitializationSettings : public UObject
	{
	public:
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0028(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneApuHeapInitializationSettings             ApuHeapSettings;                                         // 0x0088(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00B8(0x003C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6OOZ[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

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
	 * Class AkAudio.InterpTrackAkAudioEvent
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
	{
	public:
		TArray<struct FAkAudioEventTrackKey>                       Events;                                                  // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bContinueEventOnMatineeEnd : 1;                          // 0x00A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6W2[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.InterpTrackAkAudioRTPC
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
	{
	public:
		class FString                                              Param;                                                   // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlayOnReverse : 1;                                      // 0x00A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bContinueRTPCOnMatineeEnd : 1;                           // 0x00A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZL0[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.InterpTrackInstAkAudioEvent
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
	{
	public:
		float                                                      LastUpdatePosition;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVFN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.InterpTrackInstAkAudioRTPC
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
	{
	public:
		float                                                      LastUpdatePosition;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BFL[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioEventSection
	 * Size -> 0x00E8 (FullSize[0x01C8] - InheritedSize[0x00E0])
	 */
	class UMovieSceneAkAudioEventSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_8NXQ[0x40];                                  // 0x00E0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       Event;                                                   // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       RetriggerEvent;                                          // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_39S9[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScrubTailLengthMs;                                       // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       StopAtSectionEnd;                                        // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_26YM[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EventName;                                               // 0x0138(0x0010) Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_14XD[0x20];                                  // 0x0148(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSourceDuration;                                       // 0x0168(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S7WH[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MaxDurationSourceID;                                     // 0x0170(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_91OW[0x48];                                  // 0x0180(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkTrack
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UMovieSceneAkTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsAMasterTrack : 1;                                     // 0x0068(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OYFG[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioEventTrack
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioRTPCSection
	 * Size -> 0x0168 (FullSize[0x0248] - InheritedSize[0x00E0])
	 */
	class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
	{
	public:
		class UAkRtpc*                                             RTPC;                                                    // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Name;                                                    // 0x00E8(0x0010) Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRichCurve                                          FloatCurve;                                              // 0x00F8(0x0080) Protected, NativeAccessSpecifierProtected
		struct FMovieSceneFloatChannelSerializationHelper          FloatChannelSerializationHelper;                         // 0x0178(0x0030) Protected, NativeAccessSpecifierProtected
		struct FMovieSceneFloatChannel                             RTPCChannel;                                             // 0x01A8(0x00A0) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioRTPCTrack
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
