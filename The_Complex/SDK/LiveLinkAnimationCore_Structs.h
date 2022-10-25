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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LiveLinkAnimationCore.AnimNode_LiveLinkPose
	 * Size -> 0x0038 (FullSize[0x0048] - InheritedSize[0x0010])
	 */
	struct FAnimNode_LiveLinkPose : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           InputPose;                                               // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FLiveLinkSubjectName                                LiveLinkSubjectName;                                     // 0x0020(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RetargetAsset;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULiveLinkRetargetAsset*                              CurrentRetargetAsset;                                    // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41RF[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkAnimationCore.LiveLinkInstanceProxy
	 * Size -> 0x0050 (FullSize[0x08D0] - InheritedSize[0x0880])
	 */
	struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
	{
	public:
		struct FAnimNode_LiveLinkPose                              PoseNode;                                                // 0x0880(0x0048) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q06B[0x8];                                   // 0x08C8(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
