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
	 * Enum AnimationCore.EConstraintType
	 */
	enum class EConstraintType : uint8_t
	{
		Transform = 0,
		Aim       = 1,
		MAX       = 2
	};

	/**
	 * Enum AnimationCore.ETransformConstraintType
	 */
	enum class ETransformConstraintType : uint8_t
	{
		Translation = 0,
		Rotation    = 1,
		Scale       = 2,
		Parent      = 3,
		MAX         = 4
	};

	/**
	 * Enum AnimationCore.EEulerRotationOrder
	 */
	enum class EEulerRotationOrder : uint8_t
	{
		XYZ = 0,
		XZY = 1,
		YXZ = 2,
		YZX = 3,
		ZXY = 4,
		ZYX = 5,
		MAX = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AnimationCore.FilterOptionPerAxis
	 * Size -> 0x0003
	 */
	struct FFilterOptionPerAxis
	{
	public:
		bool                                                       bX;                                                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bY;                                                      // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bZ;                                                      // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationCore.ConstraintDescription
	 * Size -> 0x000D
	 */
	struct FConstraintDescription
	{
	public:
		bool                                                       bTranslation;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotation;                                               // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScale;                                                  // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParent;                                                 // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                TranslationAxes;                                         // 0x0004(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                RotationAxes;                                            // 0x0007(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                ScaleAxes;                                               // 0x000A(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationCore.TransformConstraint
	 * Size -> 0x0028
	 */
	struct FTransformConstraint
	{
	public:
		struct FConstraintDescription                              Operator;                                                // 0x0000(0x000D) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RA60[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SourceNode;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetNode;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0VJ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationCore.ConstraintOffset
	 * Size -> 0x00C0
	 */
	struct FConstraintOffset
	{
	public:
		struct FVector                                             Translation;                                             // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ES1[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0020(0x0020) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0040(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFA0[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Parent;                                                  // 0x0060(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationCore.NodeObject
	 * Size -> 0x0010
	 */
	struct FNodeObject
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParentName;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationCore.NodeHierarchyData
	 * Size -> 0x0070
	 */
	struct FNodeHierarchyData
	{
	public:
		TArray<struct FNodeObject>                                 Nodes;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Transforms;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, int32_t>                                 NodeNameToIndexMapping;                                  // 0x0020(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationCore.NodeHierarchyWithUserData
	 * Size -> 0x0078
	 */
	struct FNodeHierarchyWithUserData
	{
	public:
		unsigned char                                              UnknownData_504N[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNodeHierarchyData                                  Hierarchy;                                               // 0x0008(0x0070) Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct AnimationCore.ConstraintDescriptor
	 * Size -> 0x0010
	 */
	struct FConstraintDescriptor
	{
	public:
		EConstraintType                                            Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AY3K[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationCore.ConstraintData
	 * Size -> 0x00E0
	 */
	struct FConstraintData
	{
	public:
		struct FConstraintDescriptor                               Constraint;                                              // 0x0000(0x0010) NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QQU[0xB];                                   // 0x0015(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Offset;                                                  // 0x0020(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          CurrentTransform;                                        // 0x0080(0x0060) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationCore.TransformFilter
	 * Size -> 0x0009
	 */
	struct FTransformFilter
	{
	public:
		struct FFilterOptionPerAxis                                TranslationFilter;                                       // 0x0000(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                RotationFilter;                                          // 0x0003(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                ScaleFilter;                                             // 0x0006(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationCore.CCDIKChainLink
	 * Size -> 0x00E0
	 */
	struct FCCDIKChainLink
	{
	public:
		unsigned char                                              UnknownData_86HR[0xE0];                                  // 0x0000(0x00E0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationCore.EulerTransform
	 * Size -> 0x0048
	 */
	struct FEulerTransform
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationCore.FABRIKChainLink
	 * Size -> 0x0050
	 */
	struct FFABRIKChainLink
	{
	public:
		unsigned char                                              UnknownData_HN8L[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationCore.Axis
	 * Size -> 0x0020
	 */
	struct FAxis
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0000(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInLocalSpace;                                           // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHR5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationCore.ConstraintDescriptionEx
	 * Size -> 0x0010
	 */
	struct FConstraintDescriptionEx
	{
	public:
		unsigned char                                              UnknownData_ZPPN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilterOptionPerAxis                                AxesFilterOption;                                        // 0x0008(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60PJ[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationCore.TransformConstraintDescription
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FTransformConstraintDescription : public FConstraintDescriptionEx
	{
	public:
		ETransformConstraintType                                   TransformType;                                           // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKCK[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationCore.AimConstraintDescription
	 * Size -> 0x0060 (FullSize[0x0070] - InheritedSize[0x0010])
	 */
	struct FAimConstraintDescription : public FConstraintDescriptionEx
	{
	public:
		struct FAxis                                               LookAt_Axis;                                             // 0x0010(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               LookUp_Axis;                                             // 0x0030(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseLookUp;                                              // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSM6[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LookUpTarget;                                            // 0x0058(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationCore.NodeChain
	 * Size -> 0x0010
	 */
	struct FNodeChain
	{
	public:
		TArray<class FName>                                        Nodes;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationCore.TransformNoScale
	 * Size -> 0x0040
	 */
	struct FTransformNoScale
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YB5[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0020(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
