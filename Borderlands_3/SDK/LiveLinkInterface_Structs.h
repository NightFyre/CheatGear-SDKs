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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
	 * Size -> 0x0008
	 */
	struct FLiveLinkInterpolationSettings
	{
	public:
		bool                                                       bUseInterpolation;                                       // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R7NG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpolationOffset;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
	 * Size -> 0x0020
	 */
	struct FLiveLinkRefSkeleton
	{
	public:
		TArray<class FName>                                        BoneNames;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            BoneParents;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkCurveElement
	 * Size -> 0x0010
	 */
	struct FLiveLinkCurveElement
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveValue;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M09T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkWorldTime
	 * Size -> 0x0010
	 */
	struct FLiveLinkWorldTime
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Offset;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
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
	 * ScriptStruct LiveLinkInterface.LiveLinkMetaData
	 * Size -> 0x0060
	 */
	struct FLiveLinkMetaData
	{
	public:
		TMap<class FName, class FString>                           StringMetadata;                                          // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		struct FLiveLinkTimeCode                                   SceneTime;                                               // 0x0050(0x0010) NoDestructor, NativeAccessSpecifierPublic
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

	/**
	 * ScriptStruct LiveLinkInterface.LiveLinkSubjectName
	 * Size -> 0x0008
	 */
	struct FLiveLinkSubjectName
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
