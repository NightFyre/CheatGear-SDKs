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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum RuntimeAudioImporter.ETranscodingStatus
	 */
	enum class ETranscodingStatus : uint8_t
	{
		SuccessfulImport           = 0,
		FailedToReadAudioDataArray = 1,
		SoundWaveDeclarationError  = 2,
		InvalidAudioFormat         = 3,
		AudioDoesNotExist          = 4,
		LoadFileToArrayError       = 5,
		MAX                        = 6
	};

	/**
	 * Enum RuntimeAudioImporter.ERAWAudioFormat
	 */
	enum class ERAWAudioFormat : uint8_t
	{
		Int16   = 0,
		Int32   = 1,
		UInt8   = 2,
		Float32 = 3,
		MAX     = 4
	};

	/**
	 * Enum RuntimeAudioImporter.EAudioFormat
	 */
	enum class EAudioFormat : uint8_t
	{
		Auto      = 0,
		Mp3       = 1,
		Wav       = 2,
		Flac      = 3,
		OggVorbis = 4,
		Invalid   = 5,
		MAX       = 6
	};

	/**
	 * Enum RuntimeAudioImporter.EWAVEncodingFormat
	 */
	enum class EWAVEncodingFormat : uint8_t
	{
		FORMAT_PCM        = 0,
		FORMAT_ADPCM      = 1,
		FORMAT_IEEE_FLOAT = 2,
		FORMAT_ALAW       = 3,
		FORMAT_MULAW      = 4,
		FORMAT_DVI_ADPCM  = 5,
		FORMAT_EXTENSIBLE = 6,
		FORMAT_MAX        = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RuntimeAudioImporter.CompressedSoundWaveInfo
	 * Size -> 0x000C
	 */
	struct FCompressedSoundWaveInfo
	{
	public:
		ESoundGroup                                                SoundGroup;                                              // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V69P[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Volume;                                                  // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RuntimeAudioImporter.PCMStruct
	 * Size -> 0x0018
	 */
	struct FPCMStruct
	{
	public:
		unsigned char                                              UnknownData_MTJZ[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
