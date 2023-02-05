#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Enum FullBodyIK.EFBIKBoneLimitType
	 */
	enum class EFBIKBoneLimitType : uint8_t
	{
		Free   = 0,
		Limit  = 1,
		Locked = 2,
		MAX    = 3
	};

	/**
	 * Enum FullBodyIK.EPoleVectorOption
	 */
	enum class EPoleVectorOption : uint8_t
	{
		Direction = 0,
		Location  = 1,
		MAX       = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FullBodyIK.FBIKBoneLimit
	 * Size -> 0x0020
	 */
	struct FFBIKBoneLimit
	{
	public:
		EFBIKBoneLimitType                                         LimitType_X;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFBIKBoneLimitType                                         LimitType_Y;                                             // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFBIKBoneLimitType                                         LimitType_Z;                                             // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVDR[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Limit;                                                   // 0x0008(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FullBodyIK.FBIKConstraintOption
	 * Size -> 0x00A0
	 */
	struct FFBIKConstraintOption
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStiffness;                                           // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y075[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinearStiffness;                                         // 0x0010(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularStiffness;                                        // 0x0028(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAngularLimit;                                        // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBQ1[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFBIKBoneLimit                                      AngularLimit;                                            // 0x0048(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUsePoleVector;                                          // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPoleVectorOption                                          PoleVectorOption;                                        // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8K7S[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PoleVector;                                              // 0x0070(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            OffsetRotation;                                          // 0x0088(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FullBodyIK.MotionProcessInput
	 * Size -> 0x0002
	 */
	struct FMotionProcessInput
	{
	public:
		bool                                                       bForceEffectorRotationTarget;                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyApplyWhenReachedToTarget;                           // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FullBodyIK.FBIKDebugOption
	 * Size -> 0x0080
	 */
	struct FFBIKDebugOption
	{
	public:
		bool                                                       bDrawDebugHierarchy;                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bColorAngularMotionStrength;                             // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bColorLinearMotionStrength;                              // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDebugAxes;                                          // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDebugEffector;                                      // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDebugConstraints;                                   // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JVP[0xA];                                   // 0x0006(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DrawWorldOffset;                                         // 0x0010(0x0060) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DrawSize;                                                // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WLIS[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FullBodyIK.SolverInput
	 * Size -> 0x0024
	 */
	struct FSolverInput
	{
	public:
		float                                                      LinearMotionStrength;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinLinearMotionStrength;                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularMotionStrength;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAngularMotionStrength;                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultTargetClamp;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseJacobianTranspose;                                   // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Q2G[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FullBodyIK.FBIKEndEffector
	 * Size -> 0x0060
	 */
	struct FFBIKEndEffector
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HGZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositionAlpha;                                           // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PositionDepth;                                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Rotation;                                                // 0x0030(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RotationAlpha;                                           // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RotationDepth;                                           // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pull;                                                    // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSJB[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
	 * Size -> 0x0198
	 */
	struct FRigUnit_FullbodyIK_WorkData
	{
	public:
		unsigned char                                              UnknownData_9ZBP[0x198];                                 // 0x0000(0x0198) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FullBodyIK.RigUnit_FullbodyIK
	 * Size -> 0x0280 (FullSize[0x0350] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Root;                                                    // 0x00D0(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KA3J[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFBIKEndEffector>                            Effectors;                                               // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFBIKConstraintOption>                       Constraints;                                             // 0x00F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSolverInput                                        SolverProperty;                                          // 0x0100(0x0024) NoDestructor, NativeAccessSpecifierPublic
		struct FMotionProcessInput                                 MotionProperty;                                          // 0x0124(0x0002) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0126(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VSTZ[0x9];                                   // 0x0127(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFBIKDebugOption                                    DebugOption;                                             // 0x0130(0x0080) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FullbodyIK_WorkData                        WorkData;                                                // 0x01B0(0x0198) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVQS[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
