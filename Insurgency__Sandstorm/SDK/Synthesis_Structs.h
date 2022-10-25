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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Synthesis.ESynth1PatchDestination
	 */
	enum class ESynth1PatchDestination : uint8_t
	{
		Osc1Gain        = 0,
		Osc1Frequency   = 1,
		Osc1Pulsewidth  = 2,
		Osc2Gain        = 3,
		Osc2Frequency   = 4,
		Osc2Pulsewidth  = 5,
		FilterFrequency = 6,
		FilterQ         = 7,
		Gain            = 8,
		Pan             = 9,
		LFO1Frequency   = 10,
		LFO1Gain        = 11,
		LFO2Frequency   = 12,
		LFO2Gain        = 13,
		Count           = 14,
		MAX             = 15
	};

	/**
	 * Enum Synthesis.ESynth1PatchSource
	 */
	enum class ESynth1PatchSource : uint8_t
	{
		LFO1         = 0,
		LFO2         = 1,
		Envelope     = 2,
		BiasEnvelope = 3,
		Count        = 4,
		MAX          = 5
	};

	/**
	 * Enum Synthesis.ESynthStereoDelayMode
	 */
	enum class ESynthStereoDelayMode : uint8_t
	{
		Normal   = 0,
		Cross    = 1,
		PingPong = 2,
		Count    = 3,
		MAX      = 4
	};

	/**
	 * Enum Synthesis.ESynthFilterAlgorithm
	 */
	enum class ESynthFilterAlgorithm : uint8_t
	{
		OnePole       = 0,
		StateVariable = 1,
		Ladder        = 2,
		Count         = 3,
		MAX           = 4
	};

	/**
	 * Enum Synthesis.ESynthFilterType
	 */
	enum class ESynthFilterType : uint8_t
	{
		LowPass  = 0,
		HighPass = 1,
		BandPass = 2,
		BandStop = 3,
		Count    = 4,
		MAX      = 5
	};

	/**
	 * Enum Synthesis.ESynthModEnvBiasPatch
	 */
	enum class ESynthModEnvBiasPatch : uint8_t
	{
		PatchToNone       = 0,
		PatchToOscFreq    = 1,
		PatchToFilterFreq = 2,
		PatchToFilterQ    = 3,
		PatchToLFO1Gain   = 4,
		PatchToLFO2Gain   = 5,
		PatchToLFO1Freq   = 6,
		PatchToLFO2Freq   = 7,
		Count             = 8,
		MAX               = 9
	};

	/**
	 * Enum Synthesis.ESynthModEnvPatch
	 */
	enum class ESynthModEnvPatch : uint8_t
	{
		PatchToNone       = 0,
		PatchToOscFreq    = 1,
		PatchToFilterFreq = 2,
		PatchToFilterQ    = 3,
		PatchToLFO1Gain   = 4,
		PatchToLFO2Gain   = 5,
		PatchToLFO1Freq   = 6,
		PatchToLFO2Freq   = 7,
		Count             = 8,
		MAX               = 9
	};

	/**
	 * Enum Synthesis.ESynthLFOPatchType
	 */
	enum class ESynthLFOPatchType : uint8_t
	{
		PatchToNone              = 0,
		PatchToGain              = 1,
		PatchToOscFreq           = 2,
		PatchToFilterFreq        = 3,
		PatchToFilterQ           = 4,
		PatchToOscPulseWidth     = 5,
		PatchToOscPan            = 6,
		PatchLFO1ToLFO2Frequency = 7,
		PatchLFO1ToLFO2Gain      = 8,
		Count                    = 9,
		MAX                      = 10
	};

	/**
	 * Enum Synthesis.ESynthLFOMode
	 */
	enum class ESynthLFOMode : uint8_t
	{
		Sync    = 0,
		OneShot = 1,
		Free    = 2,
		Count   = 3,
		MAX     = 4
	};

	/**
	 * Enum Synthesis.ESynthLFOType
	 */
	enum class ESynthLFOType : uint8_t
	{
		Sine             = 0,
		UpSaw            = 1,
		DownSaw          = 2,
		Square           = 3,
		Triangle         = 4,
		Exponential      = 5,
		RandomSampleHold = 6,
		Count            = 7,
		MAX              = 8
	};

	/**
	 * Enum Synthesis.ESynth1OscType
	 */
	enum class ESynth1OscType : uint8_t
	{
		Sine     = 0,
		Saw      = 1,
		Triangle = 2,
		Square   = 3,
		Noise    = 4,
		Count    = 5,
		MAX      = 6
	};

	/**
	 * Enum Synthesis.ESourceEffectDynamicsPeakMode
	 */
	enum class ESourceEffectDynamicsPeakMode : uint8_t
	{
		MeanSquared     = 0,
		RootMeanSquared = 1,
		Peak            = 2,
		Count           = 3,
		MAX             = 4
	};

	/**
	 * Enum Synthesis.ESourceEffectDynamicsProcessorType
	 */
	enum class ESourceEffectDynamicsProcessorType : uint8_t
	{
		Compressor = 0,
		Limiter    = 1,
		Expander   = 2,
		Gate       = 3,
		Count      = 4,
		MAX        = 5
	};

	/**
	 * Enum Synthesis.EEnvelopeFollowerPeakMode
	 */
	enum class EEnvelopeFollowerPeakMode : uint8_t
	{
		MeanSquared     = 0,
		RootMeanSquared = 1,
		Peak            = 2,
		Count           = 3,
		MAX             = 4
	};

	/**
	 * Enum Synthesis.ESourceEffectFilterType
	 */
	enum class ESourceEffectFilterType : uint8_t
	{
		LowPass  = 0,
		HighPass = 1,
		BandPass = 2,
		BandStop = 3,
		Count    = 4,
		MAX      = 5
	};

	/**
	 * Enum Synthesis.ESourceEffectFilterCircuit
	 */
	enum class ESourceEffectFilterCircuit : uint8_t
	{
		OnePole       = 0,
		StateVariable = 1,
		Ladder        = 2,
		Count         = 3,
		MAX           = 4
	};

	/**
	 * Enum Synthesis.EStereoChannelMode
	 */
	enum class EStereoChannelMode : uint8_t
	{
		MidSide   = 0,
		LeftRight = 1,
		count     = 2,
		MAX       = 3
	};

	/**
	 * Enum Synthesis.EPhaserLFOType
	 */
	enum class EPhaserLFOType : uint8_t
	{
		Sine             = 0,
		UpSaw            = 1,
		DownSaw          = 2,
		Square           = 3,
		Triangle         = 4,
		Exponential      = 5,
		RandomSampleHold = 6,
		Count            = 7,
		MAX              = 8
	};

	/**
	 * Enum Synthesis.ERingModulatorTypeSourceEffect
	 */
	enum class ERingModulatorTypeSourceEffect : uint8_t
	{
		Sine     = 0,
		Saw      = 1,
		Triangle = 2,
		Square   = 3,
		Count    = 4,
		MAX      = 5
	};

	/**
	 * Enum Synthesis.EStereoDelaySourceEffect
	 */
	enum class EStereoDelaySourceEffect : uint8_t
	{
		Normal   = 0,
		Cross    = 1,
		PingPong = 2,
		Count    = 3,
		MAX      = 4
	};

	/**
	 * Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
	 */
	enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
	{
		BlockSize256  = 0,
		BlockSize512  = 1,
		BlockSize1024 = 2,
		MAX           = 3
	};

	/**
	 * Enum Synthesis.ESubmixFilterAlgorithm
	 */
	enum class ESubmixFilterAlgorithm : uint8_t
	{
		OnePole       = 0,
		StateVariable = 1,
		Ladder        = 2,
		Count         = 3,
		MAX           = 4
	};

	/**
	 * Enum Synthesis.ESubmixFilterType
	 */
	enum class ESubmixFilterType : uint8_t
	{
		LowPass  = 0,
		HighPass = 1,
		BandPass = 2,
		BandStop = 3,
		Count    = 4,
		MAX      = 5
	};

	/**
	 * Enum Synthesis.ETapLineMode
	 */
	enum class ETapLineMode : uint8_t
	{
		SendToChannel = 0,
		Panning       = 1,
		Disabled      = 2,
		MAX           = 3
	};

	/**
	 * Enum Synthesis.EGranularSynthSeekType
	 */
	enum class EGranularSynthSeekType : uint8_t
	{
		FromBeginning       = 0,
		FromCurrentPosition = 1,
		Count               = 2,
		MAX                 = 3
	};

	/**
	 * Enum Synthesis.EGranularSynthEnvelopeType
	 */
	enum class EGranularSynthEnvelopeType : uint8_t
	{
		Rectangular         = 0,
		Triangle            = 1,
		DownwardTriangle    = 2,
		UpwardTriangle      = 3,
		ExponentialDecay    = 4,
		ExponentialIncrease = 5,
		Gaussian            = 6,
		Hanning             = 7,
		Lanczos             = 8,
		Cosine              = 9,
		CosineSquared       = 10,
		Welch               = 11,
		Blackman            = 12,
		BlackmanHarris      = 13,
		Count               = 14,
		MAX                 = 15
	};

	/**
	 * Enum Synthesis.CurveInterpolationType
	 */
	enum class ECurveInterpolationType : uint8_t
	{
		CurveInterpolationType_AUTOINTERP                 = 0,
		CurveInterpolationType_LINEAR                     = 1,
		CurveInterpolationType_CONSTANT                   = 2,
		CurveInterpolationType_CurveInterpolationType_MAX = 3
	};

	/**
	 * Enum Synthesis.ESamplePlayerSeekType
	 */
	enum class ESamplePlayerSeekType : uint8_t
	{
		FromBeginning       = 0,
		FromCurrentPosition = 1,
		FromEnd             = 2,
		Count               = 3,
		MAX                 = 4
	};

	/**
	 * Enum Synthesis.ESynthKnobSize
	 */
	enum class ESynthKnobSize : uint8_t
	{
		Medium = 0,
		Large  = 1,
		Count  = 2,
		MAX    = 3
	};

	/**
	 * Enum Synthesis.ESynthSlateColorStyle
	 */
	enum class ESynthSlateColorStyle : uint8_t
	{
		Light = 0,
		Dark  = 1,
		Count = 2,
		MAX   = 3
	};

	/**
	 * Enum Synthesis.ESynthSlateSizeType
	 */
	enum class ESynthSlateSizeType : uint8_t
	{
		Small  = 0,
		Medium = 1,
		Large  = 2,
		Count  = 3,
		MAX    = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Synthesis.Synth1PatchCable
	 * Size -> 0x0008
	 */
	struct FSynth1PatchCable
	{
	public:
		float                                                      Depth;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynth1PatchDestination                                    Destination;                                             // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7P9W[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.EpicSynth1Patch
	 * Size -> 0x0018
	 */
	struct FEpicSynth1Patch
	{
	public:
		ESynth1PatchSource                                         PatchSource;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_49T4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSynth1PatchCable>                           PatchCables;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.ModularSynthPreset
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FModularSynthPreset : public FTableRowBase
	{
	public:
		unsigned char                                              bEnablePolyphony : 1;                                    // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0R5G[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESynth1OscType                                             Osc1Type;                                                // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F66K[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Osc1Gain;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc1Octave;                                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc1Semitones;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc1Cents;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc1PulseWidth;                                          // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynth1OscType                                             Osc2Type;                                                // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSW6[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Osc2Gain;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc2Octave;                                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc2Semitones;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc2Cents;                                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Osc2PulseWidth;                                          // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Portamento;                                              // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableUnison : 1;                                       // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableOscillatorSync : 1;                               // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OVDU[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Spread;                                                  // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pan;                                                     // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LFO1Frequency;                                           // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LFO1Gain;                                                // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOType                                              LFO1Type;                                                // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOMode                                              LFO1Mode;                                                // 0x0055(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOPatchType                                         LFO1PatchType;                                           // 0x0056(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IB59[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LFO2Frequency;                                           // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LFO2Gain;                                                // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOType                                              LFO2Type;                                                // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOMode                                              LFO2Mode;                                                // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthLFOPatchType                                         LFO2PatchType;                                           // 0x0062(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCBC[0x1];                                   // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GainDb;                                                  // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackTime;                                              // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayTime;                                               // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SustainGain;                                             // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTime;                                             // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthModEnvPatch                                          ModEnvPatchType;                                         // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthModEnvBiasPatch                                      ModEnvBiasPatchType;                                     // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0T1[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bInvertModulationEnvelope : 1;                           // 0x007C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInvertModulationEnvelopeBias : 1;                       // 0x007C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QCJP[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModulationEnvelopeDepth;                                 // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModulationEnvelopeAttackTime;                            // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModulationEnvelopeDecayTime;                             // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModulationEnvelopeSustainGain;                           // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ModulationEnvelopeReleaseTime;                           // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLegato : 1;                                             // 0x0094(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRetrigger : 1;                                          // 0x0094(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESSD[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FilterFrequency;                                         // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterQ;                                                 // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthFilterType                                           FilterType;                                              // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthFilterAlgorithm                                      FilterAlgorithm;                                         // 0x00A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMJF[0x2];                                   // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bStereoDelayEnabled : 1;                                 // 0x00A4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Y80[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESynthStereoDelayMode                                      StereoDelayMode;                                         // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZBF[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StereoDelayTime;                                         // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StereoDelayFeedback;                                     // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StereoDelayWetlevel;                                     // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StereoDelayRatio;                                        // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bChorusEnabled : 1;                                      // 0x00BC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKZN[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChorusDepth;                                             // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChorusFeedback;                                          // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChorusFrequency;                                         // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9ZT[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEpicSynth1Patch>                            Patches;                                                 // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.ModularSynthPresetBankEntry
	 * Size -> 0x00F0
	 */
	struct FModularSynthPresetBankEntry
	{
	public:
		class FString                                              PresetName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModularSynthPreset                                 Preset;                                                  // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectBitCrusherSettings
	 * Size -> 0x0008
	 */
	struct FSourceEffectBitCrusherSettings
	{
	public:
		float                                                      CrushedSampleRate;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrushedBits;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectChorusSettings
	 * Size -> 0x0018
	 */
	struct FSourceEffectChorusSettings
	{
	public:
		float                                                      Depth;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Feedback;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetLevel;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryLevel;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Spread;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
	 * Size -> 0x0028
	 */
	struct FSourceEffectDynamicsProcessorSettings
	{
	public:
		ESourceEffectDynamicsProcessorType                         DynamicsProcessorType;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESourceEffectDynamicsPeakMode                              PeakMode;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZFY[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAheadMsec;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackTimeMsec;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTimeMsec;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThresholdDb;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KneeBandwidthDb;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InputGainDb;                                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutputGainDb;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStereoLinked : 1;                                       // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAnalogMode : 1;                                         // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VTJ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
	 * Size -> 0x000C
	 */
	struct FSourceEffectEnvelopeFollowerSettings
	{
	public:
		float                                                      AttackTime;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTime;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvelopeFollowerPeakMode                                  PeakMode;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAnalogMode;                                           // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUKM[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectEQBand
	 * Size -> 0x0010
	 */
	struct FSourceEffectEQBand
	{
	public:
		float                                                      Frequency;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bandwidth;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GainDb;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnabled : 1;                                            // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1CY[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectEQSettings
	 * Size -> 0x0010
	 */
	struct FSourceEffectEQSettings
	{
	public:
		TArray<struct FSourceEffectEQBand>                         EQBands;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectFilterSettings
	 * Size -> 0x000C
	 */
	struct FSourceEffectFilterSettings
	{
	public:
		ESourceEffectFilterCircuit                                 FilterCircuit;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESourceEffectFilterType                                    FilterType;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L42U[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CutoffFrequency;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterQ;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
	 * Size -> 0x000C
	 */
	struct FSourceEffectFoldbackDistortionSettings
	{
	public:
		float                                                      InputGainDb;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThresholdDb;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutputGainDb;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
	 * Size -> 0x000C
	 */
	struct FSourceEffectMidSideSpreaderSettings
	{
	public:
		EStereoChannelMode                                         InputMode;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QY7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpreadAmount;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStereoChannelMode                                         OutputMode;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEqualPower;                                             // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WCKS[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectPannerSettings
	 * Size -> 0x0008
	 */
	struct FSourceEffectPannerSettings
	{
	public:
		float                                                      Spread;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pan;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectPhaserSettings
	 * Size -> 0x0010
	 */
	struct FSourceEffectPhaserSettings
	{
	public:
		float                                                      WetLevel;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Feedback;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhaserLFOType                                             LFOType;                                                 // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseQuadraturePhase;                                      // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKJ6[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectRingModulationSettings
	 * Size -> 0x0014
	 */
	struct FSourceEffectRingModulationSettings
	{
	public:
		ERingModulatorTypeSourceEffect                             ModulatorType;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PFDN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Frequency;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryLevel;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetLevel;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
	 * Size -> 0x0018
	 */
	struct FSourceEffectSimpleDelaySettings
	{
	public:
		float                                                      SpeedOfSound;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayAmount;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DryAmount;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetAmount;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Feedback;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDelayBasedOnDistance : 1;                               // 0x0014(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JKT[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectStereoDelaySettings
	 * Size -> 0x0014
	 */
	struct FSourceEffectStereoDelaySettings
	{
	public:
		EStereoDelaySourceEffect                                   DelayMode;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SU5W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayTimeMsec;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Feedback;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayRatio;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WetLevel;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SourceEffectWaveShaperSettings
	 * Size -> 0x0008
	 */
	struct FSourceEffectWaveShaperSettings
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutputGainDb;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
	 * Size -> 0x0020
	 */
	struct FSubmixEffectConvolutionReverbSettings
	{
	public:
		float                                                      NormalizationVolumeDb;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SurroundRearChannelBleedDb;                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertRearChannelBleedPhase;                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSurroundRearChannelFlip;                                // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_57U9[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SurroundRearChannelBleedAmount;                          // 0x000C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAudioImpulseResponse*                               ImpulseResponse;                                         // 0x0010(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowHArdwareAcceleration;                               // 0x0018(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32GH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectDelaySettings
	 * Size -> 0x000C
	 */
	struct FSubmixEffectDelaySettings
	{
	public:
		float                                                      MaximumDelayLength;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTime;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayLength;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectFilterSettings
	 * Size -> 0x000C
	 */
	struct FSubmixEffectFilterSettings
	{
	public:
		ESubmixFilterType                                          FilterType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESubmixFilterAlgorithm                                     FilterAlgorithm;                                         // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AHA[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FilterFrequency;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterQ;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
	 * Size -> 0x0010
	 */
	struct FSubmixEffectFlexiverbSettings
	{
	public:
		float                                                      PreDelay;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayTime;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RoomDampening;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Complexity;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.TapDelayInfo
	 * Size -> 0x0018
	 */
	struct FTapDelayInfo
	{
	public:
		ETapLineMode                                               TapLineMode;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KGR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayLength;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gain;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputChannel;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PanInDegrees;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TapId;                                                   // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SubmixEffectTapDelaySettings
	 * Size -> 0x0018
	 */
	struct FSubmixEffectTapDelaySettings
	{
	public:
		float                                                      MaximumDelayLength;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTime;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTapDelayInfo>                               Taps;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.Synth2DSliderStyle
	 * Size -> 0x02B0 (FullSize[0x02B8] - InheritedSize[0x0008])
	 */
	struct FSynth2DSliderStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DisabledThumbImage;                                      // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalBarImage;                                          // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DisabledBarImage;                                        // 0x01A0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImage;                                         // 0x0228(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      BarThickness;                                            // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3I60[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.SynthKnobStyle
	 * Size -> 0x0230 (FullSize[0x0238] - InheritedSize[0x0008])
	 */
	struct FSynthKnobStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         LargeKnob;                                               // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LargeKnobOverlay;                                        // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MediumKnob;                                              // 0x0118(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MediumKnobOverlay;                                       // 0x01A0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      MinValueAngle;                                           // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValueAngle;                                           // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthKnobSize                                             KnobSize;                                                // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4LSI[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Synthesis.PatchId
	 * Size -> 0x0004
	 */
	struct FPatchId
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Synthesis.SynthSlateStyle
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FSynthSlateStyle : public FSlateWidgetStyle
	{
	public:
		ESynthSlateSizeType                                        SizeType;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESynthSlateColorStyle                                      ColorStyle;                                              // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJCM[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
