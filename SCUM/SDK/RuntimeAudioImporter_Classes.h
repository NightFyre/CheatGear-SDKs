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
	 * Class RuntimeAudioImporter.ImportedSoundWave
	 * Size -> 0x0080 (FullSize[0x0440] - InheritedSize[0x03C0])
	 */
	class UImportedSoundWave : public USoundWaveProcedural
	{
	public:
		int32_t                                                    SamplingRate;                                            // 0x03C0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KFIN[0x1C];                                  // 0x03C4(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioPlaybackFinished;                                 // 0x03E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5DE3[0x18];                                  // 0x03F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGeneratePCMData;                                       // 0x0408(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SMVR[0x4];                                   // 0x0418(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentNumOfFrames;                                      // 0x041C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QP9R[0x20];                                  // 0x0420(0x0020) MISSED OFFSET (PADDING)

	public:
		bool RewindPlaybackTime(float PlaybackTime);
		void ReleaseMemory();
		bool IsPlaybackFinished();
		float GetPlaybackTime();
		float GetPlaybackPercentage();
		float GetDurationConst();
		float GetDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class RuntimeAudioImporter.PreImportedSoundAsset
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UPreImportedSoundAsset : public UObject
	{
	public:
		TArray<unsigned char>                                      AudioDataArray;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EAudioFormat                                               AudioFormat;                                             // 0x0038(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDZV[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RuntimeAudioImporter.RuntimeAudioCompressor
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class URuntimeAudioCompressor : public UObject
	{
	public:
		unsigned char                                              UnknownData_GCFH[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnResult;                                                // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URuntimeAudioCompressor* CreateRuntimeAudioCompressor();
		void CompressSoundWave(class UImportedSoundWave* ImportedSoundWaveRef, const struct FCompressedSoundWaveInfo& CompressedSoundWaveInfo, unsigned char Quality, bool bFillCompressedBuffer, bool bFillPCMBuffer, bool bFillRAWWaveBuffer);
		static UClass* StaticClass();
	};

	/**
	 * Class RuntimeAudioImporter.RuntimeAudioImporterLibrary
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class URuntimeAudioImporterLibrary : public UObject
	{
	public:
		unsigned char                                              UnknownData_EWBE[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnProgress;                                              // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZSD[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnResult;                                                // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool TranscodeRAWDataFromFile(const class FString& FilePathFrom, ERAWAudioFormat FormatFrom, const class FString& FilePathTo, ERAWAudioFormat FormatTo);
		void TranscodeRAWDataFromBuffer(TArray<unsigned char> RAWData_From, ERAWAudioFormat FormatFrom, TArray<unsigned char>* RAWData_To, ERAWAudioFormat FormatTo);
		void ImportAudioFromRAWFile(const class FString& FilePath, ERAWAudioFormat Format, int32_t SampleRate, int32_t NumOfChannels);
		void ImportAudioFromRAWBuffer(TArray<unsigned char> RAWBuffer, ERAWAudioFormat Format, int32_t SampleRate, int32_t NumOfChannels);
		void ImportAudioFromPreImportedSound(class UPreImportedSoundAsset* PreImportedSoundAssetRef);
		void ImportAudioFromFile(const class FString& FilePath, EAudioFormat Format);
		void ImportAudioFromBuffer(TArray<unsigned char> AudioData, EAudioFormat Format);
		EAudioFormat GetAudioFormatAdvanced(TArray<unsigned char> AudioData);
		EAudioFormat GetAudioFormat(const class FString& FilePath);
		bool ExportSoundWaveToFile(class UImportedSoundWave* ImporterSoundWave, const class FString& SavePath, EAudioFormat AudioFormat, unsigned char Quality);
		bool ExportSoundWaveToBuffer(class UImportedSoundWave* ImporterSoundWave, TArray<unsigned char>* AudioData, EAudioFormat AudioFormat, unsigned char Quality);
		class URuntimeAudioImporterLibrary* CreateRuntimeAudioImporter();
		class FString ConvertSecondsToString(int32_t Seconds);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
