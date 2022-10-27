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
	 * Class AudioMixer.SynthComponent
	 * Size -> 0x0380 (FullSize[0x0650] - InheritedSize[0x02D0])
	 */
	class USynthComponent : public USceneComponent
	{
	public:
		unsigned char                                              bAutoDestroy : 1;                                        // 0x02D0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopWhenOwnerDestroyed : 1;                             // 0x02D0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowSpatialization : 1;                                // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideAttenuation : 1;                                // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TAHP[0x3];                                   // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOutputToBusOnly : 1;                                    // 0x02D4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RY1I[0x3];                                   // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundAttenuationSettings                           AttenuationOverrides;                                    // 0x02E0(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundClass*                                         SoundClass;                                              // 0x0590(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundEffectSourcePresetChain*                       SourceEffectChain;                                       // 0x0598(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundSubmix*                                        SoundSubmix;                                             // 0x05A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoundSubmixSendInfo>                        SoundSubmixSends;                                        // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     BusSends;                                                // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     PreEffectBusSends;                                       // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bIsUISound : 1;                                          // 0x05D8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsPreviewSound : 1;                                     // 0x05D8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTRE[0x3];                                   // 0x05D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EnvelopeFollowerAttackTime;                              // 0x05DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnvelopeFollowerReleaseTime;                             // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H95S[0x4];                                   // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioEnvelopeValue;                                    // 0x05E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9J6[0x20];                                  // 0x05F8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USynthSound*                                         Synth;                                                   // 0x0618(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     AudioComponent;                                          // 0x0620(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    LastSampleRate;                                          // 0x0628(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F9XY[0x24];                                  // 0x062C(0x0024) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void Start();
		void SetVolumeMultiplier(float VolumeMultiplier);
		void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
		bool IsPlaying();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.AudioMixerBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class USoundWave* STATIC_StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
		void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
		void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);
		void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);
		void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		int32_t STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
		void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
		void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
		void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectDynamicsProcessorPreset
	 * Size -> 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
	 */
	class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_R2WD[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectDynamicsProcessorSettings              Settings;                                                // 0x0090(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectSubmixEQPreset
	 * Size -> 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
	 */
	class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_KBLX[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectSubmixEQSettings                       Settings;                                                // 0x0078(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectReverbPreset
	 * Size -> 0x0088 (FullSize[0x00C8] - InheritedSize[0x0040])
	 */
	class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_9F6O[0x58];                                  // 0x0040(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectReverbSettings                         Settings;                                                // 0x0098(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel);
		void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SynthSound
	 * Size -> 0x0020 (FullSize[0x0270] - InheritedSize[0x0250])
	 */
	class USynthSound : public USoundWaveProcedural
	{
	public:
		unsigned char                                              UnknownData_ZEP7[0x20];                                  // 0x0250(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
