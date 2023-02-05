#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Enum AudioSynesthesia.EConstantQNormalizationEnum
	 */
	enum class EConstantQNormalizationEnum : uint8_t
	{
		EqualEuclideanNorm = 0,
		EqualEnergy        = 1,
		EqualAmplitude     = 2,
		MAX                = 3
	};

	/**
	 * Enum AudioSynesthesia.EConstantQFFTSizeEnum
	 */
	enum class EConstantQFFTSizeEnum : uint8_t
	{
		Min     = 0,
		XXSmall = 1,
		XSmall  = 2,
		Small   = 3,
		Medium  = 4,
		Large   = 5,
		XLarge  = 6,
		XXLarge = 7,
		Max     = 8
	};

	/**
	 * Enum AudioSynesthesia.ELoudnessCurveTypeEnum
	 */
	enum class ELoudnessCurveTypeEnum : uint8_t
	{
		A    = 0,
		B    = 1,
		C    = 2,
		D    = 3,
		None = 4,
		MAX  = 5
	};

	/**
	 * Enum AudioSynesthesia.ELoudnessNRTCurveTypeEnum
	 */
	enum class ELoudnessNRTCurveTypeEnum : uint8_t
	{
		A    = 0,
		B    = 1,
		C    = 2,
		D    = 3,
		None = 4,
		MAX  = 5
	};

	/**
	 * Enum AudioSynesthesia.EMeterPeakType
	 */
	enum class EMeterPeakType : uint8_t
	{
		MeanSquared     = 0,
		RootMeanSquared = 1,
		Peak            = 2,
		Count           = 3,
		MAX             = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AudioSynesthesia.LoudnessResults
	 * Size -> 0x0010
	 */
	struct FLoudnessResults
	{
	public:
		float                                                      Loudness;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalizedLoudness;                                      // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerceptualEnergy;                                        // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSeconds;                                             // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioSynesthesia.MeterResults
	 * Size -> 0x0014
	 */
	struct FMeterResults
	{
	public:
		float                                                      TimeSeconds;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeterValue;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeakValue;                                               // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSamplesClipping;                                      // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClippingValue;                                           // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
