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
	 * ScriptStruct LiveLink.SubjectFrameHandle
	 * Size -> 0x0018
	 */
	struct FSubjectFrameHandle
	{
	public:
		unsigned char                                              UnknownData_6BFF[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLink.LiveLinkTransform
	 * Size -> 0x0020
	 */
	struct FLiveLinkTransform
	{
	public:
		unsigned char                                              UnknownData_XZJH[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLink.LiveLinkSourceHandle
	 * Size -> 0x0018
	 */
	struct FLiveLinkSourceHandle
	{
	public:
		unsigned char                                              UnknownData_VYGJ[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLink.SubjectMetadata
	 * Size -> 0x0070
	 */
	struct FSubjectMetadata
	{
	public:
		TMap<class FName, class FString>                           StringMetadata;                                          // 0x0000(0x0050) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FTimecode                                           SceneTimecode;                                           // 0x0050(0x0014) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameRate                                          SceneFramerate;                                          // 0x0064(0x0008) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMHJ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLink.ProviderPollResult
	 * Size -> 0x0030
	 */
	struct FProviderPollResult
	{
	public:
		unsigned char                                              UnknownData_7H53[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MachineName;                                             // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLink.AnimNode_LiveLinkPose
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FAnimNode_LiveLinkPose : public FAnimNode_Base
	{
	public:
		class FName                                                SubjectName;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RetargetAsset;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULiveLinkRetargetAsset*                              CurrentRetargetAsset;                                    // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCHE[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLink.CachedSubjectFrame
	 * Size -> 0x0140
	 */
	struct FCachedSubjectFrame
	{
	public:
		unsigned char                                              UnknownData_PH0L[0x140];                                 // 0x0000(0x0140) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLink.LiveLinkInstanceProxy
	 * Size -> 0x0050 (FullSize[0x0710] - InheritedSize[0x06C0])
	 */
	struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_UU76[0x50];                                  // 0x06C0(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLink.LiveLinkRetargetAssetReference
	 * Size -> 0x0008
	 */
	struct FLiveLinkRetargetAssetReference
	{
	public:
		class ULiveLinkRetargetAsset*                              CurrentRetargetAsset;                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct LiveLink.LiveLinkVirtualSubject
	 * Size -> 0x0060
	 */
	struct FLiveLinkVirtualSubject
	{
	public:
		TArray<class FName>                                        Subjects;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWI2[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Source;                                                  // 0x0020(0x0010) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBK9[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
