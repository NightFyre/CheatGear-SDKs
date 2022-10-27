#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
	 */
	enum class EMediaWebcamCaptureDeviceFilter : uint8_t
	{
		None        = 0,
		DepthSensor = 1,
		Front       = 2,
		Rear        = 3,
		Unknown     = 4,
		MAX         = 5
	};

	/**
	 * Enum MediaAssets.EMediaVideoCaptureDeviceFilter
	 */
	enum class EMediaVideoCaptureDeviceFilter : uint8_t
	{
		None     = 0,
		Card     = 1,
		Software = 2,
		Unknown  = 3,
		Webcam   = 4,
		MAX      = 5
	};

	/**
	 * Enum MediaAssets.EMediaAudioCaptureDeviceFilter
	 */
	enum class EMediaAudioCaptureDeviceFilter : uint8_t
	{
		None       = 0,
		Card       = 1,
		Microphone = 2,
		Software   = 3,
		Unknown    = 4,
		MAX        = 5
	};

	/**
	 * Enum MediaAssets.EMediaPlayerTrack
	 */
	enum class EMediaPlayerTrack : uint8_t
	{
		Audio    = 0,
		Caption  = 1,
		Metadata = 2,
		Script   = 3,
		Subtitle = 4,
		Text     = 5,
		Video    = 6,
		MAX      = 7
	};

	/**
	 * Enum MediaAssets.MediaTextureOrientation
	 */
	enum class EMediaTextureOrientation : uint8_t
	{
		MTORI_Original = 0,
		MTORI_CW90     = 1,
		MTORI_CW180    = 2,
		MTORI_CW270    = 3,
		MTORI_MAX      = 4
	};

	/**
	 * Enum MediaAssets.MediaTextureOutputFormat
	 */
	enum class EMediaTextureOutputFormat : uint8_t
	{
		MTOF_Default     = 0,
		MTOF_SRGB_LINOUT = 1,
		MTOF_MAX         = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MediaAssets.MediaCaptureDevice
	 * Size -> 0x0048
	 */
	struct FMediaCaptureDevice
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH BlueprintVisible, BlueprintReadOnly, Transient
		unsigned char                                              UnknownData_ZKLQ[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              URL;                                                     // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MediaAssets.PlatformPlayerEntry
	 * Size -> 0x0018
	 */
	struct FPlatformPlayerEntry
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FName                                                Value;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
