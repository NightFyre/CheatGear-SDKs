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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AppleVision.EDetectedFaceFeatureType
	 */
	enum class EDetectedFaceFeatureType : uint8_t
	{
		Unkown       = 0,
		FaceContour  = 1,
		InnerLips    = 2,
		LeftEye      = 3,
		LeftEyebrow  = 4,
		LeftPupil    = 5,
		MedianLine   = 6,
		Nose         = 7,
		NoseCrest    = 8,
		OuterLips    = 9,
		RightEye     = 10,
		RightEyebrow = 11,
		RightPupil   = 12,
		MAX          = 13
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AppleVision.DetectedFeature
	 * Size -> 0x0004
	 */
	struct FDetectedFeature
	{
	public:
		float                                                      Confidence;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AppleVision.DetectedFeatureRegion
	 * Size -> 0x0014 (FullSize[0x0018] - InheritedSize[0x0004])
	 */
	struct FDetectedFeatureRegion : public FDetectedFeature
	{
	public:
		unsigned char                                              UnknownData_8OMK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   Points;                                                  // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AppleVision.DetectedFeature2D
	 * Size -> 0x0014 (FullSize[0x0018] - InheritedSize[0x0004])
	 */
	struct FDetectedFeature2D : public FDetectedFeature
	{
	public:
		struct FBox2D                                              BoundingBox;                                             // 0x0004(0x0014) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AppleVision.DetectedFaceFeature2D
	 * Size -> 0x0004 (FullSize[0x001C] - InheritedSize[0x0018])
	 */
	struct FDetectedFaceFeature2D : public FDetectedFeature2D
	{
	public:
		EDetectedFaceFeatureType                                   FeatureType;                                             // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_23C4[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AppleVision.DetectedFaceFeatureRegion
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FDetectedFaceFeatureRegion : public FDetectedFeatureRegion
	{
	public:
		EDetectedFaceFeatureType                                   FeatureType;                                             // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HAP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AppleVision.DetectedFace
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FDetectedFace : public FDetectedFeatureRegion
	{
	public:
		struct FBox2D                                              BoundingBox;                                             // 0x0018(0x0014) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXNT[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDetectedFaceFeature2D>                      Features;                                                // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDetectedFaceFeatureRegion>                  FeatureRegions;                                          // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AppleVision.FaceDetectionResult
	 * Size -> 0x0010
	 */
	struct FFaceDetectionResult
	{
	public:
		TArray<struct FDetectedFace>                               DetectedFaces;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
