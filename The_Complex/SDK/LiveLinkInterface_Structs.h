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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
	 */
	enum class ELiveLinkCameraProjectionMode : uint8_t
	{
		Perspective  = 0,
		Orthographic = 1,
		MAX          = 2
	};

	/**
	 * Enum LiveLinkInterface.ELiveLinkSourceMode
	 */
	enum class ELiveLinkSourceMode : uint8_t
	{
		Latest     = 0,
		EngineTime = 1,
		Timecode   = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkSubjectName
	 * Size -> 0x0008
	 */
	struct FLiveLinkSubjectName
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
	 * Size -> 0x0060
	 */
	struct FLiveLinkSourceBufferManagementSettings
	{
	public:
		bool                                                       bValidEngineTimeEnabled;                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5A5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ValidEngineTime;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EngineTimeOffset;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBRO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     EngineTimeClockOffset;                                   // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     SmoothEngineTimeOffset;                                  // 0x0018(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateSubFrame;                                       // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQZA[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameRate                                          DetectedFrameRate;                                       // 0x0024(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTimecodeSmoothLatest;                                // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXED[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameRate                                          SourceTimecodeFrameRate;                                 // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValidTimecodeFrameEnabled;                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGX9[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ValidTimecodeFrame;                                      // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimecodeFrameOffset;                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGOH[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimecodeClockOffset;                                     // 0x0048(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LatestOffset;                                            // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfFrameToBuffered;                              // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepAtLeastOneFrame;                                    // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3W43[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
	 * Size -> 0x0050
	 */
	struct FLiveLinkCurveConversionSettings
	{
	public:
		TMap<class FString, struct FSoftObjectPath>                CurveConversionAssetMap;                                 // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
	 * Size -> 0x0018
	 */
	struct FLiveLinkSubjectKey
	{
	public:
		struct FGuid                                               Source;                                                  // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
	 * Size -> 0x0038
	 */
	struct FLiveLinkSubjectPreset
	{
	public:
		struct FLiveLinkSubjectKey                                 Key;                                                     // 0x0000(0x0018) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Role;                                                    // 0x0018(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULiveLinkSubjectSettings*                            Settings;                                                // 0x0020(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULiveLinkVirtualSubject*                             VirtualSubject;                                          // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0030(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HAI[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
	 * Size -> 0x0008
	 */
	struct FLiveLinkBaseBlueprintData
	{
	public:
		unsigned char                                              UnknownData_CHOX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.SubjectFrameHandle
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
	{
	public:
		unsigned char                                              UnknownData_7QL0[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
	 * Size -> 0x0018
	 */
	struct FLiveLinkSourceHandle
	{
	public:
		unsigned char                                              UnknownData_UJ3C[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.SubjectMetadata
	 * Size -> 0x0070
	 */
	struct FSubjectMetadata
	{
	public:
		TMap<class FName, class FString>                           StringMetadata;                                          // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTimecode                                           SceneTimecode;                                           // 0x0050(0x0014) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameRate                                          SceneFramerate;                                          // 0x0064(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZRE[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.CachedSubjectFrame
	 * Size -> 0x0160
	 */
	struct FCachedSubjectFrame
	{
	public:
		unsigned char                                              UnknownData_F4XZ[0x160];                                 // 0x0000(0x0160) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkTransform
	 * Size -> 0x0020
	 */
	struct FLiveLinkTransform
	{
	public:
		unsigned char                                              UnknownData_DICE[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
	 * Size -> 0x0010
	 */
	struct FLiveLinkBaseStaticData
	{
	public:
		TArray<class FName>                                        PropertyNames;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
	{
	public:
		TArray<class FName>                                        BoneNames;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            BoneParents;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkWorldTime
	 * Size -> 0x0010
	 */
	struct FLiveLinkWorldTime
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		double                                                     Offset;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkMetaData
	 * Size -> 0x0060
	 */
	struct FLiveLinkMetaData
	{
	public:
		TMap<class FName, class FString>                           StringMetadata;                                          // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FQualifiedFrameTime                                 SceneTime;                                               // 0x0050(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
	 * Size -> 0x00A0
	 */
	struct FLiveLinkBaseFrameData
	{
	public:
		struct FLiveLinkWorldTime                                  WorldTime;                                               // 0x0000(0x0010) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FLiveLinkMetaData                                   MetaData;                                                // 0x0010(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<float>                                              PropertyValues;                                          // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVYG[0x20];                                  // 0x0080(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
	{
	public:
		TArray<struct FTransform>                                  Transforms;                                              // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
	 * Size -> 0x00B0 (FullSize[0x00B8] - InheritedSize[0x0008])
	 */
	struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
	{
	public:
		struct FLiveLinkBaseStaticData                             StaticData;                                              // 0x0008(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLiveLinkBaseFrameData                              FrameData;                                               // 0x0018(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
	{
	public:
		bool                                                       bIsLocationSupported;                                    // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRotationSupported;                                    // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsScaleSupported;                                       // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCZO[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
	{
	public:
		bool                                                       bIsFieldOfViewSupported;                                 // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAspectRatioSupported;                                 // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFocalLengthSupported;                                 // 0x001A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsProjectionModeSupported;                              // 0x001B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmBackWidth;                                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilmBackHeight;                                          // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsApertureSupported;                                    // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFocusDistanceSupported;                               // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0O8K[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
	 * Size -> 0x0060 (FullSize[0x0100] - InheritedSize[0x00A0])
	 */
	struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
	{
	public:
		struct FTransform                                          Transform;                                               // 0x00A0(0x0060) Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
	 * Size -> 0x0020 (FullSize[0x0120] - InheritedSize[0x0100])
	 */
	struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
	{
	public:
		float                                                      FieldOfView;                                             // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AspectRatio;                                             // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocalLength;                                             // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Aperture;                                                // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusDistance;                                           // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELiveLinkCameraProjectionMode                              ProjectionMode;                                          // 0x0114(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRXJ[0xB];                                   // 0x0115(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
	 * Size -> 0x0148 (FullSize[0x0150] - InheritedSize[0x0008])
	 */
	struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
	{
	public:
		struct FLiveLinkCameraStaticData                           StaticData;                                              // 0x0008(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLiveLinkCameraFrameData                            FrameData;                                               // 0x0030(0x0120) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
	{
	public:
		bool                                                       bIsTemperatureSupported;                                 // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsIntensitySupported;                                   // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLightColorSupported;                                  // 0x001A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInnerConeAngleSupported;                              // 0x001B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOuterConeAngleSupported;                              // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAttenuationRadiusSupported;                           // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSourceLenghtSupported;                                // 0x001E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSourceRadiusSupported;                                // 0x001F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSoftSourceRadiusSupported;                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6RG[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
	 * Size -> 0x0030 (FullSize[0x0130] - InheritedSize[0x0100])
	 */
	struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
	{
	public:
		float                                                      Temperature;                                             // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              LightColor;                                              // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerConeAngle;                                          // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterConeAngle;                                          // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttenuationRadius;                                       // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceRadius;                                            // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoftSourceRadius;                                        // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceLength;                                            // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXX0[0xC];                                   // 0x0124(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
	 * Size -> 0x0158 (FullSize[0x0160] - InheritedSize[0x0008])
	 */
	struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
	{
	public:
		struct FLiveLinkLightStaticData                            StaticData;                                              // 0x0008(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLiveLinkLightFrameData                             FrameData;                                               // 0x0030(0x0130) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
	 * Size -> 0x0030
	 */
	struct FLiveLinkSourcePreset
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULiveLinkSourceSettings*                             Settings;                                                // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                SourceType;                                              // 0x0018(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
	 * Size -> 0x0020
	 */
	struct FLiveLinkRefSkeleton
	{
	public:
		TArray<class FName>                                        BoneNames;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            BoneParents;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
	 * Size -> 0x0010
	 */
	struct FLiveLinkSubjectRepresentation
	{
	public:
		struct FLiveLinkSubjectName                                Subject;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Role;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
	 * Size -> 0x0010
	 */
	struct FLiveLinkSourceDebugInfo
	{
	public:
		struct FLiveLinkSubjectName                                SubjectName;                                             // 0x0000(0x0008) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SnapshotIndex;                                           // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfBufferAtSnapshot;                                // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
	 * Size -> 0x000C
	 */
	struct FLiveLinkTimeSynchronizationSettings
	{
	public:
		struct FFrameRate                                          FrameRate;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        FrameOffset;                                             // 0x0008(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
	 * Size -> 0x0008
	 */
	struct FLiveLinkInterpolationSettings
	{
	public:
		bool                                                       bUseInterpolation;                                       // 0x0000(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSPH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpolationOffset;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
	 * Size -> 0x0118 (FullSize[0x0120] - InheritedSize[0x0008])
	 */
	struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
	{
	public:
		struct FLiveLinkTransformStaticData                        StaticData;                                              // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLiveLinkTransformFrameData                         FrameData;                                               // 0x0020(0x0100) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkTime
	 * Size -> 0x0018
	 */
	struct FLiveLinkTime
	{
	public:
		double                                                     WorldTime;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQualifiedFrameTime                                 SceneTime;                                               // 0x0008(0x0010) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkFrameRate
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FLiveLinkFrameRate : public FFrameRate
	{	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
	 * Size -> 0x0010
	 */
	struct FLiveLinkTimeCode_Base_DEPRECATED
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Frames;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLiveLinkFrameRate                                  FrameRate;                                               // 0x0008(0x0008) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkTimeCode
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
	{	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkCurveElement
	 * Size -> 0x000C
	 */
	struct FLiveLinkCurveElement
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveValue;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkFrameData
	 * Size -> 0x0090
	 */
	struct FLiveLinkFrameData
	{
	public:
		TArray<struct FTransform>                                  Transforms;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLiveLinkCurveElement>                       CurveElements;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLiveLinkWorldTime                                  WorldTime;                                               // 0x0020(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FLiveLinkMetaData                                   MetaData;                                                // 0x0030(0x0060) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
