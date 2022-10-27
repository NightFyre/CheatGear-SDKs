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
	 * Enum MovieSceneCapture.EHDRCaptureGamut
	 */
	enum class EHDRCaptureGamut : uint8_t
	{
		HCGM_Rec709  = 0,
		HCGM_P3DCI   = 1,
		HCGM_Rec2020 = 2,
		HCGM_ACES    = 3,
		HCGM_ACEScg  = 4,
		HCGM_MAX     = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieSceneCapture.CaptureProtocolID
	 * Size -> 0x0008
	 */
	struct FCaptureProtocolID
	{
	public:
		class FName                                                Identifier;                                              // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MovieSceneCapture.CaptureResolution
	 * Size -> 0x0008
	 */
	struct FCaptureResolution
	{
	public:
		uint32_t                                                   ResX;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   ResY;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
	 * Size -> 0x0050
	 */
	struct FMovieSceneCaptureSettings
	{
	public:
		struct FDirectoryPath                                      OutputDirectory;                                         // 0x0000(0x0010) Edit, Config
		bool                                                       bCreateTemporaryCopiesOfLevels;                          // 0x0010(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_997O[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GameModeOverride;                                        // 0x0018(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash
		class FString                                              OutputFormat;                                            // 0x0020(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		bool                                                       bOverwriteExisting;                                      // 0x0030(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       bUseRelativeFrameNumbers;                                // 0x0031(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_Y0H2[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HandleFrames;                                            // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              ZeroPadFrameNumbers;                                     // 0x0038(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CSN1[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FrameRate;                                               // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCaptureResolution                                  Resolution;                                              // 0x0040(0x0008) Edit, Config
		bool                                                       bEnableTextureStreaming;                                 // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       bCinematicEngineScalability;                             // 0x0049(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		bool                                                       bCinematicMode;                                          // 0x004A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor
		bool                                                       bAllowMovement;                                          // 0x004B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       bAllowTurning;                                           // 0x004C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       bShowPlayer;                                             // 0x004D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       bShowHUD;                                                // 0x004E(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_OT7J[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
	 * Size -> 0x0010
	 */
	struct FCompositionGraphCapturePasses
	{
	public:
		TArray<class FString>                                      Value;                                                   // 0x0000(0x0010) Edit, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
