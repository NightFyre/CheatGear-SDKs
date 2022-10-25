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
	 * Class Synthesis.ModularSynthPresetBank
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UModularSynthPresetBank : public UObject
	{
	public:
		TArray<struct FModularSynthPresetBankEntry>                Presets;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.ModularSynthLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModularSynthLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const class FString& PresetName);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.ModularSynthComponent
	 * Size -> 0x06C0 (FullSize[0x0E60] - InheritedSize[0x07A0])
	 */
	class UModularSynthComponent : public USynthComponent
	{
	public:
		int32_t                                                    VoiceCount;                                              // 0x07A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IS1W[0x6BC];                                 // 0x07A4(0x06BC) MISSED OFFSET (PADDING)

	public:
		void SetSynthPreset(const struct FModularSynthPreset& SynthPreset);
		void SetSustainGain(float SustainGain);
		void SetStereoDelayWetlevel(float DelayWetlevel);
		void SetStereoDelayTime(float DelayTimeMsec);
		void SetStereoDelayRatio(float DelayRatio);
		void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);
		void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
		void SetStereoDelayFeedback(float DelayFeedback);
		void SetSpread(float Spread);
		void SetReleaseTime(float ReleaseTimeMsec);
		void SetPortamento(float Portamento);
		void SetPitchBend(float PitchBend);
		void SetPan(float Pan);
		void SetOscType(int32_t OscIndex, ESynth1OscType OscType);
		void SetOscSync(bool bIsSynced);
		void SetOscSemitones(int32_t OscIndex, float Semitones);
		void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);
		void SetOscOctave(int32_t OscIndex, float Octave);
		void SetOscGainMod(int32_t OscIndex, float OscGainMod);
		void SetOscGain(int32_t OscIndex, float OscGain);
		void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);
		void SetOscCents(int32_t OscIndex, float Cents);
		void SetModEnvSustainGain(float SustainGain);
		void SetModEnvReleaseTime(float Release);
		void SetModEnvPatch(ESynthModEnvPatch InPatchType);
		void SetModEnvInvert(bool bInvert);
		void SetModEnvDepth(float Depth);
		void SetModEnvDecayTime(float DecayTimeMsec);
		void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);
		void SetModEnvBiasInvert(bool bInvert);
		void SetModEnvAttackTime(float AttackTimeMsec);
		void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);
		void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);
		void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);
		void SetLFOGainMod(int32_t LFOIndex, float GainMod);
		void SetLFOGain(int32_t LFOIndex, float Gain);
		void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);
		void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);
		void SetGainDb(float GainDb);
		void SetFilterType(ESynthFilterType FilterType);
		void SetFilterQMod(float FilterQ);
		void SetFilterQ(float FilterQ);
		void SetFilterFrequencyMod(float FilterFrequencyHz);
		void SetFilterFrequency(float FilterFrequencyHz);
		void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);
		void SetEnableUnison(bool EnableUnison);
		void SetEnableRetrigger(bool RetriggerEnabled);
		void SetEnablePolyphony(bool bEnablePolyphony);
		bool SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled);
		void SetEnableLegato(bool LegatoEnabled);
		void SetDecayTime(float DecayTimeMsec);
		void SetChorusFrequency(float Frequency);
		void SetChorusFeedback(float Feedback);
		void SetChorusEnabled(bool EnableChorus);
		void SetChorusDepth(float Depth);
		void SetAttackTime(float AttackTimeMsec);
		void NoteOn(float Note, int32_t Velocity, float Duration);
		void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
		struct FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectBitCrusherPreset
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_1QDD[0x58];                                  // 0x0068(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectBitCrusherSettings                     Settings;                                                // 0x00C0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings);
		void SetSampleRateModulator(class USoundModulatorBase* Modulator);
		void SetSampleRate(float SampleRate);
		void SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings);
		void SetBits(float Bits);
		void SetBitModulator(class USoundModulatorBase* Modulator);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectChorusPreset
	 * Size -> 0x0118 (FullSize[0x0180] - InheritedSize[0x0068])
	 */
	class USourceEffectChorusPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_F2TC[0xA0];                                  // 0x0068(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectChorusSettings                         Settings;                                                // 0x0108(0x0078) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetWetModulator(class USoundModulatorBase* Modulator);
		void SetWet(float WetAmount);
		void SetSpreadModulator(class USoundModulatorBase* Modulator);
		void SetSpread(float Spread);
		void SetSettings(const struct FSourceEffectChorusBaseSettings& Settings);
		void SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings);
		void SetFrequencyModulator(class USoundModulatorBase* Modulator);
		void SetFrequency(float Frequency);
		void SetFeedbackModulator(class USoundModulatorBase* Modulator);
		void SetFeedback(float Feedback);
		void SetDryModulator(class USoundModulatorBase* Modulator);
		void SetDry(float DryAmount);
		void SetDepthModulator(class USoundModulatorBase* Modulator);
		void SetDepth(float Depth);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectDynamicsProcessorPreset
	 * Size -> 0x0078 (FullSize[0x00E0] - InheritedSize[0x0068])
	 */
	class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_B196[0x50];                                  // 0x0068(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectDynamicsProcessorSettings              Settings;                                                // 0x00B8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.EnvelopeFollowerListener
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	class UEnvelopeFollowerListener : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnEnvelopeFollowerUpdate;                                // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SJB[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectEnvelopeFollowerPreset
	 * Size -> 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
	 */
	class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_7YSF[0x34];                                  // 0x0068(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectEnvelopeFollowerSettings               Settings;                                                // 0x009C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
		void SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings);
		void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectEQPreset
	 * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
	 */
	class USourceEffectEQPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_FKDZ[0x38];                                  // 0x0068(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectEQSettings                             Settings;                                                // 0x00A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectEQSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectFilterPreset
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	class USourceEffectFilterPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_4PAY[0x48];                                  // 0x0068(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectFilterSettings                         Settings;                                                // 0x00B0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectFilterSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectFoldbackDistortionPreset
	 * Size -> 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
	 */
	class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_2MO8[0x34];                                  // 0x0068(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectFoldbackDistortionSettings             Settings;                                                // 0x009C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectMidSideSpreaderPreset
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_LGGV[0x30];                                  // 0x0068(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectMidSideSpreaderSettings                Settings;                                                // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectMotionFilterPreset
	 * Size -> 0x0118 (FullSize[0x0180] - InheritedSize[0x0068])
	 */
	class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_NFH6[0xA0];                                  // 0x0068(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectMotionFilterSettings                   Settings;                                                // 0x0108(0x0078) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectMotionFilterSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectPannerPreset
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	class USourceEffectPannerPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_0JTT[0x30];                                  // 0x0068(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectPannerSettings                         Settings;                                                // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectPannerSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectPhaserPreset
	 * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
	 */
	class USourceEffectPhaserPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_YG1V[0x38];                                  // 0x0068(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectPhaserSettings                         Settings;                                                // 0x00A0(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectPhaserSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectRingModulationPreset
	 * Size -> 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
	 */
	class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_AYU9[0x48];                                  // 0x0068(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectRingModulationSettings                 Settings;                                                // 0x00B0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectRingModulationSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectSimpleDelayPreset
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_ERIU[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectSimpleDelaySettings                    Settings;                                                // 0x00A8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectStereoDelayPreset
	 * Size -> 0x0070 (FullSize[0x00D8] - InheritedSize[0x0068])
	 */
	class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_MV7S[0x4C];                                  // 0x0068(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectStereoDelaySettings                    Settings;                                                // 0x00B4(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SourceEffectWaveShaperPreset
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
	{
	public:
		unsigned char                                              UnknownData_6NST[0x30];                                  // 0x0068(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSourceEffectWaveShaperSettings                     Settings;                                                // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.AudioImpulseResponse
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAudioImpulseResponse : public UObject
	{
	public:
		TArray<float>                                              ImpulseResponse;                                         // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumChannels;                                             // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SampleRate;                                              // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalizationVolumeDb;                                   // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTrueStereo;                                             // 0x0044(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VS49[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              IRData;                                                  // 0x0048(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectConvolutionReverbPreset
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
	{
	public:
		class UAudioImpulseResponse*                               ImpulseResponse;                                         // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSubmixEffectConvolutionReverbSettings              Settings;                                                // 0x0070(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		ESubmixEffectConvolutionReverbBlockSize                    BlockSize;                                               // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHardwareAcceleration;                             // 0x0099(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNWI[0x56];                                  // 0x009A(0x0056) MISSED OFFSET (PADDING)

	public:
		void SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings);
		void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectDelayStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary
	{
	public:
		struct FSubmixEffectDelaySettings STATIC_SetMaximumDelayLength(struct FSubmixEffectDelaySettings* DelaySettings, float MaximumDelayLength);
		struct FSubmixEffectDelaySettings STATIC_SetInterpolationTime(struct FSubmixEffectDelaySettings* DelaySettings, float InterpolationTime);
		struct FSubmixEffectDelaySettings STATIC_SetDelayLength(struct FSubmixEffectDelaySettings* DelaySettings, float DelayLength);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectDelayPreset
	 * Size -> 0x0050 (FullSize[0x00B8] - InheritedSize[0x0068])
	 */
	class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_S2HH[0x34];                                  // 0x0068(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectDelaySettings                          Settings;                                                // 0x009C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSubmixEffectDelaySettings                          DynamicSettings;                                         // 0x00A8(0x000C) Transient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TPRQ[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSettings(const struct FSubmixEffectDelaySettings& InSettings);
		void SetInterpolationTime(float Time);
		void SetDelay(float Length);
		void SetDefaultSettings(const struct FSubmixEffectDelaySettings& InSettings);
		float GetMaxDelayInMilliseconds();
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectFilterPreset
	 * Size -> 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
	 */
	class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_2IVY[0x34];                                  // 0x0068(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectFilterSettings                         Settings;                                                // 0x009C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectFilterSettings& InSettings);
		void SetFilterType(ESubmixFilterType InType);
		void SetFilterQMod(float InQ);
		void SetFilterQ(float InQ);
		void SetFilterCutoffFrequencyMod(float InFrequency);
		void SetFilterCutoffFrequency(float InFrequency);
		void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectFlexiverbPreset
	 * Size -> 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
	 */
	class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_3VCJ[0x38];                                  // 0x0068(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectFlexiverbSettings                      Settings;                                                // 0x00A0(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectMultibandCompressorPreset
	 * Size -> 0x0098 (FullSize[0x0100] - InheritedSize[0x0068])
	 */
	class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_C2KJ[0x60];                                  // 0x0068(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectMultibandCompressorSettings            Settings;                                                // 0x00C8(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings);
		void SetExternalSubmix(class USoundSubmix* Submix);
		void SetAudioBus(class UAudioBus* AudioBus);
		void ResetKey();
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectStereoDelayPreset
	 * Size -> 0x0070 (FullSize[0x00D8] - InheritedSize[0x0068])
	 */
	class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_5BI8[0x4C];                                  // 0x0068(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectStereoDelaySettings                    Settings;                                                // 0x00B4(0x0024) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SubmixEffectTapDelayPreset
	 * Size -> 0x0070 (FullSize[0x00D8] - InheritedSize[0x0068])
	 */
	class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
	{
	public:
		unsigned char                                              UnknownData_L601[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSubmixEffectTapDelaySettings                       Settings;                                                // 0x00A8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8E8Z[0x18];                                  // 0x00C0(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTap(int32_t TapId, const struct FTapDelayInfo& TapInfo);
		void SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings);
		void SetInterpolationTime(float Time);
		void RemoveTap(int32_t TapId);
		void GetTapIds(TArray<int32_t>* TapIds);
		void GetTap(int32_t TapId, struct FTapDelayInfo* TapInfo);
		float GetMaxDelayInMilliseconds();
		void AddTap(int32_t* TapId);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.Synth2DSlider
	 * Size -> 0x04E8 (FullSize[0x0610] - InheritedSize[0x0128])
	 */
	class USynth2DSlider : public UWidget
	{
	public:
		float                                                      ValueX;                                                  // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValueY;                                                  // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueXDelegate;                                          // 0x0130(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueYDelegate;                                          // 0x0140(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSynth2DSliderStyle                                 WidgetStyle;                                             // 0x0150(0x0430) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x0580(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x0590(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x0591(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q258[0x2];                                   // 0x0592(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepSize;                                                // 0x0594(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0598(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HV1L[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x05A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x05B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureBegin;                                // 0x05C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureEnd;                                  // 0x05D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChangedX;                                         // 0x05E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChangedY;                                         // 0x05F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SU0[0x10];                                  // 0x0600(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetValue(const struct FVector2D& InValue);
		void SetStepSize(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetLocked(bool InValue);
		void SetIndentHandle(bool InValue);
		struct FVector2D GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.GranularSynth
	 * Size -> 0x03E0 (FullSize[0x0B80] - InheritedSize[0x07A0])
	 */
	class UGranularSynth : public USynthComponent
	{
	public:
		class USoundWave*                                          GranulatedSoundWave;                                     // 0x07A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZJBZ[0x3D8];                                 // 0x07A8(0x03D8) MISSED OFFSET (PADDING)

	public:
		void SetSustainGain(float SustainGain);
		void SetSoundWave(class USoundWave* InSoundWave);
		void SetScrubMode(bool bScrubMode);
		void SetReleaseTimeMsec(float ReleaseTimeMsec);
		void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);
		void SetPlaybackSpeed(float InPlayheadRate);
		void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange);
		void SetGrainsPerSecond(float InGrainsPerSecond);
		void SetGrainProbability(float InGrainProbability);
		void SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange);
		void SetGrainPan(float BasePan, const struct FVector2D& PanRange);
		void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);
		void SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange);
		void SetDecayTime(float DecayTimeMsec);
		void SetAttackTime(float AttackTimeMsec);
		void NoteOn(float Note, int32_t Velocity, float Duration);
		void NoteOff(float Note, bool bKill);
		bool IsLoaded();
		float GetSampleDuration();
		float GetCurrentPlayheadTime();
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.MonoWaveTableSynthPreset
	 * Size -> 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
	 */
	class UMonoWaveTableSynthPreset : public UObject
	{
	public:
		class FString                                              PresetName;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLockKeyframesToGridBool : 1;                            // 0x0038(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFP0[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LockKeyframesToGrid;                                     // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WaveTableResolution;                                     // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TI5C[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRuntimeFloatCurve>                          WaveTable;                                               // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic
		unsigned char                                              bNormalizeWaveTables : 1;                                // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGKI[0x117];                                 // 0x0059(0x0117) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SynthComponentMonoWaveTable
	 * Size -> 0x0740 (FullSize[0x0EE0] - InheritedSize[0x07A0])
	 */
	class USynthComponentMonoWaveTable : public USynthComponent
	{
	public:
		class FScriptMulticastDelegate                             OnTableAltered;                                          // 0x07A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNumTablesChanged;                                      // 0x07B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UMonoWaveTableSynthPreset*                           CurrentPreset;                                           // 0x07C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1R11[0x718];                                 // 0x07C8(0x0718) MISSED OFFSET (PADDING)

	public:
		void SetWaveTablePosition(float InPosition);
		void SetSustainPedalState(bool InSustainPedalState);
		void SetPosLfoType(ESynthLFOType InLfoType);
		void SetPosLfoFrequency(float InLfoFrequency);
		void SetPosLfoDepth(float InLfoDepth);
		void SetPositionEnvelopeSustainGain(float InSustainGain);
		void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
		void SetPositionEnvelopeInvert(bool bInInvert);
		void SetPositionEnvelopeDepth(float InDepth);
		void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
		void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
		void SetPositionEnvelopeBiasDepth(float InDepth);
		void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
		void SetLowPassFilterResonance(float InNewQ);
		void SetFrequencyWithMidiNote(float InMidiNote);
		void SetFrequencyPitchBend(float FrequencyOffsetCents);
		void SetFrequency(float FrequencyHz);
		void SetFilterEnvelopeSustainGain(float InSustainGain);
		void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
		void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
		void SetFilterEnvelopeInvert(bool bInInvert);
		void SetFilterEnvelopeDepth(float InDepth);
		void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
		void SetFilterEnvelopeBiasDepth(float InDepth);
		void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
		bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);
		bool SetCurveTangent(int32_t TableIndex, float InNewTangent);
		bool SetCurveInterpolationType(ECurveInterpolationType InterpolationType, int32_t TableIndex);
		void SetAmpEnvelopeSustainGain(float InSustainGain);
		void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
		void SetAmpEnvelopeInvert(bool bInInvert);
		void SetAmpEnvelopeDepth(float InDepth);
		void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
		void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
		void SetAmpEnvelopeBiasDepth(float InDepth);
		void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
		void RefreshWaveTable(int32_t Index);
		void RefreshAllWaveTables();
		void NoteOn(float InMidiNote, float InVelocity);
		void NoteOff(float InMidiNote);
		int32_t GetNumTableEntries();
		int32_t GetMaxTableIndex();
		TArray<float> GetKeyFrameValuesForTable(float TableIndex);
		float GetCurveTangent(int32_t TableIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SynthComponentToneGenerator
	 * Size -> 0x00F0 (FullSize[0x0890] - InheritedSize[0x07A0])
	 */
	class USynthComponentToneGenerator : public USynthComponent
	{
	public:
		float                                                      Frequency;                                               // 0x07A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x07A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  DistanceAttenuationCurve;                                // 0x07A8(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector2D                                           DistanceRange;                                           // 0x0830(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttenuationDbAtMaxRange;                                 // 0x0840(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6OE[0x4C];                                  // 0x0844(0x004C) MISSED OFFSET (PADDING)

	public:
		void SetVolume(float InVolume);
		void SetFrequency(float InFrequency);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SynthSamplePlayer
	 * Size -> 0x0130 (FullSize[0x08D0] - InheritedSize[0x07A0])
	 */
	class USynthSamplePlayer : public USynthComponent
	{
	public:
		class USoundWave*                                          SoundWave;                                               // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSampleLoaded;                                          // 0x07A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSamplePlaybackProgress;                                // 0x07B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RX3[0x108];                                 // 0x07C8(0x0108) MISSED OFFSET (PADDING)

	public:
		void SetSoundWave(class USoundWave* InSoundWave);
		void SetScrubTimeWidth(float InScrubTimeWidthSec);
		void SetScrubMode(bool bScrubMode);
		void SetPitch(float InPitch, float TimeSec);
		void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);
		bool IsLoaded();
		float GetSampleDuration();
		float GetCurrentPlaybackProgressTime();
		float GetCurrentPlaybackProgressPercent();
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
		float STATIC_GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
		static UClass* StaticClass();
	};

	/**
	 * Class Synthesis.SynthKnob
	 * Size -> 0x0428 (FullSize[0x0550] - InheritedSize[0x0128])
	 */
	class USynthKnob : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StepSize;                                                // 0x012C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseSpeed;                                              // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseFineTuneSpeed;                                      // 0x0134(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ShowTooltipInfo : 1;                                     // 0x0138(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9QR[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ParameterName;                                           // 0x0140(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                ParameterUnits;                                          // 0x0158(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0170(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FSynthKnobStyle                                     WidgetStyle;                                             // 0x0180(0x0360) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x04E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x04E1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OEUF[0x6];                                   // 0x04E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x04E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x04F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureBegin;                                // 0x0508(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureEnd;                                  // 0x0518(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0528(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4B8[0x18];                                  // 0x0538(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InValue);
		void SetStepSize(float InValue);
		void SetLocked(bool InValue);
		float GetValue();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
