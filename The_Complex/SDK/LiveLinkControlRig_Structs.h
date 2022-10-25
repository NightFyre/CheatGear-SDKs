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
	 * ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_LiveLinkBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_LiveLinkEvaluteFrameAnimation : public FRigUnit_LiveLinkBase
	{
	public:
		class FName                                                SubjectName;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S27G[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1JU[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DebugDrawOffset;                                         // 0x0030(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSubjectFrameHandle                                 SubjectFrame;                                            // 0x0090(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T996[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_LiveLinkGetTransformByName : public FRigUnit_LiveLinkBase
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrame;                                            // 0x0008(0x0018) NativeAccessSpecifierPublic
		class FName                                                TransformName;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7POW[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_LiveLinkGetParameterValueByName : public FRigUnit_LiveLinkBase
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrame;                                            // 0x0008(0x0018) NativeAccessSpecifierPublic
		class FName                                                ParameterName;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1BZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_LiveLinkEvaluteFrameTransform : public FRigUnit_LiveLinkBase
	{
	public:
		class FName                                                SubjectName;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIP6[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q35S[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DebugDrawOffset;                                         // 0x0030(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0090(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
