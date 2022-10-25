#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function RuntimeAudioImporter.ImportedSoundWave.RewindPlaybackTime
	 */
	struct UImportedSoundWave_RewindPlaybackTime_Params
	{
	public:
		float                                                      PlaybackTime;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.ImportedSoundWave.ReleaseMemory
	 */
	struct UImportedSoundWave_ReleaseMemory_Params
	{	};

	/**
	 * Function RuntimeAudioImporter.ImportedSoundWave.IsPlaybackFinished
	 */
	struct UImportedSoundWave_IsPlaybackFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackTime
	 */
	struct UImportedSoundWave_GetPlaybackTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackPercentage
	 */
	struct UImportedSoundWave_GetPlaybackPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.ImportedSoundWave.GetDurationConst
	 */
	struct UImportedSoundWave_GetDurationConst_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.ImportedSoundWave.GetDuration
	 */
	struct UImportedSoundWave_GetDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioCompressor.CreateRuntimeAudioCompressor
	 */
	struct URuntimeAudioCompressor_CreateRuntimeAudioCompressor_Params
	{
	public:
		class URuntimeAudioCompressor*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioCompressor.CompressSoundWave
	 */
	struct URuntimeAudioCompressor_CompressSoundWave_Params
	{
	public:
		class UImportedSoundWave*                                  ImportedSoundWaveRef;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCompressedSoundWaveInfo                            CompressedSoundWaveInfo;                                 // 0x0008(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              Quality;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFillCompressedBuffer;                                   // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFillPCMBuffer;                                          // 0x0016(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFillRAWWaveBuffer;                                      // 0x0017(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromFile
	 */
	struct URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Params
	{
	public:
		class FString                                              FilePathFrom;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERAWAudioFormat                                            FormatFrom;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1NTI[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FilePathTo;                                              // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERAWAudioFormat                                            FormatTo;                                                // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromBuffer
	 */
	struct URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Params
	{
	public:
		TArray<unsigned char>                                      RAWData_From;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		ERAWAudioFormat                                            FormatFrom;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2FMY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<unsigned char>                                      RAWData_To;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		ERAWAudioFormat                                            FormatTo;                                                // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWFile
	 */
	struct URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERAWAudioFormat                                            Format;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H7FT[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SampleRate;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumOfChannels;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWBuffer
	 */
	struct URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Params
	{
	public:
		TArray<unsigned char>                                      RAWBuffer;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		ERAWAudioFormat                                            Format;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ISEF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SampleRate;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumOfChannels;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromPreImportedSound
	 */
	struct URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Params
	{
	public:
		class UPreImportedSoundAsset*                              PreImportedSoundAssetRef;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromFile
	 */
	struct URuntimeAudioImporterLibrary_ImportAudioFromFile_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAudioFormat                                               Format;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromBuffer
	 */
	struct URuntimeAudioImporterLibrary_ImportAudioFromBuffer_Params
	{
	public:
		TArray<unsigned char>                                      AudioData;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EAudioFormat                                               Format;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormatAdvanced
	 */
	struct URuntimeAudioImporterLibrary_GetAudioFormatAdvanced_Params
	{
	public:
		TArray<unsigned char>                                      AudioData;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EAudioFormat                                               ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormat
	 */
	struct URuntimeAudioImporterLibrary_GetAudioFormat_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAudioFormat                                               ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToFile
	 */
	struct URuntimeAudioImporterLibrary_ExportSoundWaveToFile_Params
	{
	public:
		class UImportedSoundWave*                                  ImporterSoundWave;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SavePath;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAudioFormat                                               AudioFormat;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Quality;                                                 // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToBuffer
	 */
	struct URuntimeAudioImporterLibrary_ExportSoundWaveToBuffer_Params
	{
	public:
		class UImportedSoundWave*                                  ImporterSoundWave;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      AudioData;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EAudioFormat                                               AudioFormat;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Quality;                                                 // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.CreateRuntimeAudioImporter
	 */
	struct URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Params
	{
	public:
		class URuntimeAudioImporterLibrary*                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ConvertSecondsToString
	 */
	struct URuntimeAudioImporterLibrary_ConvertSecondsToString_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SDCM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
