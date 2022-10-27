#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneCaptureProtocolSettings : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.CompositionGraphCaptureSettings
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
	{
	public:
		struct FCompositionGraphCapturePasses                      IncludeRenderPasses;                                     // 0x0028(0x0010) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic
		bool                                                       bCaptureFramesInHDR;                                     // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNEE[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HDRCompressionQuality;                                   // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHDRCaptureGamut                                           CaptureGamut;                                            // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TN1Z[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     PostProcessingMaterial;                                  // 0x0048(0x0018) Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableScreenPercentage;                                // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VFQ[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.FrameGrabberProtocolSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
	{
	public:
		unsigned char                                              UnknownData_7X0D[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.BmpImageCaptureSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.ImageCaptureSettings
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UImageCaptureSettings : public UFrameGrabberProtocolSettings
	{
	public:
		int32_t                                                    CompressionQuality;                                      // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSR8[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneCaptureInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneCaptureInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneCapture
	 * Size -> 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
	 */
	class UMovieSceneCapture : public UObject
	{
	public:
		unsigned char                                              UnknownData_MS0N[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCaptureProtocolID                                  CaptureType;                                             // 0x0038(0x0008) Edit, BlueprintVisible, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMovieSceneCaptureProtocolSettings*                  ProtocolSettings;                                        // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneCaptureSettings                          Settings;                                                // 0x0048(0x0050) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic
		bool                                                       bUseSeparateProcess;                                     // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCloseEditorWhenCaptureStarts;                           // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AS9N[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AdditionalCommandLineArguments;                          // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InheritedCommandLineArguments;                           // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CABJ[0x120];                                 // 0x00C0(0x0120) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.LevelCapture
	 * Size -> 0x0020 (FullSize[0x0200] - InheritedSize[0x01E0])
	 */
	class ULevelCapture : public UMovieSceneCapture
	{
	public:
		bool                                                       bAutoStartCapture;                                       // 0x01E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROZ4[0xB];                                   // 0x01E1(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               PrerequisiteActorId;                                     // 0x01EC(0x0010) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3QBT[0x4];                                   // 0x01FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneCaptureEnvironment
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneCaptureEnvironment : public UObject
	{
	public:
		int32_t STATIC_GetCaptureFrameNumber();
		float STATIC_GetCaptureElapsedTime();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.VideoCaptureSettings
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
	{
	public:
		bool                                                       bUseCompression;                                         // 0x0030(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_95XC[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CompressionQuality;                                      // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VideoCodec;                                              // 0x0038(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
