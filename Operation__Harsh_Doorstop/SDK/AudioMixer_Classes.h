#pragma once

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
	 * Class AudioMixer.SynthComponent
	 * Size -> 0x04E0 (FullSize[0x06D0] - InheritedSize[0x01F0])
	 */
	class USynthComponent : public USceneComponent
	{
	public:
		unsigned char                                              bAutoDestroy : 1;                                        // 0x01F0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopWhenOwnerDestroyed : 1;                             // 0x01F0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowSpatialization : 1;                                // 0x01F0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideAttenuation : 1;                                // 0x01F0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GIEI[0x3];                                   // 0x01F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOutputToBusOnly : 1;                                    // 0x01F4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTO7[0x3];                                   // 0x01F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundAttenuationSettings                           AttenuationOverrides;                                    // 0x0200(0x03A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x05A0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ConcurrencySet[0x50];                                    // 0x05A8(0x0050) UNKNOWN PROPERTY: SetProperty
		class USoundClass*                                         SoundClass;                                              // 0x05F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundEffectSourcePresetChain*                       SourceEffectChain;                                       // 0x0600(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundSubmixBase*                                    SoundSubmix;                                             // 0x0608(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoundSubmixSendInfo>                        SoundSubmixSends;                                        // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     BusSends;                                                // 0x0620(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundModulation                                    Modulation;                                              // 0x0630(0x0010) Edit, NativeAccessSpecifierPublic
		TArray<struct FSoundSourceBusSendInfo>                     PreEffectBusSends;                                       // 0x0640(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsUISound : 1;                                          // 0x0650(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsPreviewSound : 1;                                     // 0x0650(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSL5[0x3];                                   // 0x0651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EnvelopeFollowerAttackTime;                              // 0x0654(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnvelopeFollowerReleaseTime;                             // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DR58[0x4];                                   // 0x065C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioEnvelopeValue;                                    // 0x0660(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UMU[0x20];                                  // 0x0670(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USynthSound*                                         Synth;                                                   // 0x0690(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     AudioComponent;                                          // 0x0698(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XV62[0x30];                                  // 0x06A0(0x0030) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void Start();
		void SetVolumeMultiplier(float VolumeMultiplier);
		void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
		bool IsPlaying();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.AudioGenerator
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UAudioGenerator : public UObject
	{
	public:
		unsigned char                                              UnknownData_KFTM[0x80];                                  // 0x0028(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.AudioMixerBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_TrimAudioCache(float InMegabytesToFree);
		class USoundWave* STATIC_StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
		void STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
		void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
		void STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize);
		void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);
		void STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
		void STATIC_ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex);
		void STATIC_RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);
		void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_PrimeSoundForPlayback(class USoundWave* SoundWave, const class FScriptDelegate& OnLoadCompletion);
		void STATIC_PrimeSoundCueForPlayback(class USoundCue* SoundCue);
		void STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
		void STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
		int32_t STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
		void STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
		void STATIC_ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
		void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
		int32_t STATIC_AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
		void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
		void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectDynamicsProcessorPreset
	 * Size -> 0x00C8 (FullSize[0x0108] - InheritedSize[0x0040])
	 */
	class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_FS04[0x78];                                  // 0x0040(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectDynamicsProcessorSettings              Settings;                                                // 0x00B8(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings);
		void SetExternalSubmix(class USoundSubmix* Submix);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectSubmixEQPreset
	 * Size -> 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
	 */
	class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_U3U0[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectSubmixEQSettings                       Settings;                                                // 0x0078(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectReverbPreset
	 * Size -> 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
	 */
	class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_ZBXX[0x5C];                                  // 0x0040(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectReverbSettings                         Settings;                                                // 0x009C(0x0034) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
		void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SubmixEffectReverbFastPreset
	 * Size -> 0x0098 (FullSize[0x00D8] - InheritedSize[0x0040])
	 */
	class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_K1GV[0x60];                                  // 0x0040(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectReverbFastSettings                     Settings;                                                // 0x00A0(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
		void SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioMixer.SynthSound
	 * Size -> 0x0020 (FullSize[0x0380] - InheritedSize[0x0360])
	 */
	class USynthSound : public USoundWaveProcedural
	{
	public:
		class USynthComponent*                                     OwningSynthComponent;                                    // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NBZZ[0x18];                                  // 0x0368(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
