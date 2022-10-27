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
	 * Class SoundUtilities.SoundSimple
	 * Size -> 0x0018 (FullSize[0x0188] - InheritedSize[0x0170])
	 */
	class USoundSimple : public USoundBase
	{
	public:
		TArray<struct FSoundVariation>                             Variations;                                              // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class USoundWave*                                          SoundWave;                                               // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float GetQFromBandwidth(float InBandwidth);
		float GetPitchScaleFromMIDIPitch(int32_t BaseMidiNote, int32_t TargetMidiNote);
		int32_t GetMIDIPitchFromFrequency(float Frequency);
		float GetLogFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange);
		float GetLinearFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange);
		float GetGainFromMidiVelocity(int32_t InVelocity);
		float GetFrequencyMultiplierFromSemitones(float InPitchSemitones);
		float GetFrequencyFromMIDIPitch(int32_t MidiNote);
		float GetBeatTempo(float BeatsPerMinute, int32_t BeatMultiplier, int32_t DivisionsOfWholeNote);
		float GetBandwidthFromQ(float InQ);
		float ConvertLinearToDecibels(float InLinear, float InFloor);
		float ConvertDecibelsToLinear(float InDecibels);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
