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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_LiveLinkBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_LiveLinkEvaluteFrameTransform : public FRigUnit_LiveLinkBase
	{
	public:
		class FName                                                SubjectName;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USGR[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0CKE[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DebugDrawOffset;                                         // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0060(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
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
		unsigned char                                              UnknownData_OCFI[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_LiveLinkGetTransformByName : public FRigUnit_LiveLinkBase
	{
	public:
		struct FSubjectFrameHandle                                 SubjectFrame;                                            // 0x0008(0x0018) NativeAccessSpecifierPublic
		class FName                                                TransformName;                                           // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneGetterSetterMode                                      Space;                                                   // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQRL[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_LiveLinkEvaluteFrameAnimation : public FRigUnit_LiveLinkBase
	{
	public:
		class FName                                                SubjectName;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_US5B[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJT6[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DebugDrawOffset;                                         // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSubjectFrameHandle                                 SubjectFrame;                                            // 0x0060(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5F6O[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
