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
	 * Enum IKRig.ERetargetTranslationMode
	 */
	enum class ERetargetTranslationMode : uint8_t
	{
		None           = 0,
		GloballyScaled = 1,
		Absolute       = 2,
		MAX            = 3
	};

	/**
	 * Enum IKRig.ERetargetRotationMode
	 */
	enum class ERetargetRotationMode : uint8_t
	{
		Interpolated     = 0,
		OneToOne         = 1,
		OneToOneReversed = 2,
		None             = 3,
		MAX              = 4
	};

	/**
	 * Enum IKRig.EIKRigGoalSpace
	 */
	enum class EIKRigGoalSpace : uint8_t
	{
		Component = 0,
		Additive  = 1,
		World     = 2,
		MAX       = 3
	};

	/**
	 * Enum IKRig.EIKRigGoalTransformSource
	 */
	enum class EIKRigGoalTransformSource : uint8_t
	{
		Manual         = 0,
		Bone           = 1,
		ActorComponent = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct IKRig.IKRetargetPose
	 * Size -> 0x0068
	 */
	struct FIKRetargetPose
	{
	public:
		struct FVector                                             RootTranslationOffset;                                   // 0x0000(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FQuat>                            BoneRotationOffsets;                                     // 0x0018(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IKRig.RetargetChainMap
	 * Size -> 0x0010
	 */
	struct FRetargetChainMap
	{
	public:
		class FName                                                SourceChain;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetChain;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IKRig.IKRigSkeleton
	 * Size -> 0x0070
	 */
	struct FIKRigSkeleton
	{
	public:
		TArray<class FName>                                        BoneNames;                                               // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ParentIndices;                                           // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class FName>                                        ExcludedBones;                                           // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  CurrentPoseGlobal;                                       // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  CurrentPoseLocal;                                        // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  RefPoseGlobal;                                           // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMSV[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IKRig.BoneChain
	 * Size -> 0x0030
	 */
	struct FBoneChain
	{
	public:
		class FName                                                ChainName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      StartBone;                                               // 0x0008(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EndBone;                                                 // 0x0018(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                IKGoalName;                                              // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IKRig.RetargetDefinition
	 * Size -> 0x0018
	 */
	struct FRetargetDefinition
	{
	public:
		class FName                                                RootBone;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FBoneChain>                                  BoneChains;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct IKRig.IKRigGoal
	 * Size -> 0x00A0
	 */
	struct FIKRigGoal
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKRigGoalTransformSource                                  TransformSource;                                         // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YA4Z[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      SourceBone;                                              // 0x000C(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V0PC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      PositionAlpha;                                           // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationAlpha;                                           // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKRigGoalSpace                                            PositionSpace;                                           // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKRigGoalSpace                                            RotationSpace;                                           // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86DA[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FinalBlendedPosition;                                    // 0x0060(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXGG[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               FinalBlendedRotation;                                    // 0x0080(0x0020) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IKRig.AnimNode_IKRig
	 * Size -> 0x0188 (FullSize[0x01E0] - InheritedSize[0x0058])
	 */
	struct FAnimNode_IKRig : public FAnimNode_CustomProperty
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0058(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UIKRigDefinition*                                    RigDefinitionAsset;                                      // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIKRigGoal>                                  Goals;                                                   // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bStartFromRefPose;                                       // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x0081(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled;                                       // 0x0082(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NE39[0x1];                                   // 0x0083(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0088(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0090(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x00E0(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UIKRigProcessor*                                     IKRigProcessor;                                          // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_59TY[0xC0];                                  // 0x0118(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActualAlpha;                                             // 0x01D8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6UP6[0x4];                                   // 0x01DC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IKRig.AnimNode_RetargetPoseFromMesh
	 * Size -> 0x0050 (FullSize[0x0060] - InheritedSize[0x0010])
	 */
	struct FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               SourceMeshComponent;                                     // 0x0010(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAttachedParent;                                      // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5B7[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIKRetargeter*                                       IKRetargeterAsset;                                       // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0CM[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UIKRetargetProcessor*                                Processor;                                               // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5MPB[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IKRig.IKRigGoalContainer
	 * Size -> 0x0010
	 */
	struct FIKRigGoalContainer
	{
	public:
		unsigned char                                              UnknownData_QNBK[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IKRig.GoalBone
	 * Size -> 0x0010
	 */
	struct FGoalBone
	{
	public:
		unsigned char                                              UnknownData_QRNJ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IKRig.IKRigSkeletonChain
	 * Size -> 0x0010
	 */
	struct FIKRigSkeletonChain
	{
	public:
		unsigned char                                              UnknownData_42G3[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IKRig.IKRigInputSkeleton
	 * Size -> 0x0030
	 */
	struct FIKRigInputSkeleton
	{
	public:
		unsigned char                                              UnknownData_ZWFM[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IKRig.LimbSolverSettings
	 * Size -> 0x0024
	 */
	struct FLimbSolverSettings
	{
	public:
		float                                                      ReachPrecision;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      HingeRotationAxis;                                       // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEF8[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableLimit;                                            // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7FC[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinRotationAngle;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAveragePull;                                            // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7K1S[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PullDistribution;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachStepAlpha;                                          // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableTwistCorrection;                                  // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      EndBoneForwardAxis;                                      // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9Z8[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IKRig.LimbLink
	 * Size -> 0x0068
	 */
	struct FLimbLink
	{
	public:
		unsigned char                                              UnknownData_ESSP[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IKRig.LimbSolver
	 * Size -> 0x0018
	 */
	struct FLimbSolver
	{
	public:
		unsigned char                                              UnknownData_D66F[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
